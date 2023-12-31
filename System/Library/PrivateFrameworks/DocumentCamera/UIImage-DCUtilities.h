//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (DCUtilities)
+ (id)dc_systemImageNamed:(id)arg1 fromFont:(id)arg2 scale:(long long)arg3;	// IMP=0x008000000001a6f9
+ (id)dc_systemImageNamed:(id)arg1 scale:(long long)arg2;	// IMP=0x008000000001a65b
+ (id)dc_systemImageNamed:(id)arg1 fromFont:(id)arg2;	// IMP=0x008000000001a593
+ (id)dc_systemImageNamed:(id)arg1 textStyle:(id)arg2 scale:(long long)arg3;	// IMP=0x008000000001a4c8
+ (id)dc_systemImageNamed:(id)arg1 textStyle:(id)arg2;	// IMP=0x008000000001a400
+ (id)dc_largeSystemImageNamed:(id)arg1;	// IMP=0x008000000001a3e9
+ (struct CGRect)dc_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x008000000001a280
+ (id)dc_orientationMetadataFromImageOrientation:(long long)arg1;	// IMP=0x0080000000019efe
+ (id)dc_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0080000000019ec0
+ (id)dc_imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x0080000000019eae
+ (id)dc_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x0080000000019d8e
+ (id)dc_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;	// IMP=0x0080000000019ca2
+ (id)dc_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x0080000000019a5a
- (id)dc_imageWithTextStyle:(id)arg1 scale:(long long)arg2;	// IMP=0x001000000001aa14
- (id)dc_imageWithTextStyle:(id)arg1;	// IMP=0x001000000001a9ae
- (id)dc_imageWithFont:(id)arg1 scale:(long long)arg2;	// IMP=0x001000000001a8e9
- (id)dc_imageWithFont:(id)arg1;	// IMP=0x001000000001a82a
- (id)dc_imageWithScale:(long long)arg1;	// IMP=0x001000000001a7c4
- (id)dc_imageDataWithUTType:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000001a128
- (id)dc_imageDataWithUTType:(id)arg1;	// IMP=0x001000000001a06d
- (id)dc_JPEGDataWithOrientation:(long long)arg1;	// IMP=0x0010000000019ff4
- (id)dc_JPEGData;	// IMP=0x0010000000019fc3
- (long long)dc_imageOrientation;	// IMP=0x0010000000019eec
- (struct CGImage *)dc_CGImage;	// IMP=0x0010000000019ed2
- (id)dc_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x001000000001991c
- (id)dc_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;	// IMP=0x0010000000019896
- (id)dc_scaledImageMinDimension:(double)arg1 scale:(double)arg2;	// IMP=0x0010000000019810
@end

