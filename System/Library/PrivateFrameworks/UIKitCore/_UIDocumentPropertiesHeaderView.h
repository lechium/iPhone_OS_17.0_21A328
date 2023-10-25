//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class LPLinkView, NSString, UIButton, UIContextMenuInteraction, UIDocumentProperties;

__attribute__((visibility("hidden")))
@interface _UIDocumentPropertiesHeaderView : UIView
{
    UIDocumentProperties *_properties;	// 128 = 0x80
    UIContextMenuInteraction *_menuInteraction;	// 136 = 0x88
    CDUnknownBlockType _sourceViewProvider;	// 144 = 0x90
    LPLinkView *_linkView;	// 152 = 0x98
    UIButton *_shareButton;	// 160 = 0xa0
    struct {
        unsigned int didSetupDragInteraction:1;
    } _flags;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000015553d0
@property(readonly, nonatomic) LPLinkView *linkView; // @synthesize linkView=_linkView;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000155516d
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000001555001
- (id)_defaultSharePreview;	// IMP=0x0000000001554e0a
- (struct CGRect)_rectForShareButton;	// IMP=0x0000000001554d62
- (void)update;	// IMP=0x0000000001554cfe
- (void)linkViewNeedsResize:(id)arg1;	// IMP=0x0000000001554bc6
- (void)_share:(id)arg1;	// IMP=0x0000000001554a14
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x00000000015549e0
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000015549ce
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000000015549bc
- (id)_defaultDragPreview;	// IMP=0x000000000155472f
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x0000000001554644
- (struct CGRect)_rectForDragInteraction;	// IMP=0x00000000015544d3
- (id)initWithProperties:(id)arg1 metadata:(id)arg2 menuInteraction:(id)arg3 sourceViewProvider:(CDUnknownBlockType)arg4;	// IMP=0x0000000001553a02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
