//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSCopying-Protocol.h>
#import <AuthenticationServices/NSObject-Protocol.h>
#import <AuthenticationServices/NSSecureCoding-Protocol.h>

@protocol ASCredentialIdentity;

@protocol ASCredentialRequest <NSObject, NSSecureCoding, NSCopying>
@property(readonly, nonatomic) id <ASCredentialIdentity> credentialIdentity;
@property(readonly, nonatomic) long long type;
@end

