//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingSessionTimelineManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    double _fragmentDuration;	// 16 = 0x10
    NSDate *_fragmentCreationReferenceDate;	// 24 = 0x18
    NSMutableArray *_motionActiveDateIntervals;	// 32 = 0x20
    NSMutableArray *_doorbellActiveDateIntervals;	// 40 = 0x28
    NSString *_logIdentifier;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000004c9f77
- (void).cxx_destruct;	// IMP=0x00000000004c9f13
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSMutableArray *doorbellActiveDateIntervals; // @synthesize doorbellActiveDateIntervals=_doorbellActiveDateIntervals;
@property(readonly) NSMutableArray *motionActiveDateIntervals; // @synthesize motionActiveDateIntervals=_motionActiveDateIntervals;
@property(readonly, copy) NSDate *fragmentCreationReferenceDate; // @synthesize fragmentCreationReferenceDate=_fragmentCreationReferenceDate;
@property(readonly) double fragmentDuration; // @synthesize fragmentDuration=_fragmentDuration;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)attributeDescriptions;	// IMP=0x00000000004c9cfa
- (_Bool)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)arg1;	// IMP=0x00000000004c9bba
- (_Bool)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)arg1;	// IMP=0x00000000004c9a7a
- (void)handleDoorbellDidActivateAtDate:(id)arg1;	// IMP=0x00000000004c9704
- (void)handleMotionActive:(_Bool)arg1 didChangeAtDate:(id)arg2;	// IMP=0x00000000004c91eb
- (_Bool)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)arg1 forDuration:(double)arg2;	// IMP=0x00000000004c8fdb
- (_Bool)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)arg1 forDuration:(double)arg2;	// IMP=0x00000000004c8dcb
- (id)creationDateForFragmentAtTimeOffset:(double)arg1;	// IMP=0x00000000004c8d34
- (id)initWithWorkQueue:(id)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x00000000004c8b6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

