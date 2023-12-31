//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIInterfaceAction, UILabel;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionLabelsPropertyView : UIView
{
    NSLayoutConstraint *_leadingLabelLeadingConstraint;	// 8 = 0x8
    NSLayoutConstraint *_leadingLabelVerticalPositionConstraint;	// 16 = 0x10
    NSLayoutConstraint *_trailingLabelTrailingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingLabelVerticalPositionConstraint;	// 32 = 0x20
    NSLayoutConstraint *_interLabelSpacingConstraint;	// 40 = 0x28
    UILabel *_classificationLabel;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    NSArray *_labelConstraints;	// 64 = 0x40
    UIInterfaceAction *_action;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000efbfc
@property(readonly, nonatomic) UIInterfaceAction *action; // @synthesize action=_action;
- (id)_newLabel;	// IMP=0x00000000000efb12
- (id)_classificationLabelIfVisible;	// IMP=0x00000000000efad6
- (void)_reloadContentClassificationLabelDisplayProperties;	// IMP=0x00000000000ef9a5
- (void)_reloadContentForTitleDisplayProperties;	// IMP=0x00000000000ef896
- (id)_interfaceActionViewState;	// IMP=0x00000000000ef830
- (void)_applyVisualStyleToLabels;	// IMP=0x00000000000ef76e
- (void)_applyVisualStyle;	// IMP=0x00000000000ef72a
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000000000ef718
- (id)viewForLastBaselineLayout;	// IMP=0x00000000000ef703
- (id)viewForFirstBaselineLayout;	// IMP=0x00000000000ef6ee
- (void)tintColorDidChange;	// IMP=0x00000000000ef6dc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000ef6ca
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x00000000000ef6b8
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x00000000000ef044
- (id)_visualStyle;	// IMP=0x00000000000ef027
- (void)dealloc;	// IMP=0x00000000000eefdb
- (id)initWithAction:(id)arg1;	// IMP=0x00000000000eee97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

