

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Jan 13 17:36:53 2012
 */
/* Compiler settings for .\blaxxunVRML.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_blaxxunVRMLLib,0xBAC50391,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_Node,0xBAC50393,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_Browser,0xBAC5046F,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_Field,0xBAC50398,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventIn,0xBAC5039D,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOut,0xBAC503F7,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFFloat,0xBAC503D9,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFBool,0xBAC503CA,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMField,0xBAC5040B,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFColor,0xBAC503A2,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFFloat,0xBAC503A7,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFTime,0xC5EEE9A1,0x6771,0x11d2,0xAB,0xB2,0x00,0xA0,0xC9,0xC7,0xB4,0xA1);


MIDL_DEFINE_GUID(IID, IID_EventInMFInt32,0xBAC503AC,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFNode,0xBAC503B1,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFRotation,0xBAC503B6,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFString,0xBAC503BB,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFVec2f,0xBAC503C0,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInMFVec3f,0xBAC503C5,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFColor,0xBAC503CF,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFImage,0xBAC503DE,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFInt32,0xBAC503E3,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFNode,0xBAC503E8,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFRotation,0xBAC503ED,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFString,0xBAC503F2,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFTime,0xBAC503D4,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFVec2f,0xBAC503FC,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFVec3f,0xBAC50401,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventInSFMatrix,0x9966B8D9,0xB13D,0x4461,0x86,0x17,0x74,0x7B,0x9D,0xB7,0x61,0xF5);


MIDL_DEFINE_GUID(IID, IID_EventOutObserver,0xBAC50406,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFColor,0xBAC50410,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFFloat,0xBAC50415,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFTime,0xC5EEE9A0,0x6771,0x11d2,0xAB,0xB2,0x00,0xA0,0xC9,0xC7,0xB4,0xA1);


MIDL_DEFINE_GUID(IID, IID_EventOutMFInt32,0xBAC5041A,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFNode,0xBAC5041F,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFRotation,0xBAC50424,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFString,0xBAC50429,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFVec2f,0xBAC5042E,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutMFVec3f,0xBAC50433,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFBool,0xBAC50438,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFColor,0xBAC5043D,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFFloat,0xBAC50442,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFImage,0xBAC50447,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFInt32,0xBAC5044C,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFNode,0xBAC50451,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFRotation,0xBAC50456,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFString,0xBAC5045B,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFTime,0xBAC50460,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFVec2f,0xBAC50465,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_EventOutSFVec3f,0xBAC5046A,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_ScriptContainer,0xBAC50474,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_Script,0xBAC50479,0x75D9,0x11D0,0x93,0x15,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_BrowserObserver,0xB8B46AC1,0x185B,0x11D1,0x94,0x47,0x00,0x20,0xAF,0xE0,0x5C,0xC8);


MIDL_DEFINE_GUID(IID, IID_IBufferTexture,0x49fe19f3,0xe269,0x46ce,0xa9,0xaf,0xe7,0x01,0xec,0xc0,0x88,0xee);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



