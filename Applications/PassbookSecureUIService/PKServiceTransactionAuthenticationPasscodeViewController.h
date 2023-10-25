//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKit/PKNavigationController.h>

@class NSData, NSString, PKTransactionAuthenticationCollectPasscodeViewController;

@interface PKServiceTransactionAuthenticationPasscodeViewController : PKNavigationController
{
    PKTransactionAuthenticationCollectPasscodeViewController *_collectPasscodeViewController;	// 8 = 0x8
    NSData *_archivedAnalyticsSessionToken;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x002000000000553d
+ (id)_remoteViewControllerInterface;	// IMP=0x0010000000005528
+ (id)_exportedInterface;	// IMP=0x001000000000551e
- (void).cxx_destruct;	// IMP=0x0020000000005cd3
- (void)passcodeViewController:(id)arg1 didGenerateEncryptedPasscode:(id)arg2;	// IMP=0x0010000000005c6a
- (void)passcodeViewControllerDidCancel:(id)arg1;	// IMP=0x0010000000005c2d
- (void)passcodeViewControllerDidEndSessionExchange:(id)arg1;	// IMP=0x0010000000005bf0
- (void)passcodeViewController:(id)arg1 requestSessionExchangeToken:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005b87
- (_Bool)_isHostProcessEntitled;	// IMP=0x0010000000005af9
- (void)resetWithTransactionAuthenticationFailure:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005a28
- (void)setPassUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 archivedAnalyticsSessionToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005688
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000563b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000055b7
- (void)_hostApplicationDidEnterBackground;	// IMP=0x001000000000554d
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000005545
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000005532

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
