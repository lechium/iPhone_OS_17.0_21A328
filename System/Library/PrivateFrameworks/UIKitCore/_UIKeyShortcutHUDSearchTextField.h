//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UISearchTextField.h"

@class _UIKeyShortcutHUDSearchButton, _UIKeyShortcutHUDShortcutInputView;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDSearchTextField : UISearchTextField
{
    _UIKeyShortcutHUDSearchButton *_searchButton;	// 8 = 0x8
    _UIKeyShortcutHUDShortcutInputView *_shortcutInputView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003e2a4d
@property(retain, nonatomic) _UIKeyShortcutHUDShortcutInputView *shortcutInputView; // @synthesize shortcutInputView=_shortcutInputView;
@property(retain, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton; // @synthesize searchButton=_searchButton;
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x00000000003e292b
- (_Bool)_suppressSoftwareKeyboard;	// IMP=0x00000000003e2923
- (id)preferredFocusEnvironments;	// IMP=0x00000000003e288a
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000003e2857
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000003e2824
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000003e2706
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000003e2631
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000003e257f

@end
