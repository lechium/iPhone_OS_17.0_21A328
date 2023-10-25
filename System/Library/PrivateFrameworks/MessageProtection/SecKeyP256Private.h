//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, SecKeyP256Public;

__attribute__((visibility("hidden")))
@interface SecKeyP256Private : NSObject
{
    id _privateKey;	// 8 = 0x8
    NSData *_privateKeyBlob;	// 16 = 0x10
    SecKeyP256Public *_publicKey;	// 24 = 0x18
}

+ (id)generateWithAccessControl:(id)arg1;	// IMP=0x001000000000fdb7
+ (id)generate;	// IMP=0x001000000000fd58
+ (id)defaultProtectionClassForPlatform;	// IMP=0x001000000000fd44
- (void).cxx_destruct;	// IMP=0x000000000001095e
@property(retain, nonatomic) SecKeyP256Public *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, nonatomic) NSData *privateKeyBlob; // @synthesize privateKeyBlob=_privateKeyBlob;
@property(readonly, nonatomic) id privateKey; // @synthesize privateKey=_privateKey;
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010758
- (id)keychainData;	// IMP=0x0000000000010746
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000105e7
- (id)keyAgreement:(id)arg1 error:(id *)arg2 isRetry:(_Bool)arg3;	// IMP=0x00000000000103a7
- (id)keyAgreement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010392
- (id)getPrivateKeyRefWithError:(id *)arg1;	// IMP=0x0000000000010217

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
