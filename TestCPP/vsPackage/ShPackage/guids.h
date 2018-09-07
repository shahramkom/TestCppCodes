﻿// guids.h: definitions of GUIDs/IIDs/CLSIDs used in this VsPackage

/*
Do not use #pragma once, as this file needs to be included twice.  Once to declare the externs
for the GUIDs, and again right after including initguid.h to actually define the GUIDs.
*/


// guidPersistanceSlot ID for the Tool Window
// { 10cea49c-5062-4710-a5c6-f8f50c334609 }
#define guidShPackagePersistenceSlot { 0x10CEA49C, 0x5062, 0x4710, { 0xA5, 0xC6, 0xF8, 0xF5, 0xC, 0x33, 0x46, 0x9 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_guidPersistanceSlot, 
0x10CEA49C, 0x5062, 0x4710, 0xA5, 0xC6, 0xF8, 0xF5, 0xC, 0x33, 0x46, 0x9 );
#endif


// package guid
// { 99b32a0f-4993-4e51-bece-fb41a31e181a }
#define guidShPackagePkg { 0x99B32A0F, 0x4993, 0x4E51, { 0xBE, 0xCE, 0xFB, 0x41, 0xA3, 0x1E, 0x18, 0x1A } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_ShPackage,
0x99B32A0F, 0x4993, 0x4E51, 0xBE, 0xCE, 0xFB, 0x41, 0xA3, 0x1E, 0x18, 0x1A );
#endif

// Command set guid for our commands (used with IOleCommandTarget)
// { 39f42334-5cd4-49e7-a528-a2859cf14b1d }
#define guidShPackageCmdSet { 0x39F42334, 0x5CD4, 0x49E7, { 0xA5, 0x28, 0xA2, 0x85, 0x9C, 0xF1, 0x4B, 0x1D } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_ShPackageCmdSet, 
0x39F42334, 0x5CD4, 0x49E7, 0xA5, 0x28, 0xA2, 0x85, 0x9C, 0xF1, 0x4B, 0x1D );
#endif

//Guid for the image list referenced in the VSCT file
// { 633ff4b7-be87-4f99-b40d-725c19ec191c }
#define guidImages { 0x633FF4B7, 0xBE87, 0x4F99, { 0xB4, 0xD, 0x72, 0x5C, 0x19, 0xEC, 0x19, 0x1C } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_Images, 
0x633FF4B7, 0xBE87, 0x4F99, 0xB4, 0xD, 0x72, 0x5C, 0x19, 0xEC, 0x19, 0x1C );
#endif


// Guid for the Editor Factory
// { 609a3f46-d327-40fc-aba9-00453fb80695 }
#define guidShPackageEditorFactory { 0x609A3F46, 0xD327, 0x40FC, { 0xAB, 0xA9, 0x0, 0x45, 0x3F, 0xB8, 0x6, 0x95 } } 
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_ShPackageEditorFactory, 
0x609A3F46, 0xD327, 0x40FC, 0xAB, 0xA9, 0x0, 0x45, 0x3F, 0xB8, 0x6, 0x95 ); 
#endif

// Guid for the Editor Document (the document is the actual editor)
// { d83e5eec-245f-4fce-b5be-f64ced6d3568 }
#define guidShPackageEditorDocument { 0xD83E5EEC, 0x245F, 0x4FCE, { 0xB5, 0xBE, 0xF6, 0x4C, 0xED, 0x6D, 0x35, 0x68 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_ShPackageEditorDocument, 
0xD83E5EEC, 0x245F, 0x4FCE, 0xB5, 0xBE, 0xF6, 0x4C, 0xED, 0x6D, 0x35, 0x68 );
#endif

