//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDCameraStreamMetrics, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDService, NSObject, NSString;
@protocol HMDCameraStreamControlManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamControlManager : HMFObject
{
    id <HMDCameraStreamControlManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    HMDAccessory *_accessory;	// 24 = 0x18
    HMDService *_streamManagementService;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMDCameraStreamSessionID *_sessionID;	// 48 = 0x30
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;	// 56 = 0x38
    HMDCameraStreamMetrics *_streamMetrics;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000009bdb29
- (void).cxx_destruct;	// IMP=0x00000000009bd9dc
@property(readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics; // @synthesize streamMetrics=_streamMetrics;
@property(readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
@property __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDCameraStreamControlManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000009bd8cc
- (void)_callStreamStoppedWithError:(id)arg1;	// IMP=0x00000000009bd67a
- (void)_callStreamReconfigured;	// IMP=0x00000000009bd4d0
- (void)_callStreamFirstFrameReceived;	// IMP=0x00000000009bd326
- (void)_callStreamStarted;	// IMP=0x00000000009bd17c
- (void)_callStreamRemoteConnectionSetup;	// IMP=0x00000000009bcfd2
- (void)_callStreamNegotiated:(id)arg1;	// IMP=0x00000000009bcdf7
- (id)managerProtocol;	// IMP=0x00000000009bcdbb
- (void)_reportInternalErrorCode:(long long)arg1;	// IMP=0x00000000009bcd68
- (void)_reportErrorCode:(long long)arg1;	// IMP=0x00000000009bcd15
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x00000000009bcc61
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(_Bool)arg8;	// IMP=0x00000000009bca2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

