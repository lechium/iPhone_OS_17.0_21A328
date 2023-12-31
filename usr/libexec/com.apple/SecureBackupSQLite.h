//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface SecureBackupSQLite : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1 truncate:(_Bool)arg2;	// IMP=0x002000000001682d
- (void).cxx_destruct;	// IMP=0x002000000001826e
@property(copy) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property struct sqlite3 *db; // @synthesize db=_db;
- (void)closeDB;	// IMP=0x00100000000181a3
- (long long)sqliteExecInteger:(id)arg1;	// IMP=0x001000000001801c
- (void)resetDBWithKeybag:(id)arg1;	// IMP=0x0010000000017bb9
- (_Bool)sqliteExec:(id)arg1;	// IMP=0x00100000000179f3
- (void)enumerateKeysAndItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017767
@property(readonly) NSData *keybag;
@property(readonly) NSData *keybagDigest;
@property(readonly) NSData *manifestHash;
- (_Bool)removeItemWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016fee
- (_Bool)addItem:(id)arg1 withKey:(id)arg2 forClass:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000016bf3
- (id)sqliteErrorForDB:(struct sqlite3 *)arg1;	// IMP=0x0010000000016ae2
- (id)initWithURL:(id)arg1 recordID:(id)arg2;	// IMP=0x00100000000169a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

