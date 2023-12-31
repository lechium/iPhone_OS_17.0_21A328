//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID, TCCDMainSyncController, TCCDServer, TCCDSyncController;

@interface TCCDPlatform : NSObject
{
    _Bool _isChinaSKUDevice;	// 8 = 0x8
    NSDictionary *_configurationDictionary;	// 16 = 0x10
    NSUUID *_bootUUID;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    TCCDServer *_server;	// 40 = 0x28
    TCCDSyncController *_syncController;	// 48 = 0x30
    TCCDMainSyncController *_mainSyncController;	// 56 = 0x38
    NSDictionary *_servicesByName;	// 64 = 0x40
}

+ (id)allTCCEntitlements;	// IMP=0x0040000000058ff2
+ (id)currentPlatform;	// IMP=0x0010000000058f86
+ (id)macOSPlatformNames;	// IMP=0x0010000000058f16
+ (id)iosFamilyPlatformNames;	// IMP=0x0010000000058e97
+ (id)allPlatformNames;	// IMP=0x0010000000058e04
- (void).cxx_destruct;	// IMP=0x002000000005b1c2
@property(readonly) _Bool isChinaSKUDevice; // @synthesize isChinaSKUDevice=_isChinaSKUDevice;
@property(retain) NSDictionary *servicesByName; // @synthesize servicesByName=_servicesByName;
@property(retain) TCCDMainSyncController *mainSyncController; // @synthesize mainSyncController=_mainSyncController;
@property(retain) TCCDSyncController *syncController; // @synthesize syncController=_syncController;
@property __weak TCCDServer *server; // @synthesize server=_server;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
- (void)registerWithApplicationResolverSubjectIdentity:(id)arg1 processChain:(id)arg2;	// IMP=0x001000000005b0f9
- (_Bool)displayAlert:(id)arg1;	// IMP=0x001000000005b0f1
- (id)prefixOfBundleIdentifiersToResetAfterResetOfAppBundleIdentifier:(id)arg1;	// IMP=0x001000000005b0e9
- (_Bool)removalOfAppBundleIdentifierRequiresPruning:(id)arg1;	// IMP=0x001000000005b0e1
- (_Bool)isNonAppBundleIdentifierValid:(id)arg1;	// IMP=0x001000000005b0d9
- (void)runBacktraceToolOnProcess:(id)arg1 forService:(id)arg2;	// IMP=0x001000000005b0d3
- (void)prepareForAbort;	// IMP=0x001000000005b0cd
- (unsigned long long)evaluatePolicyForUsageStringAndPromptingForClient:(id)arg1 attributionChain:(id)arg2 service:(id)arg3 desiredAuth:(unsigned long long)arg4 resultUsageString:(id *)arg5;	// IMP=0x001000000005b0ba
- (void)sendAnalyticsWithEventName:(id)arg1 fields:(id)arg2;	// IMP=0x001000000005ada9
- (void)sendAnalyticsForAction:(long long)arg1 service:(id)arg2 subjectIdentity:(id)arg3 indirectObjectIdentity:(id)arg4 authValue:(unsigned long long)arg5 includeV1AuthValue:(_Bool)arg6 v1AuthValue:(unsigned long long)arg7 desiredAuth:(unsigned long long)arg8 domainReason:(id)arg9 promptType:(long long)arg10;	// IMP=0x001000000005a686
- (void)sendAnalyticsForPlugin:(id)arg1 service:(id)arg2 API:(id)arg3;	// IMP=0x001000000005a341
- (void)updateAnalyticsEvent:(id)arg1 fromIdentity:(id)arg2 keyPrefix:(id)arg3;	// IMP=0x001000000005a07f
- (id)stringForAnalyticsAction:(long long)arg1;	// IMP=0x001000000005a060
- (void)notifyUserOfDeniedAccessBy:(id)arg1 forService:(id)arg2;	// IMP=0x001000000005a04e
- (id)appBundleURLContainingExecutableURL:(id)arg1;	// IMP=0x0010000000059b45
- (id)bundleURLContainingExecutableURL:(id)arg1;	// IMP=0x0010000000059b03
- (long long)promptingPolicyForIdentity:(id)arg1 accessingService:(id)arg2 withAttributionChain:(id)arg3;	// IMP=0x0010000000059aee
- (void)handleCompositionType:(long long)arg1 forParentService:(id)arg2 forRequest:(id)arg3 intoReply:(id)arg4;	// IMP=0x0010000000059adc
- (void)forwardMessage:(id)arg1 toUserTCCDFromAttributionChain:(id)arg2 forService:(id)arg3 andMergeReplyInto:(id)arg4 forConnnection:(id)arg5;	// IMP=0x0010000000059aca
- (_Bool)sendMessageAsync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059ab5
- (id)sendMessageSync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2;	// IMP=0x0010000000059aa0
@property(readonly) NSUUID *bootUUID; // @synthesize bootUUID=_bootUUID;
- (id)homeRelativePathToStateDirectory;	// IMP=0x0010000000059905
- (void)_invalidMethodForPlatform;	// IMP=0x00100000000598f3
- (id)serviceByName:(id)arg1;	// IMP=0x0010000000059572
- (void)_configureServices;	// IMP=0x001000000005956c
- (id)description;	// IMP=0x001000000005955a
- (void)loadConfigurationDictionary;	// IMP=0x00100000000592f7
- (id)initWithName:(id)arg1;	// IMP=0x0010000000059284

@end

