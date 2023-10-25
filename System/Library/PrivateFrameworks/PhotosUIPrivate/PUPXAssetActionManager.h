//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetActionManager.h"

@class PXAssetActionManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetActionManager : PUAssetActionManager
{
    PXAssetActionManager *_underlyingActionManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003a0acd
@property(readonly, nonatomic) PXAssetActionManager *underlyingActionManager; // @synthesize underlyingActionManager=_underlyingActionManager;
- (id)localizedTitleForActionType:(unsigned long long)arg1;	// IMP=0x00000000003a0a34
- (id)barButtonItemForActionType:(unsigned long long)arg1;	// IMP=0x00000000003a09b1
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;	// IMP=0x00000000003a099d
- (id)actionPerformerForSettingFavoriteTo:(_Bool)arg1 onAssetReferences:(id)arg2;	// IMP=0x00000000003a0986
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;	// IMP=0x00000000003a07a6
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;	// IMP=0x00000000003a072c
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;	// IMP=0x00000000003a05d4
- (id)_selectionSnapshotForAssetReferences:(id)arg1;	// IMP=0x00000000003a02b8
- (id)px_selectionManager;	// IMP=0x00000000003a029b
- (id)initWithUnderlyingActionManager:(id)arg1;	// IMP=0x00000000003a022d
- (id)init;	// IMP=0x00000000003a01b3

@end
