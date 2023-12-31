//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PUPhotoKitTrashActionPerformer;

__attribute__((visibility("hidden")))
@interface PUPhotoKitRemoveSharingSuggestionAssetActionPerformer
{
    PUPhotoKitTrashActionPerformer *_trashActionPerformer;	// 24 = 0x18
}

+ (Class)pxActionPerformerClass;	// IMP=0x001000000041a945
- (void).cxx_destruct;	// IMP=0x000000000041a873
@property(retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer; // @synthesize trashActionPerformer=_trashActionPerformer;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000041a7bb
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000041a7a6
- (id)undoManagerForAssetActionPerformer:(id)arg1;	// IMP=0x000000000041a72c
- (void)_performTrashTask;	// IMP=0x000000000041a62a
- (void)performUserInteractionTask;	// IMP=0x000000000041a2f7
- (id)pxActionType;	// IMP=0x000000000041a2e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

