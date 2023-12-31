//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIBarButtonItem, UIView, _UITAMICAdaptorView;

__attribute__((visibility("hidden")))
@interface _UIButtonBarItemLayout
{
    UIBarButtonItem *_item;	// 24 = 0x18
    UIView *_itemView;	// 32 = 0x20
    _UITAMICAdaptorView *_itemViewWrapper;	// 40 = 0x28
    NSLayoutConstraint *_requestedSize;	// 48 = 0x30
    NSLayoutConstraint *_maximumAlignmentSize;	// 56 = 0x38
    NSLayoutConstraint *_groupSameSize;	// 64 = 0x40
    NSLayoutConstraint *_popoverGuideLeading;	// 72 = 0x48
    NSLayoutConstraint *_popoverGuideTrailing;	// 80 = 0x50
    NSLayoutConstraint *_popoverGuideTop;	// 88 = 0x58
    NSLayoutConstraint *_popoverGuideHeight;	// 96 = 0x60
    _Bool _useGroupSizing;	// 104 = 0x68
    _Bool _suppressSpacing;	// 105 = 0x69
    CDUnknownBlockType _itemViewGenerator;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001d90b0
@property(copy, nonatomic) CDUnknownBlockType itemViewGenerator; // @synthesize itemViewGenerator=_itemViewGenerator;
@property(nonatomic) _Bool suppressSpacing; // @synthesize suppressSpacing=_suppressSpacing;
@property(nonatomic) _Bool useGroupSizing; // @synthesize useGroupSizing=_useGroupSizing;
- (id)description;	// IMP=0x00000000001d8f56
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;	// IMP=0x00000000001d8dfc
- (void)_addLayoutGuides:(id)arg1;	// IMP=0x00000000001d8df6
- (void)_addLayoutViews:(id)arg1;	// IMP=0x00000000001d8dc3
- (void)_configure;	// IMP=0x00000000001d8bfb
- (void)_updateItemViewSizing;	// IMP=0x00000000001d89de
- (void)_updateCustomView;	// IMP=0x00000000001d889f
- (_Bool)_shouldBeDirty;	// IMP=0x00000000001d882e
- (id)barButtonItem;	// IMP=0x00000000001d8819
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;	// IMP=0x00000000001d8780
- (_Bool)shouldHorizontallyCenterView:(id)arg1;	// IMP=0x00000000001d873f
- (void)_updateItemView;	// IMP=0x00000000001d852e
- (void)dirtyLayoutForPlainAppearanceChange:(_Bool)arg1 doneAppearanceChanged:(_Bool)arg2;	// IMP=0x00000000001d84c2
- (id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2;	// IMP=0x00000000001d8419
- (id)initWithLayoutMetrics:(id)arg1;	// IMP=0x00000000001d83ee

@end

