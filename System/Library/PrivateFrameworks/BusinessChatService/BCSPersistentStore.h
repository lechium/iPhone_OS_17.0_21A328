//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BCSPersistentStore : NSObject
{
    struct sqlite3 *_openedDatabase;	// 8 = 0x8
    long long _batchCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (const char *)debugQueueName;	// IMP=0x0010000000013a61
- (void).cxx_destruct;	// IMP=0x0000000000014562
@property(readonly, nonatomic) struct sqlite3 *openedDatabase; // @synthesize openedDatabase=_openedDatabase;
- (const char *)schema;	// IMP=0x0000000000014550
- (void)schemaVersionDidChangeForDatabase:(struct sqlite3 *)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;	// IMP=0x000000000001454a
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 *)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;	// IMP=0x0000000000014544
- (long long)schemaVersion;	// IMP=0x0000000000014537
- (id)databasePath;	// IMP=0x000000000001452f
- (void)endBatch;	// IMP=0x00000000000143aa
- (void)beginBatch;	// IMP=0x0000000000013f92
- (_Bool)deleteDatabaseFile;	// IMP=0x0000000000013bab
- (void)dealloc;	// IMP=0x0000000000013b18
- (id)init;	// IMP=0x0000000000013a6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

