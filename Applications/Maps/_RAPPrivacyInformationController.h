//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UIScrollView, UISwitch, UIView;

@interface _RAPPrivacyInformationController : UIViewController
{
    long long _appearance;	// 8 = 0x8
    long long _shortcutType;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    UISwitch *_followUpSwitch;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    UIView *_containerView;	// 56 = 0x38
    UIView *_bottomView;	// 64 = 0x40
    UIButton *_skipButton;	// 72 = 0x48
    UIImageView *_iconView;	// 80 = 0x50
    UIImage *_portraitIcon;	// 88 = 0x58
    UIImage *_landscapeIcon;	// 96 = 0x60
    _Bool _shouldShowPrivacy;	// 104 = 0x68
    _Bool _hasValidEmail;	// 105 = 0x69
    MISSING_TYPE *_isUserEnteredEmailAddress;	// 106 = 0x6a
    NSString *_emailAddress;	// 112 = 0x70
    _Bool _accessibilityEnabled;	// 120 = 0x78
    NSMutableArray *_portraitSpecificConstraints;	// 128 = 0x80
    NSMutableArray *_landscapeSpecificConstraints;	// 136 = 0x88
    NSLayoutConstraint *_portraitAccessibilityConstraint;	// 144 = 0x90
    CDUnknownBlockType _completion;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000cab437
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_skipButtonTapped;	// IMP=0x0010000000cab3ab
- (void)_sendButtonTapped;	// IMP=0x0010000000cab2fb
- (void)acceptPrivacyAgreement;	// IMP=0x0010000000cab1b2
- (id)_getEvent;	// IMP=0x0010000000cab14c
- (void)cancelPrivacyAgreement;	// IMP=0x0010000000caaf98
- (id)_createSkipButton;	// IMP=0x0010000000caad5c
- (id)_createSendButton;	// IMP=0x0010000000caaaea
- (id)_setupBottomViewInView:(id)arg1 commonConstraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000caa2e3
- (id)_createDetailsViewInView:(id)arg1 constraints:(id)arg2;	// IMP=0x0010000000ca9d58
- (id)_createSwitchViewInView:(id)arg1 constraints:(id)arg2;	// IMP=0x0010000000ca96a1
- (id)setupContactViewsInContainer:(id)arg1 constraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000ca934a
- (id)setupTitleViewsInContainer:(id)arg1 constraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000ca8c12
- (id)_setupContainerViewInView:(id)arg1 constraints:(id)arg2 portraitSpecificConstraints:(id)arg3 landscapeSpecificConstraints:(id)arg4;	// IMP=0x0010000000ca7fc0
- (void)setupViews;	// IMP=0x0010000000ca7e58
- (void)updateCenterYConstraintIfNeeded;	// IMP=0x0010000000ca7ddd
- (void)setSkipButtonFont;	// IMP=0x0010000000ca7d42
- (id)sendButtonFont;	// IMP=0x0010000000ca7d21
- (id)followUpDetailFont;	// IMP=0x0010000000ca7d00
- (id)followUpLabelFont;	// IMP=0x0010000000ca7cdf
- (void)setSubtitleFont;	// IMP=0x0010000000ca7c68
- (id)titleFont;	// IMP=0x0010000000ca7c47
- (void)contentSizeDidChange:(id)arg1;	// IMP=0x0010000000ca7bcd
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000ca7a21
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000ca78f8
- (id)defaultPOIStyleAttributes;	// IMP=0x0010000000ca78a6
- (id)_obViewController;	// IMP=0x0010000000ca753b
- (void)viewDidLoad;	// IMP=0x0010000000ca6e2e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000ca6e1a
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000ca6e06
- (id)initWithShortcutType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ca6dc7
- (id)initWithCompletion:(CDUnknownBlockType)arg1 emailAddress:(id)arg2 isUserEnteredEmailAddress:(_Bool)arg3;	// IMP=0x0010000000ca6d4e
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ca6c9d

@end
