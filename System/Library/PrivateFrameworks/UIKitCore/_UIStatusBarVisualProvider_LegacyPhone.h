//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarVisualProvider_Phone.h"

@class NSDictionary, NSLayoutConstraint, NSString, _UIStatusBarCellularItem, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarRegionAxisCenteringLayout, _UIStatusBarRegionAxisStackingLayout;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone
{
    NSDictionary *_orderedDisplayItemPlacements;	// 8 = 0x8
    _UIStatusBarDisplayItemPlacementGroup *_lowerWifiGroup;	// 16 = 0x10
    NSLayoutConstraint *_backgroundHeightConstraint;	// 24 = 0x18
    _UIStatusBarCellularItem *_condensedCellularItem;	// 32 = 0x20
    NSLayoutConstraint *_leadingTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_leadingHeightConstraint;	// 48 = 0x30
    _UIStatusBarRegionAxisStackingLayout *_leadingHorizontalLayout;	// 56 = 0x38
    NSLayoutConstraint *_centerTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_centerHeightConstraint;	// 72 = 0x48
    _UIStatusBarRegionAxisCenteringLayout *_centerHorizontalLayout;	// 80 = 0x50
    NSLayoutConstraint *_trailingTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_trailingHeightConstraint;	// 96 = 0x60
    _UIStatusBarRegionAxisStackingLayout *_trailingHorizontalLayout;	// 104 = 0x68
    NSLayoutConstraint *_expandedLeadingBottomConstraint;	// 112 = 0x70
    NSLayoutConstraint *_expandedTrailingBottomConstraint;	// 120 = 0x78
}

+ (double)height;	// IMP=0x001000000115e3c5
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;	// IMP=0x001000000115e3a2
+ (double)_heightExpanded:(_Bool)arg1;	// IMP=0x001000000115e386
- (void).cxx_destruct;	// IMP=0x0000000001165674
@property(retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint; // @synthesize expandedTrailingBottomConstraint=_expandedTrailingBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandedLeadingBottomConstraint; // @synthesize expandedLeadingBottomConstraint=_expandedLeadingBottomConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout; // @synthesize trailingHorizontalLayout=_trailingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *trailingHeightConstraint; // @synthesize trailingHeightConstraint=_trailingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingTopConstraint; // @synthesize trailingTopConstraint=_trailingTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout; // @synthesize centerHorizontalLayout=_centerHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *centerHeightConstraint; // @synthesize centerHeightConstraint=_centerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *centerTopConstraint; // @synthesize centerTopConstraint=_centerTopConstraint;
@property(retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout; // @synthesize leadingHorizontalLayout=_leadingHorizontalLayout;
@property(retain, nonatomic) NSLayoutConstraint *leadingHeightConstraint; // @synthesize leadingHeightConstraint=_leadingHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingTopConstraint; // @synthesize leadingTopConstraint=_leadingTopConstraint;
@property(retain, nonatomic) _UIStatusBarCellularItem *condensedCellularItem; // @synthesize condensedCellularItem=_condensedCellularItem;
@property(retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // @synthesize backgroundHeightConstraint=_backgroundHeightConstraint;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup; // @synthesize lowerWifiGroup=_lowerWifiGroup;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (id)_backgroundActivityDetailRemovalAnimation;	// IMP=0x0000000001164503
- (void)setOnLockScreen:(_Bool)arg1;	// IMP=0x0000000001164494
- (void)_updateLockScreenSizing;	// IMP=0x00000000011642d8
- (void)setExpanded:(_Bool)arg1;	// IMP=0x0000000001164130
- (void)_updateBackgroundHeight;	// IMP=0x00000000011640fa
- (void)updateDataForService:(id)arg1;	// IMP=0x0000000001164045
- (void)_updateExpandedTrailingRegion;	// IMP=0x0000000001163e2f
- (void)_updateLowerRegionsWithData:(id)arg1;	// IMP=0x0000000001163b2a
- (void)statusBarRegionsUpdated;	// IMP=0x0000000001163b18
- (void)dataUpdated:(id)arg1;	// IMP=0x0000000001163b06
- (void)orientationUpdatedFromOrientation:(long long)arg1;	// IMP=0x0000000001163a98
- (struct CGRect)clockBoundsForLayoutItem:(id)arg1;	// IMP=0x00000000011638ad
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x00000000011637d8
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x000000000116356f
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;	// IMP=0x0000000001163224
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000001163153
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x000000000116300e
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000001162d9a
- (id)_animationForSingleLineDualCarrier;	// IMP=0x0000000001162bfc
- (id)willUpdateWithData:(id)arg1;	// IMP=0x00000000011629dc
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000001162638
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;	// IMP=0x000000000116262a
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x00000000011624f1
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x00000000011624c0
- (void)itemCreated:(id)arg1;	// IMP=0x0000000001162282
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000001160460
- (id)setupInContainerView:(id)arg1;	// IMP=0x000000000115e70c
- (id)clockFont;	// IMP=0x000000000115e6fa
- (struct CGSize)smallPillSize;	// IMP=0x000000000115e6e9
- (struct CGSize)pillSize;	// IMP=0x000000000115e6d3
- (id)pillFont;	// IMP=0x000000000115e65b
- (id)expandedFont;	// IMP=0x000000000115e5e3
- (id)timeFont;	// IMP=0x000000000115e56b
- (id)normalFont;	// IMP=0x000000000115e4f3
- (double)lowerExpandedBaselineOffset;	// IMP=0x000000000115e4e5
- (double)dualLineExpandedBaselineOffset;	// IMP=0x000000000115e4d7
- (double)expandedBaselineOffset;	// IMP=0x000000000115e4c9
- (double)baselineOffset;	// IMP=0x000000000115e462
- (struct NSDirectionalEdgeInsets)edgeInsets;	// IMP=0x000000000115e438
- (double)regionSpacing;	// IMP=0x000000000115e42a
- (double)effectiveHeight;	// IMP=0x000000000115e3d9
- (_Bool)wantsExpandedLeadingPlacements;	// IMP=0x000000000115e37e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

