//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparitySmoothing : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputNumIterations;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x0060000000071646
@property(copy) NSNumber *inputNumIterations; // @synthesize inputNumIterations;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000071981
- (id)outputImageMetal;	// IMP=0x0000000000071825
- (id)_customBoxBlur5Kernel;	// IMP=0x0000000000071805

@end

