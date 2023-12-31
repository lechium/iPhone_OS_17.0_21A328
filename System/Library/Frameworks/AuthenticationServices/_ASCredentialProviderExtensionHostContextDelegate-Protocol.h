//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/_ASExtensionHostContextDelegate-Protocol.h>

@class ASPasskeyAssertionCredential, ASPasskeyRegistrationCredential, ASPasswordCredential, _ASCredentialProviderExtensionHostContext;

@protocol _ASCredentialProviderExtensionHostContextDelegate <_ASExtensionHostContextDelegate>

@optional
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(_ASCredentialProviderExtensionHostContext *)arg1 completion:(void (^)(void))arg2;
- (void)prepareToCompleteRequestWithHostContext:(_ASCredentialProviderExtensionHostContext *)arg1 passkeyRegistrationCredential:(ASPasskeyRegistrationCredential *)arg2 completion:(void (^)(void))arg3;
- (void)prepareToCompleteRequestWithHostContext:(_ASCredentialProviderExtensionHostContext *)arg1 passkeyAssertionCredential:(ASPasskeyAssertionCredential *)arg2 completion:(void (^)(void))arg3;
- (void)prepareToCompleteRequestWithHostContext:(_ASCredentialProviderExtensionHostContext *)arg1 credential:(ASPasswordCredential *)arg2 completion:(void (^)(void))arg3;
@end

