//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (SBFSurfaceUtilities)
+ (id)sbf_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x006000000003c229
+ (id)sbf_imageFromBGRAContextWithSize:(struct CGSize)arg1 scale:(double)arg2 colorSpace:(struct CGColorSpace *)arg3 withAlpha:(_Bool)arg4 pool:(id)arg5 drawing:(CDUnknownBlockType)arg6 encapsulation:(CDUnknownBlockType)arg7;	// IMP=0x006000000003dd88
+ (id)sbf_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5 encapsulation:(CDUnknownBlockType)arg6;	// IMP=0x006000000003dd68
+ (id)sbf_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5;	// IMP=0x006000000003dd48
+ (unsigned long long)sbf_bytesNeededForSize:(struct CGSize)arg1 scale:(double)arg2 withContextType:(long long)arg3;	// IMP=0x006000000003dbd3
- (id)sbf_resizeImageToSize:(struct CGSize)arg1;	// IMP=0x001000000003c9c1
- (id)sbf_resizeImageToSize:(struct CGSize)arg1 preservingAspectRatio:(_Bool)arg2;	// IMP=0x001000000003c8d0
- (id)sbf_scaleImage:(double)arg1 canUseIOSurface:(_Bool)arg2;	// IMP=0x001000000003c7b4
- (id)sbf_scaleImage:(double)arg1;	// IMP=0x001000000003c79d
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3 canUseIOSurface:(_Bool)arg4;	// IMP=0x001000000003c4be
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 canUseIOSurface:(_Bool)arg3;	// IMP=0x001000000003c4a5
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3;	// IMP=0x001000000003c48e
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2;	// IMP=0x001000000003c477
- (long long)sbf_EXIFOrientation;	// IMP=0x001000000003cce0
- (id)sbf_ATXSafeCGImageBackedImage;	// IMP=0x001000000003d9ca
- (id)sbf_imageByConvertingToColorSpace:(struct CGColorSpace *)arg1 type:(long long)arg2;	// IMP=0x001000000003d14b
- (id)sbf_imageUsingContextType:(long long)arg1;	// IMP=0x001000000003d134
- (id)sbf_imageByManipulatingInDeviceColorSpaceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003cd25
- (struct CGColorSpace *)sbf_colorSpace;	// IMP=0x001000000003ccfa
- (id)sbf_memoryMappedImageWithPool:(id)arg1;	// IMP=0x001000000003e100
- (id)sbf_downscaledImageByDrawingIntoContextOfType:(long long)arg1 downscaleFactor:(double)arg2;	// IMP=0x001000000003ddca
- (id)sbf_imageByDrawingIntoContextOfType:(long long)arg1;	// IMP=0x001000000003ddb0
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(_Bool)arg2;	// IMP=0x001000000003e378
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;	// IMP=0x001000000003e364
- (id)sbf_CGImageBackedImage;	// IMP=0x001000000003e34b
- (id)sbf_imageByTilingCenterPixel;	// IMP=0x001000000003e573
- (id)sbf_imageHashData;	// IMP=0x001000000003e62f
- (id)sbf_resizedImageForCurrentMagnifyMode;	// IMP=0x001000000004e942
@end

