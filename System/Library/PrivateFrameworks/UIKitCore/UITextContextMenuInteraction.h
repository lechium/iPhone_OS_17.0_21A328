//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class NSString, UIContextMenuConfiguration, UIContextMenuInteraction, UIEditMenuConfiguration, UIEditMenuInteraction;
@protocol UIContextMenuInteractionDelegate;

__attribute__((visibility("hidden")))
@interface UITextContextMenuInteraction : UITextInteraction
{
    struct {
        _Bool previewForHighlighting_DEPR;
        _Bool previewForDismissing_DEPR;
        _Bool highlightPreviewForItem;
        _Bool dismissalPreviewForItem;
        _Bool willPerformPreviewAction;
        _Bool willDisplay;
        _Bool willEndForConfiguration;
        _Bool styleForMenu;
        _Bool accessoriesForMenu;
        _Bool shouldBeDelayedByGestureRecognizer;
        _Bool asyncConfigurationForMenuAtLocation;
        _Bool overrideSuggestedActions;
        _Bool shouldAttemptToPresent;
        _Bool interactionEffectForTargetedPreview;
    } _externalDelegateImplements;	// 8 = 0x8
    UIEditMenuConfiguration *_currentInputUIConfiguration;	// 24 = 0x18
    UIEditMenuConfiguration *_currentSelectionCommandsConfiguration;	// 32 = 0x20
    _Bool _isPresentingOrDismissingContextMenu;	// 40 = 0x28
    id <UIContextMenuInteractionDelegate> _externalContextMenuDelegate;	// 48 = 0x30
    UIContextMenuInteraction *_contextMenuInteraction;	// 56 = 0x38
    UIEditMenuInteraction *_editMenuInteraction;	// 64 = 0x40
    UIContextMenuConfiguration *_externallyManagedConfiguration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000013771ea
@property(readonly, nonatomic) UIContextMenuConfiguration *externallyManagedConfiguration; // @synthesize externallyManagedConfiguration=_externallyManagedConfiguration;
@property(readonly, nonatomic) UIEditMenuInteraction *editMenuInteraction; // @synthesize editMenuInteraction=_editMenuInteraction;
@property(readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(nonatomic) __weak id <UIContextMenuInteractionDelegate> externalContextMenuDelegate; // @synthesize externalContextMenuDelegate=_externalContextMenuDelegate;
- (id)_suggestedActionsForContextMenuInteraction:(id)arg1 location:(struct CGPoint)arg2;	// IMP=0x00000000013770aa
- (void)_contextMenuInteraction:(id)arg1 didPerformMenuLeaf:(id)arg2 target:(id)arg3;	// IMP=0x0000000001376ea0
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;	// IMP=0x0000000001376dd3
- (_Bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;	// IMP=0x0000000001376d31
- (void)_contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000001376819
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;	// IMP=0x0000000001376759
- (_Bool)_contextMenuInteraction:(id)arg1 shouldBeDelayedByGestureRecognizer:(id)arg2;	// IMP=0x00000000013766b7
- (id)_contextMenuInteraction:(id)arg1 accessoriesForMenuWithConfiguration:(id)arg2;	// IMP=0x00000000013765f0
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x00000000013764e4
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000137632c
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000001376100
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000137603a
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x0000000001375efa
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x0000000001375dbb
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000001375d3e
- (id)_targetedPreviewForCurrentSelection;	// IMP=0x0000000001375b30
- (_Bool)_isExternalConfiguration:(id)arg1;	// IMP=0x0000000001375a8d
- (void)_presentEditMenuForInputUI;	// IMP=0x0000000001375a2a
- (_Bool)isDisplayingMenuForSelectionCommands;	// IMP=0x0000000001375a06
- (_Bool)isDisplayingMenuForInputUI;	// IMP=0x00000000013759e2
- (void)dismissMenuForInputUI;	// IMP=0x000000000137591d
- (void)presentMenuForInputUI:(id)arg1;	// IMP=0x0000000001375710
@property(readonly, nonatomic) _Bool dismissedByActionSelection;
@property(readonly, nonatomic) _Bool isDisplayingMenu;
@property(readonly, nonatomic) _Bool dismissedRecently;
- (void)updateVisibleMenuPosition;	// IMP=0x0000000001375602
- (void)dismissSelectionCommandsWithReason:(long long)arg1;	// IMP=0x00000000013753fe
- (void)presentSelectionCommandsWithConfiguration:(id)arg1;	// IMP=0x0000000001375382
- (id)_currentInputUIMenuElements;	// IMP=0x0000000001375308
- (id)_editMenuForCurrentSelectionWithSuggestedActions:(id)arg1 isEditMenu:(_Bool)arg2;	// IMP=0x0000000001374f09
- (void)_querySelectionCommandsForConfiguration:(id)arg1 suggestedActions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001374c48
- (void)_editMenuInteraction:(id)arg1 didPerformMenuLeaf:(id)arg2 target:(id)arg3;	// IMP=0x0000000001374c30
- (void)_editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000001374a6d
- (id)_editMenuInteraction:(id)arg1 titleViewForMenu:(id)arg2 configuration:(id)arg3;	// IMP=0x0000000001374986
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000013748df
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000013747c9
- (struct CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;	// IMP=0x00000000013746a1
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;	// IMP=0x0000000001374624
- (id)_editMenuForSuggestedActions:(id)arg1 rvItem:(id)arg2 isEditMenu:(_Bool)arg3;	// IMP=0x0000000001373e61
- (void)_didPerformMenuLeaf:(id)arg1 target:(id)arg2;	// IMP=0x0000000001373d5a
- (void)_logDeprecatedMenuControllerUsageIfNeeded;	// IMP=0x0000000001373ba5
- (_Bool)_shouldBridgeMenuControllerItems;	// IMP=0x0000000001373afa
- (void)didMoveToView:(id)arg1;	// IMP=0x0000000001373910
- (void)willMoveToView:(id)arg1;	// IMP=0x000000000137376e
- (id)init;	// IMP=0x000000000137352d
- (_Bool)_textInputIsSecure;	// IMP=0x000000000137349b
- (void)prepareForContextMenuAtLocationInView:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000001372fde
- (struct CGPoint)locationInTextInputViewForLocationInView:(struct CGPoint)arg1;	// IMP=0x0000000001372edc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

