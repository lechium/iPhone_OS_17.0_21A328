//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIInputView.h>

@class SFAutomaticPasswordExplanationView;
@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordInputView : UIInputView
{
    SFAutomaticPasswordExplanationView *_explanationView;	// 8 = 0x8
    _Bool _shouldAllowSelfSizing;	// 16 = 0x10
    long long _keyboardType;	// 24 = 0x18
    id <SFAutomaticPasswordInputViewDelegate> _delegate;	// 32 = 0x20
    id <SFAutomaticPasswordInputViewSizing> _inputViewSizing;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001bc072
@property(nonatomic) _Bool shouldAllowSelfSizing; // @synthesize shouldAllowSelfSizing=_shouldAllowSelfSizing;
@property(nonatomic) __weak id <SFAutomaticPasswordInputViewSizing> inputViewSizing; // @synthesize inputViewSizing=_inputViewSizing;
@property(nonatomic) __weak id <SFAutomaticPasswordInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (_Bool)allowsSelfSizing;	// IMP=0x00000000001bbfeb
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001bbf5f
- (void)_useStrongPasswordButtonAction:(id)arg1;	// IMP=0x00000000001bbf08
- (long long)keyboardAppearance;	// IMP=0x00000000001bbeeb
- (void)setKeyboardAppearance:(long long)arg1;	// IMP=0x00000000001bbece
- (id)initWithInputViewStyle:(long long)arg1 keyboardType:(long long)arg2;	// IMP=0x00000000001bba2d

@end

