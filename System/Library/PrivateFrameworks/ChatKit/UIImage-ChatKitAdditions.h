//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (ChatKitAdditions)
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1 isFilled:(_Bool)arg2;	// IMP=0x001000000014f964
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1;	// IMP=0x001000000014f90e
+ (id)ckTemplateImageNamed:(id)arg1;	// IMP=0x001000000014f8b9
+ (id)ckImageNamed:(id)arg1 withTintColor:(id)arg2;	// IMP=0x001000000014f82f
+ (id)ckImageWithData:(id)arg1;	// IMP=0x001000000014eb7b
+ (id)abImageNamed:(id)arg1;	// IMP=0x001000000014eacc
+ (id)ckColorImageOfSize:(struct CGSize)arg1 withColor:(id)arg2;	// IMP=0x001000000014ea0f
+ (id)ckImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000014e973
+ (id)ckImageNamed:(id)arg1;	// IMP=0x001000000014e95f
+ (id)placeholderExtensionIcon;	// IMP=0x0010000000208c89
+ (id)badgeIconForImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0010000000208c21
- (id)ckImageWithTintColor:(id)arg1;	// IMP=0x001000000014f694
- (void)decode;	// IMP=0x001000000014f663
- (id)ck_imageCroppedToCircle;	// IMP=0x001000000014f4ba
- (id)__ck_ASTCRepresentation;	// IMP=0x001000000014f36c
- (struct CGRect)__ck_contentsCenter;	// IMP=0x001000000014f2e3
- (id)__ck_imageWithOrientation:(long long)arg1;	// IMP=0x001000000014ee61
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1 framed:(_Bool)arg2;	// IMP=0x001000000014ec7b
- (id)__ck_heicsImageData;	// IMP=0x00100000001bc6fc
- (id)__ck_pngImageData;	// IMP=0x00100000001bc6d2
- (_Bool)__ck_writePNGToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc61b
- (_Bool)__ck_writePNGToFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bc5be
- (id)__ck_imageWithTrimmedTransparency;	// IMP=0x00100000001ea977
- (_Bool)isContentDiscarded;	// IMP=0x0010000000208d7e
- (void)discardContentIfPossible;	// IMP=0x0010000000208d78
- (void)endContentAccess;	// IMP=0x0010000000208d72
- (_Bool)beginContentAccess;	// IMP=0x0010000000208d6a
- (id)iconForInterfaceStyle:(long long)arg1;	// IMP=0x0010000000208b0c
- (id)__ck_imageScaledToFillSize:(struct CGSize)arg1;	// IMP=0x001000000053f482
@end

