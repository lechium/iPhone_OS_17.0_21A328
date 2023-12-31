//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, HMIAnalysisStateManager, HMIAnalysisStateUpdate, NSObject, NSString, NSUUID;
@protocol HMDHomeResidentMessagingContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraAnalysisStatePublisher : HMFObject
{
    HMIAnalysisStateManager *_analysisStateManager;	// 8 = 0x8
    id <HMDHomeResidentMessagingContext> _messagingContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMFTimer *_cameraAnalysisStatePublisherDebounceTimer;	// 32 = 0x20
    HMIAnalysisStateUpdate *_stateUpdate;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000002db402
- (void).cxx_destruct;	// IMP=0x00000000002db131
@property(retain) HMIAnalysisStateUpdate *stateUpdate; // @synthesize stateUpdate=_stateUpdate;
@property(readonly) HMFTimer *cameraAnalysisStatePublisherDebounceTimer; // @synthesize cameraAnalysisStatePublisherDebounceTimer=_cameraAnalysisStatePublisherDebounceTimer;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDHomeResidentMessagingContext> messagingContext; // @synthesize messagingContext=_messagingContext;
@property(readonly) HMIAnalysisStateManager *analysisStateManager; // @synthesize analysisStateManager=_analysisStateManager;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000002daff1
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)stateManager:(id)arg1 didReceiveLocalUpdate:(id)arg2;	// IMP=0x00000000002dae21
- (void)_handleRemoteAnalysisStateUpdate:(id)arg1;	// IMP=0x00000000002daba3
- (void)_publishAnalysisStateUpdate;	// IMP=0x00000000002da87e
- (void)_processStateUpdate:(id)arg1;	// IMP=0x00000000002da718
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000002da4f1
- (id)initWithHomeMessagingContext:(id)arg1 analysisStateManager:(id)arg2 workQueue:(id)arg3 cameraAnalysisStatePublisherDebounceTimer:(id)arg4;	// IMP=0x00000000002da407
- (id)initWithHome:(id)arg1;	// IMP=0x00000000002da311

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

