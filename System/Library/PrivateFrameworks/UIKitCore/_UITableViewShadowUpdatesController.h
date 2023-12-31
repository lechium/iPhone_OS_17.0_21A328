//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITableView, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap;

__attribute__((visibility("hidden")))
@interface _UITableViewShadowUpdatesController : NSObject
{
    NSMutableArray *_shadowUpdates;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    _UIDataSourceSnapshotter *_initialSnapshot;	// 24 = 0x18
    _UIDataSourceUpdateMap *_updateMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000130905d
@property(retain, nonatomic) _UIDataSourceUpdateMap *updateMap; // @synthesize updateMap=_updateMap;
@property(retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot; // @synthesize initialSnapshot=_initialSnapshot;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *shadowUpdates; // @synthesize shadowUpdates=_shadowUpdates;
- (id)indexPathAfterShadowUpdates:(id)arg1 startingAtUpdate:(id)arg2;	// IMP=0x0000000001308f1d
- (id)indexPathBeforeShadowUpdates:(id)arg1 startingBeforeUpdate:(id)arg2;	// IMP=0x0000000001308e41
- (id)indexPathsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x0000000001308a96
- (id)indexPathsAfterShadowUpdates:(id)arg1;	// IMP=0x0000000001308a82
- (id)indexPathsBeforeShadowUpdates:(id)arg1;	// IMP=0x000000000130884f
- (id)indexPathAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x0000000001308763
- (id)indexPathAfterShadowUpdates:(id)arg1;	// IMP=0x000000000130874f
- (id)indexPathBeforeShadowUpdates:(id)arg1;	// IMP=0x00000000013086b7
- (id)sectionsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(_Bool)arg2;	// IMP=0x0000000001308485
- (id)sectionsAfterShadowUpdates:(id)arg1;	// IMP=0x0000000001308471
- (id)sectionsBeforeShadowUpdates:(id)arg1;	// IMP=0x00000000013082e9
- (long long)sectionAfterShadowUpdates:(long long)arg1;	// IMP=0x000000000130827f
- (long long)sectionBeforeShadowUpdates:(long long)arg1;	// IMP=0x0000000001308215
- (id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2;	// IMP=0x0000000001307b7c
- (void)rebaseExistingShadowUpdatesForUpdates:(id)arg1;	// IMP=0x00000000013078b2
- (void)removeShadowUpdate:(id)arg1;	// IMP=0x00000000013077b3
- (void)appendShadowUpdate:(id)arg1;	// IMP=0x0000000001307528
- (void)regenerateUpdateMap;	// IMP=0x0000000001307424
- (void)reset;	// IMP=0x00000000013073b0
@property(readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceAfterShadowUpdates;
@property(readonly, nonatomic) _UIDataSourceSnapshotter *dataSourceBeforeShadowUpdates;
- (id)shadowUpdateWithIdentifier:(id)arg1;	// IMP=0x0000000001307139
@property(readonly, nonatomic) _Bool hasShadowUpdates;
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000001307080
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2;	// IMP=0x0000000001309960
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000001309899
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000000013097b5
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000130970e
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000001309665
- (id)_tableView:(id)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;	// IMP=0x00000000013095e8
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000001309571
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000000013094cf
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000130942d
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000001309387
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000013092e1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000013091fc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000001309146
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000001309099
- (id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2;	// IMP=0x0000000001309ae1
- (id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;	// IMP=0x0000000001309a06
- (void)tableView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000130d7cd
- (void)tableView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000130d730
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000130d693
- (void)tableView:(id)arg1 willCommitMenuWithAnimator:(id)arg2;	// IMP=0x000000000130d614
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000130d57b
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000000130d4e2
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000000130d418
- (id)indexPathForPreferredFocusedItemForTableView:(id)arg1;	// IMP=0x000000000130d375
- (_Bool)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;	// IMP=0x000000000130d2a9
- (void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000130d211
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000130d179
- (_Bool)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000130d0d7
- (void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130d03f
- (void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130cfa7
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000130cf0d
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000130ce73
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000130cdd9
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000130cd3f
- (void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130cca7
- (id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130cbf9
- (id)tableView:(id)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130cb4b
- (id)tableView:(id)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130ca9d
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130ca05
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130c96d
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130c8d5
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130c827
- (id)tableView:(id)arg1 leadingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130c779
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130c6cb
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130c61d
- (struct CGRect)tableView:(id)arg1 calloutTargetRectForCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000130c517
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x000000000130c4a0
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x000000000130c429
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x000000000130c3b9
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x000000000130c349
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x000000000130c2e2
- (struct CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;	// IMP=0x000000000130c24c
- (double)tableView:(id)arg1 maxTitleWidthForFooterInSection:(long long)arg2;	// IMP=0x000000000130c1a3
- (double)tableView:(id)arg1 maxTitleWidthForHeaderInSection:(long long)arg2;	// IMP=0x000000000130c0fa
- (_Bool)_tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000130c036
- (_Bool)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000130bf72
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;	// IMP=0x000000000130bed7
- (long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2;	// IMP=0x000000000130be3c
- (double)marginForTableView:(id)arg1;	// IMP=0x000000000130bdcc
- (void)tableView:(id)arg1 didUpdateTextFieldForRowAtIndexPath:(id)arg2 withValue:(id)arg3;	// IMP=0x000000000130bd12
- (struct CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(struct CGPoint)arg2 context:(id)arg3;	// IMP=0x000000000130bc64
- (double)tableViewSpacingForExtraSeparators:(id)arg1;	// IMP=0x000000000130bbf4
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;	// IMP=0x000000000130bb5a
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x000000000130bab7
- (_Bool)tableView:(id)arg1 selectionFollowsFocusForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130ba05
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000130b78a
- (_Bool)tableView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000000130b525
- (_Bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;	// IMP=0x000000000130b483
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000130b3c1
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x000000000130b2f5
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130b253
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130b1b1
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000000130b031
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130af99
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130af01
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000130ae5f
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130adb1
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130ad03
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130ac61
- (void)tableView:(id)arg1 performPrimaryActionForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130abc9
- (_Bool)tableView:(id)arg1 canPerformPrimaryActionForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130ab27
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000130aa8f
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000130a9f7
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000130a949
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000130a89b
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000130a803
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000130a76b
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000130a6c9
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;	// IMP=0x000000000130a631
- (long long)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;	// IMP=0x000000000130a58f
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000130a4e9
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000130a443
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;	// IMP=0x000000000130a39a
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x000000000130a2f1
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000130a248
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000130a19f
- (void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000130a0e9
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000130a033
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000001309f79
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000001309ec3
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000001309e0d
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000001309d53
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000001309c9b
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000001309bc4
- (void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2;	// IMP=0x000000000130d90c
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;	// IMP=0x000000000130d86a
- (id)_tableView:(id)arg1 dragSessionPropertiesForSession:(id)arg2;	// IMP=0x000000000130df84
- (_Bool)_tableView:(id)arg1 dragSessionSupportsSystemDrag:(id)arg2;	// IMP=0x000000000130def7
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000130de33
- (_Bool)tableView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x000000000130dda6
- (_Bool)tableView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x000000000130dd19
- (void)tableView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x000000000130dc9a
- (void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x000000000130dc1b
- (id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130db6d
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000000130da82
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000130d9ae
- (long long)_tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000130e4e7
- (id)tableView:(id)arg1 dropPreviewParametersForRowAtIndexPath:(id)arg2;	// IMP=0x000000000130e439
- (void)tableView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x000000000130e3ba
- (void)tableView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x000000000130e33b
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000130e279
- (void)tableView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x000000000130e1fa
- (_Bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000000130e16d
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000000130e01d
- (long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000130e85a
- (void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x000000000130e7db
- (void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x000000000130e75c
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000000130e671
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000130e59d
- (long long)__tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000130ee4b
- (id)_tableView:(id)arg1 targetIndexPathForProposedIndexPath:(id)arg2 currentIndexPath:(id)arg3 dropSession:(id)arg4;	// IMP=0x000000000130ed3a
- (void)_tableView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x000000000130ecbb
- (void)_tableView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x000000000130ec3c
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000000130eb7a
- (void)_tableView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x000000000130eafb
- (_Bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000000130ea6e
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000000130e91e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

