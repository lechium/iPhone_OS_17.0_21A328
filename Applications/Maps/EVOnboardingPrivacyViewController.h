//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol EVOnboardingPrivacyViewControllerDelegate;

@interface EVOnboardingPrivacyViewController
{
    id <EVOnboardingPrivacyViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000544e07
- (void)_notNowPressed;	// IMP=0x0010000000544d6b
- (void)_sharePressed;	// IMP=0x0010000000544ccf
- (void)_aboutImproveEVRoutingPressed;	// IMP=0x0010000000544c0a
- (id)obViewController;	// IMP=0x0010000000544681
- (void)viewDidLoad;	// IMP=0x00100000005445d4
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000054456a

@end
