//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteTable.h>

@interface CKDAssetHandleTable : CKSQLiteTable
{
}

+ (Class)entryClass;	// IMP=0x008000000022046e
+ (id)dbProperties;	// IMP=0x0080000000220461
- (id)interruptedAssetWithSignature:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000220935
- (id)selectProperties:(id)arg1 inAssetHandlesWithStatus:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000220759
- (id)saveStatusAndChunkCount:(id)arg1;	// IMP=0x0000000000220736
- (id)oldestLastUsedTime;	// IMP=0x000000000022071b
- (id)saveLastUsedTime:(id)arg1;	// IMP=0x00000000002206f8
- (id)saveChunkCount:(id)arg1;	// IMP=0x00000000002206d5
- (id)saveStatus:(id)arg1;	// IMP=0x00000000002206b2
- (id)saveOrInsert:(id)arg1;	// IMP=0x000000000022061e
- (id)assetHandleWithUUID:(id)arg1;	// IMP=0x000000000022057e
- (_Bool)assetHandleExistsInDatabase:(id)arg1;	// IMP=0x000000000022047f

@end

