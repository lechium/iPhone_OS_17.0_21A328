//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDRemoteLoginMessageSender, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAuthentication : HMFObject
{
    NSString *_sessionID;	// 8 = 0x8
    HMDDevice *_remoteDevice;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000672641
- (void).cxx_destruct;	// IMP=0x00000000006725ee
@property(readonly, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)authenticate;	// IMP=0x0000000000672502
- (id)logIdentifier;	// IMP=0x00000000006724f0
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4;	// IMP=0x00000000006723f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

