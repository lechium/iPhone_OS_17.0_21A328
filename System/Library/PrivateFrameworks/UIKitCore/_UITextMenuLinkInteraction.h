//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UITextMenuLinkInteraction
{
    NSMapTable *_configurationItems;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000137f5f7
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000137f301
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000137f1f5
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000137f0d9
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;	// IMP=0x000000000137f035
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000137ef6c
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000137eefd
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;	// IMP=0x000000000137eef0
- (id)_targetedPreviewForItem:(id)arg1 dismissing:(_Bool)arg2;	// IMP=0x000000000137ee69
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000137e7c2
- (_Bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;	// IMP=0x000000000137e72f
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000137e5d8
- (void)didMoveToView:(id)arg1;	// IMP=0x000000000137e50f
- (void)willMoveToView:(id)arg1;	// IMP=0x000000000137e41a
- (id)contextMenuDelegateProxy;	// IMP=0x000000000137e3f1
- (id)initWithShouldProxyContextMenuDelegate:(_Bool)arg1;	// IMP=0x000000000137e335

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

