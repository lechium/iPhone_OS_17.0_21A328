//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMFTimer, IDSDeviceConnection, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HMDCameraIDSDeviceConnection : HMFObject
{
    unsigned char _keepAliveCounter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDCameraStreamSessionID *_sessionID;	// 24 = 0x18
    id <HMDIDSService> _idsProxyStreamService;	// 32 = 0x20
    IDSDeviceConnection *_watchVideoConnection;	// 40 = 0x28
    IDSDeviceConnection *_watchAudioConnection;	// 48 = 0x30
    IDSDeviceConnection *_keepAliveConnection;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_highPriorityQueue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_keepAliveSocketReceiveSource;	// 72 = 0x48
    HMFTimer *_keepAliveByteSendTimer;	// 80 = 0x50
    HMFTimer *_keepAliveByteReceiveTimeoutTimer;	// 88 = 0x58
    CDUnknownBlockType _idsDeviceConnectionFactory;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x001000000041ae68
- (void).cxx_destruct;	// IMP=0x0000000000419a31
@property(copy) CDUnknownBlockType idsDeviceConnectionFactory; // @synthesize idsDeviceConnectionFactory=_idsDeviceConnectionFactory;
@property(retain) IDSDeviceConnection *keepAliveConnection; // @synthesize keepAliveConnection=_keepAliveConnection;
@property(retain) IDSDeviceConnection *watchAudioConnection; // @synthesize watchAudioConnection=_watchAudioConnection;
@property(retain) IDSDeviceConnection *watchVideoConnection; // @synthesize watchVideoConnection=_watchVideoConnection;
@property(readonly, nonatomic) id <HMDIDSService> idsProxyStreamService; // @synthesize idsProxyStreamService=_idsProxyStreamService;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x0000000000419912
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x000000000041985e
- (void)_socketOpenedWithError:(id)arg1;	// IMP=0x00000000004197aa
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004194bb
- (void)startKeepAlive;	// IMP=0x0000000000419452
- (void)_createStreamSocketWithDevice:(id)arg1;	// IMP=0x0000000000417edb
- (void)dealloc;	// IMP=0x0000000000417e34
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 idsProxyStreamService:(id)arg3;	// IMP=0x0000000000417c14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

