//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetActionManager.h"

@class PUUUIDSelectionManager;
@protocol PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenActionManager : PUAssetActionManager
{
    id <PUAssetExplorerReviewScreenActionManagerDelegate> _reviewScreenActionManagerDelegate;	// 8 = 0x8
    id <PUReviewAssetProvider> _reviewAssetProvider;	// 16 = 0x10
    PUUUIDSelectionManager *_selectionManager;	// 24 = 0x18
    PUUUIDSelectionManager *_disableLivePhotosSelectionManager;	// 32 = 0x20
    unsigned long long __sourceType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016a539
@property(readonly, nonatomic) unsigned long long _sourceType; // @synthesize _sourceType=__sourceType;
@property(readonly, nonatomic) PUUUIDSelectionManager *disableLivePhotosSelectionManager; // @synthesize disableLivePhotosSelectionManager=_disableLivePhotosSelectionManager;
@property(readonly, nonatomic) PUUUIDSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(nonatomic) __weak id <PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;
@property(nonatomic) __weak id <PUAssetExplorerReviewScreenActionManagerDelegate> reviewScreenActionManagerDelegate; // @synthesize reviewScreenActionManagerDelegate=_reviewScreenActionManagerDelegate;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;	// IMP=0x0000000000169ed6
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;	// IMP=0x0000000000169da0
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;	// IMP=0x0000000000169c30
- (unsigned long long)_reviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;	// IMP=0x0000000000169a4d
- (_Bool)_hasReviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;	// IMP=0x0000000000169a3c
- (Class)_actionPerformerClassForActionType:(unsigned long long)arg1;	// IMP=0x0000000000169a07
- (id)initWithSourceType:(unsigned long long)arg1;	// IMP=0x0000000000169934

@end
