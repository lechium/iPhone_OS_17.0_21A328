//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC19ContactlessReaderUI33IdentityRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    MISSING_TYPE *hideStatusBar;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 16 = 0x10
    MISSING_TYPE *identityViewController;	// 24 = 0x18
    MISSING_TYPE *hideMenuIndicatorTimer;	// 32 = 0x20
    MISSING_TYPE *subscriptions;	// 40 = 0x28
    MISSING_TYPE *supressor;	// 48 = 0x30
    MISSING_TYPE *interruptionMonitor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c5980
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c8ba0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000c8830
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7d90
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7ce0
- (void)handlePanWithSender:(id)arg1;	// IMP=0x00000000000c6aa0
- (void)handleHomeButtonPressed;	// IMP=0x00000000000c6500
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000c62e0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000c5e00
- (void)viewDidLoad;	// IMP=0x00000000000c5da0
- (void)dealloc;	// IMP=0x00000000000c5960
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property(nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property(nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;

@end
