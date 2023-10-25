//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSMutableAttributedString, NSString, UIColor, UITextInputController;

@protocol UITextInputControllerDelegate <NSObject>

@optional
@property(retain, nonatomic) UIColor *tintColor;
@property(readonly, nonatomic) _Bool isSingleLineDocument;
- (void)textInputDidAnimatePaste:(UITextInputController *)arg1;
- (void)textInputWillAnimatePaste:(UITextInputController *)arg1;
- (void)textInputDidChangeSelection:(UITextInputController *)arg1;
- (struct _NSRange)textInput:(UITextInputController *)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (_Bool)textInputShouldExtendCaretHeight:(UITextInputController *)arg1;
- (void)textInputDidChange:(UITextInputController *)arg1;
- (void)textInput:(UITextInputController *)arg1 prepareAttributedTextForInsertion:(NSMutableAttributedString *)arg2;
- (_Bool)textInput:(UITextInputController *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (_Bool)textInputShouldBeginEditing:(UITextInputController *)arg1;
@end
