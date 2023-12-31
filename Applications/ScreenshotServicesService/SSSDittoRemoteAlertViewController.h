//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, SSSDittoRootViewController, SSSViewControllerManager, UIVisualEffectView;
@protocol SSSDittoRemoteAlertViewControllerDelegate;

@interface SSSDittoRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    SSSDittoRootViewController *_rootViewController;	// 8 = 0x8
    UIVisualEffectView *_backgroundView;	// 16 = 0x10
    _Bool _isTransitioningStates;	// 24 = 0x18
    SSSViewControllerManager *viewControllerManager;	// 32 = 0x20
    id <SSSDittoRemoteAlertViewControllerDelegate> _dittoRemoteAlertDelegate;	// 40 = 0x28
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000010be9
- (void).cxx_destruct;	// IMP=0x0020000000010cc0
@property(nonatomic) _Bool isTransitioningStates; // @synthesize isTransitioningStates=_isTransitioningStates;
@property(nonatomic) __weak id <SSSDittoRemoteAlertViewControllerDelegate> dittoRemoteAlertDelegate; // @synthesize dittoRemoteAlertDelegate=_dittoRemoteAlertDelegate;
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager; // @synthesize viewControllerManager;
- (_Bool)_shouldForceLayoutForHostedAnimation;	// IMP=0x0010000000010c4e
- (void)_updateReachabilityEnabled;	// IMP=0x0010000000010bf1
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010a26
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000010a1e
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000109b8
- (long long)preferredStatusBarStyle;	// IMP=0x00100000000109ab
- (int)_preferredStatusBarVisibility;	// IMP=0x00100000000109a3
- (id)childViewControllerForStatusBarHidden;	// IMP=0x0010000000010986
- (id)childViewControllerForStatusBarStyle;	// IMP=0x0010000000010969
- (void)viewDidLoad;	// IMP=0x00100000000108cf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000001086c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000010823
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000000107e7
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)cleanupRootViewController;	// IMP=0x001000000001077c
- (void)stopBeingParentOfDittoRootViewController:(id)arg1;	// IMP=0x00100000000106e9
- (void)becomeParentOfDittoRootViewController:(id)arg1;	// IMP=0x0010000000010630
- (void)dittoRootViewController:(id)arg1 wantsBackground:(_Bool)arg2 duration:(double)arg3;	// IMP=0x0010000000010548
- (void)dittoRootViewControllerFinishedShowingSharingUI:(id)arg1 inStateTransition:(_Bool)arg2;	// IMP=0x00100000000104e3
- (void)dittoRootViewController:(id)arg1 willShowTestFlightUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000104d8
- (void)dittoRootViewController:(id)arg1 willShowShowSharingUIWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000104cd
- (void)dittoRootViewController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x001000000001046a
- (void)dittoRootViewController:(id)arg1 willTransitionToState:(unsigned long long)arg2 changeBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001041f
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000010332
- (void)_performDismiss;	// IMP=0x00100000000102f5
- (void)_addRootViewController;	// IMP=0x00100000000101cb
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000101c3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000100b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

