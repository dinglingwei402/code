// ScanPerson.cpp : DLL 导出的实现。


#include "stdafx.h"
#include "resource.h"
#include "ScanPerson_i.h"
#include "dllmain.h"
#include "KinectControl.h"
#include "blaxxunVRML.h"

// 用于确定 DLL 是否可由 OLE 卸载
STDAPI DllCanUnloadNow(void)
{
    return _AtlModule.DllCanUnloadNow();
}


// 返回一个类工厂以创建所请求类型的对象
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}


// DllRegisterServer - 将项添加到系统注册表
STDAPI DllRegisterServer(void)
{
    // 注册对象、类型库和类型库中的所有接口
    HRESULT hr = _AtlModule.DllRegisterServer();
	return hr;
}


// DllUnregisterServer - 将项从系统注册表中移除
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = _AtlModule.DllUnregisterServer();
	return hr;
}

// DllInstall - 按用户或者按计算机在系统注册表中添加/删除
//              项。	
STDAPI DllInstall(BOOL bInstall, LPCWSTR pszCmdLine)
{
    HRESULT hr = E_FAIL;
    static const wchar_t szUserSwitch[] = _T("user");

    if (pszCmdLine != NULL)
    {
    	if (_wcsnicmp(pszCmdLine, szUserSwitch, _countof(szUserSwitch)) == 0)
    	{
    		AtlSetPerUserRegistration(true);
    	}
    }

    if (bInstall)
    {	
    	hr = DllRegisterServer();
    	if (FAILED(hr))
    	{	
    		DllUnregisterServer();
    	}
    }
    else
    {
    	hr = DllUnregisterServer();
    }

    return hr;
}

// ScanPerson.cpp : CScanPerson 的实现

#include "stdafx.h"
#include "ScanPerson.h"

CScanPerson::CScanPerson()
{

}
CScanPerson::~CScanPerson(){
	KinectClose();
}


STDMETHODIMP CScanPerson::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IbxxHID
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


HRESULT STDMETHODCALLTYPE CScanPerson::Init( 
							   /* [in] */ BSTR Device,
							   /* [in] */ int DeviceNo,
							   /* [in] */ Browser *pBrowser,
							   /* [retval][out] */ int *pDeviceNoUsed)
{
	int i=1;
	DeviceNo=1;
	*pDeviceNoUsed= 1;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE CScanPerson::AddDeviceSensor( 
	/* [in] */ BSTR eventType,
	/* [in] */ Node *pEventNode,
	/* [in] */ EventInSFBool *pIsActive,
	/* [in] */ BOOL Enabled,
	/* [in] */ int ID,
	/* [retval][out] */ int *pRetVal)
{
	Field* fld;
	pEventNode->getField(_T("colorTexture"),&fld);
	assert(fld);
	EventOutSFNode* imgNode;
	Node* imgVlu;
	fld->QueryInterface(IID_EventOutSFNode,(void**)&imgNode);
	imgNode->getValue(&imgVlu);
	fld->Release();

	Field* fld1;
	pEventNode->getField(_T("colorTexture1"),&fld1);
	assert(fld1);
	EventOutSFNode* imgNode1;
	Node* imgVlu1;
	fld1->QueryInterface(IID_EventOutSFNode,(void**)&imgNode1);
	imgNode1->getValue(&imgVlu1);
	fld1->Release();

	pEventNode->getField(_T("coord_dev1"),&fld);
	assert(fld);
	EventOutSFNode* coordNode;
	CComPtr<Node> coordVlu;
	fld->QueryInterface(IID_EventOutSFNode,(void**)&coordNode);
	coordNode->getValue(&coordVlu);
	fld->Release();

	pEventNode->getField(_T("IndxFaceSet"),&fld);
	assert(fld);
	EventOutSFNode* meshNode;
	fld->QueryInterface(IID_EventOutSFNode,(void**)&meshNode);
	CComPtr<Node> meshVlu;
	meshNode->getValue(&meshVlu);
	fld->Release();

	KinectInit(imgVlu,imgVlu1,coordVlu,meshVlu);
	imgNode->Release();
	imgNode1->Release();
	coordNode->Release();
	meshNode->Release();
	*pRetVal=1;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE CScanPerson::RemoveDeviceSensor( 
	/* [in] */ int ID)
{
	return S_OK;
}

HRESULT STDMETHODCALLTYPE CScanPerson::Tick( 
							   /* [in] */ double SimTime,
							   /* [in] */ double FrameRate) 
{
	UpdateImage();
	return S_OK;

}

HRESULT STDMETHODCALLTYPE CScanPerson::EnabledChanged( 
	int ID,
	BOOL Enabled,
	/* [retval][out] */ BOOL *pSetIsActive)
{
return S_OK;
}

HRESULT STDMETHODCALLTYPE CScanPerson::FocusChanged( 
									   /* [in] */ BOOL HasFocusNow,
									   /* [retval][out] */ BOOL *pNeedTickCalls)
{
*pNeedTickCalls=true;
return S_OK;
}

