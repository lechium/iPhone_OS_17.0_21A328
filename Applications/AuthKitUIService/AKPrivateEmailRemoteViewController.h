//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKAppleIDAuthenticationInAppContext, AKPrivateEmailContext, NSString, UINavigationController;
@protocol AKPrivateEmailPresenterHostProtocol;

@interface AKPrivateEmailRemoteViewController
{
    AKAppleIDAuthenticationInAppContext *_context;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    AKPrivateEmailContext *_privateEmailContext;	// 24 = 0x18
    id <AKPrivateEmailPresenterHostProtocol> _hostProxy;	// 32 = 0x20
    UINavigationController *_navController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000734c
@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(retain, nonatomic) id <AKPrivateEmailPresenterHostProtocol> hostProxy; // @synthesize hostProxy=_hostProxy;
- (id)remoteUIStyle;	// IMP=0x00100000000072d0
- (void)_createNavigationController;	// IMP=0x00100000000071ca
- (void)_callFlowEndedCompletionWithPrivateEmail:(id)arg1 error:(id)arg2;	// IMP=0x0010000000007070
- (void)_showPrivateEmailFlow;	// IMP=0x00100000000067fd
- (void)_prepareToPresentPrivateEmailFlow;	// IMP=0x0010000000006771
- (void)handleCancellation:(id)arg1;	// IMP=0x0010000000006715
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000647f
- (id)remoteObjectInterface;	// IMP=0x0010000000006466
- (void)setUpHostProxy;	// IMP=0x00100000000062f6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000006269
- (id)initWithPrivateEmailContext:(id)arg1 altDSID:(id)arg2;	// IMP=0x00100000000061c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
