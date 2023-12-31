//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSDictionary, NSLayoutManager, NSString, NSTextContainer, UIColor, UIScrollView, UITextView, _UITextLayoutControllerBase;
@protocol _UITextCanvas, _UITextContainerViewDelegate, _UITextLayoutController;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView
{
    struct UIEdgeInsets _textContainerInset;	// 128 = 0x80
    struct CGPoint _textContainerOrigin;	// 160 = 0xa0
    struct CGSize _minSize;	// 176 = 0xb0
    struct CGSize _maxSize;	// 192 = 0xc0
    NSTextContainer *_textContainer;	// 208 = 0xd0
    NSDictionary *_linkTextAttributes;	// 216 = 0xd8
    unsigned long long _invalidationSeqNo;	// 224 = 0xe0
    long long _invalidationSeqClipsToBounds;	// 232 = 0xe8
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int freezeTextContainerSize:1;
        unsigned int usesStandardTextScaling:1;
    } _tcvFlags;	// 240 = 0xf0
    UITextView *_textView;	// 248 = 0xf8
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;	// 256 = 0x100
    id <_UITextContainerViewDelegate> _delegate;	// 264 = 0x108
    UIView<_UITextCanvas> *_canvasView;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000000146ce4d
@property(readonly, nonatomic) UIView<_UITextCanvas> *canvasView; // @synthesize canvasView=_canvasView;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) __weak id <_UITextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController; // @synthesize textLayoutController=_textLayoutController;
- (struct CGRect)visibleRect;	// IMP=0x000000000146cca1
@property(readonly, copy) NSString *description;
- (id)attributedSubstringForMarkedRange;	// IMP=0x000000000146cb18
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) struct _NSRange markedRange;
- (void)setLayoutOrientation:(long long)arg1;	// IMP=0x000000000146c834
@property(readonly, nonatomic) long long layoutOrientation;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;	// IMP=0x000000000146c7ac
- (void)_ensureLayoutCompleteForRect:(struct CGRect)arg1;	// IMP=0x000000000146c599
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000146c4a6
- (void)layoutSubviews;	// IMP=0x000000000146c239
- (_Bool)drawTextInRectIfNeeded:(struct CGRect)arg1;	// IMP=0x000000000146c231
- (void)didRemoveTextAttachmentViews:(id)arg1;	// IMP=0x000000000146c22b
- (void)didLayoutTextAttachmentView:(id)arg1 inFragmentRect:(struct CGRect)arg2;	// IMP=0x000000000146c225
- (void)didAddTextAttachmentViews:(id)arg1;	// IMP=0x000000000146c21f
- (void)textContainerUsageDidChangeToSize:(struct CGSize)arg1;	// IMP=0x000000000146c1e7
@property(readonly, nonatomic) struct CGRect _clipRectForFadedEdges;
@property(readonly, nonatomic) struct CGPoint drawingScale;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic) UIScrollView *enclosingScrollView;
@property(readonly, nonatomic) UIColor *textColor;
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000146c04c
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;	// IMP=0x000000000146bf31
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;	// IMP=0x000000000146bdcc
@property(nonatomic) _Bool usesStandardTextScaling;
- (_Bool)_ensureLayoutForCappedSize;	// IMP=0x000000000146bafd
- (_Bool)_shouldCapSizeToFitLayoutRange:(out struct _NSRange *)arg1;	// IMP=0x000000000146b745
- (void)sizeToFit;	// IMP=0x000000000146b660
- (void)_sizeToConstrainedContainerUsedRect;	// IMP=0x000000000146b550
@property(nonatomic, getter=isVerticallyResizable) _Bool verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) _Bool horizontallyResizable;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;	// IMP=0x000000000146b2c3
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000146b1d2
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000146b0e4
- (void)_setNeedsContentsFormatUpdate;	// IMP=0x000000000146b0c7
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x000000000146b047
- (void)setNeedsDisplay;	// IMP=0x000000000146b02a
- (void)_setFrameOrBounds:(struct CGRect)arg1 oldRect:(struct CGRect)arg2 isFrameRect:(_Bool)arg3 settingAction:(CDUnknownBlockType)arg4;	// IMP=0x000000000146ab23
- (void)_ensureMinAndMaxSizesConsistentWithBounds;	// IMP=0x000000000146aab3
- (void)invalidateTextContainerOrigin;	// IMP=0x000000000146aaa2
- (_Bool)reconfigureWithLayoutManager:(id)arg1 triggeredBySelector:(SEL)arg2;	// IMP=0x000000000146aa38
@property(readonly, nonatomic) struct CGPoint textContainerOrigin;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) _Bool freezeTextContainerSize;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000146a499
- (void)tintColorDidChange;	// IMP=0x000000000146a438
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;	// IMP=0x000000000146a3bf
- (id)linkTextAttributes;	// IMP=0x000000000146a370
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000146a2a5
- (id)initWithFrame:(struct CGRect)arg1 textLayoutController:(id)arg2 textContainer:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000001469f92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

