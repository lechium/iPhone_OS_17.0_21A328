//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIKeyShortcutHUDShortcut, _UIKeyShortcutHUDShortcutInputAccessoryView;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDShortcutCell
{
    _UIKeyShortcutHUDShortcutInputAccessoryView *_shortcutInputAccessoryView;	// 8 = 0x8
    _UIKeyShortcutHUDShortcut *_shortcut;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000144d5fb
@property(nonatomic) __weak _UIKeyShortcutHUDShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, nonatomic) _UIKeyShortcutHUDShortcutInputAccessoryView *shortcutInputAccessoryView; // @synthesize shortcutInputAccessoryView=_shortcutInputAccessoryView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x000000000144d43b
- (void)configureWithShortcut:(id)arg1;	// IMP=0x000000000144d31e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000144d1f5

@end
