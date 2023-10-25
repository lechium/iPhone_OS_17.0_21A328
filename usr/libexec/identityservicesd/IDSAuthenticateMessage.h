//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSData, NSDictionary, NSString;

@interface IDSAuthenticateMessage : IDSBaseMessage
{
    NSString *_realm;	// 232 = 0xe8
    NSData *_csr;	// 240 = 0xf0
    NSDictionary *_authenticationInfo;	// 248 = 0xf8
    NSString *_userID;	// 256 = 0x100
    NSData *_responseCertificate;	// 264 = 0x108
    NSString *_responseUserID;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0020000000054e9b
@property(copy) NSString *responseUserID; // @synthesize responseUserID=_responseUserID;
@property(copy) NSData *responseCertificate; // @synthesize responseCertificate=_responseCertificate;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSDictionary *authenticationInfo; // @synthesize authenticationInfo=_authenticationInfo;
@property(copy) NSData *csr; // @synthesize csr=_csr;
@property(copy) NSString *realm; // @synthesize realm=_realm;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000054ca6
- (_Bool)requiresPushTokenKeys;	// IMP=0x0010000000054c9e
- (_Bool)allowsServerProvidedLenientAnisetteTimeout;	// IMP=0x0010000000054c53
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000054c45
- (id)additionalMessageHeaders;	// IMP=0x0010000000054b0e
- (id)messageBody;	// IMP=0x0010000000054976
- (id)requiredKeys;	// IMP=0x001000000005490d
- (id)bagKey;	// IMP=0x00100000000548a1
- (long long)responseCommand;	// IMP=0x0010000000054896
- (long long)command;	// IMP=0x001000000005488b
- (_Bool)wantsBinaryPush;	// IMP=0x0010000000054883
- (_Bool)wantsCompressedBody;	// IMP=0x001000000005487b
- (_Bool)wantsHTTPHeaders;	// IMP=0x0010000000054873
- (_Bool)wantsBagKey;	// IMP=0x001000000005486b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000054702
- (id)init;	// IMP=0x001000000005463a

@end
