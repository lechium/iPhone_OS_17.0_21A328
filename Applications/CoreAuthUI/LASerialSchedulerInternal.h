//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface LASerialSchedulerInternal : NSObject
{
    _Bool _running;	// 8 = 0x8
    _Bool _performingPendingOperations;	// 9 = 0x9
    NSMutableArray *_pendingOperations;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000015d9c
@property(readonly, copy) NSString *description;
- (void)_performPendingOperationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015b28
- (void)_performPendingOperations;	// IMP=0x0010000000015a51
- (void)_resume;	// IMP=0x0010000000015a25
- (void)_schedule:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015994
- (void)unsafeResume;	// IMP=0x001000000001596c
- (void)unsafeSchedule:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015921
- (void)resume;	// IMP=0x0010000000015868
- (void)schedule:(CDUnknownBlockType)arg1;	// IMP=0x001000000001576d
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000156e0
- (id)init;	// IMP=0x001000000001565f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

