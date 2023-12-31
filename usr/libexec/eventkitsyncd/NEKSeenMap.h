//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NEKSeenMap : NSObject
{
    NSObject<OS_dispatch_queue> *_dbQueue;	// 8 = 0x8
    struct sqlite3 *_dbConn;	// 16 = 0x10
    struct sqlite3_stmt *_update;	// 24 = 0x18
    struct sqlite3_stmt *_fetch;	// 32 = 0x20
    struct sqlite3_stmt *_delete;	// 40 = 0x28
    struct sqlite3_stmt *_sweep;	// 48 = 0x30
    NSString *_dbFilename;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003f91c
@property(retain, nonatomic) NSString *dbFilename; // @synthesize dbFilename=_dbFilename;
- (void)sweep;	// IMP=0x001000000003f823
- (void)deleteInviteByUUID:(id)arg1;	// IMP=0x001000000003f711
- (void)didShowInvite:(id)arg1 withUUID:(id)arg2;	// IMP=0x001000000003f4af
- (_Bool)shouldShowInvite:(id)arg1 withUUID:(id)arg2;	// IMP=0x001000000003f059
- (_Bool)_prepareStatements;	// IMP=0x001000000003ef2c
- (_Bool)_createDb;	// IMP=0x001000000003ee3f
- (_Bool)_executeSql:(id)arg1;	// IMP=0x001000000003edc9
- (void)dealloc;	// IMP=0x001000000003eccd
- (id)initWithDatabaseManager:(id)arg1;	// IMP=0x001000000003ebe7

@end

