//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNAvatarImageUtilities : NSObject
{
}

+ (id)paddedImage:(id)arg1 withPadding:(double)arg2;	// IMP=0x00800000000ccd5c
+ (id)croppedAndCenteredAvatarImageForImage:(id)arg1 usingTransparencyInsets:(struct UIEdgeInsets)arg2 widthMultiplier:(double)arg3;	// IMP=0x00800000000ccbd6
+ (id)croppedAndCenteredAvatarImageForImage:(id)arg1 widthMultiplier:(double)arg2;	// IMP=0x00800000000ccb36
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(_Bool)arg2;	// IMP=0x00800000000cc901
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1;	// IMP=0x00800000000cc8ed
+ (struct UIEdgeInsets)transparencyInsetsForImage:(id)arg1 requiringFullOpacity:(_Bool)arg2;	// IMP=0x00800000000cc64f

@end

