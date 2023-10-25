//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NSPersistentHTTPCookie2Storage : NSObject
{
    struct sqlite3 *persistentDb;	// 8 = 0x8
    struct sqlite3_stmt *insertCookiesStmt;	// 16 = 0x10
    struct sqlite3_stmt *selectDomainCookiesStmt;	// 24 = 0x18
    struct sqlite3_stmt *selectAllCookiesStmt;	// 32 = 0x20
    struct sqlite3_stmt *deleteCookiesStmt;	// 40 = 0x28
    struct sqlite3_stmt *deleteAllCookiesStmt;	// 48 = 0x30
    NSURL *_path;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a1332
@property(retain) NSURL *path; // @synthesize path=_path;
- (void)commitTransaction;	// IMP=0x00000000001a1259
- (void)beginTransaction;	// IMP=0x00000000001a11a3
- (void)setCookies:(id)arg1;	// IMP=0x00000000001a03ad
- (void)setCookie:(id)arg1;	// IMP=0x00000000001a02f0
- (id)getCookiesWithFilter:(id)arg1;	// IMP=0x000000000019f9eb
- (id)getAllCookies;	// IMP=0x000000000019f98b
- (void)deleteCookiesWithFilter:(id)arg1;	// IMP=0x000000000019f7a7
- (void)deleteCookies:(id)arg1;	// IMP=0x000000000019f641
- (void)deleteCookie:(id)arg1;	// IMP=0x000000000019f149
- (void)deleteAllCookies;	// IMP=0x000000000019f090
- (id)initWithPath:(id)arg1;	// IMP=0x000000000019ef91
- (id)init;	// IMP=0x000000000019ed3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
