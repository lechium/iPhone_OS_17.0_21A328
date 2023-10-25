//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteTableGroup.h>

@class CKDAssetHandleTable, CKDAssetVolumeTable;

@interface CKSAssetCacheTableGroup : CKSQLiteTableGroup
{
    CKDAssetHandleTable *_assetHandleTable;	// 8 = 0x8
    CKDAssetVolumeTable *_assetVolumeTable;	// 16 = 0x10
}

+ (_Bool)rebootShouldClearData;	// IMP=0x0060000000221663
- (void).cxx_destruct;	// IMP=0x000000000022177c
@property(readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable; // @synthesize assetVolumeTable=_assetVolumeTable;
@property(readonly, nonatomic) CKDAssetHandleTable *assetHandleTable; // @synthesize assetHandleTable=_assetHandleTable;
- (id)createTables:(id *)arg1;	// IMP=0x000000000022166b

@end
