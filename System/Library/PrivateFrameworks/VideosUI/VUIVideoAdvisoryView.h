//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSDictionary, NSTimer, UIImage, VUIImageView, VUIPhotoSensitivityView, VUIVideoAdvisoryViewLayout;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryView : UIView
{
    VUIVideoAdvisoryViewLayout *_layout;	// 8 = 0x8
    VUIPhotoSensitivityView *_photoSensitivityView;	// 16 = 0x10
    VUIImageView *_logoImageView;	// 24 = 0x18
    UIImage *_photoSensitivityImage;	// 32 = 0x20
    UIView *_dividerView;	// 40 = 0x28
    NSArray *_legendViews;	// 48 = 0x30
    NSDictionary *_photoSensitivityDictionary;	// 56 = 0x38
    NSTimer *_photoSensitivityTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000296308
@property(retain, nonatomic) NSTimer *photoSensitivityTimer; // @synthesize photoSensitivityTimer=_photoSensitivityTimer;
@property(retain, nonatomic) NSDictionary *photoSensitivityDictionary; // @synthesize photoSensitivityDictionary=_photoSensitivityDictionary;
@property(copy, nonatomic) NSArray *legendViews; // @synthesize legendViews=_legendViews;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UIImage *photoSensitivityImage; // @synthesize photoSensitivityImage=_photoSensitivityImage;
@property(retain, nonatomic) VUIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) VUIPhotoSensitivityView *photoSensitivityView; // @synthesize photoSensitivityView=_photoSensitivityView;
@property(retain, nonatomic) VUIVideoAdvisoryViewLayout *layout; // @synthesize layout=_layout;
- (void)_configureSubviewsWithDictionary:(id)arg1;	// IMP=0x0000000000295d36
- (struct UIEdgeInsets)_dividerMargin;	// IMP=0x0000000000295cab
- (struct UIEdgeInsets)_legendsMargin;	// IMP=0x0000000000295c20
- (struct UIEdgeInsets)_logoMargin;	// IMP=0x0000000000295b95
- (struct CGSize)_dividerSize;	// IMP=0x0000000000295af4
- (struct CGSize)_legendSize;	// IMP=0x0000000000295a72
- (struct CGSize)_logoSize;	// IMP=0x00000000002959f0
- (struct UIEdgeInsets)_margin;	// IMP=0x0000000000295965
- (_Bool)_isPortrait;	// IMP=0x00000000002958e4
- (void)layoutSubviews;	// IMP=0x0000000000294db5
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000029496e
- (id)initWithAdvisoryInfoDictionary:(id)arg1;	// IMP=0x00000000002948ce
- (void)_hideWithCoreAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000297fe9
- (void)_hidePhotoSensitivityImage:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000297e85
- (void)_showPhotoSensitivityImage:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000297a8a
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000297813
- (void)_showWithCoreAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000296e1f
- (void)_showWithAnimationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000029662a
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000029639f

@end

