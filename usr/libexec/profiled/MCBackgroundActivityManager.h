//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfileServiceServer, MISSING_TYPE;
@protocol OS_dispatch_queue;

@interface MCBackgroundActivityManager : NSObject
{
    int _profileChangeNotificationToken;	// 8 = 0x8
    int _managedAppChangeNotificationToken;	// 12 = 0xc
    int _passcodeChangedNotificationToken;	// 16 = 0x10
    int _passcodePolicyChangedNotificationToken;	// 20 = 0x14
    MCProfileServiceServer *_server;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001e29e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) int passcodePolicyChangedNotificationToken; // @synthesize passcodePolicyChangedNotificationToken=_passcodePolicyChangedNotificationToken;
@property(nonatomic) int passcodeChangedNotificationToken; // @synthesize passcodeChangedNotificationToken=_passcodeChangedNotificationToken;
@property(nonatomic) int managedAppChangeNotificationToken; // @synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken;
@property(nonatomic) int profileChangeNotificationToken; // @synthesize profileChangeNotificationToken=_profileChangeNotificationToken;
@property(nonatomic) __weak MCProfileServiceServer *server; // @synthesize server=_server;
- (void)_workQueueReschedule:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x001000000001e11f
- (void)_rescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x001000000001dfb7
- (void)_workQueueRescheduleRecoveryPasscodeExpiryJob;	// IMP=0x001000000001dd6f
- (void)rescheduleRecoveryPasscodeExpiryJob;	// IMP=0x001000000001dd0e
- (void)_workQueueReschedulePasscodeExpiryJob;	// IMP=0x001000000001dc49
- (void)reschedulePasscodeExpiryJob;	// IMP=0x001000000001dbe8
- (void)rescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x001000000001dbb7
- (void)rescheduleManagedAppValidationJob;	// IMP=0x001000000001db49
- (void)rescheduleProfileJanitorJob;	// IMP=0x001000000001d9fe
- (MISSING_TYPE *)_handleXPCActivity:proposedStartDate:normalizeStartDate:proposedGracePeriod:proposedPriority:repeatingInterval:requireNetwork: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001d9ab
- (id)_jobDescriptionForBackgroundActivityType:(long long)arg1;	// IMP=0x001000000001d987
- (const char *)_jobNameForBackgroundActivityType:(long long)arg1;	// IMP=0x001000000001d962
- (id)_nextManagedAppValidationDateWithOverride:(id)arg1;	// IMP=0x001000000001d8cb
- (id)_nextActivationLockCleanupDate;	// IMP=0x001000000001d83f
- (id)_nextRegularDate;	// IMP=0x001000000001d6b6
- (void)activationLockBypassCodeWasStored:(id)arg1;	// IMP=0x001000000001d5d6
- (void)stop;	// IMP=0x001000000001d536
- (void)start;	// IMP=0x001000000001cdaf

@end
