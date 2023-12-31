//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, NSXPCConnection, WFCompactHostingViewController;

@interface WFRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    WFCompactHostingViewController *_compactViewController;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x00200000000055f0
- (void).cxx_destruct;	// IMP=0x0020000000005109
@property(retain, nonatomic) WFCompactHostingViewController *compactViewController; // @synthesize compactViewController=_compactViewController;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)hostingViewControllerDidRequestExit:(id)arg1;	// IMP=0x0010000000004faa
- (void)dismissPersistentChromeWithSuccess:(_Bool)arg1 customAttribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004e5d
- (void)dismissPresentedContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004d4d
- (void)showDialogRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004bfa
- (void)preparePersistentChromeWithContext:(id)arg1 attribution:(id)arg2;	// IMP=0x0010000000004a9c
- (int)_preferredStatusBarVisibility;	// IMP=0x0010000000004a94
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000004a87
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000004a7f
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000004887
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000047d5
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000004791
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004269
- (id)init;	// IMP=0x00100000000041cb
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000041c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

