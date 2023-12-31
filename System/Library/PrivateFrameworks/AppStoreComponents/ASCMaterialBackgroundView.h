//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface ASCMaterialBackgroundView : UIView
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a243
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void)layoutSubviews;	// IMP=0x000000000003a0f9
- (void)setImage:(id)arg1;	// IMP=0x000000000003a090
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003a07b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a050
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000039ea7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

