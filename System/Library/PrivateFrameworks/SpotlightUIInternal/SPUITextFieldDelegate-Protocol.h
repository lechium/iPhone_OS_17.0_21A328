//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightUIInternal/UITextFieldDelegate-Protocol.h>

@class UITextField;

@protocol SPUITextFieldDelegate <UITextFieldDelegate>
- (void)updateDictationButtonEnabledStatus;
- (_Bool)currentlyPresentingWebEntity;
- (void)highlightResultAfterUnmarkingText;
- (void)enableDictationIfRequired;
- (void)dictationButtonPressed;
- (void)textDidChange:(UITextField *)arg1;
- (void)removeCompletionAndHighlightAsTyped:(_Bool)arg1;
- (_Bool)lastQueryKindSupportsOptionKey;
- (void)textFieldDidReplaceTokensWithStringEquivalent:(UITextField *)arg1;
- (void)switchToSuggestions;
- (void)commitSearch;
- (void)escapeKeyPressed;
- (void)returnKeyPressed;
- (void)backButtonPressed;
@end

