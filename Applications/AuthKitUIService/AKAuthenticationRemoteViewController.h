//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKAppleIDAuthenticationContext, AKAppleIDAuthenticationInAppContext;
@protocol AKLoginPresenterHostInterfaceProtocol;

@interface AKAuthenticationRemoteViewController
{
    AKAppleIDAuthenticationContext *_originalContext;	// 8 = 0x8
    AKAppleIDAuthenticationInAppContext *_interactiveInAppContext;	// 16 = 0x10
    id <AKLoginPresenterHostInterfaceProtocol> _hostProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000007ad1
@property(retain, nonatomic) id <AKLoginPresenterHostInterfaceProtocol> hostProxy; // @synthesize hostProxy=_hostProxy;
@property(retain, nonatomic) AKAppleIDAuthenticationInAppContext *interactiveInAppContext; // @synthesize interactiveInAppContext=_interactiveInAppContext;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *originalContext; // @synthesize originalContext=_originalContext;
- (void)_callCompletionWithAuthResult:(id)arg1 password:(id)arg2 additionalData:(id)arg3 error:(id)arg4;	// IMP=0x0010000000007916
- (id)_inAppContextFromContext:(id)arg1;	// IMP=0x001000000000784f
- (void)handleCancellation;	// IMP=0x00100000000077ee
- (id)remoteObjectInterface;	// IMP=0x00100000000077d5
- (void)setUpHostProxy;	// IMP=0x001000000000762a
- (void)_presentLoginUI;	// IMP=0x00100000000074c5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000007484
- (id)initWithAuthenticationContext:(id)arg1;	// IMP=0x0010000000007416

@end

