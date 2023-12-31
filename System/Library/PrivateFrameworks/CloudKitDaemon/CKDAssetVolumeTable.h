//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteTable.h>

@class NSMutableDictionary;

@interface CKDAssetVolumeTable : CKSQLiteTable
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_volumeUUIDByVolumeIndex;	// 16 = 0x10
    NSMutableDictionary *_volumeIndexByVolumeUUID;	// 24 = 0x18
}

+ (Class)entryClass;	// IMP=0x0060000000220c80
+ (id)dbProperties;	// IMP=0x0060000000220c73
- (void).cxx_destruct;	// IMP=0x0000000000221632
- (id)unmountedAssetVolumes;	// IMP=0x00000000002212b8
- (id)volumeUUIDWithVolumeIndex:(id)arg1;	// IMP=0x000000000022119e
- (id)volumeIndexForVolumeUUID:(id)arg1;	// IMP=0x0000000000220f1b
- (void)_lockedSetVolumeIndex:(id)arg1 forVolumeUUID:(id)arg2;	// IMP=0x0000000000220e8b
- (id)wakeFromDatabase;	// IMP=0x0000000000220d14
- (id)initWithLogicalTableName:(id)arg1;	// IMP=0x0000000000220c91

@end

