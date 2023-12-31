//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_IOS : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x001000000124e454
- (long long)defaultFooterTextRenderingMode;	// IMP=0x000000000125214a
- (long long)defaultAccessoryRenderingModeForAccessorySystemType:(long long)arg1;	// IMP=0x0000000001252142
- (long long)defaultSecondaryTextRenderingMode;	// IMP=0x000000000125213a
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x0000000001252132
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x0000000001252000
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x0000000001251dca
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x0000000001251cee
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000001251c3f
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x0000000001251c36
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000001251c2d
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x0000000001251c24
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001251c16
- (_Bool)reorderingCellWantsShadows;	// IMP=0x0000000001251c0e
- (double)defaultAlphaForReorderingCell;	// IMP=0x0000000001251c00
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2 isTracking:(_Bool)arg3;	// IMP=0x0000000001251a38
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001251966
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000001251958
- (id)defaultDetailAccessoryImage;	// IMP=0x0000000001251938
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x00000000012517cb
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000001251714
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000001251580
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000001251514
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000001251380
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000001251314
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000012512f6
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000012512ed
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000012512df
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001251285
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000001251181
- (id)defaultOutlineDisclosureImageForView:(id)arg1;	// IMP=0x00000000012510d9
- (id)defaultPopUpMenuIndicatorImageForTraitCollection:(id)arg1;	// IMP=0x0000000001251014
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001250f40
- (id)_defaultCircleDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x0000000001250de8
- (id)_defaultDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x0000000001250d23
- (id)_symbolImageNamed:(id)arg1 withTextStyle:(id)arg2 scale:(long long)arg3;	// IMP=0x0000000001250c8c
- (id)_accessoryTintColorForAccessoryBaseColor:(id)arg1;	// IMP=0x0000000001250c5a
- (id)_defaultAccessoryTintColor;	// IMP=0x0000000001250bec
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id)arg2 traitCollection:(id)arg3 floating:(_Bool)arg4;	// IMP=0x0000000001250a60
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000001250a4a
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000001250a17
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x00000000012509a0
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001250929
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x00000000012508a8
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001250827
- (id)defaultPlainHeaderFooterFont;	// IMP=0x0000000001250788
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001250756
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000001250687
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000001250573
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001250546
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x00000000012504ac
- (struct NSDirectionalEdgeInsets)defaultInsetGroupedHeaderLayoutMarginsForExtraProminentStyle:(_Bool)arg1;	// IMP=0x000000000125045e
- (id)defaultInsetGroupedHeaderFontForExtraProminentStyle:(_Bool)arg1 secondaryText:(_Bool)arg2;	// IMP=0x0000000001250413
- (id)defaultSidebarHeaderFont;	// IMP=0x00000000012503f0
- (struct UIEdgeInsets)defaultSidebarLayoutMarginsForElementsInsideSection;	// IMP=0x00000000012503d6
- (id)defaultSidebarImageTintColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 isAccompanied:(_Bool)arg4;	// IMP=0x00000000012502d6
- (id)defaultSidebarTextColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 isAccompanied:(_Bool)arg4 isSecondaryText:(_Bool)arg5;	// IMP=0x0000000001250181
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000001250086
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001250034
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x000000000124ffed
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x000000000124ffa1
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x000000000124ff85
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x000000000124ff73
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x000000000124ff51
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x000000000124ff3d
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x000000000124fef8
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x000000000124fee1
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x000000000124fed9
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x000000000124fec6
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x000000000124fea2
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x000000000124fda5
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x000000000124fd66
- (double)_defaultMarginWidthForTableView:(id)arg1 canUseLayoutMargins:(_Bool)arg2;	// IMP=0x000000000124fb47
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x000000000124fb3e
- (double)defaultPaddingBetweenRows;	// IMP=0x000000000124fb35
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)arg1;	// IMP=0x000000000124fb23
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)arg1;	// IMP=0x000000000124fb15
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x000000000124fb03
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x000000000124fadf
- (double)defaultPaddingAboveFirstSectionHeaderForTableStyle:(long long)arg1;	// IMP=0x000000000124facd
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x000000000124fab1
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x000000000124f7d1
- (double)defaultCellCornerRadiusForTableViewStyle:(long long)arg1 isSidebarStyle:(_Bool)arg2 isHeaderFooter:(_Bool)arg3 traitCollection:(id)arg4;	// IMP=0x000000000124f772
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x000000000124f70b
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x000000000124f6a7
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x000000000124f609
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x000000000124f5e3
- (double)defaultCellContentTrailingPadding;	// IMP=0x000000000124f5d5
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x000000000124f5b9
- (double)defaultContentAccessoryPadding;	// IMP=0x000000000124f58e
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000124f563
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000124f538
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000124f530
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;	// IMP=0x000000000124f49d
- (struct UIEdgeInsets)defaultCellLayoutMarginsForTableStyle:(long long)arg1 cellStyle:(long long)arg2 textLabelFont:(id)arg3 rawLayoutMargins:(struct UIEdgeInsets)arg4;	// IMP=0x000000000124f410
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000124f298
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000124f1b0
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x000000000124f199
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x000000000124f177
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x000000000124f0bd
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x000000000124f09a
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x000000000124efe0
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x000000000124ef54
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x000000000124ef4c
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x000000000124ef38
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x000000000124ef2a
- (id)defaultSeparatorVisualEffectForTableViewStyle:(long long)arg1;	// IMP=0x000000000124ef22
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x000000000124ef17
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000124eea4
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x000000000124edce
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x000000000124e940
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x000000000124e5c9
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x000000000124e5a0
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x000000000124e52d
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x000000000124e525
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x000000000124e4eb
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x000000000124e4e3
- (id)variantForActive:(_Bool)arg1;	// IMP=0x000000000124e4da
- (id)sidebarVariant;	// IMP=0x000000000124e4d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

