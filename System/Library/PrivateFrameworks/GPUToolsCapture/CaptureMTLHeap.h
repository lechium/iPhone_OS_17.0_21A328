//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLHeap, MTLHeapSPI;

@interface CaptureMTLHeap : NSObject
{
    id <MTLHeapSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004dc3f
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x000000000004db35
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000004d95e
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000004d79c
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;	// IMP=0x000000000004d5da
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;	// IMP=0x000000000004d403
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004d241
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;	// IMP=0x000000000004d08f
- (id)newAccelerationStructureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004ce7e
- (id)newAccelerationStructureWithDescriptor:(id)arg1;	// IMP=0x000000000004cc79
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;	// IMP=0x000000000004cb6f
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000004cb59
- (unsigned long long)unfilteredResourceOptions;	// IMP=0x000000000004cb43
@property(readonly) long long type;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long resourceOptions;
- (unsigned long long)protectionOptions;	// IMP=0x000000000004cad5
@property(copy) NSString *label;
@property(readonly) unsigned long long hazardTrackingMode;
- (unsigned long long)gpuAddress;	// IMP=0x000000000004c916
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000004c89b
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000004c88a
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000004c7c9
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000004c769
- (id)originalObject;	// IMP=0x000000000004c75b
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x000000000004c510
- (void)dealloc;	// IMP=0x000000000004c400
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004c1a8
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly) unsigned long long usedSize;
@property(readonly) id <MTLHeap> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000004bedc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
