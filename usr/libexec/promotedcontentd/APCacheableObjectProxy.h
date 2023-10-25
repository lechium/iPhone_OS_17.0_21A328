//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class APCacheableBaseObject, MISSING_TYPE, NSString;
@protocol APPersistentCachedStoreProtocol;

@interface APCacheableObjectProxy : NSProxy
{
    APCacheableBaseObject *_proxyObject;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    MISSING_TYPE *_provideIgnorableKeyNamesBlock;	// 24 = 0x18
    NSString *_cacheKey;	// 32 = 0x20
    id <APPersistentCachedStoreProtocol> _persistentStore;	// 40 = 0x28
}

+ (_Bool)objectIsLoaded:(id)arg1;	// IMP=0x004000000010270b
+ (id)proxyWithCacheKey:(id)arg1 object:(id)arg2 identifier:(id)arg3 inPersistentStore:(id)arg4;	// IMP=0x0010000000102217
+ (id)proxyWithCacheKey:(id)arg1 object:(id)arg2 inPersistentStore:(id)arg3;	// IMP=0x00100000001021ff
+ (id)proxyWithCacheKey:(id)arg1 inPersistentStore:(id)arg2;	// IMP=0x00100000001021e5
- (void).cxx_destruct;	// IMP=0x00200000001027c1
@property(readonly, nonatomic) __weak id <APPersistentCachedStoreProtocol> persistentStore; // @synthesize persistentStore=_persistentStore;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(copy, nonatomic) CDUnknownBlockType provideIgnorableKeyNamesBlock; // @synthesize provideIgnorableKeyNamesBlock=_provideIgnorableKeyNamesBlock;
- (_Bool)_proxiedObjectIsAlive;	// IMP=0x00100000001026f6
@property(readonly, nonatomic) NSString *identifier;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0010000000102605
- (void)forwardInvocation:(id)arg1;	// IMP=0x0010000000102589
@property(readonly, nonatomic) APCacheableBaseObject *proxyObject;

@end
