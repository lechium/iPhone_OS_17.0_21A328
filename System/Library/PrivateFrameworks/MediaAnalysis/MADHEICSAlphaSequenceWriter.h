//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MADHEICSAlphaSequenceWriter
{
    NSDictionary *_crop;	// 8 = 0x8
    struct CF<CMPhotoCompressionSession *> _compressionSession;	// 16 = 0x10
    long long _sequenceIndex;	// 24 = 0x18
    int _status;	// 32 = 0x20
    struct CF<__CVPixelBufferPool *> _imagePixelBufferPool;	// 40 = 0x28
    struct CF<__CVPixelBufferPool *> _alphaPixelBufferPool;	// 48 = 0x30
}

+ (id)transcodeSequenceData:(id)arg1 maxDimension:(unsigned long long)arg2 outputWidth:(unsigned long long *)arg3 outputHeight:(unsigned long long *)arg4;	// IMP=0x0060000000024535
+ (int)getOutputWidth:(unsigned long long *)arg1 outputHeight:(unsigned long long *)arg2 sequenceData:(id)arg3;	// IMP=0x0060000000024431
- (id).cxx_construct;	// IMP=0x0000000000024734
- (void).cxx_destruct;	// IMP=0x00000000000246e7
- (id)finishWithEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000024341
- (int)_finishWithEndTime:(CDStruct_1b6d18a9)arg1 outputData:(id *)arg2;	// IMP=0x00000000000242ab
- (int)addPixelBuffer:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000024150
- (int)_addPixelBufferBGRA:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000023ed4
- (int)_addPixelBuffer420Alpha:(struct __CVBuffer *)arg1 withTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000023bdd
- (int)_createCompressionSessionLazy;	// IMP=0x0000000000023abf
- (int)demuxPixelBuffer:(struct __CVBuffer *)arg1 imagePixelBuffer:(struct __CVBuffer **)arg2 alphaPixelBuffer:(struct __CVBuffer **)arg3;	// IMP=0x0000000000023679
- (int)copyInputPlaneIndex:(unsigned long long)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 toOutputPlaneIndex:(unsigned long long)arg3 outputPixelBuffer:(struct __CVBuffer *)arg4 bytesPerPixel:(unsigned long long)arg5;	// IMP=0x000000000002356f
- (int)createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(int)arg4;	// IMP=0x0000000000023372
- (id)initWithFrameCount:(unsigned long long)arg1 crop:(struct CGRect *)arg2;	// IMP=0x00000000000232e0

@end
