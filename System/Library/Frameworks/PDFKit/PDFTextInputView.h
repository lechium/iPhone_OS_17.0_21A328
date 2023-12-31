//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSString, PDFTextSearchAggregator, UITextHighlightView, UITextInputPasswordRules, UITextInteraction, UITextPosition, UITextRange, UITextSearchingDimmingView;
@protocol NSObject><NSCopying, PDFTextInputDelegate, UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface PDFTextInputView : UIView
{
    id <PDFTextInputDelegate> _delegate;	// 8 = 0x8
    UITextRange *_textSelectionRange;	// 16 = 0x10
    UITextInteraction *_textInteraction;	// 24 = 0x18
    id <UITextInputDelegate> _textInputDelegate;	// 32 = 0x20
    id <UITextInputTokenizer> _textInputTokenizer;	// 40 = 0x28
    _Bool _dimmingViewVisible;	// 48 = 0x30
    UITextHighlightView *_searchHighlightView;	// 56 = 0x38
    UITextSearchingDimmingView *_searchDimmingView;	// 64 = 0x40
    UITextRange *_highlightedTextRange;	// 72 = 0x48
    NSMutableArray *_foundTextRanges;	// 80 = 0x50
    PDFTextSearchAggregator *_activeSearch;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000270c3
- (id)editMenuForTextRange:(id)arg1 suggestedActions:(id)arg2;	// IMP=0x000000000002695a
- (void)layoutSubviews;	// IMP=0x0000000000025e5d
- (void)clearAllDecoratedFoundText;	// IMP=0x0000000000025dfc
- (void)decorateFoundTextRange:(id)arg1 inDocument:(id)arg2 usingStyle:(long long)arg3;	// IMP=0x00000000000259d1
- (void)performTextSearchWithQueryString:(id)arg1 usingOptions:(id)arg2 resultAggregator:(id)arg3;	// IMP=0x0000000000025818
- (long long)compareFoundRange:(id)arg1 toRange:(id)arg2 inDocument:(id)arg3;	// IMP=0x000000000002577e
- (id)_targetedPreviewForRange:(id)arg1;	// IMP=0x0000000000025024
- (void)_setDimmingViewVisible:(_Bool)arg1;	// IMP=0x0000000000024d03
- (id)linkRegionsConstrainedToLineAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000024812
- (_Bool)interactionShouldBegin:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000002462e
- (void)deleteBackward;	// IMP=0x000000000002461a
- (void)insertText:(id)arg1;	// IMP=0x0000000000024606
@property(readonly, nonatomic) _Bool hasText;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x00000000000245dc
- (void)unmarkText;	// IMP=0x00000000000245c8
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x00000000000245b4
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x0000000000024560
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000002454b
- (_Bool)_allowAnimatedUpdateSelectionRectViews;	// IMP=0x0000000000024543
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000244b2
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x00000000000244a0
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x000000000002448c
- (id)_closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x00000000000241c5
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0000000000023c8e
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0000000000023a9a
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x00000000000238a7
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000023812
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x00000000000237af
- (void)setTokenizer:(id)arg1;	// IMP=0x000000000002379b
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000002332d
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000002319f
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x0000000000022e7f
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000022e65
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000022df3
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (id)textInRange:(id)arg1;	// IMP=0x0000000000022661
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000000022659
- (id)_selectionForTextRange:(id)arg1;	// IMP=0x00000000000224a9
- (void)updateGestureRecognizerDependencies;	// IMP=0x000000000002212c
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4 isIndirectTouch:(_Bool)arg5;	// IMP=0x00000000000220ba
- (id)selection;	// IMP=0x000000000002209d
- (void)setSelection:(id)arg1;	// IMP=0x0000000000021f6d
- (void)updateTextSelectionGraphics;	// IMP=0x0000000000021f24
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000021e0e

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long inlinePredictionType;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(readonly) id <NSObject><NSCopying> selectedTextSearchDocument;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsTextReplacement;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;

@end

