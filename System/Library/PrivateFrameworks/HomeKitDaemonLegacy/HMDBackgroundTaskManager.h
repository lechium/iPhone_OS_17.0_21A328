//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackgroundTaskLogger, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackgroundTaskManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_tasksByIdentifier;	// 16 = 0x10
    NSMutableDictionary *_pendingTaskDateByIdentifier;	// 24 = 0x18
    HMDBackgroundTaskLogger *_logger;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000037566b
+ (id)sharedManager;	// IMP=0x001000000037563b
- (void).cxx_destruct;	// IMP=0x0000000000375518
@property(readonly, nonatomic) HMDBackgroundTaskLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSMutableDictionary *pendingTaskDateByIdentifier; // @synthesize pendingTaskDateByIdentifier=_pendingTaskDateByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *tasksByIdentifier; // @synthesize tasksByIdentifier=_tasksByIdentifier;
- (id)_taskForIdentifier:(id)arg1;	// IMP=0x0000000000375437
- (void)_setTask:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000000375381
- (void)_unregisterEventWithIdentifier:(id)arg1;	// IMP=0x0000000000375353
- (void)_registerEventWithIdentifier:(id)arg1 fireDate:(id)arg2;	// IMP=0x0000000000375263
- (void)_postNotificationWithIdentifier:(id)arg1;	// IMP=0x00000000003751c4
- (void)_handlePendingTaskWithIdentifier:(id)arg1;	// IMP=0x0000000000374f62
- (void)_handleEvent:(id)arg1;	// IMP=0x0000000000374a12
- (void)_configure;	// IMP=0x00000000003749c5
- (void)cancelTaskWithIdentifier:(id)arg1 onObserver:(id)arg2;	// IMP=0x0000000000374735
- (_Bool)scheduleTaskWithIdentifier:(id)arg1 fireDate:(id)arg2 onObserver:(id)arg3 selector:(SEL)arg4 error:(id *)arg5;	// IMP=0x0000000000374297
- (id)init;	// IMP=0x00000000003741af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

