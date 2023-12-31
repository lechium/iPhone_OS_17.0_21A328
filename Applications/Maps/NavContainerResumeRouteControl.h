//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSLayoutConstraint, NSString, UIButton, UILabel, UILayoutGuide;

@interface NavContainerResumeRouteControl
{
    NSString *_titleText;	// 8 = 0x8
    UILayoutGuide *_contentLayoutGuide;	// 16 = 0x10
    NSLayoutConstraint *_topConstraint;	// 24 = 0x18
    NSLayoutConstraint *_bottomConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomConstraintWhenHidden;	// 40 = 0x28
    MISSING_TYPE *_contentHeightCollapsedConstraint;	// 48 = 0x30
    NSLayoutConstraint *_closeButtonHeightConstraint;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UIButton *_closeButton;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000006ab84f
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *closeButtonHeightConstraint; // @synthesize closeButtonHeightConstraint=_closeButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentHeightCollapsedConstraint; // @synthesize contentHeightCollapsedConstraint=_contentHeightCollapsedConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraintWhenHidden; // @synthesize bottomConstraintWhenHidden=_bottomConstraintWhenHidden;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (id)initialConstraintsForAnimatingPositionInStatusBarBackgroundView:(id)arg1;	// IMP=0x00100000006ab5d7
- (id)constraintsForPositionInStatusBarBackgroundView:(id)arg1;	// IMP=0x00100000006ab42a
- (void)showIfNeeded;	// IMP=0x00100000006ab296
- (void)hideIfNeeded;	// IMP=0x00100000006ab117
@property(retain, nonatomic) NSString *title;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00100000006ab04a
- (void)didMoveToSuperview;	// IMP=0x00100000006aadf9
- (void)_updateBackgroundColor;	// IMP=0x00100000006aad6d
- (void)_closeButtonAction;	// IMP=0x00100000006aad56
- (void)updateTheme;	// IMP=0x00100000006aad44
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000006a9be9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

