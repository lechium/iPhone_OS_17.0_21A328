//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SharedDataMigration : NSObject
{
}

+ (void)migrateTabDatabaseIfNeeded;	// IMP=0x008000000010a9e4
+ (_Bool)migrateThumbnails;	// IMP=0x008000000010a970
+ (_Bool)migrateRecentSearches;	// IMP=0x008000000010a8ff
+ (void)migratePersistentStorageDefaults;	// IMP=0x008000000010a7d1
+ (_Bool)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(_Bool)arg3;	// IMP=0x008000000010a325
+ (id)_userCachesDirectoryPath;	// IMP=0x008000000010a2b3

@end

