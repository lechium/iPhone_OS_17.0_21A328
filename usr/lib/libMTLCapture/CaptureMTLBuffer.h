//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLBuffer, MTLBufferSPI><MTLResourceSPI, MTLDevice, MTLHeap;

@interface CaptureMTLBuffer : NSObject
{
    id <MTLBufferSPI><MTLResourceSPI> _baseObject;	// 8 = 0x8
    id <MTLDevice> _captureDevice;	// 16 = 0x10
    id <MTLHeap> _captureHeap;	// 24 = 0x18
    id <MTLBuffer> _captureRemoteStorageBuffer;	// 32 = 0x20
    struct GTTraceContext *_traceContext;	// 40 = 0x28
    struct GTTraceStream *_traceStream;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000316c5
- (id)_quicklookData;	// IMP=0x00000000000316b4
- (void)waitUntilComplete;	// IMP=0x000000000003169e
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x0000000000031594
- (void)removeAllDebugMarkers;	// IMP=0x000000000003157e
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;	// IMP=0x0000000000031343
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;	// IMP=0x00000000000310ee
- (_Bool)isPurgeable;	// IMP=0x0000000000030ff5
- (_Bool)isComplete;	// IMP=0x0000000000030fdf
- (_Bool)isAliasable;	// IMP=0x0000000000030ee6
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x0000000000030e91
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000030dd2
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000030d13
- (void)didModifyRange:(struct _NSRange)arg1;	// IMP=0x0000000000030bd2
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000030bbc
- (struct __IOSurface *)_aneIOSurface;	// IMP=0x0000000000030ba6
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@property(nonatomic) unsigned long long parentGPUSize;
@property(nonatomic) unsigned long long parentGPUAddress;
@property(readonly) unsigned long long length;
@property(copy) NSString *label;
@property(readonly) struct __IOSurface *iosurface;
@property(readonly) unsigned long long heapOffset;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long gpuAddress;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000030742
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000030731
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000030670
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000030610
- (id)originalObject;	// IMP=0x0000000000030602
- (void)makeAliasable;	// IMP=0x0000000000030500
- (void *)contents;	// IMP=0x00000000000304ce
@property(readonly) id <MTLHeap> heap;
@property(readonly) id <MTLBuffer> baseObject;
- (void)dealloc;	// IMP=0x0000000000030370
- (id)initWithBaseObject:(id)arg1 captureBuffer:(id)arg2;	// IMP=0x0000000000030267
- (id)initWithBaseObject:(id)arg1 captureHeap:(id)arg2;	// IMP=0x000000000003013b
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000003005d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) Class superclass;

@end

