//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPKRemotePassActionCompanionEnterValueViewController, NSString, UINavigationController;

@interface NPKRemotePassActionCompanionValueEntryAlertViewController
{
    NPKRemotePassActionCompanionEnterValueViewController *_enterValueViewController;	// 8 = 0x8
    UINavigationController *_navigationController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006b3c
- (void)enterValueViewController:(id)arg1 didFinishWithCurrencyAmount:(id)arg2 forRequestIdentifier:(id)arg3;	// IMP=0x00100000000069cd
- (void)enterValueViewController:(id)arg1 didCancelForRequestIdentifier:(id)arg2;	// IMP=0x0010000000006889
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000672e
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000627f
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000006221

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

