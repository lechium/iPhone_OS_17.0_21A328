//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvolution : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSArray *inputPoints;	// 80 = 0x50
    NSArray *inputWeights;	// 88 = 0x58
    NSNumber *inputLinearFilterModeEnabled;	// 96 = 0x60
}

- (id)outputImage;	// IMP=0x000000000006803a
- (id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3;	// IMP=0x0000000000065eb7
- (id)_CIConvolutionAdd_8;	// IMP=0x0000000000065e74
- (id)_CIConvolutionAdd_7;	// IMP=0x0000000000065e31
- (id)_CIConvolutionAdd_6;	// IMP=0x0000000000065dee
- (id)_CIConvolutionAdd_5;	// IMP=0x0000000000065dab
- (id)_CIConvolutionAdd_4;	// IMP=0x0000000000065d68
- (id)_CIConvolutionAdd_3;	// IMP=0x0000000000065d25
- (id)_CIConvolutionAdd_2;	// IMP=0x0000000000065ce2
- (id)_CIConvolutionAdd_1;	// IMP=0x0000000000065c9f
- (int)samplesPerPass;	// IMP=0x0000000000065c94

@end

