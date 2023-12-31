//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetEditOperationPerformer.h>

@class NSString, PEPhotoKitMediaDestination, PHAsset;

__attribute__((visibility("hidden")))
@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    _Bool _didSave;	// 16 = 0x10
    PEPhotoKitMediaDestination *_mediaDestination;	// 24 = 0x18
    NSString *_sourceEditOperationType;	// 32 = 0x20
    _Bool _liveIsEnabled;	// 40 = 0x28
}

+ (id)_sharedResourceManager;	// IMP=0x00100000003a3095
- (void).cxx_destruct;	// IMP=0x00000000003a2718
@property(nonatomic) _Bool liveIsEnabled; // @synthesize liveIsEnabled=_liveIsEnabled;
- (CDStruct_1b6d18a9)unadjustedStillImageTime;	// IMP=0x00000000003a26da
- (void)setLivePhotoVideoEnabled:(_Bool)arg1;	// IMP=0x00000000003a26d4
- (_Bool)isLivePhotoVideoEnabled;	// IMP=0x00000000003a26c2
- (void)_resourceLoadedWithResult:(id)arg1 editOperationType:(id)arg2;	// IMP=0x00000000003a2175
- (void)_handleDidFinishSavingEditsForAsset:(id)arg1 error:(id)arg2;	// IMP=0x00000000003a215b
- (void)_handleLoadResult:(id)arg1 analysisResult:(id)arg2 editOperationType:(id)arg3;	// IMP=0x00000000003a1e61
- (void)_saveAssetEditsWithContentEditingInput:(id)arg1 compositionController:(id)arg2 imageVersion:(long long)arg3 editOperationType:(id)arg4;	// IMP=0x00000000003a1d77
- (void)_completeWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00000000003a1ceb
- (void)_performEditOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003a1b5e
- (void)performUndo:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a1b3e
- (void)performAction:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a1a23
@property(readonly, nonatomic) PHAsset *asset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

