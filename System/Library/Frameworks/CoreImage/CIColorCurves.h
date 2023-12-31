//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSData;

__attribute__((visibility("hidden")))
@interface CIColorCurves : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSData *inputCurvesData;	// 80 = 0x50
    CIVector *inputCurvesDomain;	// 88 = 0x58
    id inputColorSpace;	// 96 = 0x60
    CIImage *_curvesImage;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0060000000044d16
@property(retain, nonatomic) id inputColorSpace; // @synthesize inputColorSpace;
@property(copy, nonatomic) NSData *inputCurvesData; // @synthesize inputCurvesData;
@property(retain, nonatomic) CIVector *inputCurvesDomain; // @synthesize inputCurvesDomain;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000452e0
- (_Bool)_checkInputs;	// IMP=0x00000000000451c1
- (id)curvesImage;	// IMP=0x0000000000044f73
- (id)_kernel;	// IMP=0x0000000000044f30
- (void)dealloc;	// IMP=0x0000000000044c77

@end

