//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class NSString, TMLRect;

@interface UIImage (TouchML)
+ (void)initializeJSContext:(id)arg1;	// IMP=0x001000000005d2e0
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) TMLRect *bounds;
- (id)cropImageToRect:(struct CGRect)arg1;	// IMP=0x001000000005d6af
- (id)resizableImage:(id)arg1:(long long)arg2;	// IMP=0x001000000005d63a
- (id)colorPattern;	// IMP=0x001000000005d512
- (id)withConfiguration:(id)arg1;	// IMP=0x001000000005d500
- (id)withTintColor:(id)arg1;	// IMP=0x001000000005d4ee
- (id)withRenderingMode:(long long)arg1;	// IMP=0x001000000005d4dc
@property(readonly, nonatomic) id CGImageRef;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel;
@property(retain, nonatomic) NSString *accessibilityLanguage;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(copy, nonatomic) NSString *accessibilityValue;
@property(readonly, nonatomic) double scale;
@end

