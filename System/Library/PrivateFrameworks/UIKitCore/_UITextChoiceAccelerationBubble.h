//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class CAShapeLayer, NSArray, NSLayoutConstraint, NSString, TIKeyboardCandidate, UILayoutGuide, UIScrollView, UIStackView, UITapGestureRecognizer, UIView, UIVisualEffectView, _UIReplacementCandidate, _UITextOption;

__attribute__((visibility("hidden")))
@interface _UITextChoiceAccelerationBubble : UIControl
{
    _Bool _shouldRejectCandidate;	// 8 = 0x8
    UITapGestureRecognizer *_tapGesture;	// 16 = 0x10
    UILayoutGuide *_textAnchor;	// 24 = 0x18
    NSLayoutConstraint *_anchorLeading;	// 32 = 0x20
    NSLayoutConstraint *_anchorTop;	// 40 = 0x28
    NSLayoutConstraint *_anchorWidth;	// 48 = 0x30
    NSLayoutConstraint *_anchorHeight;	// 56 = 0x38
    NSArray *_boundaryConstraints;	// 64 = 0x40
    NSLayoutConstraint *_leadingSpacing;	// 72 = 0x48
    NSArray *_belowTextConstraints;	// 80 = 0x50
    NSArray *_aboveTextConstraints;	// 88 = 0x58
    TIKeyboardCandidate *_candidate;	// 96 = 0x60
    _UIReplacementCandidate *_replacement;	// 104 = 0x68
    NSString *_selectedChoice;	// 112 = 0x70
    UIView *_parentView;	// 120 = 0x78
    long long _buttonType;	// 128 = 0x80
    UIVisualEffectView *_backgroundView;	// 136 = 0x88
    CAShapeLayer *_backgroundMaskLayer;	// 144 = 0x90
    UIStackView *_contentsView;	// 152 = 0x98
    UIScrollView *_backingScrollView;	// 160 = 0xa0
    _UITextOption *_sideButton;	// 168 = 0xa8
    NSArray *_buttonConstraints;	// 176 = 0xb0
    UIView *_textHighlightView;	// 184 = 0xb8
    struct CGRect _referenceRect;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x0000000000886f6e
@property(retain, nonatomic) UIView *textHighlightView; // @synthesize textHighlightView=_textHighlightView;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) _UITextOption *sideButton; // @synthesize sideButton=_sideButton;
@property(retain, nonatomic) UIScrollView *backingScrollView; // @synthesize backingScrollView=_backingScrollView;
@property(retain, nonatomic) UIStackView *contentsView; // @synthesize contentsView=_contentsView;
@property(retain, nonatomic) CAShapeLayer *backgroundMaskLayer; // @synthesize backgroundMaskLayer=_backgroundMaskLayer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(readonly, nonatomic) NSString *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(retain, nonatomic) _UIReplacementCandidate *replacement; // @synthesize replacement=_replacement;
@property(nonatomic) _Bool shouldRejectCandidate; // @synthesize shouldRejectCandidate=_shouldRejectCandidate;
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
@property(nonatomic) struct CGRect referenceRect; // @synthesize referenceRect=_referenceRect;
@property(retain, nonatomic) NSArray *aboveTextConstraints; // @synthesize aboveTextConstraints=_aboveTextConstraints;
@property(retain, nonatomic) NSArray *belowTextConstraints; // @synthesize belowTextConstraints=_belowTextConstraints;
@property(retain, nonatomic) NSLayoutConstraint *leadingSpacing; // @synthesize leadingSpacing=_leadingSpacing;
@property(retain, nonatomic) NSArray *boundaryConstraints; // @synthesize boundaryConstraints=_boundaryConstraints;
@property(retain, nonatomic) NSLayoutConstraint *anchorHeight; // @synthesize anchorHeight=_anchorHeight;
@property(retain, nonatomic) NSLayoutConstraint *anchorWidth; // @synthesize anchorWidth=_anchorWidth;
@property(retain, nonatomic) NSLayoutConstraint *anchorTop; // @synthesize anchorTop=_anchorTop;
@property(retain, nonatomic) NSLayoutConstraint *anchorLeading; // @synthesize anchorLeading=_anchorLeading;
@property(retain, nonatomic) UILayoutGuide *textAnchor; // @synthesize textAnchor=_textAnchor;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
- (int)textEffectsVisibilityLevel;	// IMP=0x0000000000886ba3
- (int)textEffectsVisibilityLevelInKeyboardWindow;	// IMP=0x0000000000886b98
- (void)dismissWithText:(id)arg1;	// IMP=0x0000000000886b2d
- (void)dismissWithRevert:(id)arg1;	// IMP=0x0000000000886ad6
- (void)dismissWithCancel;	// IMP=0x0000000000886a56
- (void)removeAnimated;	// IMP=0x00000000008869a3
- (void)reset;	// IMP=0x0000000000886959
- (void)removeFromSuperview;	// IMP=0x00000000008867a1
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000886783
- (void)tappedInside:(id)arg1;	// IMP=0x000000000088657f
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000088646f
- (id)optionForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000088640f
- (void)showTextHighlightView:(_Bool)arg1;	// IMP=0x0000000000885eb1
- (id)bubblePathInRect:(struct CGRect)arg1;	// IMP=0x0000000000885e90
- (id)squaredOffBubblePathInRect:(struct CGRect)arg1;	// IMP=0x000000000088588e
- (id)backgroundImageView;	// IMP=0x00000000008856df
- (id)textOptionWithText:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000885683
- (void)layoutSubviews;	// IMP=0x0000000000885485
- (void)updateButtonForType:(long long)arg1;	// IMP=0x0000000000885455
- (void)updateButtonName:(id)arg1 placement:(long long)arg2 originalText:(id)arg3;	// IMP=0x00000000008844cc
- (void)updateViewForOptions:(id)arg1;	// IMP=0x0000000000883be9
- (void)updateWithChoices:(id)arg1 fromParentView:(id)arg2 referenceTextView:(id)arg3 presentedFromRect:(id)arg4;	// IMP=0x0000000000883a2f
- (void)hideForNow;	// IMP=0x00000000008839b2
- (void)updateTextHighlightViewWithColor:(id)arg1 convertedRect:(struct CGRect)arg2;	// IMP=0x00000000008838fc
- (void)updateTextBoxHighlightForRect:(id)arg1 inTextView:(id)arg2 parentView:(id)arg3 highlightColor:(id)arg4;	// IMP=0x00000000008837a4
- (void)updateForSingleWord:(id)arg1 textAnchorRect:(id)arg2 inTextView:(id)arg3 parentView:(id)arg4 highlightColor:(id)arg5;	// IMP=0x00000000008834fa
- (void)showChoices:(_Bool)arg1;	// IMP=0x00000000008832aa
- (_Bool)promptWillCollideWithKeyboard:(struct CGRect)arg1;	// IMP=0x0000000000882f48
- (void)updateSelfWithRect:(struct CGRect)arg1;	// IMP=0x000000000088267f
- (void)anchorToTextIfNeeded;	// IMP=0x0000000000881746
- (void)updateTextAnchorForParentView:(id)arg1;	// IMP=0x0000000000880eeb
- (void)prepareGesture;	// IMP=0x0000000000880d9f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000880ccc
- (id)init;	// IMP=0x0000000000880c9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

