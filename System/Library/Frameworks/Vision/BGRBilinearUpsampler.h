//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSImageBilinearScale, MPSImageGaussianBlur, NSString;
@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface BGRBilinearUpsampler : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLLibrary> _library;	// 24 = 0x18
    MPSImageGaussianBlur *_blurFilter;	// 32 = 0x20
    MPSImageBilinearScale *_bilinearScale;	// 40 = 0x28
    struct __CVMetalTextureCache *_metalTextureCache;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 56 = 0x38
    double _featheringSigma;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000011edda
@property double featheringSigma; // @synthesize featheringSigma=_featheringSigma;
- (id)textureFromPixelBuffer:(struct __CVBuffer *)arg1 format:(unsigned long long)arg2;	// IMP=0x000000000011ecca
- (id)createTextureOfSize:(struct CGSize)arg1 withFormat:(unsigned long long)arg2;	// IMP=0x000000000011ec01
- (_Bool)applyEspressoMask:(const CDStruct_0a65202a *)arg1 toImage:(struct __CVBuffer *)arg2 highResMaskBuffer:(struct __CVBuffer *)arg3;	// IMP=0x000000000011eada
- (_Bool)applyPixelBufferMask:(struct __CVBuffer *)arg1 toImage:(struct __CVBuffer *)arg2 highResMaskBuffer:(struct __CVBuffer *)arg3;	// IMP=0x000000000011ea05
- (_Bool)applyTextureMask:(id)arg1 toImage:(struct __CVBuffer *)arg2 highResMaskBuffer:(struct __CVBuffer *)arg3;	// IMP=0x000000000011e896
- (_Bool)handlePostProcessingRequest:(CDStruct_a4900c83 *)arg1;	// IMP=0x000000000011e876
- (id)computePipelineStateFor:(id)arg1;	// IMP=0x000000000011e80c
- (void)dealloc;	// IMP=0x000000000011e798
- (id)init;	// IMP=0x000000000011e73a
- (id)initWithMetalDevice:(id)arg1;	// IMP=0x000000000011e5c4
- (id)libraryReturnError:(id *)arg1;	// IMP=0x000000000011e4f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
