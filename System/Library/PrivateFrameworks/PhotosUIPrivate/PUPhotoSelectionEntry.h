//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMutableIndexSet, NSMutableSet, PHAssetCollection, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUPhotoSelectionEntry : NSObject
{
    _Bool _hasValidAssetIndexes;	// 8 = 0x8
    PHAssetCollection *_assetCollection;	// 16 = 0x10
    PHFetchResult *_fetchResult;	// 24 = 0x18
    NSMutableSet *_selectedAssets;	// 32 = 0x20
    NSMutableIndexSet *_selectedIndexes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000043a6b3
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000043a5e1
- (void)setSelectedAssetsSet:(id)arg1;	// IMP=0x000000000043a573
- (void)handlePhotoLibraryChange:(id)arg1;	// IMP=0x000000000043a38c
- (void)enumerateSelectedAssetsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000043a270
- (_Bool)isIndexSelected:(unsigned long long)arg1;	// IMP=0x000000000043a232
- (void)deselectAssetsAtIndexes:(id)arg1;	// IMP=0x000000000043a172
- (void)selectAssetsAtIndexes:(id)arg1;	// IMP=0x000000000043a0e6
@property(readonly, nonatomic) NSArray *selectedAssets;
@property(readonly, nonatomic) NSIndexSet *selectedIndexes;
- (void)invalidateAllAssetIndexes;	// IMP=0x0000000000439ff0
- (void)_ensureValidAssetIndexes;	// IMP=0x0000000000439e60
- (id)initWithAssetCollection:(id)arg1 fetchResult:(id)arg2 uniqueSelectedAssets:(id)arg3;	// IMP=0x0000000000439d48

@end

