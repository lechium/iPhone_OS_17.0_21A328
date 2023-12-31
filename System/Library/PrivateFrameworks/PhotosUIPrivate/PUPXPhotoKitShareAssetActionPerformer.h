//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class NSString, PUActivitySharingController;
@protocol PXMemoryAssetsActionFactory;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitShareAssetActionPerformer : PXPhotoKitAssetActionPerformer
{
    PUActivitySharingController *_activitySharingController;	// 8 = 0x8
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x00100000003b3723
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x00100000003b36a0
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000003b35e4
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;	// IMP=0x00100000003b3546
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00100000003b34ef
- (void).cxx_destruct;	// IMP=0x00000000003b2562
- (id)undoManagerForActionPerformer:(id)arg1;	// IMP=0x00000000003b2503
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003b24c3
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000003b2486
- (void)completeUserInteractionTaskWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000003b2386
- (void)_performNotThisPersonWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b2221
- (void)_performSetKeyFaceWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003b2144
- (void)_didCompleteWithActivityType:(id)arg1 success:(_Bool)arg2 asset:(id)arg3 person:(id)arg4 selectionSnapshot:(id)arg5;	// IMP=0x00000000003b1dd7
- (void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;	// IMP=0x00000000003b1ad7
- (void)activitySharingControllerDidCancel:(id)arg1;	// IMP=0x00000000003b1a9b
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;	// IMP=0x00000000003b179e
- (void)_presentShareSheet;	// IMP=0x00000000003b128a
- (void)performUserInteractionTask;	// IMP=0x00000000003b1278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property(readonly) Class superclass;

@end

