//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKit/PKPlugInCore.h>

@class NSDictionary, NSString, PKDPersonaCache;
@protocol NSObject;

@interface PKDPlugIn : PKPlugInCore
{
    _Bool _isRBManaged;	// 184 = 0xb8
    unsigned int _platform;	// 188 = 0xbc
    NSDictionary *_infoPlist;	// 192 = 0xc0
    NSString *_sandboxProfile;	// 200 = 0xc8
    PKDPersonaCache *_personaCache;	// 208 = 0xd0
    id <NSObject> _fileID;	// 216 = 0xd8
    id <NSObject> _launchFileID;	// 224 = 0xe0
}

+ (id)sandboxOverrideForExtensionPoint:(id)arg1 attributes:(id)arg2;	// IMP=0x0060000000006fa0
+ (id)nullPlugIn;	// IMP=0x0060000000005f50
- (void).cxx_destruct;	// IMP=0x000000000000c220
@property(readonly) id <NSObject> launchFileID; // @synthesize launchFileID=_launchFileID;
@property(readonly) id <NSObject> fileID; // @synthesize fileID=_fileID;
@property(readonly) unsigned int platform; // @synthesize platform=_platform;
@property _Bool isRBManaged; // @synthesize isRBManaged=_isRBManaged;
@property(readonly) PKDPersonaCache *personaCache; // @synthesize personaCache=_personaCache;
@property(readonly) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)debugDescription;	// IMP=0x000000000000c0c0
- (id)checkBusy;	// IMP=0x000000000000c070
- (id)_personaIDForClient:(id)arg1 requestedPersona:(id)arg2;	// IMP=0x000000000000b7a0
- (_Bool)enableForClient:(id)arg1 environment:(id)arg2 languages:(id)arg3 oneShotUUID:(id)arg4 persona:(id)arg5 sandbox:(id)arg6 pid:(int *)arg7 error:(id *)arg8;	// IMP=0x0000000000009bb0
- (id)dataContainerURLForPersona:(id)arg1;	// IMP=0x0000000000009b20
- (id)_dataContainerURLForPersona:(id)arg1;	// IMP=0x0000000000009840
- (id)allowedTCCServices;	// IMP=0x0000000000009470
- (id)allowForClient:(id)arg1 discoveryInstanceUUID:(id)arg2;	// IMP=0x00000000000092f0
- (_Bool)matchDictionary:(id)arg1 pattern:(id)arg2 discoveryInstanceUUID:(id)arg3;	// IMP=0x0000000000008f30
- (_Bool)matchValue:(id)arg1 pattern:(id)arg2;	// IMP=0x0000000000008c00
- (_Bool)matchValue:(id)arg1 patterns:(id)arg2;	// IMP=0x00000000000089e0
- (_Bool)matchKey:(id)arg1 pattern:(id)arg2 discoveryInstanceUUID:(id)arg3 server:(id)arg4;	// IMP=0x0000000000008390
- (_Bool)match:(id)arg1 discoveryInstanceUUID:(id)arg2 server:(id)arg3;	// IMP=0x0000000000008130
- (id)diagnose;	// IMP=0x00000000000080b0
@property(readonly) NSString *annotationKey;
- (id)issueResourceExtensions:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;	// IMP=0x0000000000007b50
- (void)augmentForm:(id)arg1 host:(id)arg2;	// IMP=0x00000000000077e0
- (id)prunedInfoDictionaryFor:(id)arg1;	// IMP=0x00000000000075c0
@property(readonly) NSString *sandboxProfile; // @synthesize sandboxProfile=_sandboxProfile;
- (id)initWithLSData:(id)arg1 personaCache:(id)arg2 discoveryInstanceUUID:(id)arg3 extensionPointCache:(id)arg4 proxyFactory:(id)arg5;	// IMP=0x0000000000006040
- (void)dealloc;	// IMP=0x0000000000005f20
- (id)launchdVersion;	// IMP=0x000000000000ed90
- (id)launchdIdentifier;	// IMP=0x000000000000ed60

@end

