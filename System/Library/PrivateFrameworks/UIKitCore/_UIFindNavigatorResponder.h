//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@class NSDictionary, NSIndexSet, NSString, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules, UITextPosition, UITextRange, UIView, _UIFindNavigatorViewController, _UISupplementalLexicon;
@protocol UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorResponder : UIResponder
{
    _Bool _canBecomeFirstResponder;	// 8 = 0x8
    _Bool _showsCollapsedInputView;	// 9 = 0x9
    UIView *_collapsedInputView;	// 16 = 0x10
    _Bool _isChangingInputModes;	// 24 = 0x18
    UITextPosition *beginningOfDocument;	// 32 = 0x20
    UITextPosition *endOfDocument;	// 40 = 0x28
    id <UITextInputDelegate> inputDelegate;	// 48 = 0x30
    UITextRange *markedTextRange;	// 56 = 0x38
    NSDictionary *markedTextStyle;	// 64 = 0x40
    UITextRange *selectedTextRange;	// 72 = 0x48
    id <UITextInputTokenizer> tokenizer;	// 80 = 0x50
    _UIFindNavigatorViewController *_findNavigatorViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000070e53d
@property(readonly, nonatomic) _Bool isChangingInputModes; // @synthesize isChangingInputModes=_isChangingInputModes;
@property(retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController; // @synthesize findNavigatorViewController=_findNavigatorViewController;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer;
@property(copy) UITextRange *selectedTextRange; // @synthesize selectedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @synthesize markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange; // @synthesize markedTextRange;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate;
@property(readonly, nonatomic) UITextPosition *endOfDocument; // @synthesize endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument; // @synthesize beginningOfDocument;
@property(nonatomic) _Bool canBecomeFirstResponder; // @synthesize canBecomeFirstResponder=_canBecomeFirstResponder;
- (void)unmarkText;	// IMP=0x000000000070e428
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000070e420
- (id)textInRange:(id)arg1;	// IMP=0x000000000070e418
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x000000000070e412
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x000000000070e40c
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x000000000070e3ff
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x000000000070e3f9
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x000000000070e3f1
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x000000000070e3e9
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x000000000070e3e1
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000070e3d9
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x000000000070e3bb
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000070e3b3
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x000000000070e3ab
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x000000000070e3a3
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000070e39b
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000070e393
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x000000000070e375
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000070e368
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) _Bool acceptsInitialEmojiKeyboard;
@property(nonatomic) _Bool forceDisableDictation;
- (void)takeTraitsFrom:(id)arg1;	// IMP=0x000000000070e289
- (void)deleteBackward;	// IMP=0x000000000070e283
- (void)insertText:(id)arg1;	// IMP=0x000000000070e27d
@property(readonly, nonatomic) _Bool hasText;
- (id)_ui_findNavigatorResponder;	// IMP=0x000000000070e26c
- (_Bool)_alwaysRequireInlineCandidateView;	// IMP=0x000000000070e239
- (_Bool)_disallowsPresentationOfKeyboardShortcutHUD;	// IMP=0x000000000070e231
- (void)_didPersistFindUI:(id)arg1;	// IMP=0x000000000070e158
- (void)_willPersistFindUI:(id)arg1;	// IMP=0x000000000070e147
- (id)textInputMode;	// IMP=0x000000000070e13f
- (id)textInputContextIdentifier;	// IMP=0x000000000070e137
- (id)nextFirstResponder;	// IMP=0x000000000070e0dc
- (void)becomeFirstResponderAndFocusFindField;	// IMP=0x000000000070dfc1
- (id)inputAccessoryViewController;	// IMP=0x000000000070df4c
- (id)inputAccessoryView;	// IMP=0x000000000070df44
- (id)inputDashboardViewController;	// IMP=0x000000000070decf
- (id)inputView;	// IMP=0x000000000070de45
- (id)nextResponder;	// IMP=0x000000000070ddea
- (unsigned long long)hostingTypeForTraitCollection:(id)arg1;	// IMP=0x000000000070dd32
- (id)initWithFindNavigatorViewController:(id)arg1;	// IMP=0x000000000070dbc0

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableHandwritingKeyboard;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool forceSpellingDictation;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
@property(nonatomic) long long inlineCompletionType;
@property(nonatomic) long long inlinePredictionType;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) _Bool preferOnlineDictation;
@property(nonatomic) long long preferredKeyboardStyle;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *selectionBorderColor;
@property(nonatomic) double selectionBorderWidth;
@property(nonatomic) double selectionCornerRadius;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property(retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility;
@property(readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end
