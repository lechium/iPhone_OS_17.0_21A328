//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKSEPKey.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface TKLocalSEPKey : TKSEPKey
{
    id _keyHolder;	// 8 = 0x8
    id _accessControl;	// 16 = 0x10
    id _keyType;	// 24 = 0x18
    _Bool _systemSessionKey;	// 32 = 0x20
    NSXPCConnection *_caller;	// 40 = 0x28
}

+ (void)set_testing_callerEntitlements:(id)arg1;	// IMP=0x006000000001dc14
+ (void)setupKeybagForTesting:(_Bool)arg1;	// IMP=0x006000000001dc0e
+ (_Bool)hasSEP;	// IMP=0x006000000001dc06
+ (void)setContextErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x006000000001dc00
+ (void)runsInSystemSession;	// IMP=0x006000000001dbfa
- (void).cxx_destruct;	// IMP=0x000000000001e485
@property(readonly, nonatomic) NSXPCConnection *caller; // @synthesize caller=_caller;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000001e422
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001e3d0
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001e37e
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e24a
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e1e6
- (id)publicKeyWithError:(id *)arg1;	// IMP=0x000000000001e14a
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x000000000001e142
- (id)objectID;	// IMP=0x000000000001e07e
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 caller:(id)arg6 forceSystemSession:(_Bool)arg7 error:(id *)arg8;	// IMP=0x000000000001dec8
- (struct __SecAccessControl *)accessControl;	// IMP=0x000000000001deb7
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 caller:(id)arg3 forceSystemSession:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000001dc77
- (_Bool)systemSessionKey;	// IMP=0x000000000001dc67
- (_Bool)systemKey;	// IMP=0x000000000001dc5f
- (id)keyType;	// IMP=0x000000000001dc4a
- (long long)keySize;	// IMP=0x000000000001dc2b
@property(readonly, nonatomic) struct __SecKey *key;

@end

