//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSXPCProxyCreating, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestSampler : NSObject
{
    id <NSXPCProxyCreating> _remoteSamplerProxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedSampler;	// IMP=0x001000000001ad33
- (void).cxx_destruct;	// IMP=0x0000000000019e54
- (id)AVFoundationSession;	// IMP=0x0000000000019e25
- (void)setPearlErrorState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019df9
- (void)setCarplayStateChangedCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019dcd
- (void)setPearlErrorState:(_Bool)arg1;	// IMP=0x0000000000019c1e
- (void)setCarPlayConnected:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019bf2
- (void)setCarPlayConnected:(_Bool)arg1;	// IMP=0x0000000000019a43
- (void)setSmartCoverCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019a17
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000199eb
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x000000000001983c
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019810
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;	// IMP=0x000000000001965e
- (void)setSampleState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019632
- (void)setSampleState:(_Bool)arg1;	// IMP=0x0000000000019483
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019457
- (void)setDisplayState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001942b
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x000000000001927c
- (void)resetStats;	// IMP=0x0000000000019121
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018eee
- (id)invokeSampler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018df0
- (id)connect;	// IMP=0x0000000000018dc8
- (id)_connect;	// IMP=0x0000000000018d2b
- (id)init;	// IMP=0x0000000000018cd3

@end

