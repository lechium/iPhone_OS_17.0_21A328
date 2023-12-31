//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPetsDetectorEspresso
{
    int _maxNumRegions;	// 8 = 0x8
    VCPCNNModelEspresso *_modelEspresso;	// 16 = 0x10
    float *_inputData;	// 24 = 0x18
    NSString *_resConfig;	// 32 = 0x20
    int _srcWidth;	// 40 = 0x28
    int _srcHeight;	// 44 = 0x2c
}

+ (id)sharedModel:(id)arg1;	// IMP=0x006000000024a5c8
- (void).cxx_destruct;	// IMP=0x000000000024ab62
- (void)dealloc;	// IMP=0x000000000024ab1c
- (int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x000000000024a948
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x000000000024a8af
- (int)createModel:(int)arg1 srcWidth:(int)arg2;	// IMP=0x000000000024a700
- (id)initWithMaxNumRegions:(int)arg1;	// IMP=0x000000000024a3fe

@end

