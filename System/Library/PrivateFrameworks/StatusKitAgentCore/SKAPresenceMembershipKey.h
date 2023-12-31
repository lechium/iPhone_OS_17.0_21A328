//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SKAPresenceMembershipKey : NSObject
{
    struct __SecKey *_privateKey;	// 8 = 0x8
}

+ (id)logger;	// IMP=0x006000000001c9c9
@property(nonatomic) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
- (_Bool)_generateKeyFromKeyData:(id)arg1;	// IMP=0x000000000001c811
- (_Bool)_generateKey;	// IMP=0x000000000001c6a0
@property(readonly, nonatomic) NSData *privateKeyMaterial;
@property(readonly, nonatomic) NSData *publicKeyMaterial;
- (id)signPayload:(id)arg1;	// IMP=0x000000000001c3e8
- (void)dealloc;	// IMP=0x000000000001c38a
- (id)initWithPrivateKeyMaterial:(id)arg1;	// IMP=0x000000000001c28e
- (id)initWithNewKeyMaterial;	// IMP=0x000000000001c220

@end

