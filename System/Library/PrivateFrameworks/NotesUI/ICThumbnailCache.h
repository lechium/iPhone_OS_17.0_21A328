//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ICThumbnailCache : NSObject
{
    MISSING_TYPE *cache;	// 8 = 0x8
    MISSING_TYPE *persistedCache;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_cacheKeyQueueQos;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_cacheKeyQueue;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_objectIdentifiersToCacheKeys;	// 0 = 0x0
}

+ (id)shared;	// IMP=0x00100000001bbbf0
- (void).cxx_destruct;	// IMP=0x00000000001be810
- (id)init;	// IMP=0x00000000001be7b0
- (void)invalidateForObjectIdentifiers:(id)arg1;	// IMP=0x00000000001bd6f0
- (id)creationDateFor:(id)arg1;	// IMP=0x00000000001bc680
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000001bbcb0
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000001bbc20

@end

