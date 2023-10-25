//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageDispatcher.h>

@class HMDHomeManager, HMDMessageFilterChain, HMDSecureRemoteMessageFilter, HMDSecureRemoteMessageTransport, HMDXPCMessageTransport, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDMessageDispatcher : HMFMessageDispatcher
{
    HMDXPCMessageTransport *_XPCTransport;	// 8 = 0x8
    HMDSecureRemoteMessageTransport *_secureRemoteTransport;	// 16 = 0x10
    HMDMessageFilterChain *_messageFilterChain;	// 24 = 0x18
    NSMutableDictionary *_remoteGateways;	// 32 = 0x20
    HMDSecureRemoteMessageFilter *_secureRemoteMessageFilter;	// 40 = 0x28
    HMDHomeManager *_homeManager;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x004000000057ad2d
+ (id)defaultDispatcher;	// IMP=0x004000000057acca
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4 accountRegistry:(id)arg5;	// IMP=0x004000000057ab68
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(_Bool)arg4;	// IMP=0x004000000057aa9b
- (void).cxx_destruct;	// IMP=0x000000000057a634
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter; // @synthesize secureRemoteMessageFilter=_secureRemoteMessageFilter;
@property(retain, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property(readonly, nonatomic) HMDMessageFilterChain *messageFilterChain; // @synthesize messageFilterChain=_messageFilterChain;
@property(readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport; // @synthesize secureRemoteTransport=_secureRemoteTransport;
@property(readonly, nonatomic) HMDXPCMessageTransport *XPCTransport; // @synthesize XPCTransport=_XPCTransport;
- (id)sendMessageExpectingResponse:(id)arg1;	// IMP=0x000000000057a396
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000057a266
- (void)dispatchMessage:(id)arg1;	// IMP=0x0000000000579f74
- (void)configureHTTPTransport:(id)arg1;	// IMP=0x0000000000579ebc
- (void)disableMessageServer;	// IMP=0x0000000000579e7d
- (void)enableMessageServer;	// IMP=0x0000000000579e3b
- (id)httpMessageTransport;	// IMP=0x0000000000579ccf
- (void)configureHomeManager:(id)arg1;	// IMP=0x0000000000579c17
- (void)reset;	// IMP=0x0000000000579bda
- (id)filterClasses;	// IMP=0x0000000000579a9c
- (void)dealloc;	// IMP=0x0000000000579a27
- (id)initWithXPCTransport:(id)arg1 secureRemoteTransport:(id)arg2 messageFilterChain:(id)arg3;	// IMP=0x0000000000579864
- (void)electDeviceForHH1User:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000057c6c5
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000057bf1c
- (id)remoteAccessDeviceForHome:(id)arg1;	// IMP=0x000000000057becc
- (id)residentCommunicationHandlerForHome:(id)arg1;	// IMP=0x000000000057bd81
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(_Bool)arg3;	// IMP=0x000000000057b270
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x000000000057b192
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;	// IMP=0x000000000057b0b4
- (void)handleSecureSessionError:(id)arg1;	// IMP=0x000000000057affc

@end
