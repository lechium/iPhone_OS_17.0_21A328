//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewTransitionLayout.h>

@class PUCollectionViewLayoutCache;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout
{
    struct CGPoint _expandedStackDelta;	// 8 = 0x8
    _Bool _didPrepareLayout;	// 24 = 0x18
    PUCollectionViewLayoutCache *_currentLayoutCache;	// 32 = 0x20
    PUCollectionViewLayoutCache *_nextLayoutCache;	// 40 = 0x28
    _Bool _isExpanding;	// 48 = 0x30
    struct CGPoint _expandedStackFinalDelta;	// 56 = 0x38
    struct CGPoint _interactionOffset;	// 72 = 0x48
    struct CGPoint _initialCollapsedStackCenter;	// 88 = 0x58
    struct CGPoint _finalCollapsedStackCenter;	// 104 = 0x68
    struct CGPoint _currentCollapsedStackCenter;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000534e4c
@property(nonatomic) struct CGPoint currentCollapsedStackCenter; // @synthesize currentCollapsedStackCenter=_currentCollapsedStackCenter;
@property(nonatomic) struct CGPoint finalCollapsedStackCenter; // @synthesize finalCollapsedStackCenter=_finalCollapsedStackCenter;
@property(nonatomic) struct CGPoint initialCollapsedStackCenter; // @synthesize initialCollapsedStackCenter=_initialCollapsedStackCenter;
@property(nonatomic) struct CGPoint interactionOffset; // @synthesize interactionOffset=_interactionOffset;
@property(readonly, nonatomic) struct CGPoint expandedStackFinalDelta; // @synthesize expandedStackFinalDelta=_expandedStackFinalDelta;
@property(readonly, nonatomic) _Bool isExpanding; // @synthesize isExpanding=_isExpanding;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000534ce3
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000534c1d
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000534b9c
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000534976
- (void)prepareLayout;	// IMP=0x000000000053475a
- (struct CGPoint)_centerOfLayoutAttributes:(id)arg1;	// IMP=0x00000000005344a3
- (struct CGPoint)_newCenterForLayoutAttributes:(id)arg1 transitionProgress:(double)arg2;	// IMP=0x00000000005340a3
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 isExpanding:(_Bool)arg3;	// IMP=0x0000000000533fad

@end

