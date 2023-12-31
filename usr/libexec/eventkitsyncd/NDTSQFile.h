//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTSQKeyValueStore, NSHashTable, NSMutableOrderedSet, NSString;
@protocol NDTSQFileDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NDTSQFile : NSObject
{
    NSObject<OS_dispatch_queue> *_q;	// 8 = 0x8
    NSMutableOrderedSet *_statementCache;	// 16 = 0x10
    NDTSQKeyValueStore *_instanceVersions;	// 24 = 0x18
    int _readFd;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_readSource;	// 40 = 0x28
    struct os_unfair_lock_s _memberSchemasLock;	// 48 = 0x30
    NSHashTable *_memberSchemas;	// 56 = 0x38
    _Bool _readOnly;	// 64 = 0x40
    struct sqlite3 *_db;	// 72 = 0x48
    NSString *_path;	// 80 = 0x50
    id <NDTSQFileDelegate> _delegate;	// 88 = 0x58
    NSString *_pathTemplate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000095a1
@property(retain, nonatomic) NSString *pathTemplate; // @synthesize pathTemplate=_pathTemplate;
@property(nonatomic) __weak id <NDTSQFileDelegate> delegate; // @synthesize delegate=_delegate;
- (void);	// IMP=0x0010000000009556
@property(nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (long long)changes;	// IMP=0x0010000000009404
- (void)rollback;	// IMP=0x0010000000009326
- (void)commit;	// IMP=0x0010000000009248
- (void)begin;	// IMP=0x001000000000916a
- (void)_setInstance:(id)arg1 version:(long long)arg2;	// IMP=0x001000000000914b
- (long long)_instanceVersion:(id)arg1;	// IMP=0x0010000000009130
- (void)_parseSql:(id)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008ff2
- (id)_loadCache:(id)arg1 sqlErr:(int *)arg2;	// IMP=0x0010000000008dd4
- (void)parseSql:(id)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008cb7
- (void)_executeSql:(id)arg1;	// IMP=0x0010000000008bbe
- (void)executeSql:(id)arg1;	// IMP=0x0010000000008aee
- (id)_makeSqlErrorReasonString:(id)arg1;	// IMP=0x0010000000008a82
- (void)addSchema:(id)arg1;	// IMP=0x0010000000008a2f
- (void)_addSchema:(id)arg1;	// IMP=0x001000000000892a
- (void)_databaseChangedExternally;	// IMP=0x001000000000875b
- (void)_watchWalFile;	// IMP=0x00100000000084ce
- (void)_prepDatabase;	// IMP=0x001000000000843f
- (void)_openDatabase;	// IMP=0x0010000000008366
- (void)_createParentDirectory;	// IMP=0x00100000000080de
- (void)_recreatePath;	// IMP=0x001000000000804f
- (void)_bootstrap;	// IMP=0x0010000000007fcb
- (void)_newPath;	// IMP=0x0010000000007e41
- (id)initWithPath:(id)arg1 queue:(id)arg2 readOnly:(_Bool)arg3;	// IMP=0x0010000000007ccd
- (id)initWithPath:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000007cb8
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000007ca4
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000007c4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

