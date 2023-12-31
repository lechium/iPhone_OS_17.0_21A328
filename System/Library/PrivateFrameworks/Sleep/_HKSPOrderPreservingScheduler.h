//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol HKSPMutexProvider, NAScheduler;

__attribute__((visibility("hidden")))
@interface _HKSPOrderPreservingScheduler : NSObject
{
    _Bool _taskInProgress;	// 8 = 0x8
    _Bool _suspended;	// 9 = 0x9
    NSMutableArray *_tasks;	// 16 = 0x10
    id <NAScheduler> _scheduler;	// 24 = 0x18
    id <HKSPMutexProvider> _mutexProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004d9f6
@property(readonly, nonatomic) id <HKSPMutexProvider> mutexProvider; // @synthesize mutexProvider=_mutexProvider;
@property(readonly, nonatomic) id <NAScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) _Bool taskInProgress; // @synthesize taskInProgress=_taskInProgress;
@property(readonly, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void)_taskDidFinish;	// IMP=0x000000000004d938
- (void)_executeTask:(id)arg1;	// IMP=0x000000000004d907
- (void)_actuallyScheduleTask:(id)arg1;	// IMP=0x000000000004d78f
- (void)_scheduleNextTaskIfPossible;	// IMP=0x000000000004d5fa
- (id)_scheduleTask:(id)arg1;	// IMP=0x000000000004d521
- (void)resume;	// IMP=0x000000000004d4a9
- (void)suspend;	// IMP=0x000000000004d448
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d316
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d295
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d201
- (id)initWithScheduler:(id)arg1 mutexProvider:(id)arg2;	// IMP=0x000000000004d134

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

