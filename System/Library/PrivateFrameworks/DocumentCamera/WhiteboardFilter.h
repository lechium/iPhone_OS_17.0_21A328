//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface WhiteboardFilter : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    NSNumber *_stride;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x0060000000056564
- (void).cxx_destruct;	// IMP=0x0000000000056838
@property(copy, nonatomic) NSNumber *stride; // @synthesize stride=_stride;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x000000000005656c
- (id)whiteboardFilterKernel;	// IMP=0x0000000000056401

@end

