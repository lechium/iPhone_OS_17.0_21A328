//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLOnce, UIImage;

@interface CRLImage : NSObject
{
    struct CGImage *mCachedSliceableImage;	// 8 = 0x8
    struct __CFDictionary *mImageSlices;	// 16 = 0x10
    CRLOnce *mImageSlicesOnce;	// 24 = 0x18
    id mCachedSystemImage;	// 32 = 0x20
    CRLOnce *mCachedImageOnce;	// 40 = 0x28
}

+ (id)crl_quickInspectorImageNamed:(id)arg1 isPrivateImage:(_Bool)arg2 isBundledImage:(_Bool)arg3;	// IMP=0x0020000000519197
+ (id)crl_quickInspectorBundledImageNamed:(id)arg1;	// IMP=0x0010000000519176
+ (id)crl_quickInspectorImageNamed:(id)arg1 isPrivateImage:(_Bool)arg2;	// IMP=0x001000000051915a
+ (id)crl_quickInspectorImageNamed:(id)arg1;	// IMP=0x001000000051913c
+ (id)imageWithPrivateSystemImageNamed:(id)arg1;	// IMP=0x00100000005190ef
+ (id)imageWithPrivateSystemImageNamed:(id)arg1 pointSize:(double)arg2;	// IMP=0x0010000000519090
+ (id)imageWithSystemImageNamed:(id)arg1;	// IMP=0x0010000000519043
+ (id)imageWithSystemImageNamed:(id)arg1 pointSize:(double)arg2;	// IMP=0x0010000000518fe4
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0010000000518f9e
+ (id)imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x0010000000518f6f
+ (id)imageWithData:(id)arg1;	// IMP=0x0010000000518f26
+ (id)imageWithContentsOfFile:(id)arg1;	// IMP=0x0010000000518edd
+ (id)imageNamed:(id)arg1;	// IMP=0x0010000000518ec4
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000518e59
+ (id)imageWithUIImage:(id)arg1;	// IMP=0x001000000051d58c
- (void).cxx_destruct;	// IMP=0x001000000051d559
- (struct CGImage *)CGImageForContentsScale:(double)arg1;	// IMP=0x001000000051d547
- (id)stretchedImageOfSize:(struct CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;	// IMP=0x001000000051cd45
- (id)PNGRepresentation;	// IMP=0x001000000051cd2b
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;	// IMP=0x001000000051ccff
- (id)TIFFRepresentation;	// IMP=0x001000000051cce5
- (_Bool)isEmpty;	// IMP=0x001000000051cbf4
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x001000000051c11a
- (void)dealloc;	// IMP=0x001000000051c09f
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithPrivateSystemImageNamed:(id)arg1 pointSize:(double)arg2;	// IMP=0x001000000051b5bc
- (id)initWithPrivateSystemImageNamed:(id)arg1;	// IMP=0x001000000051b215
- (id)initWithSystemImageNamed:(id)arg1 pointSize:(double)arg2;	// IMP=0x001000000051ae6e
- (id)initWithSystemImageNamed:(id)arg1;	// IMP=0x001000000051aac7
- (id)initWithImageSourceRef:(struct CGImageSource *)arg1;	// IMP=0x001000000051a729
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x001000000051a38b
- (id)initWithCGImage:(struct CGImage *)arg1;	// IMP=0x0010000000519fed
- (id)initWithData:(id)arg1;	// IMP=0x0010000000519c46
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x001000000051989f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000519501
- (id)init;	// IMP=0x001000000051948c
@property(readonly, nonatomic) UIImage *UIImage;
- (id)initWithUIImage:(id)arg1;	// IMP=0x001000000051d5d9
- (id)compositeImageWithOverlayImage:(id)arg1 overlayTintColor:(id)arg2;	// IMP=0x001000000051df40
- (id)compositedImageWithColor:(id)arg1 alpha:(double)arg2 blendMode:(int)arg3;	// IMP=0x001000000051ddb9
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orContentsScaleProvider:(id)arg3;	// IMP=0x001000000051da6e

@end
