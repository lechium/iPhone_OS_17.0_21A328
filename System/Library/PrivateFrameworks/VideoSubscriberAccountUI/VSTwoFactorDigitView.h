//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, NSDictionary, NSString, UITextInputPasswordRules, UITextPosition, UITextRange, UIView;
@protocol UITextInputDelegate, UITextInputTokenizer, VSTwoFactorDigitViewDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorDigitView : UIControl
{
    _Bool _hasText;	// 8 = 0x8
    long long _keyboardType;	// 16 = 0x10
    long long _autocapitalizationType;	// 24 = 0x18
    long long _returnKeyType;	// 32 = 0x20
    NSString *_textContentType;	// 40 = 0x28
    id <UITextInputDelegate> _inputDelegate;	// 48 = 0x30
    id <UITextInputTokenizer> _tokenizer;	// 56 = 0x38
    NSDictionary *_markedTextStyle;	// 64 = 0x40
    id <VSTwoFactorDigitViewDelegate> _delegate;	// 72 = 0x48
    unsigned long long _digitCount;	// 80 = 0x50
    NSString *_codeText;	// 88 = 0x58
    NSArray *_digits;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000001cf15
@property(retain, nonatomic) NSArray *digits; // @synthesize digits=_digits;
@property(retain, nonatomic) NSString *codeText; // @synthesize codeText=_codeText;
@property(readonly, nonatomic) unsigned long long digitCount; // @synthesize digitCount=_digitCount;
@property(nonatomic) __weak id <VSTwoFactorDigitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle=_markedTextStyle;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer=_tokenizer;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) _Bool hasText; // @synthesize hasText=_hasText;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000001cda1
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x000000000001cd99
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x000000000001cd91
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x000000000001cd84
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x000000000001cd66
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x000000000001cd48
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000001cd3b
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000001cd33
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x000000000001cd2b
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000001cd23
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000001cd1b
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x000000000001cd13
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x000000000001cd0b
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000001cd03
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (id)textInRange:(id)arg1;	// IMP=0x000000000001ccc1
@property(copy) UITextRange *selectedTextRange;
- (void)unmarkText;	// IMP=0x000000000001ccb3
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x000000000001ccad
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x000000000001cca7
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x000000000001cca1
- (void)setText:(id)arg1;	// IMP=0x000000000001cc89
- (void)insertText:(id)arg1;	// IMP=0x000000000001c98e
- (void)deleteBackward;	// IMP=0x000000000001c876
- (void)setupDigitViews;	// IMP=0x000000000001c307
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000001c2a9
- (void)onTouchUpInside:(id)arg1;	// IMP=0x000000000001c297
- (id)initWithDigitCount:(unsigned long long)arg1;	// IMP=0x000000000001bdb6

// Remaining properties
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long inlinePredictionType;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *textInputView;

@end

