//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLCommandQueue, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MTLCommandBuffer, MTLCommandBufferSPI, MTLCommandQueue, MTLDeadlineProfile, MTLDevice, MTLLogContainer, MTLSharedEvent;

@interface CaptureMTLCommandBuffer : NSObject
{
    CaptureMTLCommandQueue *_captureCommandQueue;	// 8 = 0x8
    id <MTLCommandBufferSPI> _baseObject;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _retainMutex;	// 40 = 0x28
    struct apr_pool_t *_pool;	// 104 = 0x68
    id <MTLSharedEvent> _downloadEvent;	// 112 = 0x70
    id <MTLSharedEvent> _accelerationStructureDescriptorProcessEvent;	// 120 = 0x78
    unsigned long long _accelerationStructureDescriptorCopyEventValue;	// 128 = 0x80
    NSMutableArray *_downloadPoints;	// 136 = 0x88
    NSMutableArray *_scheduledDispatchArray;	// 144 = 0x90
    NSMutableArray *_completedDispatchArray;	// 152 = 0x98
    _Bool _presentDrawableUsed;	// 160 = 0xa0
    unsigned long long _layerRef;	// 168 = 0xa8
    _Bool _isCapturing;	// 176 = 0xb0
    _Bool _isCommited;	// 177 = 0xb1
    NSMutableSet *_retainedObjects;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000388c0
@property(readonly, nonatomic) _Bool presentDrawableUsed; // @synthesize presentDrawableUsed=_presentDrawableUsed;
@property(nonatomic) _Bool isCommited; // @synthesize isCommited=_isCommited;
@property(readonly, nonatomic) _Bool isCapturing; // @synthesize isCapturing=_isCapturing;
@property(readonly, nonatomic) NSMutableSet *retainedObjects; // @synthesize retainedObjects=_retainedObjects;
- (void)waitUntilScheduled;	// IMP=0x00000000000387a1
- (void)waitUntilCompleted;	// IMP=0x00000000000386bf
- (void)setResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000384df
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x0000000000038430
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000000383c6
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x000000000003835c
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;	// IMP=0x00000000000380cd
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000037e8f
- (id)resourceStateCommandEncoder;	// IMP=0x0000000000037cc2
- (id)renderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000037a84
- (void)pushDebugGroup:(id)arg1;	// IMP=0x0000000000037907
- (void)presentDrawable:(id)arg1 options:(id)arg2;	// IMP=0x0000000000037837
- (void)popDebugGroup;	// IMP=0x0000000000037755
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000037517
- (void)encodeSignalEventScheduled:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000003745a
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;	// IMP=0x0000000000037393
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x00000000000371fb
- (void)encodeDashboardTagForResourceGroup:(id)arg1;	// IMP=0x000000000003707e
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 values:(const unsigned long long *)arg3 indices:(const unsigned long long *)arg4 count:(unsigned long long)arg5;	// IMP=0x0000000000036e7e
- (void)encodeDashboardFinalizeForResourceGroup:(id)arg1 dashboard:(unsigned long long)arg2 value:(unsigned long long)arg3 forIndex:(unsigned long long)arg4;	// IMP=0x0000000000036ccc
- (void)encodeConditionalAbortEvent:(id)arg1;	// IMP=0x0000000000036c1e
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000036b41
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000036a64
- (void)dropResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000036884
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;	// IMP=0x000000000003686e
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;	// IMP=0x000000000003668c
- (id)computeCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x000000000003644e
- (id)computeCommandEncoder;	// IMP=0x0000000000036281
- (id)blitCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000036043
- (id)blitCommandEncoder;	// IMP=0x0000000000035e76
- (void)addPurgedResource:(id)arg1;	// IMP=0x0000000000035cf9
- (void)addPurgedHeap:(id)arg1;	// IMP=0x0000000000035b7c
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) unsigned long long status;
@property(readonly) _Bool retainedReferences;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property(readonly) id <MTLLogContainer> logs;
@property(readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(copy) NSString *label;
@property(readonly) double kernelStartTime;
@property(readonly) double kernelEndTime;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) unsigned long long errorOptions;
@property(readonly) NSError *error;
@property(readonly) id <MTLDevice> device;
@property(readonly, retain) id <MTLDeadlineProfile> deadlineProfile;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) double GPUStartTime;
@property(readonly) double GPUEndTime;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000003572b
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000003571a
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000035659
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000355f9
- (id)originalObject;	// IMP=0x00000000000355eb
- (id)accelerationStructureCommandEncoderWithDescriptor:(id)arg1;	// IMP=0x0000000000035392
- (id)accelerationStructureCommandEncoder;	// IMP=0x00000000000351af
- (unsigned long long)accelerationStructureCommandEncoderPreamble;	// IMP=0x000000000003510d
- (id)debugCommandEncoder;	// IMP=0x00000000000350a3
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034f5b
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000000034db5
- (void)presentDrawable:(id)arg1;	// IMP=0x0000000000034c29
- (void)trackPresent:(id)arg1;	// IMP=0x0000000000034b89
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000034a41
- (_Bool)commitAndWaitUntilSubmittedWithDeadline:(unsigned long long)arg1;	// IMP=0x00000000000348f6
- (_Bool)commitAndWaitUntilSubmitted;	// IMP=0x00000000000347bf
- (void)commitWithDeadline:(unsigned long long)arg1;	// IMP=0x00000000000346b7
- (void)commitAndHold;	// IMP=0x00000000000345bd
- (void)commit;	// IMP=0x00000000000344c3
- (void)enqueue;	// IMP=0x00000000000343cc
- (_Bool)isEnqueued;	// IMP=0x00000000000343af
- (void)addRequestsToDownloadQueue:(id)arg1;	// IMP=0x0000000000033a17
- (void)_preCommitWithIndex:(unsigned long long)arg1;	// IMP=0x000000000003334d
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x0000000000032e43
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;	// IMP=0x0000000000032e31
- (void)unionRetainSet:(id)arg1;	// IMP=0x0000000000032dc6
- (void)dealloc;	// IMP=0x0000000000032a00
@property(readonly) id <MTLSharedEvent> accelerationStructureDescriptorProcessEvent; // @synthesize accelerationStructureDescriptorProcessEvent=_accelerationStructureDescriptorProcessEvent;
@property(readonly) CaptureMTLCommandQueue *captureCommandQueue;
- (id)initWithBaseObject:(id)arg1 captureCommandQueue:(id)arg2 funcRef:(struct GTTraceFuncRef)arg3;	// IMP=0x000000000003259f
- (void)_encodeDownloadPoint;	// IMP=0x0000000000032415
@property(readonly) id <MTLCommandBuffer> baseObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

