//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UIDocumentProperties, UIImageView, UILabel, UILayoutGuide, UIView, _UITAMICAdaptorView;
@protocol _UINavigationBarTitleControlVisualProvider;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTitleControl : UIControl
{
    UIView *_backgroundView;	// 128 = 0x80
    UILabel *_inlineTitleView;	// 136 = 0x88
    _UITAMICAdaptorView *_wrapperView;	// 144 = 0x90
    NSDictionary *_resolvedAttributes;	// 152 = 0x98
    UIImageView *_chevron;	// 160 = 0xa0
    UILayoutGuide *_chevronGuide;	// 168 = 0xa8
    NSLayoutConstraint *_sosConstraint;	// 176 = 0xb0
    NSArray *_backgroundViewConstraints;	// 184 = 0xb8
    NSArray *_titleConstraints;	// 192 = 0xc0
    NSArray *_inlineTitleConstraints;	// 200 = 0xc8
    NSArray *_chevronConstraints;	// 208 = 0xd0
    float _titleViewCompressionResistancePriority;	// 216 = 0xd8
    NSString *_title;	// 224 = 0xe0
    NSDictionary *_titleAttributes;	// 232 = 0xe8
    UIView *_titleView;	// 240 = 0xf0
    double _contentAlpha;	// 248 = 0xf8
    UIView *_effectiveTitleView;	// 256 = 0x100
    CDUnknownBlockType _titleMenuProvider;	// 264 = 0x108
    UIDocumentProperties *_documentProperties;	// 272 = 0x110
    UILayoutGuide *_titleLayoutGuide;	// 280 = 0x118
    id <_UINavigationBarTitleControlVisualProvider> _visualProvider;	// 288 = 0x120
    struct UIEdgeInsets _menuAlignmentInsets;	// 296 = 0x128
}

+ (id)titleMenuSuggestedActionsWithDocumentFileURL:(id)arg1;	// IMP=0x0010000000712165
- (void).cxx_destruct;	// IMP=0x0000000000713509
@property(retain, nonatomic) id <_UINavigationBarTitleControlVisualProvider> visualProvider; // @synthesize visualProvider=_visualProvider;
@property(retain, nonatomic) UILayoutGuide *titleLayoutGuide; // @synthesize titleLayoutGuide=_titleLayoutGuide;
@property(nonatomic) struct UIEdgeInsets menuAlignmentInsets; // @synthesize menuAlignmentInsets=_menuAlignmentInsets;
@property(retain, nonatomic) UIDocumentProperties *documentProperties; // @synthesize documentProperties=_documentProperties;
@property(copy, nonatomic) CDUnknownBlockType titleMenuProvider; // @synthesize titleMenuProvider=_titleMenuProvider;
@property(readonly, nonatomic) UIView *effectiveTitleView; // @synthesize effectiveTitleView=_effectiveTitleView;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) float titleViewCompressionResistancePriority; // @synthesize titleViewCompressionResistancePriority=_titleViewCompressionResistancePriority;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_invalidateSceneDraggingBehavior;	// IMP=0x0000000000713405
- (id)_preferredSender;	// IMP=0x0000000000713380
- (id)_preferredPresentationSourceItem;	// IMP=0x000000000071336b
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000713365
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x000000000071335f
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000007131a4
- (id)pointerShapeInContainer:(id)arg1;	// IMP=0x0000000000712ed8
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000712d5b
- (_Bool)_inactiveForPointer;	// IMP=0x0000000000712d1f
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000712d0d
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000712cfb
- (id)_preview;	// IMP=0x0000000000712b4c
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000712ad0
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;	// IMP=0x00000000007128c5
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000071247b
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;	// IMP=0x000000000071240d
- (struct CGSize)availableSizeForAdaptor:(id)arg1 proposedSize:(struct CGSize)arg2;	// IMP=0x00000000007120b7
- (id)_debugInfo;	// IMP=0x0000000000711ed9
- (unsigned long long)_controlEventsForActionTriggered;	// IMP=0x0000000000711ece
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000711d97
- (void)didMoveToWindow;	// IMP=0x0000000000711d4e
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000711d3c
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000711d2a
- (void)updateConstraints;	// IMP=0x00000000007113a9
- (void)_updateContentAlpha;	// IMP=0x0000000000711333
- (void)_updateInlineTitleView;	// IMP=0x0000000000711155
- (id)_backgroundViewConstraintsForIdiom:(long long)arg1;	// IMP=0x0000000000710f02
- (void)_ensureNecessaryViews;	// IMP=0x0000000000710521
- (void)_cleanupWrapperView;	// IMP=0x00000000007104cc
- (void)_resetTitleViewConstraints;	// IMP=0x0000000000710483
- (void)_updateInteractions;	// IMP=0x0000000000710203
@property(readonly, nonatomic) double trailingPadding;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, nonatomic) _Bool hasBaseline;
- (id)_baselineView;	// IMP=0x000000000071012c
@property(readonly, nonatomic) UILabel *titleLabel;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000070fd0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
