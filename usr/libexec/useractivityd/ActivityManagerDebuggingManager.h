//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, SharingBTLESuggestedItem, UAActivityReplay, UACornerActionManager, UANetworkReplayRendevousHandler, UAPingController;

@interface ActivityManagerDebuggingManager : NSObject
{
    _Bool _supportNetworkPeers;	// 8 = 0x8
    _Bool _disableAdminEntitlmentChecking;	// 9 = 0x9
    UACornerActionManager *manager;	// 16 = 0x10
    SharingBTLESuggestedItem *fakeBTLEInjectedItem;	// 24 = 0x18
    NSXPCListener *listener;	// 32 = 0x20
    UAActivityReplay *_replayManager;	// 40 = 0x28
    UAPingController *_pingController;	// 48 = 0x30
    UANetworkReplayRendevousHandler *_networkConnectionHandler;	// 56 = 0x38
    unsigned long long _recentActionsStateHandler;	// 64 = 0x40
    struct timeval _ignoredRTimeVal;	// 72 = 0x48
}

+ (id)actionStrs:(long long)arg1 maximumInternal:(double)arg2 clear:(_Bool)arg3;	// IMP=0x0020000000096eda
+ (void)appendRecentAction:(id)arg1;	// IMP=0x0010000000096d8d
+ (void)log:(int)arg1 format:(id)arg2;	// IMP=0x001000000009693c
+ (void)log:(int)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000096887
- (void).cxx_destruct;	// IMP=0x002000000009d62d
@property unsigned long long recentActionsStateHandler; // @synthesize recentActionsStateHandler=_recentActionsStateHandler;
@property(readonly) struct timeval ignoredRTimeVal; // @synthesize ignoredRTimeVal=_ignoredRTimeVal;
@property(retain) UANetworkReplayRendevousHandler *networkConnectionHandler; // @synthesize networkConnectionHandler=_networkConnectionHandler;
@property(retain) UAPingController *pingController; // @synthesize pingController=_pingController;
@property(retain) UAActivityReplay *replayManager; // @synthesize replayManager=_replayManager;
@property _Bool disableAdminEntitlmentChecking; // @synthesize disableAdminEntitlmentChecking=_disableAdminEntitlmentChecking;
@property(retain) NSXPCListener *listener; // @synthesize listener;
@property(retain) SharingBTLESuggestedItem *fakeBTLEInjectedItem; // @synthesize fakeBTLEInjectedItem;
@property(retain) UACornerActionManager *manager; // @synthesize manager;
- (void)doGetPairedDevices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d1b3
- (void)doGetSFActivityAdvertisement:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ce59
- (void)doGetLoggingFileForClient:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009cdc2
- (void)doSetLocalPasteboardReflection:(_Bool)arg1;	// IMP=0x001000000009cd2c
- (void)doSetRemotePasteboardAvailable:(_Bool)arg1;	// IMP=0x001000000009cc94
- (void)doSetDefaults:(id)arg1 archivedValue:(id)arg2;	// IMP=0x001000000009ca84
- (void)doCopyDefaults:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c9ce
- (void)doReplayCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c7dd
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c3b4
- (void)stopAdvertisingPing;	// IMP=0x001000000009c2ed
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;	// IMP=0x001000000009c1ec
- (void)doSetupRendevous:(id)arg1 domain:(id)arg2 activate:(_Bool)arg3;	// IMP=0x001000000009c142
- (void)doSetupNetworkedPairs:(id)arg1 port:(long long)arg2;	// IMP=0x001000000009c018
- (void)doDidSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009bb83
- (void)doWillSaveDelegate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b72f
- (void)doTerminateServer;	// IMP=0x001000000009b700
- (void)doInjectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 webPageURL:(id)arg6 remoteModel:(id)arg7 duration:(double)arg8 payloadDelay:(double)arg9;	// IMP=0x001000000009aa94
- (void)doGetCurrentAdvertisedItemUUID:(CDUnknownBlockType)arg1;	// IMP=0x001000000009a998
- (void)doCopySimulatorStatusString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a8ee
- (void)doCopyRecentActions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a7bd
- (void)doFetchMoreAppSuggestions;	// IMP=0x001000000009a7a7
- (void)doCopyStatusString:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a04f
- (void)doCopyDynamicUserActivitiesString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099fbc
- (void)doCopyDebuggingInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099f38
- (void)doCopyEnabledUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000099eaa
- (void)doCopyAdvertisedUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000099d84
- (void)doCopyAllUUIDsOfType:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000099b56
- (void)doFindMatchingUserActivityForString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098b21
- (void)doSetDebugOption:(id)arg1 value:(id)arg2;	// IMP=0x0010000000097de1
- (void)doNOP:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000097cdb
- (void)receivePing:(id)arg1;	// IMP=0x0010000000097c1a
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000009785e
- (double)currentPerfTime;	// IMP=0x0010000000097814
- (id)perfSummaryString;	// IMP=0x0010000000097781
@property _Bool supportNetworkPeers; // @synthesize supportNetworkPeers=_supportNetworkPeers;
- (void)setDebugging:(_Bool)arg1;	// IMP=0x0010000000096d1f
- (void)resume;	// IMP=0x0010000000096cb2
- (void)suspend;	// IMP=0x0010000000096c45
- (id)initWithManager:(id)arg1;	// IMP=0x00100000000969d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

