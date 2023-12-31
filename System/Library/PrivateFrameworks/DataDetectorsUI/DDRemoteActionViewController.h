//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class DDAction, DDActionController, NSString;

__attribute__((visibility("hidden")))
@interface DDRemoteActionViewController : _UIRemoteViewController
{
    _Bool _proxyConfigured;	// 8 = 0x8
    _Bool _waitingForRemoteConfiguration;	// 9 = 0x9
    _Bool _receivedActionDidFinish;	// 10 = 0xa
    DDAction *_action;	// 16 = 0x10
    DDActionController *_actionController;	// 24 = 0x18
}

+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;	// IMP=0x001000000004c977
+ (_Bool)controllerIsAvailable;	// IMP=0x001000000004c616
+ (id)serviceViewControllerInterface;	// IMP=0x001000000004c5f6
+ (id)exportedInterface;	// IMP=0x001000000004c5d6
- (void).cxx_destruct;	// IMP=0x000000000004cdab
@property(nonatomic) __weak DDActionController *actionController; // @synthesize actionController=_actionController;
@property(nonatomic) __weak DDAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)getIsBeingPresentedInPopover:(CDUnknownBlockType)arg1;	// IMP=0x000000000004cce3
- (void)actionDidFinishShouldDismiss:(_Bool)arg1;	// IMP=0x000000000004cb75
- (void)actionCanBeCancelledExternally:(_Bool)arg1;	// IMP=0x000000000004cb0b
- (struct CGSize)preferredContentSize;	// IMP=0x000000000004c90b
- (void)adaptForPresentationInPopover:(_Bool)arg1;	// IMP=0x000000000004c8c1
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000004c74b
- (void)viewControllerReady;	// IMP=0x000000000004c6dc
- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;	// IMP=0x000000000004c4b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

