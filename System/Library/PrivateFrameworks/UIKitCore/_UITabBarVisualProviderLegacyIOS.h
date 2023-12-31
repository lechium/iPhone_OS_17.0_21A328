//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITabBarVisualProvider.h"

@class NSString, UIPointerInteraction, UIView, _UIBarBackground, _UIBarBackgroundLayout;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider
{
    UIPointerInteraction *_pointerInteraction;	// 24 = 0x18
    _UIBarBackground *_backgroundView;	// 32 = 0x20
    _UIBarBackgroundLayout *_backgroundViewLayout;	// 40 = 0x28
    UIView *_customBackgroundView;	// 48 = 0x30
    UIView *_accessoryView;	// 56 = 0x38
    double _minimumWidthForHorizontalLayout;	// 64 = 0x40
    _Bool _useModernAppearance;	// 72 = 0x48
    long long _style;	// 80 = 0x50
    double _backgroundTransitionProgress;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002eae29
- (double)backgroundTransitionProgress;	// IMP=0x00000000002eae17
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000002eaa9b
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000002ea63c
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000002ea348
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;	// IMP=0x00000000002ea336
- (id)_focusedItemHighlightView;	// IMP=0x00000000002ea32e
- (double)_shim_heightForCustomizingItems;	// IMP=0x00000000002ea303
- (void)_shim_updateTabBarItemView:(id)arg1;	// IMP=0x00000000002ea1de
- (void)_shim_layoutItemsOnly;	// IMP=0x00000000002ea1cc
- (void)_shim_setShadowHidden:(_Bool)arg1;	// IMP=0x00000000002ea15a
- (_Bool)_shim_shadowHidden;	// IMP=0x00000000002ea13d
- (void)_shim_setShadowAlpha:(double)arg1;	// IMP=0x00000000002ea0c4
- (double)_shim_shadowAlpha;	// IMP=0x00000000002ea0a7
- (id)_shim_accessoryView;	// IMP=0x00000000002ea092
- (void)_shim_setAccessoryView:(id)arg1;	// IMP=0x00000000002ea002
- (id)_shim_compatibilityBackgroundView;	// IMP=0x00000000002e9fda
- (void)_shim_setCustomBackgroundView:(id)arg1;	// IMP=0x00000000002e9f81
- (id)preferredFocusedView;	// IMP=0x00000000002e9f03
- (id)_preferredFocusedViewiOS;	// IMP=0x00000000002e9e85
- (id)_preferredFocusedViewCarplay;	// IMP=0x00000000002e9c66
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000002e999c
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;	// IMP=0x00000000002e97b6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000002e9725
- (void)setBackgroundTransitionProgress:(double)arg1 forceUpdate:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002e96aa
- (void)setBackgroundTransitionProgress:(double)arg1;	// IMP=0x00000000002e9694
- (void)layoutSubviews;	// IMP=0x00000000002e960e
- (void)updateBackgroundGroupName;	// IMP=0x00000000002e95bb
- (void)_updateBackgroundAnimated:(_Bool)arg1;	// IMP=0x00000000002e9293
- (void)_updateBackgroundModern;	// IMP=0x00000000002e8f8e
- (void)_updateBackgroundLegacy;	// IMP=0x00000000002e8c38
- (void)_layoutTabBarItems;	// IMP=0x00000000002e7cba
- (long long)_styleForTraitCollection:(id)arg1;	// IMP=0x00000000002e7ab8
- (void)_configureItems:(id)arg1;	// IMP=0x00000000002e77eb
- (void)_updateAccessoryView;	// IMP=0x00000000002e7700
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;	// IMP=0x00000000002e76af
- (struct CGRect)_layoutRegion;	// IMP=0x00000000002e752b
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;	// IMP=0x00000000002e7405
- (void)updateArchivedSubviews:(id)arg1;	// IMP=0x00000000002e71dd
- (id)createViewForTabBarItem:(id)arg1;	// IMP=0x00000000002e6ce0
- (void)setMinimumWidthForHorizontalLayout:(double)arg1;	// IMP=0x00000000002e6caf
- (double)minimumWidthForHorizontalLayout;	// IMP=0x00000000002e6c9d
- (id)appearanceObserver;	// IMP=0x00000000002e6c94
- (void)setUseModernAppearance:(_Bool)arg1;	// IMP=0x00000000002e6bba
- (_Bool)useModernAppearance;	// IMP=0x00000000002e6baa
- (void)changeLayout;	// IMP=0x00000000002e6b94
- (void)changeAppearance;	// IMP=0x00000000002e6b7e
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;	// IMP=0x00000000002e6aea
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000002e6860
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;	// IMP=0x00000000002e67a1
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;	// IMP=0x00000000002e5d35
- (void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x00000000002e55b2
- (void)teardown;	// IMP=0x00000000002e54d0
- (void)prepare;	// IMP=0x00000000002e5251

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

