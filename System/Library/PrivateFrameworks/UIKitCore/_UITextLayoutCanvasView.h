//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMapTable, NSMutableSet, NSString, NSTextContainer, NSTextLayoutManager, NSTextViewportLayoutController;
@protocol _UITextCanvasContext;

__attribute__((visibility("hidden")))
@interface _UITextLayoutCanvasView : UIView
{
    NSTextViewportLayoutController *_viewportLayoutController;	// 128 = 0x80
    NSMutableSet *_viewportElementsToRemove;	// 136 = 0x88
    NSMapTable *_viewportElementViews;	// 144 = 0x90
    NSMutableSet *_textAttachmentViews;	// 152 = 0x98
    NSMutableSet *_newTextAttachmentViews;	// 160 = 0xa0
    unsigned long long _textContainerIndex;	// 168 = 0xa8
    struct CGSize _contentSize;	// 176 = 0xb0
    _Bool _inLayout;	// 192 = 0xc0
    NSTextLayoutManager *_textLayoutManager;	// 200 = 0xc8
    id <_UITextCanvasContext> _context;	// 208 = 0xd0
    NSTextContainer *_textContainer;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000008b718a
@property(readonly, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(nonatomic) __weak id <_UITextCanvasContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSTextLayoutManager *textLayoutManager; // @synthesize textLayoutManager=_textLayoutManager;
- (void)updateContentSizeIfNeeded;	// IMP=0x00000000008b7050
- (void)viewportBoundsDidChange;	// IMP=0x00000000008b703e
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x00000000008b6f20
- (void)textViewportLayoutControllerDidLayout:(id)arg1;	// IMP=0x00000000008b6ea9
- (void)textViewportLayoutControllerWillLayout:(id)arg1;	// IMP=0x00000000008b6e32
- (void)textViewportLayoutController:(id)arg1 configureRenderingSurfaceForTextLayoutFragment:(id)arg2;	// IMP=0x00000000008b67a6
- (struct CGRect)viewportBoundsForTextViewportLayoutController:(id)arg1;	// IMP=0x00000000008b6672
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000008b6615
- (void)layoutSubviews;	// IMP=0x00000000008b6603
- (void)_performViewportLayout;	// IMP=0x00000000008b6528
- (void)setNeedsDisplay;	// IMP=0x00000000008b64e7
- (id)textRangeForBounds:(struct CGRect)arg1 layoutIfNeeded:(_Bool)arg2;	// IMP=0x00000000008b6145
- (id)textRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000008b6128
- (void)_viewportDidLayout;	// IMP=0x00000000008b5dc3
- (void)_viewportWillLayout;	// IMP=0x00000000008b5c66
- (id)initWithTextLayoutManager:(id)arg1 textContainer:(id)arg2;	// IMP=0x00000000008b5a8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
