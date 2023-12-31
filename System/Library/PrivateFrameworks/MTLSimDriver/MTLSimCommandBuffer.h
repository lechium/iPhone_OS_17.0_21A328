//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLCommandBuffer.h>

@class MTLResourceList, NSDictionary, NSError, NSMutableDictionary, NSString;
@protocol MTLCommandQueue, MTLDeadlineProfile, MTLDevice, MTLLogContainer;

__attribute__((visibility("hidden")))
@interface MTLSimCommandBuffer : _MTLCommandBuffer
{
    struct StorageEntry *commandHead;	// 480 = 0x1e0
    struct BufferStorageEntry *bufferHead;	// 488 = 0x1e8
    unsigned long long segmentCount;	// 496 = 0x1f0
    struct StorageEntry *commandCurrentStorage;	// 504 = 0x1f8
    struct StorageEntry *commandTail;	// 512 = 0x200
    struct StorageEntry *commandPrevious;	// 520 = 0x208
    struct BufferStorageEntry *bufferCurrentStorage;	// 528 = 0x210
    unsigned long long currentStorageOffset;	// 536 = 0x218
    _Bool continuation;	// 544 = 0x220
    unsigned int _reference;	// 548 = 0x224
    unsigned long long _protectionOptions;	// 552 = 0x228
    MTLResourceList *_resourceList;	// 560 = 0x230
    id <MTLDevice> device;	// 568 = 0x238
    CDUnknownBlockType splitHandler;	// 576 = 0x240
}

@property(copy) CDUnknownBlockType splitHandler; // @synthesize splitHandler;
@property(readonly) id <MTLDevice> device; // @synthesize device;
- (unsigned long long)protectionOptions;	// IMP=0x000000000000ba49
- (void)setProtectionOptions:(unsigned long long)arg1;	// IMP=0x000000000000b9fd
- (void)addPurgedResource:(id)arg1;	// IMP=0x000000000000b9f7
- (void)addPurgedHeap:(id)arg1;	// IMP=0x000000000000b9f1
- (void)beginContinuation;	// IMP=0x000000000000b9d8
- (void)merge:(id)arg1;	// IMP=0x000000000000b949
- (void *)getCommandBufferBytes:(unsigned long long)arg1;	// IMP=0x000000000000b837
- (void)endEncoding;	// IMP=0x000000000000b803
- (void)split;	// IMP=0x000000000000b787
- (void *)getBufferBytes:(unsigned long long)arg1 alignment:(unsigned long long)arg2 buffer:(id *)arg3 offset:(unsigned long long *)arg4;	// IMP=0x000000000000b612
- (_Bool)addStateReference:(id)arg1;	// IMP=0x000000000000b5f2
- (_Bool)addResourceReference:(id)arg1 isWrite:(_Bool)arg2;	// IMP=0x000000000000b5d2
- (id)resourceStateCommandEncoder;	// IMP=0x000000000000b5ae
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;	// IMP=0x000000000000b59c
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000000b500
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;	// IMP=0x000000000000b45b
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000000b3bf
- (void *)getCommandBytes:(unsigned long long)arg1 forCommand:(unsigned int)arg2;	// IMP=0x000000000000b383
- (id)renderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000b321
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000b2bf
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000b29b
- (id)computeCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000b239
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;	// IMP=0x000000000000b1a8
- (id)computeCommandEncoder;	// IMP=0x000000000000b12a
- (id)blitCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000000b0c8
- (id)blitCommandEncoder;	// IMP=0x000000000000b04a
- (_Bool)commitAndWaitUntilSubmitted;	// IMP=0x000000000000b019
@property(readonly) unsigned int commandBufferRef;
- (void)dealloc;	// IMP=0x000000000000af01
- (id)initWithQueue:(id)arg1 retainedReferences:(_Bool)arg2;	// IMP=0x000000000000ae36

// Remaining properties
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly, retain) id <MTLDeadlineProfile> deadlineProfile;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSError *error;
@property(readonly) unsigned long long errorOptions;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) unsigned long long hash;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(readonly) id <MTLLogContainer> logs;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) NSDictionary *profilingResults;
@property(readonly) _Bool retainedReferences;
@property(readonly) unsigned long long status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;

@end

