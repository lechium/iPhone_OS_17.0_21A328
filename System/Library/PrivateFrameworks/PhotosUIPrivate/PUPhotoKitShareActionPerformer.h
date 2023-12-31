//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUActivitySharingController, UIViewController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitShareActionPerformer
{
    UIViewController *_preheatedSharingViewController;	// 16 = 0x10
    PUActivitySharingController *_activitySharingController;	// 24 = 0x18
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x006000000041ce10
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x006000000041cd72
- (void).cxx_destruct;	// IMP=0x000000000041ccc7
@property(retain, nonatomic) PUActivitySharingController *activitySharingController; // @synthesize activitySharingController=_activitySharingController;
@property(retain, nonatomic) UIViewController *preheatedSharingViewController; // @synthesize preheatedSharingViewController=_preheatedSharingViewController;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;	// IMP=0x000000000041c980
- (void)performUserInteractionTask;	// IMP=0x000000000041c768
- (void)preheatUserInteractionTask;	// IMP=0x000000000041c660
- (id)_createSharingViewControllerFromCurrentSelection;	// IMP=0x000000000041bd6a

@end

