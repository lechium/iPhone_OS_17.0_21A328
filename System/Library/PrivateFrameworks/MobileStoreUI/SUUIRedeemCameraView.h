//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SUUIClientContext, SUUIITunesPassConfiguration, SUUIRedeemCameraLandingView, SUUIRedeemITunesPassLockup, SUUIRedeemTextField, UIButton, UIImage;
@protocol SUUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemCameraView : UIView
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    id <SUUIRedeemCameraViewDelegate> _delegate;	// 16 = 0x10
    SUUIRedeemTextField *_inputAccessoryTextField;	// 24 = 0x18
    SUUIITunesPassConfiguration *_iTunesPassConfiguration;	// 32 = 0x20
    SUUIRedeemITunesPassLockup *_iTunesPassLockup;	// 40 = 0x28
    SUUIRedeemCameraLandingView *_landingView;	// 48 = 0x30
    UIView *_overlay;	// 56 = 0x38
    UIView *_redeemerView;	// 64 = 0x40
    UIButton *_termsButton;	// 72 = 0x48
    SUUIRedeemTextField *_textField;	// 80 = 0x50
    _Bool _displayRedeem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000ab966
@property(retain, nonatomic) SUUIITunesPassConfiguration *ITunesPassConfiguration; // @synthesize ITunesPassConfiguration=_iTunesPassConfiguration;
@property(nonatomic) __weak id <SUUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showRedeemer:(_Bool)arg1;	// IMP=0x00000000000ab8ec
- (void)_resumeRedeemer;	// IMP=0x00000000000ab8b0
- (void)_pauseRedeemer;	// IMP=0x00000000000ab874
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;	// IMP=0x00000000000ab5fe
- (_Bool)_isShowingRedeemer;	// IMP=0x00000000000ab5e9
- (void)_hideKeyboard;	// IMP=0x00000000000ab5a0
- (void)_termsButtonAction:(id)arg1;	// IMP=0x00000000000ab564
- (void)_tapGestureAction:(id)arg1;	// IMP=0x00000000000ab501
- (void)_landingButtonAction:(id)arg1;	// IMP=0x00000000000ab4c7
- (void)_iTunesPassLearnMoreAction:(id)arg1;	// IMP=0x00000000000ab46a
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000000000ab44a
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000ab3ba
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000000000ab39a
- (void)textFieldTextDidChange:(id)arg1;	// IMP=0x00000000000ab343
- (void)keyboardDidHide:(id)arg1;	// IMP=0x00000000000ab33d
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000000000ab217
- (void)keyboardDidShow:(id)arg1;	// IMP=0x00000000000ab1eb
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000000000ab05f
- (void)layoutSubviews;	// IMP=0x00000000000aaa62
@property(copy, nonatomic) NSString *text;
- (void)start;	// IMP=0x00000000000aaa3f
- (void)showKeyboard;	// IMP=0x00000000000aaa22
@property(retain, nonatomic) UIImage *image;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;	// IMP=0x00000000000aa4ee
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000000a9f80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

