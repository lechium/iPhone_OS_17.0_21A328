//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationItemButtonView
{
    long long _style;	// 192 = 0xc0
    _Bool _pressed;	// 200 = 0xc8
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 208 = 0xd0
    _Bool _customBackgroundImageChangedToOrFromNil;	// 216 = 0xd8
    UIImageView *_backgroundImageView;	// 224 = 0xe0
    UIImageView *_imageView;	// 232 = 0xe8
    _Bool _wantsBlendModeForAccessibilityBackgrounds;	// 240 = 0xf0
    unsigned long long _abbreviatedTitleIndex;	// 248 = 0xf8
    UIColor *_accessibilityBackgroundTintColor;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0000000000245c89
@property(retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex; // @synthesize _abbreviatedTitleIndex;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000245b6e
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000245b66
- (void)_backSelectGestureChanged:(id)arg1;	// IMP=0x0000000000245a5e
- (void)_uninstallBackSelectGestureRecognizer;	// IMP=0x0000000000245a02
- (void)_installBackSelectGestureRecognizer;	// IMP=0x000000000024593b
- (void)_updateBackSelectGestureRecognizer;	// IMP=0x000000000024585f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000024584d
- (void)didMoveToWindow;	// IMP=0x000000000024580c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000002456b8
- (_Bool)canBecomeFocused;	// IMP=0x00000000002456b0
- (Class)_appearanceGuideClass;	// IMP=0x000000000024569f
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x0000000000245182
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x00000000002450aa
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000245098
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000244ee4
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000244ec7
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000244eb5
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000244dc3
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000244dbd
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000244db7
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000244da5
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000244d9f
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000244d99
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x0000000000244d0b
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000244cf9
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000244a24
- (_Bool)hasCustomBackgroundImage;	// IMP=0x00000000002449e6
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;	// IMP=0x00000000002449d5
- (_Bool)customBackgroundImageChangedToOrFromNil;	// IMP=0x00000000002449c5
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x00000000002449a8
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000244996
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002448dd
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x000000000024483f
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000244839
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000244833
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x000000000024482d
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000244827
- (void)dealloc;	// IMP=0x00000000002447a5
- (id)_defaultFont;	// IMP=0x000000000024453a
- (_Bool)pressed;	// IMP=0x000000000024452a
- (void)setPressed:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x0000000000244463
- (void)setPressed:(_Bool)arg1;	// IMP=0x000000000024444c
- (void)setStyle:(long long)arg1;	// IMP=0x0000000000244438
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000244120
- (struct CGSize)imageSize;	// IMP=0x0000000000243fe5
- (id)image;	// IMP=0x0000000000243f71
- (id)title;	// IMP=0x0000000000243e2c
- (void)layoutSubviews;	// IMP=0x00000000002434b6
- (id)backgroundImageView;	// IMP=0x00000000002434a1
- (double)_titleYAdjustmentCustomization;	// IMP=0x0000000000243498
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002430fa
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000024309c
- (id)_currentCustomBackgroundNeedsDarkening:(_Bool *)arg1;	// IMP=0x0000000000242e8c
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x0000000000242df8
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x0000000000242d02
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x0000000000242b79
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;	// IMP=0x0000000000242b71
- (id)_appearanceStorage;	// IMP=0x0000000000242b5c
- (void)tintColorDidChange;	// IMP=0x0000000000242b06
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000242a6d
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x0000000000242a5b
- (void)_accessibilityButtonShapesParametersDidChange;	// IMP=0x0000000000242a24
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000242901
- (_Bool)_suppressesBackIndicatorView;	// IMP=0x000000000024289f
- (_Bool)_wantsAccessibilityButtonShapes;	// IMP=0x000000000024286e
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;	// IMP=0x00000000002427b5
- (void)_resetRenderingModesForAccessibilityBackgrounds;	// IMP=0x00000000002425f1
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x000000000024258b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
