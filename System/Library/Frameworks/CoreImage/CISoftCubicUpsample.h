//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISoftCubicUpsample : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x00600000001a23ac
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001a2646
- (_Bool)_isIdentity;	// IMP=0x00000000001a2616
- (struct vec2)_scale;	// IMP=0x00000000001a254b

@end

