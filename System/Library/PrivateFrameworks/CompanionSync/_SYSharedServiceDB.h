//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _SYSharedServiceDB : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct sqlite3 *_db;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSMutableDictionary *_schemaSetupCallbacks;	// 32 = 0x20
}

+ (id)sharedInstanceForServiceName:(id)arg1;	// IMP=0x0060000000006611
+ (void)pairingStorePathWasReset;	// IMP=0x006000000000657d
+ (void)initialize;	// IMP=0x00600000000064e9
+ (void)_releaseSharedInstanceForServiceName:(id)arg1;	// IMP=0x0060000000007c88
- (void).cxx_destruct;	// IMP=0x0000000000007c60
- (_Bool)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007c49
- (_Bool)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007c35
- (_Bool)_runTransactionBlock:(CDUnknownBlockType)arg1 exclusive:(_Bool)arg2;	// IMP=0x0000000000007865
- (void)withDBRef:(CDUnknownBlockType)arg1;	// IMP=0x00000000000077b6
- (void)updateSchemaForClient:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000076bb
- (void)_LOCKED_runSchemaUpdate:(CDUnknownBlockType)arg1 forClientNamed:(id)arg2;	// IMP=0x00000000000075e7
- (void)setSchemaVersion:(long long)arg1 forClient:(id)arg2;	// IMP=0x0000000000007522
- (long long)schemaVersionForClient:(id)arg1;	// IMP=0x0000000000007461
- (_Bool)_LOCKED_ensureDBExists;	// IMP=0x0000000000007348
- (_Bool)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007102
- (void)_ensureSchemaVersionsTable;	// IMP=0x000000000000709d
- (void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 *)arg1;	// IMP=0x000000000000703e
- (void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2;	// IMP=0x0000000000006ea5
- (long long)_LOCKED_getClientVersion:(id)arg1;	// IMP=0x0000000000006d0e
- (_Bool)_LOCKED_hasSchemaVersionForClient:(id)arg1;	// IMP=0x0000000000006b74
- (_Bool)_ensureParentExists:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006852
- (_Bool)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000067e9
- (void)dealloc;	// IMP=0x00000000000067a2
- (id)initWithServiceName:(id)arg1;	// IMP=0x0000000000006702
@property(readonly, nonatomic, getter=_dbPath) NSString *dbPath;

@end

