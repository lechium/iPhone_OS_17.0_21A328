//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase, SQLiteQueryDescriptor;

@interface SQLiteQuery : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
    SQLiteQueryDescriptor *_descriptor;	// 16 = 0x10
}

- (id)_newSelectSQLOnProperties:(id)arg1;	// IMP=0x002000000009f054
- (id)_newSelectSQLWithProperties:(id)arg1;	// IMP=0x001000000009ee9a
@property(readonly) SQLiteQueryDescriptor *queryDescriptor;
- (void)enumerateProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ecb4
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ea34
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000009e9be
- (_Bool)deleteAllEntities;	// IMP=0x001000000009e817
@property(readonly) SQLiteDatabase *database;
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;	// IMP=0x001000000009e453
@property(readonly) _Bool exists;
@property(readonly) long long countOfEntities;
- (id)copySelectSQLWithProperties:(id)arg1;	// IMP=0x001000000009df63
- (id)copyEntityIdentifiers;	// IMP=0x001000000009de88
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x001000000009de22
- (void)dealloc;	// IMP=0x001000000009ddd8
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;	// IMP=0x001000000009dd6d

@end

