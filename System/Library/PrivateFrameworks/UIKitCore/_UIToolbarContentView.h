//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSMapTable, _UIBarButtonItemData, _UIButtonBar, _UIPointerInteractionAssistant;

__attribute__((visibility("hidden")))
@interface _UIToolbarContentView
{
    _UIButtonBar *_buttonBar;	// 128 = 0x80
    _UIPointerInteractionAssistant *_assistant;	// 136 = 0x88
    NSLayoutConstraint *_buttonBarLeadingConstraint;	// 144 = 0x90
    NSLayoutConstraint *_buttonBarTrailingConstraint;	// 152 = 0x98
    NSMapTable *_absorptionTable;	// 160 = 0xa0
    double _standardEdgeSpacing;	// 168 = 0xa8
    _Bool _compactMetrics;	// 176 = 0xb0
    long long _itemDistribution;	// 184 = 0xb8
    _UIBarButtonItemData *_plainItemAppearance;	// 192 = 0xc0
    _UIBarButtonItemData *_doneItemAppearance;	// 200 = 0xc8
    struct NSDirectionalEdgeInsets _padding;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000030919d
@property(copy, nonatomic) _UIBarButtonItemData *doneItemAppearance; // @synthesize doneItemAppearance=_doneItemAppearance;
@property(copy, nonatomic) _UIBarButtonItemData *plainItemAppearance; // @synthesize plainItemAppearance=_plainItemAppearance;
@property(nonatomic) long long itemDistribution; // @synthesize itemDistribution=_itemDistribution;
@property(nonatomic) struct NSDirectionalEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool compactMetrics; // @synthesize compactMetrics=_compactMetrics;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000309116
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000309110
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000030910a
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000309104
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000003090fe
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000003090f8
- (void)_appearanceChanged;	// IMP=0x00000000003090e6
- (long long)barType;	// IMP=0x0000000000309025
- (double)defaultTextPadding;	// IMP=0x0000000000308e29
- (double)defaultEdgeSpacing;	// IMP=0x0000000000308e06
- (double)absorptionForItem:(id)arg1;	// IMP=0x0000000000308da9
- (id)_computeEdgeAbsorptionForItems:(id)arg1;	// IMP=0x0000000000308317
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;	// IMP=0x0000000000308002
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;	// IMP=0x0000000000307bd4
- (void)_updateThreeUpFlagsForItems:(id)arg1;	// IMP=0x0000000000307714
- (void)reloadWithItems:(id)arg1;	// IMP=0x000000000030767d
- (void)updateConstraints;	// IMP=0x000000000030763c
- (void)_ensureButtonBar;	// IMP=0x0000000000306ef2
- (void)updateContent;	// IMP=0x000000000030685e
- (void)_setButtonBarLeadingInset:(double)arg1 trailingInset:(double)arg2;	// IMP=0x00000000003067ba
- (struct NSDirectionalEdgeInsets)_directionalSafeArea;	// IMP=0x0000000000306722
- (void)tintColorDidChange;	// IMP=0x0000000000306705
- (void)layoutMarginsDidChange;	// IMP=0x00000000003066c4

@end
