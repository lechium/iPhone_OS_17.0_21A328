//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDCameraResidentMessageHandler, HMDCameraSnapshotSessionID, HMDDevice, HMDSnapshotFile, HMDSnapshotRequestHandler, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotReceiver : HMFObject
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    HMDCameraSnapshotSessionID *_sessionID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDAccessory *_accessory;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    HMDSnapshotFile *_snapshotFile;	// 48 = 0x30
    HMDSnapshotRequestHandler *_snapshotRequestHandler;	// 56 = 0x38
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 64 = 0x40
    HMDDevice *_remoteDevice;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x001000000079a9c7
- (void).cxx_destruct;	// IMP=0x000000000079a921
@property(readonly, nonatomic) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler; // @synthesize snapshotRequestHandler=_snapshotRequestHandler;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)logIdentifier;	// IMP=0x000000000079a808
- (void)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000079a6b5
- (void)_sendConfirmationToResident:(CDUnknownBlockType)arg1;	// IMP=0x000000000079a4f0
- (void)_sendRequestWithTierType:(unsigned long long)arg1 toResident:(CDUnknownBlockType)arg2;	// IMP=0x000000000079a19d
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegateQueue:(id)arg4 uniqueIdentifier:(id)arg5 snapshotRequestHandler:(id)arg6 residentMessageHandler:(id)arg7 remoteDevice:(id)arg8;	// IMP=0x0000000000799f4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

