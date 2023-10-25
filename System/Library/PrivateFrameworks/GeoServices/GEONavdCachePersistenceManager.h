//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB;

__attribute__((visibility("hidden")))
@interface GEONavdCachePersistenceManager : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000034d1ca
- (void)removeAllEntries;	// IMP=0x000000000034d14f
- (long long)numberOfEntries;	// IMP=0x000000000034cf38
- (void)enumerateAllForCacheEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000034ce1f
- (void)enumerateAllEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000034c968
- (void)deleteFromDiskWithKey:(id)arg1;	// IMP=0x000000000034c3e9
- (id)readValueWithKey:(id)arg1;	// IMP=0x000000000034c0d6
- (long long)dumpToDiskWithKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000034b834
- (id)entryWithRowId:(long long)arg1;	// IMP=0x000000000034b26b
- (double)nextTimeStampForRefreshTimer;	// IMP=0x000000000034adab
- (void)tearDown;	// IMP=0x000000000034ad17
- (id)init;	// IMP=0x000000000034a833

@end
