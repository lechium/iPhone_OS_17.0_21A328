//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _LAKeyStoreKeyNull : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_acl;	// 16 = 0x10
    NSString *_publicKeyHash;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000ec30
- (_Bool)canVerifyUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x000000000000ec28
- (void)verifyData:(id)arg1 signature:(id)arg2 secKeyAlgorithm:(struct __CFString *)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ebc4
- (_Bool)canEncryptUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x000000000000ebbc
- (void)encryptData:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000eb56
- (_Bool)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x000000000000eb4e
- (void)exchangeKeysWithPublicKey:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 secKeyParameters:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000eae7
- (_Bool)canDecryptUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x000000000000eadf
- (void)decryptData:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ea79
- (_Bool)canSignUsingSecKeyAlgorithm:(struct __CFString *)arg1;	// IMP=0x000000000000ea71
- (void)signData:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ea0b
- (void)exportBytesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e9a5
@property(readonly, nonatomic) NSData *publicKeyHash;
@property(readonly, nonatomic) NSData *acl;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;	// IMP=0x000000000000e88b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

