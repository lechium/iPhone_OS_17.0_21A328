//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, VCPCNNMetalContext;

__attribute__((visibility("hidden")))
@interface VCPCNNData : NSObject
{
    _Bool _isInputOutput;	// 8 = 0x8
    NSMutableArray *_size;	// 16 = 0x10
    float *_data;	// 24 = 0x18
    VCPCNNMetalContext *_context;	// 32 = 0x20
}

+ (id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;	// IMP=0x006000000026e501
+ (id)cnnDataWithGPUContext:(id)arg1;	// IMP=0x006000000026e493
+ (id)cnnData;	// IMP=0x006000000026e47a
+ (Class)cnnDataClass;	// IMP=0x006000000026e430
- (void).cxx_destruct;	// IMP=0x000000000026f40d
@property __weak VCPCNNMetalContext *context; // @synthesize context=_context;
@property _Bool isInputOutput; // @synthesize isInputOutput=_isInputOutput;
@property float *data; // @synthesize data=_data;
@property(retain) NSMutableArray *size; // @synthesize size=_size;
- (int)softmax;	// IMP=0x000000000026f287
- (int)normalization;	// IMP=0x000000000026f14f
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;	// IMP=0x000000000026f00f
- (int)copyImage:(struct __CVBuffer *)arg1 withChunk:(int)arg2;	// IMP=0x000000000026ebc0
- (int)reallocGPUTemporalBuffers;	// IMP=0x000000000026ebb5
- (int)convertGPUData2CPU;	// IMP=0x000000000026ebad
- (int)convertCPUData2GPU;	// IMP=0x000000000026eba2
- (int)bufferAllocCPU;	// IMP=0x000000000026ea8e
- (int)randInit;	// IMP=0x000000000026e8f9
- (int)allocBuffers:(_Bool)arg1;	// IMP=0x000000000026e8e4
- (void)dealloc;	// IMP=0x000000000026e8a5
- (id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;	// IMP=0x000000000026e6ea
- (id)initWithGPUContext:(id)arg1;	// IMP=0x000000000026e625
- (id)init;	// IMP=0x000000000026e589

@end

