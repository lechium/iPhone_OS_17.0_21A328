//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMTLDevice, InterceptConfig, NSString;
@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CMMTLCommandQueue : NSObject
{
    CMMTLDevice *_cmDevice;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    InterceptConfig *_interceptConfig;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001e62e
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000001e59d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000001e54d
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000001e518
@property(readonly) id <MTLDevice> device;
- (id)commandBuffer;	// IMP=0x000000000001e4d2
- (id)commandBufferWithUnretainedReferences;	// IMP=0x000000000001e497
- (id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2;	// IMP=0x000000000001e2f2
- (id)initWithCMMTLDevice:(id)arg1 maxCommandBufferCount:(unsigned long long)arg2;	// IMP=0x000000000001e164
- (id)initWithCMMTLDevice:(id)arg1;	// IMP=0x000000000001dfdc

// Remaining properties
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property _Bool executionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isOpenGLQueue;
@property(copy) NSString *label;
@property(readonly) unsigned long long maxCommandBufferCount;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) unsigned long long qosLevel;
@property _Bool skipRender;
@property(readonly) Class superclass;

@end

