//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HairlineView, MapsThemeButton, ModalCardHeaderConfiguration, NSLayoutConstraint, NSString, UILabel, UIStackView;

@interface ModalCardHeaderView
{
    NSLayoutConstraint *_topToTitleBaselineConstraint;	// 8 = 0x8
    NSLayoutConstraint *_titleBaselineToBottomConstraint;	// 16 = 0x10
    NSLayoutConstraint *_titleLeadingConstraint;	// 24 = 0x18
    _Bool _useAdaptiveFont;	// 32 = 0x20
    ModalCardHeaderConfiguration *_configuration;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    MapsThemeButton *_leadingButton;	// 56 = 0x38
    MapsThemeButton *_trailingButton;	// 64 = 0x40
    HairlineView *_bottomHairline;	// 72 = 0x48
    double _scrollViewOffset;	// 80 = 0x50
    UIStackView *_stackView;	// 88 = 0x58
}

+ (id)createModalBarButtonItem;	// IMP=0x0040000000a41aee
- (void).cxx_destruct;	// IMP=0x0020000000a42adc
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) _Bool useAdaptiveFont; // @synthesize useAdaptiveFont=_useAdaptiveFont;
@property(nonatomic) double scrollViewOffset; // @synthesize scrollViewOffset=_scrollViewOffset;
@property(readonly, nonatomic) HairlineView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(readonly, nonatomic) MapsThemeButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(readonly, nonatomic) MapsThemeButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ModalCardHeaderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *title;
- (void)_createConstraintsSpecificToConfiguration;	// IMP=0x0010000000a42678
- (void)_setupInitialConstraints;	// IMP=0x0010000000a42403
- (void)_updateSizeForCurrentConfiguration;	// IMP=0x0010000000a4200e
- (void)_customInit;	// IMP=0x0010000000a41bba
- (void)_setMask:(id)arg1;	// IMP=0x0010000000a419aa
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000a418d9
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a4187f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a41825

@end
