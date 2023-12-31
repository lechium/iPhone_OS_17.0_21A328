//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICHashtagController.h>

@interface ICHashtagController (App)
+ (void)addUnconfirmedAttributeToTextStorage:(id)arg1 atRange:(struct _NSRange)arg2;	// IMP=0x008000000000d6e8
+ (struct _NSRange)rangeOfUnconfirmedHashtagInTextStorage:(id)arg1;	// IMP=0x008000000000d5be
- (void)insertHashtagAttachment:(id)arg1 toTextView:(id)arg2 range:(struct _NSRange)arg3 viaAutoComplete:(_Bool)arg4 delimiter:(id)arg5;	// IMP=0x001000000000cf7f
- (void)insertHashtagWithText:(id)arg1 viaAutoComplete:(_Bool)arg2 delimiter:(id)arg3 parentAttachment:(id)arg4;	// IMP=0x001000000000cd67
- (void)insertHashtagWithText:(id)arg1 viaAutoComplete:(_Bool)arg2 parentAttachment:(id)arg3;	// IMP=0x001000000000cd4f
- (_Bool)isValidElement:(unsigned short)arg1;	// IMP=0x001000000000ccf9
- (_Bool)isEmoji:(id)arg1;	// IMP=0x001000000000cbdf
- (_Bool)isValidPostfixString:(id)arg1;	// IMP=0x001000000000cb2c
- (_Bool)isValidPostfixCharacter:(unsigned short)arg1;	// IMP=0x001000000000cad3
- (_Bool)range:(struct _NSRange)arg1 hasValidPostfixCharacterForString:(id)arg2;	// IMP=0x001000000000ca55
- (void)updateAutoCompletionView:(id)arg1 range:(struct _NSRange)arg2 textView:(id)arg3 ofTextStorage:(id)arg4;	// IMP=0x001000000000c813
- (void)dismissAutoCompletionView;	// IMP=0x001000000000c717
- (_Bool)isExistingHashtag:(id)arg1 hashtagSuggestionsArray:(id)arg2;	// IMP=0x001000000000c51a
- (struct _NSRange)rangeToCheckForHashtagCreation:(struct _NSRange)arg1;	// IMP=0x001000000000c4fe
- (void)createNewHashtagIfNecessary:(struct _NSRange)arg1 textStorage:(id)arg2 ignoreDelimiter:(_Bool)arg3 parentAttachment:(id)arg4;	// IMP=0x001000000000bb1c
- (void)updatePredictiveBar:(id)arg1;	// IMP=0x001000000000ba2b
- (id)currentUnconfirmedHashtagString:(id)arg1 textStorage:(id)arg2;	// IMP=0x001000000000b8b7
- (void)updateUIWhenAutoConversionOff:(id)arg1 textStorage:(id)arg2;	// IMP=0x001000000000b68a
- (void)clearUnconfirmedHashtagInTextStorage:(id)arg1;	// IMP=0x001000000000b5e4
- (void)_checkForHashtagInEditedRange:(struct _NSRange)arg1 ofTextStorage:(id)arg2 note:(id)arg3 textView:(id)arg4 allowAutoExplicitHashtag:(_Bool)arg5 isEndingEditing:(_Bool)arg6 languageHasSpaces:(_Bool)arg7 parentAttachment:(id)arg8;	// IMP=0x001000000000aecc
@end

