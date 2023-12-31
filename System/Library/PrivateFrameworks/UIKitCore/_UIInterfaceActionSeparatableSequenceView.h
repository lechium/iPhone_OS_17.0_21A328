//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UIInterfaceActionVisualStyle, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatableSequenceView : UIView
{
    _Bool _visualCornerForcedOverride;	// 8 = 0x8
    UIInterfaceActionVisualStyle *_visualStyle;	// 16 = 0x10
    long long _axis;	// 24 = 0x18
    long long _distribution;	// 32 = 0x20
    NSArray *_arrangedContentViews;	// 40 = 0x28
    unsigned long long _visualCornerPosition;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
    NSArray *_arrangedContentSeparatorViews;	// 64 = 0x40
    NSArray *_arrangedContentViewsDistributionConstraints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000f8c02
@property(readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints; // @synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints;
@property(readonly, nonatomic) NSArray *arrangedContentSeparatorViews; // @synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) _Bool visualCornerForcedOverride; // @synthesize visualCornerForcedOverride=_visualCornerForcedOverride;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(retain, nonatomic) NSArray *arrangedContentViews; // @synthesize arrangedContentViews=_arrangedContentViews;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (_Bool)_isVerticalLayout;	// IMP=0x00000000000f8b50
- (void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2;	// IMP=0x00000000000f8aef
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1;	// IMP=0x00000000000f8adb
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1;	// IMP=0x00000000000f8ac4
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1;	// IMP=0x00000000000f8a67
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1;	// IMP=0x00000000000f8a08
- (void)_updateRoundedCornerPositionForActionRepViews;	// IMP=0x00000000000f880b
- (void)_updateSeparatorConstantSizedAxis;	// IMP=0x00000000000f8781
- (long long)_separatorConstantSizedAxis;	// IMP=0x00000000000f876b
- (void)_updateActionSpacing;	// IMP=0x00000000000f86e7
- (void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(_Bool)arg2;	// IMP=0x00000000000f85e3
- (void)_reloadStackViewArrangement;	// IMP=0x00000000000f813f
- (long long)_dimensionAttributeToConstrainEqual;	// IMP=0x00000000000f80b9
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;	// IMP=0x00000000000f7ee4
- (struct CGSize)_systemLayoutSizeFittingStackView:(struct CGSize)arg1;	// IMP=0x00000000000f7e19
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000f7e07
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000f7de5
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00000000000f7dd3
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x00000000000f7d8b
- (void)updateConstraints;	// IMP=0x00000000000f7d4a
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f7c82
- (void)_setLayoutDebuggingIdentifier:(id)arg1;	// IMP=0x00000000000f7bd6
- (struct CGRect)_stackViewFrameForViewBounds:(struct CGRect)arg1;	// IMP=0x00000000000f7b29
- (struct CGRect)_viewBoundsForStackViewFrame:(struct CGRect)arg1;	// IMP=0x00000000000f7a70
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;	// IMP=0x00000000000f79e1
- (void)reloadDisplayedContentVisualStyle;	// IMP=0x00000000000f79a6
- (double)fittingWidthForLayoutAxis:(long long)arg1;	// IMP=0x00000000000f75f4
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;	// IMP=0x00000000000f73ed
- (id)initWithVisualStyle:(id)arg1;	// IMP=0x00000000000f6f18

@end

