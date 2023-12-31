//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ABSLasordaSession, ABSProgressReporter, ABSSyncController, ABSTestControl, MISSING_TYPE, NDTActivity, NDTSQFile, NDTServerState, NDTSignalCoalescer, NSString, PSYServiceSyncSession, PSYSyncCoordinator, SYService, SYSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ABSyncInterface : NSObject
{
    NDTSQFile *_logDbFile;	// 8 = 0x8
    _Atomic int _sessionChecker;	// 16 = 0x10
    NDTActivity *_activity;	// 24 = 0x18
    _Bool _isCurrentlySyncing;	// 32 = 0x20
    _Bool _externalChangesGoingOn;	// 33 = 0x21
    _Bool _needsDeltaSync;	// 34 = 0x22
    SYService *_syncService;	// 40 = 0x28
    NDTServerState *_serverState;	// 48 = 0x30
    ABSSyncController *_syncController;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_syncTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_unlockTimer;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_unlockQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_sessionIdleQueue;	// 96 = 0x60
    long long _objectCount;	// 104 = 0x68
    ABSLasordaSession *_syncSession;	// 112 = 0x70
    SYSession *_sySession;	// 120 = 0x78
    double _deltaRateEstimate;	// 128 = 0x80
    double _fullRateEstimate;	// 136 = 0x88
    NSString *_watchBuildVersion;	// 144 = 0x90
    NDTSignalCoalescer *_signalCoalescer;	// 152 = 0x98
    PSYSyncCoordinator *_psySyncCoordinator;	// 160 = 0xa0
    PSYServiceSyncSession *_psySyncSession;	// 168 = 0xa8
    ABSProgressReporter *_preemptedSessionProgressReporter;	// 176 = 0xb0
    ABSTestControl *_statusReporter;	// 184 = 0xb8
}

+ (id)sharedInstance;	// IMP=0x002000000003723a
- (void).cxx_destruct;	// IMP=0x002000000003cb52
@property(retain, nonatomic) ABSTestControl *statusReporter; // @synthesize statusReporter=_statusReporter;
@property(retain, nonatomic) ABSProgressReporter *preemptedSessionProgressReporter; // @synthesize preemptedSessionProgressReporter=_preemptedSessionProgressReporter;
@property(retain, nonatomic) PSYServiceSyncSession *psySyncSession; // @synthesize psySyncSession=_psySyncSession;
@property(retain, nonatomic) PSYSyncCoordinator *psySyncCoordinator; // @synthesize psySyncCoordinator=_psySyncCoordinator;
@property(retain, nonatomic) NDTSignalCoalescer *signalCoalescer; // @synthesize signalCoalescer=_signalCoalescer;
@property(retain, nonatomic) NSString *watchBuildVersion; // @synthesize watchBuildVersion=_watchBuildVersion;
@property(nonatomic) double fullRateEstimate; // @synthesize fullRateEstimate=_fullRateEstimate;
@property(nonatomic) double deltaRateEstimate; // @synthesize deltaRateEstimate=_deltaRateEstimate;
@property(retain, nonatomic) SYSession *sySession; // @synthesize sySession=_sySession;
@property(retain, nonatomic) ABSLasordaSession *syncSession; // @synthesize syncSession=_syncSession;
@property(nonatomic) _Bool needsDeltaSync; // @synthesize needsDeltaSync=_needsDeltaSync;
@property(nonatomic) _Bool externalChangesGoingOn; // @synthesize externalChangesGoingOn=_externalChangesGoingOn;
@property(nonatomic) long long objectCount; // @synthesize objectCount=_objectCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionIdleQueue; // @synthesize sessionIdleQueue=_sessionIdleQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *unlockQueue; // @synthesize unlockQueue=_unlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *unlockTimer; // @synthesize unlockTimer=_unlockTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *syncTimer; // @synthesize syncTimer=_syncTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) ABSSyncController *syncController; // @synthesize syncController=_syncController;
@property(retain, nonatomic) NDTServerState *serverState; // @synthesize serverState=_serverState;
@property(readonly, nonatomic) _Bool isCurrentlySyncing; // @synthesize isCurrentlySyncing=_isCurrentlySyncing;
@property(retain, nonatomic) SYService *syncService; // @synthesize syncService=_syncService;
- (void)watchUpdated:(id)arg1;	// IMP=0x001000000003c53b
- (void)_enableDisableLogging;	// IMP=0x001000000003c528
- (id)newFileName:(id)arg1;	// IMP=0x001000000003c516
- (id)_newFileName;	// IMP=0x001000000003c244
- (void)_setupLogging;	// IMP=0x001000000003c16a
- (void)requestFullSync:(id)arg1;	// IMP=0x001000000003c0ee
- (void)_requestFullSync:(id)arg1;	// IMP=0x001000000003be21
- (_Bool)oldDatabaseDelete;	// IMP=0x001000000003bd9c
- (_Bool)oldDatabaseExists;	// IMP=0x001000000003bd19
- (void)_saveGuardianRestrictionBit;	// IMP=0x001000000003bcd9
- (void)_saveAnchor:(id)arg1;	// IMP=0x001000000003bc48
- (id)_fetchAnchor;	// IMP=0x001000000003bbdb
- (void)_recvSessionEnded:(id)arg1 error:(id)arg2;	// IMP=0x001000000003b886
- (void)_sendSessionEnded:(id)arg1 error:(id)arg2;	// IMP=0x001000000003b1b2
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;	// IMP=0x001000000003ae04
- (_Bool)_shouldReallySendDeltaSessionWithAnchor:(id)arg1 store:(id)arg2;	// IMP=0x001000000003aa37
- (id)service:(id)arg1 willPreferSession:(id)arg2 overSession:(id)arg3;	// IMP=0x001000000003a886
- (void)_startRecvSession:(id)arg1;	// IMP=0x001000000003a46c
- (_Bool)_startSendSession:(id)arg1;	// IMP=0x0010000000039cae
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000039617
- (double)objectDelay;	// IMP=0x00100000000395f7
- (MISSING_TYPE *)messageTimeout;	// IMP=0x00100000000395d2
- (double)sessionTimeout;	// IMP=0x00100000000395ad
- (_Bool)automaticSync;	// IMP=0x0010000000039584
- (void)tc_setFixedRetryInternal:(double)arg1;	// IMP=0x0010000000039567
- (void)tc_setFailureProbablity:(double)arg1;	// IMP=0x0010000000039525
- (void)tc_setMessageTimeout:(double)arg1;	// IMP=0x00100000000394e3
- (void)tc_setSessionTimeout:(double)arg1;	// IMP=0x00100000000394a1
- (void)tc_requestReset;	// IMP=0x0010000000039488
- (void)tc_requestDelta;	// IMP=0x0010000000039472
- (void)tc_setObjectDelay:(double)arg1;	// IMP=0x0010000000039455
- (void)tc_advanceChangeNumber;	// IMP=0x001000000003939c
- (void)tc_setAutomaticSync:(_Bool)arg1;	// IMP=0x001000000003937d
- (void)tc_setNominal;	// IMP=0x00100000000392e8
- (void)tc_status:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039146
- (void)_migrationCheck;	// IMP=0x0010000000038ffd
- (void)startUnlockTimer:(double)arg1;	// IMP=0x0010000000038dc0
- (void)_checkServerStateOnStartup;	// IMP=0x0010000000038c70
- (double)_nextDelay:(long long)arg1;	// IMP=0x0010000000038c05
- (_Bool)_shouldFakeFailure;	// IMP=0x0010000000038b74
- (void)_scheduleRetrySync;	// IMP=0x00100000000389c1
- (void)activityRun:(id)arg1;	// IMP=0x0010000000038721
- (void)activity:(id)arg1 customizeCriteria:(id)arg2;	// IMP=0x00100000000386bd
- (char *)activityIdentifier:(id)arg1;	// IMP=0x00100000000386b0
- (char *)activitySubsystem:(id)arg1;	// IMP=0x00100000000386a3
- (void)registerForAddressBookDarwinNotifications;	// IMP=0x0010000000038304
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x00100000000381d2
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000037fd4
- (void)_initSyncStore;	// IMP=0x0010000000037d31
- (void)_blockUntilUnlock;	// IMP=0x0010000000037d2b
- (void)dealloc;	// IMP=0x0010000000037c86
- (id)init;	// IMP=0x001000000003729b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

