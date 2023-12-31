//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CRRecentsMigratorDelegate;

@interface CRRecentsMigrator : NSObject
{
    id <CRRecentsMigratorDelegate> _delegate;	// 8 = 0x8
    int _needsRebuild;	// 16 = 0x10
}

+ (_Bool)executeSQL:(id)arg1 database:(id)arg2;	// IMP=0x0040000000011c56
+ (void)setVersion:(int)arg1 ofDatabase:(id)arg2;	// IMP=0x0010000000011c2e
+ (int)versionOfDatabase:(id)arg1;	// IMP=0x0010000000011c11
+ (void)migrateLibraryFilesFrom:(id)arg1 to:(id)arg2;	// IMP=0x001000000001194e
- (void)migrateMailEmbeddedLibraryToPath:(id)arg1;	// IMP=0x00200000000118da
- (_Bool)migrateWithSQLiteConnection:(id)arg1 toVersion:(int)arg2;	// IMP=0x0010000000010212
- (_Bool)migrateWithSQLiteConnection:(id)arg1;	// IMP=0x00100000000101fb
- (void)noteNeedsRebuild;	// IMP=0x00100000000101e9
- (_Bool)needsRebuild;	// IMP=0x00100000000101d4
- (void)dealloc;	// IMP=0x001000000001019d
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000010160

@end

