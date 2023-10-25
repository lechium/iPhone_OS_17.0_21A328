//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, NSString, UICollectionView, UILabel, UINavigationBar, _UIDiffuseShadowView, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UIBarCustomizationItemReservoirView : UIView
{
    _Bool _computedInitialSize;	// 8 = 0x8
    _Bool _isEmpty;	// 9 = 0x9
    NSMutableArray *_items;	// 16 = 0x10
    _UIShapeView *_arrowView;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    _UIDiffuseShadowView *_shadowView;	// 40 = 0x28
    UINavigationBar *_topBar;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
    UILabel *_tipLabel;	// 64 = 0x40
    UILabel *_noContentLabel;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000db8016
@property(retain, nonatomic) UILabel *noContentLabel; // @synthesize noContentLabel=_noContentLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UINavigationBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) _UIDiffuseShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) _UIShapeView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000db7efa
- (id)_collectionView:(id)arg1 layout:(id)arg2 flowLayoutRowAlignmentOptionsForSection:(long long)arg3;	// IMP=0x0000000000db7ac1
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000db7943
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000db786a
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000db7655
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000db7611
- (void)scrollViewDidChangeContentSize:(id)arg1;	// IMP=0x0000000000db75ec
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000db74af
- (double)_minimumLineSpacing;	// IMP=0x0000000000db740a
- (void)_updateEmptyState;	// IMP=0x0000000000db73b3
- (void)_updateArrowColor;	// IMP=0x0000000000db72a1
- (id)flowLayout;	// IMP=0x0000000000db7251
- (void)invalidateLayoutAndForceUpdate:(_Bool)arg1;	// IMP=0x0000000000db71a8
- (void)sizeToFit;	// IMP=0x0000000000db6e9d
- (void)layoutSubviews;	// IMP=0x0000000000db66bb
- (void)removeItem:(id)arg1;	// IMP=0x0000000000db64e4
- (void)addItem:(id)arg1;	// IMP=0x0000000000db624c
- (void)setDoneAction:(id)arg1;	// IMP=0x0000000000db5f0d
- (void)setResetAction:(id)arg1;	// IMP=0x0000000000db5e58
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000db597a
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000db4796

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
