//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASCredentialServiceIdentifier, NSString;

@protocol ASCredentialIdentity <NSObject>
@property(nonatomic) long long rank;
@property(readonly, copy, nonatomic) NSString *recordIdentifier;
@property(readonly, copy, nonatomic) NSString *user;
@property(readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier;
@end

