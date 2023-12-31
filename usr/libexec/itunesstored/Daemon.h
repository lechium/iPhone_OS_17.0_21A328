//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBagValue, BatterySaverWatcher, NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract, OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface Daemon : NSObject
{
    _Bool _aliveForOperationQueues;	// 8 = 0x8
    NSMutableDictionary *_backgroundTaskObservers;	// 16 = 0x10
    NSMutableArray *_bagTimers;	// 24 = 0x18
    BatterySaverWatcher *_batterySaverWatcher;	// 32 = 0x20
    NSMutableDictionary *_cachedObjects;	// 40 = 0x28
    long long _dialogCount;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_jetsamSource;	// 64 = 0x40
    NSCountedSet *_keepAliveTransactions;	// 72 = 0x48
    NSMutableDictionary *_keepAliveTransactionStore;	// 80 = 0x50
    NSMutableSet *_keepAliveOperationQueues;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 96 = 0x60
    int _notifyToken;	// 104 = 0x68
    NSObject<OS_xpc_object> *_satisfiedWakeRequests;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_sigTermSource;	// 120 = 0x78
}

+ (id)daemon;	// IMP=0x002000000016c9fa
- (void)_warmUpSharedURLCache;	// IMP=0x002000000016fd92
- (void)_setGlobalState;	// IMP=0x001000000016fc71
- (void);	// IMP=0x001000000016fc1a
- (void)_reloadOperationKeepAliveTransaction;	// IMP=0x001000000016fabe
- (void)_observeNotifications;	// IMP=0x001000000016ec60
- (void)_finishProtectionClassCMigrationIfNeeded;	// IMP=0x001000000016eb0a
- (void)_initBackgroundTaskAgent;	// IMP=0x001000000016e784
- (void)_handleWakeWithName:(const char *)arg1 job:(id)arg2;	// IMP=0x001000000016e77e
- (void)_expireCachedObjectForKey:(id)arg1;	// IMP=0x001000000016e71a
- (void)_operationCountChanged:(id)arg1;	// IMP=0x001000000016e6b9
- (void)_networkUsageStateChangeNotification:(id)arg1;	// IMP=0x001000000016e6b3
- (void)_getShowingDialogWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016e614
- (void)batterySaverWatcherDidChangeState:(id)arg1;	// IMP=0x001000000016e380
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *changeLanguageURL;
- (void)start;	// IMP=0x001000000016d562
- (void)removeKeepAliveOperationQueue:(id)arg1;	// IMP=0x001000000016d4a8
- (void)removeCachedObjectForKey:(id)arg1;	// IMP=0x001000000016d436
- (void)removeBackgroundTaskObserver:(id)arg1;	// IMP=0x001000000016d27e
- (void)releaseKeepAliveAssertion:(id)arg1;	// IMP=0x001000000016d1a0
- (void)takeKeepAliveAssertion:(id)arg1;	// IMP=0x001000000016d0af
- (void)keepAliveWithAssertion:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000016cfd1
- (void)endShowingDialog;	// IMP=0x001000000016cf4b
- (void)cancelBackgroundTaskWithIdentifier:(id)arg1;	// IMP=0x001000000016cf45
- (void)cacheObject:(id)arg1 withKey:(id)arg2 expirationInterval:(double)arg3;	// IMP=0x001000000016cd22
- (id)cachedObjectForKey:(id)arg1;	// IMP=0x001000000016cbe6
- (void)beginShowingDialog;	// IMP=0x001000000016cb6c
- (id)addObserverForBackgroundTaskWithIdentifierPrefix:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000016cb60
- (void)addKeepAliveOperationQueue:(id)arg1;	// IMP=0x001000000016ca7d
- (void)addBackgroundTaskWithRequest:(id)arg1;	// IMP=0x001000000016ca77
- (void)dealloc;	// IMP=0x001000000016c8d5
- (id)init;	// IMP=0x001000000016c373

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly) Class superclass;

@end

