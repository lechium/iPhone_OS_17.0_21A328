//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICollectionViewLayout, UISwipeActionController;

__attribute__((visibility("hidden")))
@interface _UICollectionViewLayoutSwipeActionsModule : NSObject
{
    struct {
        unsigned int layoutUpdateOrRefreshPending:1;
        unsigned int hasDeferredLayoutUpdateOrRefresh:1;
        unsigned int preserveExistingLayoutAttributesForSwipedViews:1;
    } _flags;	// 8 = 0x8
    UICollectionViewLayout *_host;	// 16 = 0x10
    UISwipeActionController *_swipeActionController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000dac897
@property(retain, nonatomic) UISwipeActionController *swipeActionController; // @synthesize swipeActionController=_swipeActionController;
@property(nonatomic) __weak UICollectionViewLayout *host; // @synthesize host=_host;
- (id)swipeViewManipulatorForSwipeActionController:(id)arg1;	// IMP=0x0000000000dac7cb
- (id)propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2;	// IMP=0x0000000000dabf57
- (void)_transformLayoutAttributes:(id)arg1 ofSeparatorAtBottom:(_Bool)arg2 forSwipeOccurrence:(id)arg3 isDisappearing:(_Bool)arg4;	// IMP=0x0000000000dabcce
- (void)transformDecorationLayoutAttributes:(id)arg1 isDisappearing:(_Bool)arg2;	// IMP=0x0000000000dab725
- (void)transformCellLayoutAttributes:(id)arg1 isDisappearing:(_Bool)arg2;	// IMP=0x0000000000dab011
- (void)finalizeCollectionViewUpdate:(id)arg1;	// IMP=0x0000000000daac52
- (void)updateWithDataSourceTranslator:(id)arg1;	// IMP=0x0000000000daab2d
- (void)_invalidateSwipeActionsLayoutRefreshingActiveConfigurations:(_Bool)arg1;	// IMP=0x0000000000daaa15
- (_Bool)_canIgnoreInvalidationContext:(id)arg1;	// IMP=0x0000000000daa90f
- (void)processLayoutInvalidationWithContext:(id)arg1 updateConfigurations:(_Bool)arg2;	// IMP=0x0000000000daa875
- (void)editingStateDidChange;	// IMP=0x0000000000daa83a
- (_Bool)hasActiveSwipe;	// IMP=0x0000000000daa7ee
- (void)swipeActionController:(id)arg1 swipeOccurrence:(id)arg2 didChangeStateFrom:(long long)arg3 to:(long long)arg4;	// IMP=0x0000000000da9b72
- (void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da93db
- (void)swipeActionController:(id)arg1 didBeginSwipeForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da9088
- (void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da9033
- (void)swipeActionController:(id)arg1 cleanupActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000da901e
- (_Bool)swipeActionController:(id)arg1 insertActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000da8b46
- (_Bool)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da8ad2
- (struct UIEdgeInsets)swipeActionController:(id)arg1 extraInsetsForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da85cc
- (id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da8537
- (id)swipeActionController:(id)arg1 indexPathForTouchLocation:(struct CGPoint)arg2;	// IMP=0x0000000000da81ec
- (long long)layoutDirectionForSwipeActionController:(id)arg1;	// IMP=0x0000000000da8187
- (id)_cellWithCustomGroupingAtIndexPath:(id)arg1;	// IMP=0x0000000000da8033
- (void)_updateSwipeActionsConfiguration:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0000000000da7ee9
- (id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da7d54
- (id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000da7bbf
- (id)itemContainerViewForSwipeActionController:(id)arg1;	// IMP=0x0000000000da7b7c
- (id)gestureRecognizerViewForSwipeActionController:(id)arg1;	// IMP=0x0000000000da7b39
- (id)indexPathsWithActiveSwipes;	// IMP=0x0000000000da7b23
- (void)revealTrailingSwipeActionsForIndexPath:(id)arg1;	// IMP=0x0000000000da7ab6
- (void)swipeItemAtIndexPath:(id)arg1 direction:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000da7a13
- (_Bool)_canSwipeItemAtIndexPath:(id)arg1;	// IMP=0x0000000000da792f
- (void)_performForcedCollectionViewLayoutPreservingExistingLayoutAttributes;	// IMP=0x0000000000da78a9
- (void)teardown;	// IMP=0x0000000000da788f
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000da775c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

