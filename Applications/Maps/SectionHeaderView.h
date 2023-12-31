//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HairlineView, MKVibrantLabel, MapsThemeButton, NSLayoutConstraint, NSMutableArray, NSString, UIFocusGuide;

@interface SectionHeaderView
{
    NSLayoutConstraint *_topConstraint;	// 8 = 0x8
    NSMutableArray *_constraints;	// 16 = 0x10
    _Bool _stacking;	// 24 = 0x18
    _Bool _firstNonEmptySection;	// 25 = 0x19
    _Bool _showsBottomHairline;	// 26 = 0x1a
    NSString *_title;	// 32 = 0x20
    NSString *_actionTitle;	// 40 = 0x28
    CDUnknownBlockType _actionHandler;	// 48 = 0x30
    MKVibrantLabel *_label;	// 56 = 0x38
    MapsThemeButton *_actionButton;	// 64 = 0x40
    HairlineView *_bottomHairlineView;	// 72 = 0x48
    UIFocusGuide *_focusGuide;	// 80 = 0x50
    double _firstNonEmptySectionTopMargin;	// 88 = 0x58
}

+ (_Bool)shouldStackWithTitle:(id)arg1 actionTitle:(id)arg2 availableWidth:(double)arg3 traitCollection:(id)arg4;	// IMP=0x004000000043f398
+ (id)_actionFontWithTraitCollection:(id)arg1;	// IMP=0x001000000043f321
+ (id)_titleFontWithTraitCollection:(id)arg1;	// IMP=0x001000000043f2aa
+ (id)_effectiveTraitCollectionWithTraitCollection:(id)arg1;	// IMP=0x001000000043f22e
+ (id)_maximumContentSizeCategory;	// IMP=0x001000000043f21a
+ (double)_titleBottomMargin;	// IMP=0x001000000043f1bd
+ (double)_topMarginWhenFirstNonEmptySection:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x001000000043f103
+ (double)heightWhenFirstNonEmptySection:(_Bool)arg1 title:(id)arg2 actionTitle:(id)arg3 availableWidth:(double)arg4 traitCollection:(id)arg5;	// IMP=0x001000000043efa2
+ (id)headerFooterViewReuseIdentifier;	// IMP=0x001000000043ef90
- (void).cxx_destruct;	// IMP=0x002000000044124c
@property(nonatomic) double firstNonEmptySectionTopMargin; // @synthesize firstNonEmptySectionTopMargin=_firstNonEmptySectionTopMargin;
@property(retain, nonatomic) UIFocusGuide *focusGuide; // @synthesize focusGuide=_focusGuide;
@property(retain, nonatomic) HairlineView *bottomHairlineView; // @synthesize bottomHairlineView=_bottomHairlineView;
@property(retain, nonatomic) MapsThemeButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MKVibrantLabel *label; // @synthesize label=_label;
- (id);	// IMP=0x0010000000441194
@property(nonatomic) _Bool showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(nonatomic) _Bool firstNonEmptySection; // @synthesize firstNonEmptySection=_firstNonEmptySection;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_didTapActionButton;	// IMP=0x00100000004410bf
- (void)setFirstNonEmptySection:(_Bool)arg1 topMargin:(double)arg2;	// IMP=0x001000000044101b
- (void)layoutSubviews;	// IMP=0x0010000000440d88
- (void)_contentSizeChanged:(id)arg1;	// IMP=0x0010000000440d5a
- (_Bool)updateConstraintsWithAvailableWidthWithoutMargins:(double)arg1;	// IMP=0x0010000000440c2d
- (void)_setConstraintsByStacking:(_Bool)arg1;	// IMP=0x001000000043fedc
- (void)setAccessibilityIdentifiersWithBaseString:(id)arg1;	// IMP=0x001000000043fdb5
- (_Bool)_defaultShouldShowBottomHairline;	// IMP=0x001000000043fda3
- (void)_updateTopConstraint;	// IMP=0x001000000043fcb3
- (void)_updateFonts;	// IMP=0x001000000043fb63
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000043fa06
- (void)clearContents;	// IMP=0x001000000043f989
- (id)init;	// IMP=0x001000000043f5dc

@end

