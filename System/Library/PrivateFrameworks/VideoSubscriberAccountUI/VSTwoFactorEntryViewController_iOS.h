//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIBarButtonItem, UIScrollView, VSFontCenter, VSIdentityProviderLogoView, VSTwoFactorDigitView, VSTwoFactorEntryViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryViewController_iOS : UIViewController
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 16 = 0x10
    VSTwoFactorEntryViewModel *_viewModel;	// 24 = 0x18
    UIBarButtonItem *_verifyButton;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    VSTwoFactorDigitView *_digitView;	// 48 = 0x30
    NSArray *_buttons;	// 56 = 0x38
    VSIdentityProviderLogoView *_logoView;	// 64 = 0x40
    VSFontCenter *_fontCenter;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000020148
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) VSIdentityProviderLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) VSTwoFactorDigitView *digitView; // @synthesize digitView=_digitView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIBarButtonItem *verifyButton; // @synthesize verifyButton=_verifyButton;
@property(retain, nonatomic) VSTwoFactorEntryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void)twoFactorDigitView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000000001ff85
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000001ff48
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001fc37
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)stopObservingViewModel:(id)arg1;	// IMP=0x000000000001f9eb
- (void)startObservingViewModel:(id)arg1;	// IMP=0x000000000001f926
- (void)buttonPressed:(id)arg1;	// IMP=0x000000000001f785
- (void)verifyButtonPressed:(id)arg1;	// IMP=0x000000000001f743
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001f67a
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001f641
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001f608
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001f4d3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001f49a
- (void)viewDidLoad;	// IMP=0x000000000001dfdc
- (void)dealloc;	// IMP=0x000000000001df93
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001df23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

