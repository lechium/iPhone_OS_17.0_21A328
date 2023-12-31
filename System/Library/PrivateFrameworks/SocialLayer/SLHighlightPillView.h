//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString, SLHighlight, UIAction, UIColor, UIImageView, UILabel, UIPointerInteraction, UIVisualEffect, UIVisualEffectView;
@protocol SLHighlightPillViewDelegate;

__attribute__((visibility("hidden")))
@interface SLHighlightPillView
{
    _Bool _shouldDrawBackgroundBlur;	// 8 = 0x8
    id <SLHighlightPillViewDelegate> _delegate;	// 16 = 0x10
    SLHighlight *_highlight;	// 24 = 0x18
    NSArray *_contextMenuItems;	// 32 = 0x20
    NSString *_blurEffectGroupName;	// 40 = 0x28
    UIColor *_preferredBackgroundColor;	// 48 = 0x30
    UIVisualEffectView *_blurView;	// 56 = 0x38
    UIVisualEffectView *_chevronImageView;	// 64 = 0x40
    UIVisualEffect *_chevronEffect;	// 72 = 0x48
    UIImageView *_lastChevronImageView;	// 80 = 0x50
    UILabel *_noAttributionsDebugLabel;	// 88 = 0x58
    UIPointerInteraction *_pointerInteraction;	// 96 = 0x60
    NSArray *_attributionIdentifiers;	// 104 = 0x68
    unsigned long long _variant;	// 112 = 0x70
    NSSet *_excludedContextMenuIdentifiers;	// 120 = 0x78
    UIAction *_replyAction;	// 128 = 0x80
    UIAction *_hideAction;	// 136 = 0x88
    NSArray *_chevronConstraints;	// 144 = 0x90
}

+ (void)openMessagesForMessageGUID:(id)arg1;	// IMP=0x00100000000503e5
- (void).cxx_destruct;	// IMP=0x0000000000052c19
@property(retain, nonatomic) NSArray *chevronConstraints; // @synthesize chevronConstraints=_chevronConstraints;
@property(retain, nonatomic) UIAction *hideAction; // @synthesize hideAction=_hideAction;
@property(retain, nonatomic) UIAction *replyAction; // @synthesize replyAction=_replyAction;
@property(retain, nonatomic) NSSet *excludedContextMenuIdentifiers; // @synthesize excludedContextMenuIdentifiers=_excludedContextMenuIdentifiers;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(retain, nonatomic) NSArray *attributionIdentifiers; // @synthesize attributionIdentifiers=_attributionIdentifiers;
@property(retain, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(retain, nonatomic) UILabel *noAttributionsDebugLabel; // @synthesize noAttributionsDebugLabel=_noAttributionsDebugLabel;
@property(retain, nonatomic) UIImageView *lastChevronImageView; // @synthesize lastChevronImageView=_lastChevronImageView;
@property(retain, nonatomic) UIVisualEffect *chevronEffect; // @synthesize chevronEffect=_chevronEffect;
@property(retain, nonatomic) UIVisualEffectView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIColor *preferredBackgroundColor; // @synthesize preferredBackgroundColor=_preferredBackgroundColor;
@property(retain, nonatomic) NSString *blurEffectGroupName; // @synthesize blurEffectGroupName=_blurEffectGroupName;
@property(retain, nonatomic) NSArray *contextMenuItems; // @synthesize contextMenuItems=_contextMenuItems;
@property(nonatomic) _Bool shouldDrawBackgroundBlur; // @synthesize shouldDrawBackgroundBlur=_shouldDrawBackgroundBlur;
@property(retain, nonatomic) SLHighlight *highlight; // @synthesize highlight=_highlight;
@property(nonatomic) __weak id <SLHighlightPillViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000005290b
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000052878
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000527e2
- (id)_targetedPreviewForInteraction:(id)arg1;	// IMP=0x000000000005265c
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000005255f
- (void)_hideMenuItemSelected;	// IMP=0x00000000000522cb
- (void)_replyMenuItemSelected;	// IMP=0x0000000000052223
- (id)_uiActionItems;	// IMP=0x0000000000051d67
- (void)excludeContextMenuItemsWithIdentifiers:(id)arg1;	// IMP=0x0000000000051cdb
- (void)refreshContextMenuItems;	// IMP=0x000000000005165e
- (_Bool)shouldShowReplyContextMenu;	// IMP=0x0000000000051506
- (_Bool)shouldShowContextMenu;	// IMP=0x0000000000051446
- (id)makePlaceholderSlotContentForStyle:(id)arg1;	// IMP=0x00000000000513bb
- (_Bool)shouldInvalidatePreviousPlaceHolderSlotContent:(id)arg1 forStyle:(id)arg2;	// IMP=0x0000000000051279
- (void)renderRemoteContentForLayerContextID:(unsigned long long)arg1 style:(id)arg2 yield:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050d1a
- (void)remoteContentIsLoadedValueChanged;	// IMP=0x0000000000050bbc
- (id)_attributionIdentifiers;	// IMP=0x0000000000050897
- (void)_pillTapped:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000000504a1
- (void)_configureChevronForSlotStyle:(id)arg1;	// IMP=0x000000000004fcec
- (double)expectedHeightForMaxWidth:(double)arg1;	// IMP=0x000000000004f802
- (void)layoutSubviews;	// IMP=0x000000000004f52c
- (void)_setupDebugPillLabel;	// IMP=0x000000000004f3d1
- (void)_setupBlurView;	// IMP=0x000000000004f006
- (_Bool)_shouldDisplayDebugPillLabel;	// IMP=0x000000000004ef75
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000004ee87
- (id)initWithHighlight:(id)arg1 maxWidth:(double)arg2 variant:(unsigned long long)arg3 shouldDrawBlur:(_Bool)arg4;	// IMP=0x000000000004eb4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

