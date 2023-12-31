//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamOutputManager : NSObject
{
    NSMutableDictionary *_streamOutputSourceForStreamToken;	// 8 = 0x8
    NSMutableDictionary *_streamOutputs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 32 = 0x20
    _Bool _useFigRemoteQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00100000003045c1
- (void)releaseQueueForStreamToken:(long long)arg1;	// IMP=0x00000000003063a5
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x000000000030639f
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x0000000000306399
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000306302
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000030626b
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000003061d4
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x000000000030613d
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000305f99
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000305df5
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000305c51
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x0000000000305aad
- (void)deregisterBlocksForService;	// IMP=0x0000000000305a2b
- (void)registerBlocksForService;	// IMP=0x0000000000305754
- (id)serviceHandlerStreamOutputTerminateWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000305617
- (id)serviceHandlerStreamOutputNotifyCacheWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x000000000030549c
- (id)serviceHandlerStreamOutputInitializeWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000305116
- (_Bool)sourceExistsForStreamToken:(long long)arg1;	// IMP=0x0000000000305007
- (id)allocDispatchedStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x0000000000304fc0
- (id)allocStreamOutputWithStreamToken:(long long)arg1 clientPid:(int)arg2 options:(id)arg3 errorCode:(int *)arg4;	// IMP=0x0000000000304e7c
- (void)dispatchedDeregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x0000000000304ad3
- (void)deregisterStreamOutputSourceForStreamToken:(long long)arg1;	// IMP=0x0000000000304a44
- (void)dispatchedRegisterStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x000000000030469e
- (void)registerStreamOutputSource:(id)arg1 forStreamToken:(long long)arg2;	// IMP=0x0000000000304606
- (void)dispatchedCleanupStreamOutput:(id)arg1;	// IMP=0x0000000000304540
- (void)cleanupStreamOutput:(id)arg1;	// IMP=0x00000000003044b1
- (void)dealloc;	// IMP=0x0000000000304428
- (id)init;	// IMP=0x00000000003041c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

