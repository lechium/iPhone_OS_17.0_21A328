//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCABackdropLayerView, AVCustomStackLayout, AVLayoutItemAttributes, NSArray, NSMutableArray, NSString, UIView, UIVisualEffectView;
@protocol AVLayoutViewItem;

__attribute__((visibility("hidden")))
@interface AVLayoutView
{
    _Bool _removed;	// 8 = 0x8
    _Bool _hasAlternateAppearance;	// 9 = 0x9
    _Bool _hasFullScreenAppearance;	// 10 = 0xa
    _Bool _collapsedOrExcluded;	// 11 = 0xb
    _Bool _collapsed;	// 12 = 0xc
    _Bool _included;	// 13 = 0xd
    _Bool _prefersLowQualityEffects;	// 14 = 0xe
    _Bool _layoutDirty;	// 15 = 0xf
    _Bool _stackLayoutNeedsUpdate;	// 16 = 0x10
    AVLayoutItemAttributes *_layoutAttributes;	// 24 = 0x18
    NSArray *_arrangedSubviews;	// 32 = 0x20
    unsigned long long _shapeStyle;	// 40 = 0x28
    NSString *_debugIdentifier;	// 48 = 0x30
    NSMutableArray *_flattenedArrangedSubviewsInLayoutOrder;	// 56 = 0x38
    AVCustomStackLayout *_currentStackLayout;	// 64 = 0x40
    AVCABackdropLayerView *_backdropLayerView;	// 72 = 0x48
    UIVisualEffectView *_secondaryMaterialOverlayView;	// 80 = 0x50
    UIView<AVLayoutViewItem> *_targetViewForSecondaryMaterialOverlayView;	// 88 = 0x58
    struct CGSize _extrinsicContentSize;	// 96 = 0x60
}

+ (Class)layerClass;	// IMP=0x00100000001501b3
- (void).cxx_destruct;	// IMP=0x000000000014f93e
@property(retain, nonatomic) UIView<AVLayoutViewItem> *targetViewForSecondaryMaterialOverlayView; // @synthesize targetViewForSecondaryMaterialOverlayView=_targetViewForSecondaryMaterialOverlayView;
@property(nonatomic) _Bool stackLayoutNeedsUpdate; // @synthesize stackLayoutNeedsUpdate=_stackLayoutNeedsUpdate;
@property(retain, nonatomic) UIVisualEffectView *secondaryMaterialOverlayView; // @synthesize secondaryMaterialOverlayView=_secondaryMaterialOverlayView;
@property(retain, nonatomic) AVCABackdropLayerView *backdropLayerView; // @synthesize backdropLayerView=_backdropLayerView;
@property(nonatomic, getter=isLayoutDirty) _Bool layoutDirty; // @synthesize layoutDirty=_layoutDirty;
@property(retain, nonatomic) AVCustomStackLayout *currentStackLayout; // @synthesize currentStackLayout=_currentStackLayout;
@property(retain, nonatomic) NSMutableArray *flattenedArrangedSubviewsInLayoutOrder; // @synthesize flattenedArrangedSubviewsInLayoutOrder=_flattenedArrangedSubviewsInLayoutOrder;
@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(nonatomic) _Bool prefersLowQualityEffects; // @synthesize prefersLowQualityEffects=_prefersLowQualityEffects;
@property(nonatomic) unsigned long long shapeStyle; // @synthesize shapeStyle=_shapeStyle;
@property(readonly, copy, nonatomic) NSArray *arrangedSubviews; // @synthesize arrangedSubviews=_arrangedSubviews;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void)layoutAttributesDidChange;	// IMP=0x000000000014f73b
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded; // @synthesize collapsedOrExcluded=_collapsedOrExcluded;
- (id)_includedItemsFromSubviews:(id)arg1 inStackLayout:(id)arg2 thatFitSize:(struct CGSize)arg3;	// IMP=0x000000000014ec9f
- (void)_removeArrangedSubview:(id)arg1;	// IMP=0x000000000014ebbe
- (void)_insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000014eb05
- (void)_applyShapeStyle;	// IMP=0x000000000014e730
- (void)_updateStackLayoutIfNeeded;	// IMP=0x000000000014e07b
@property(readonly, copy) NSString *debugDescription;
- (void)reevaluateHiddenStateOfAllItems;	// IMP=0x000000000014dec1
- (void)setRowSpacing:(double)arg1 afterRow:(unsigned long long)arg2;	// IMP=0x000000000014ddd8
- (_Bool)hasVisibleArrangedSubview;	// IMP=0x000000000014dc55
@property(nonatomic) struct NSDirectionalEdgeInsets contentLayoutMargins;
- (void)setArrangedSubviews:(id)arg1;	// IMP=0x000000000014d6d3
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000014d66a
- (id)backgroundColor;	// IMP=0x000000000014d61a
- (void)setNeedsLayout;	// IMP=0x000000000014d5d4
- (double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)arg1;	// IMP=0x000000000014d54e
- (id)prioritizedSizeThatFitsSize:(struct CGSize)arg1;	// IMP=0x000000000014d4d2
- (void)layoutSubviews;	// IMP=0x000000000014cee8
- (id)init;	// IMP=0x000000000014ceb6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000014cbaa

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

