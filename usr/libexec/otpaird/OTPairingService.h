//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString, OTDeviceInformationActualAdapter, OTPairingSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface OTPairingService : NSObject
{
    _Bool _initiator;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    IDSService *_service;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_unlockTimer;	// 32 = 0x20
    OTDeviceInformationActualAdapter *_deviceInfo;	// 40 = 0x28
    OTPairingSession *_session;	// 48 = 0x30
}

+ (id)sharedService;	// IMP=0x0020000000003be7
- (void).cxx_destruct;	// IMP=0x002000000000327b
@property(retain) OTPairingSession *session; // @synthesize session=_session;
@property(retain, nonatomic) OTDeviceInformationActualAdapter *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain) NSObject<OS_dispatch_source> *unlockTimer; // @synthesize unlockTimer=_unlockTimer;
@property(retain) IDSService *service; // @synthesize service=_service;
@property(readonly) _Bool initiator; // @synthesize initiator=_initiator;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)scheduleGizmoPoke;	// IMP=0x001000000000306e
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0010000000002e3b
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000028a5
- (void)_sendMessage:(id)arg1 to:(id)arg2 identifier:(id)arg3 expectReply:(_Bool)arg4;	// IMP=0x0010000000002561
- (void)_sendMessage:(id)arg1 to:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000002549
- (void)exchangePacketAndReply;	// IMP=0x00100000000023c6
- (void)deviceUnlockTimedOut;	// IMP=0x00100000000020c8
- (void)sendReplyToPacket;	// IMP=0x0010000000002075
- (void)session:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000001f1e
- (void)initiatePairingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001e12
@property(readonly) NSString *pairedDeviceNotificationName;
- (id)initAsInitiator:(_Bool)arg1;	// IMP=0x0010000000001b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

