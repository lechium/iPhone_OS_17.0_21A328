//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class BSAction, CPSLaunchContentViewController, NSString;

@interface CPSAlertViewController : SBUIRemoteAlertServiceViewController
{
    CPSLaunchContentViewController *;	// 8 = 0x8
    BSAction *_action;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000000353b
+ (void)initialize;	// IMP=0x0010000000002b20
- (void).cxx_destruct;	// IMP=0x0020000000003543
- (void)proxCardFlowDidDismiss;	// IMP=0x00100000000034d1
- (void)launchContentViewControllerDidDisappear:(id)arg1 didOpenClip:(_Bool)arg2;	// IMP=0x0010000000003405
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000000033f3
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000003332
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000332a
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003260
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000030a4
- (void)_dismiss;	// IMP=0x0010000000003085
- (void)_configureRemoteAlertWithURL:(id)arg1;	// IMP=0x0010000000002f86
- (void)_displayLaunchContentViewController;	// IMP=0x0010000000002e6f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000002db2
- (void)viewDidLoad;	// IMP=0x0010000000002bd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

