//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@interface UIViewController (PKUIUtilities)
- (_Bool)pkui_userInterfaceIdiomSupportsLargeLayouts;	// IMP=0x00600000005fb418
- (_Bool)pkui_disablesAutomaticDismissalUponEnteringBackground;	// IMP=0x00600000005fb410
- (id)pkui_frontMostViewController;	// IMP=0x00600000005fb342
- (void)_pk_presentViewController:(id)arg1 animated:(_Bool)arg2 transition:(int)arg3 popToViewControllerAfterPresentation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0060000000642bbc
- (void)pk_presentViewController:(id)arg1 transition:(int)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0060000000642b8f
- (void)pk_presentViewController:(id)arg1 animated:(_Bool)arg2 popToViewControllerAfterPresentation:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0060000000642b67
- (void)pk_paymentSetupPreflight:(CDUnknownBlockType)arg1;	// IMP=0x0060000000642afb
- (void)pk_paymentSetupSetHideSetupLaterButton:(_Bool)arg1;	// IMP=0x0060000000642ab9
- (void)presentModalViewController:(id)arg1 withPaymentSetupContext:(long long)arg2;	// IMP=0x00600000006a5b5e
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x00600000006efc49
- (id)pk_childrenForAppearance;	// IMP=0x00600000006efb60
@end

