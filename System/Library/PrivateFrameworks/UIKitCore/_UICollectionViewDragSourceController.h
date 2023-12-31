//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSString, UICollectionView, UIDragInteraction, _UICollectionViewDragSourceControllerDragState, _UICollectionViewDragSourceControllerSessionState;
@protocol UIDragSession, _UICollectionViewDragSourceControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceController : NSObject
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UIDragInteraction *_dragInteraction;	// 16 = 0x10
    id <_UICollectionViewDragSourceControllerDelegate> _delegate;	// 24 = 0x18
    _UICollectionViewDragSourceControllerSessionState *_sessionState;	// 32 = 0x20
    _UICollectionViewDragSourceControllerDragState *_dragState;	// 40 = 0x28
}

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000049380b
- (void).cxx_destruct;	// IMP=0x0000000000496d30
@property(retain, nonatomic) _UICollectionViewDragSourceControllerDragState *dragState; // @synthesize dragState=_dragState;
@property(retain, nonatomic) _UICollectionViewDragSourceControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) __weak id <_UICollectionViewDragSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;	// IMP=0x0000000000496c30
- (id)_filterCandidateIndexPaths:(id)arg1 forUserSelectedIndexPath:(id)arg2 session:(id)arg3;	// IMP=0x00000000004968c5
- (void)_sessionWillBegin:(id)arg1 forDragInteraction:(id)arg2;	// IMP=0x0000000000496698
- (id)_previewParametersForItemAtIndexPath:(id)arg1;	// IMP=0x000000000049640f
- (id)_queryForItemsFromClientForSession:(id)arg1 dataSourceIndexPath:(id)arg2 location:(struct CGPoint)arg3 isInitialQuery:(_Bool)arg4;	// IMP=0x00000000004960c2
- (void)_addDragItemsToExistingSession:(id)arg1 forDataSourceIndexPath:(id)arg2;	// IMP=0x0000000000495f16
- (_Bool)_delegateImplementsSelector:(SEL)arg1;	// IMP=0x0000000000495e60
- (_Bool)_delegateImplementsDragSourceDidAddItem;	// IMP=0x0000000000495e47
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;	// IMP=0x0000000000495e2e
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPath;	// IMP=0x0000000000495e15
- (_Bool)_delegateImplementsDragSourceItemsAtIndexPath;	// IMP=0x0000000000495dfc
- (void)_configureInteraction;	// IMP=0x0000000000495d76
- (id)_dragAndDropController;	// IMP=0x0000000000495cb0
- (id)_dragSourceDelegateProxy;	// IMP=0x0000000000495c60
- (id)_dragSourceDelegateActual;	// IMP=0x0000000000495c10
- (id)_dragDelegateProxy;	// IMP=0x0000000000495bc0
- (id)_dragDelegateActual;	// IMP=0x0000000000495b70
- (long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000495a6f
- (id)_dragInteraction:(id)arg1 sessionPropertiesForSession:(id)arg2;	// IMP=0x00000000004958ca
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000000495818
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x0000000000495738
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x000000000049565f
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;	// IMP=0x0000000000495589
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;	// IMP=0x00000000004952f4
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x0000000000495100
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;	// IMP=0x0000000000495082
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000000494f67
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x0000000000494d5d
- (void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;	// IMP=0x0000000000494d57
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x0000000000494b28
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;	// IMP=0x0000000000494a89
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;	// IMP=0x0000000000494a83
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;	// IMP=0x00000000004949ad
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x0000000000494992
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;	// IMP=0x0000000000494675
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000000004944cd
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x0000000000493c2a
- (void)deactivate;	// IMP=0x0000000000493ba4
- (void)setDragInteractionEnabled:(_Bool)arg1;	// IMP=0x0000000000493b70
- (id)indexPathForDragItem:(id)arg1;	// IMP=0x0000000000493acc
@property(readonly, nonatomic) _Bool dragItemsCreatedForReordering;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) NSIndexPath *dragFromIndexPath;
@property(readonly, nonatomic) NSArray *dragFromIndexPaths;
@property(readonly, nonatomic) long long currentSessionItemCount;
@property(readonly, nonatomic) id <UIDragSession> dragSession;
- (void)dealloc;	// IMP=0x00000000004937cd
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000493639

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

