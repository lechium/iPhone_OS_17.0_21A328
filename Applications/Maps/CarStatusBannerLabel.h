//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUBlurView, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface CarStatusBannerLabel
{
    UILabel *_titleLabel;	// 8 = 0x8
    long long _sceneType;	// 16 = 0x10
    UIImageView *_chevronImageView;	// 24 = 0x18
    MUBlurView *_blurView;	// 32 = 0x20
    NSLayoutConstraint *_widthConstraint;	// 40 = 0x28
    NSLayoutConstraint *_topConstraint;	// 48 = 0x30
    NSLayoutConstraint *_bottomConstraint;	// 56 = 0x38
    long long _navigationGuidanceSignStyle;	// 64 = 0x40
    _Bool _disableBlur;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000241ea4
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x0010000000241e7f
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;	// IMP=0x0010000000241e6d
- (void)reloadContent;	// IMP=0x00100000002419ed
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000241920
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000002417f9
- (struct CGImage *)maskImage;	// IMP=0x0010000000241723
- (void)dealloc;	// IMP=0x0010000000241665
- (id)initWithSceneType:(long long)arg1;	// IMP=0x0010000000240c46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

