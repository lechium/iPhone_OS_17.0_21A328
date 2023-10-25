//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SUUIRedeemCameraLandingView, SUUIRedeemTextField, UIButton, UIImage, UIScrollView;
@protocol SUUIRedeemCameraViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUIIPadRedeemCameraView : UIView
{
    id <SUUIRedeemCameraViewDelegate> _delegate;	// 8 = 0x8
    SUUIRedeemTextField *_inputAccessoryTextField;	// 16 = 0x10
    SUUIRedeemCameraLandingView *_landingView;	// 24 = 0x18
    UIView *_redeemerView;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    UIButton *_termsButton;	// 48 = 0x30
    SUUIRedeemTextField *_textField;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000201818
@property(nonatomic) __weak id <SUUIRedeemCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;	// IMP=0x0000000000201575
- (void)_hideKeyboard;	// IMP=0x0000000000201558
- (double)_adjustVerticalSpacingForHeight:(double)arg1;	// IMP=0x0000000000201426
- (void)_termsButtonAction:(id)arg1;	// IMP=0x00000000002013ea
- (void)_landingButtonAction:(id)arg1;	// IMP=0x00000000002013ae
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000000020131e
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000201314
- (void)textFieldTextDidChange:(id)arg1;	// IMP=0x000000000020129e
- (void)keyboardDidChange:(id)arg1;	// IMP=0x000000000020104a
- (void)layoutSubviews;	// IMP=0x0000000000200d86
- (void)start;	// IMP=0x0000000000200d80
@property(nonatomic) _Bool enabled;
- (void)showKeyboard;	// IMP=0x0000000000200c8c
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;	// IMP=0x0000000000200aa8
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000002006a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
