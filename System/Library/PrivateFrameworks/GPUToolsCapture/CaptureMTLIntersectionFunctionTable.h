//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLHeap, MTLIntersectionFunctionTable, MTLIntersectionFunctionTableSPI><MTLResourceSPI, MTLRenderPipelineState;

@interface CaptureMTLIntersectionFunctionTable : NSObject
{
    id <MTLIntersectionFunctionTableSPI><MTLResourceSPI> _baseObject;	// 8 = 0x8
    id <MTLDevice> _captureDevice;	// 16 = 0x10
    id <MTLBuffer> _captureBuffer;	// 24 = 0x18
    id <MTLHeap> _captureHeap;	// 32 = 0x20
    id <MTLComputePipelineState> _captureComputePipelineState;	// 40 = 0x28
    id <MTLRenderPipelineState> _captureRenderPipelineState;	// 48 = 0x30
    NSMutableArray *_functions;	// 56 = 0x38
    NSMutableArray *_buffers;	// 64 = 0x40
    struct GTTraceContext *_traceContext;	// 72 = 0x48
    struct GTTraceStream *_traceStream;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000a99dd
@property(readonly) NSArray *functionArray; // @synthesize functionArray=_functions;
- (void)waitUntilComplete;	// IMP=0x00000000000a99b3
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x00000000000a98a9
- (void)makeAliasable;	// IMP=0x00000000000a97c7
- (_Bool)isPurgeable;	// IMP=0x00000000000a97b1
- (_Bool)isComplete;	// IMP=0x00000000000a979b
- (_Bool)isAliasable;	// IMP=0x00000000000a9785
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x00000000000a9730
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000a9671
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000a95b2
- (void)dealloc;	// IMP=0x00000000000a94b6
- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a94a0
- (unsigned long long)uniqueIdentifier;	// IMP=0x00000000000a948a
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
- (unsigned long long)resourceIndex;	// IMP=0x00000000000a9406
@property(readonly) unsigned long long protectionOptions;
@property(copy) NSString *label;
@property(readonly) unsigned long long heapOffset;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) struct MTLResourceID gpuResourceID;
- (unsigned long long)gpuHandle;	// IMP=0x00000000000a91ef
- (void)setGlobalBufferOffset:(unsigned long long)arg1;	// IMP=0x00000000000a91b7
- (unsigned long long)globalBufferOffset;	// IMP=0x00000000000a91a1
- (void)setGlobalBuffer:(id)arg1;	// IMP=0x00000000000a9157
- (id)globalBuffer;	// IMP=0x00000000000a9141
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000a909a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000a9089
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000a8fc8
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000a8f68
- (id)originalObject;	// IMP=0x00000000000a8f5a
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x00000000000a8cc2
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000a8acd
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000a892d
- (void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a87ca
- (void)setFunctions:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000a853e
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000a8361
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000a8096
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000a7e9e
@property(readonly) id <MTLIntersectionFunctionTable> baseObject;
- (id)initWithBaseObject:(id)arg1 captureRenderPipelineState:(id)arg2 descriptor:(id)arg3;	// IMP=0x00000000000a7c3a
- (id)initWithBaseObject:(id)arg1 captureComputePipelineState:(id)arg2 descriptor:(id)arg3;	// IMP=0x00000000000a79e4
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2 descriptor:(id)arg3;	// IMP=0x00000000000a77b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
