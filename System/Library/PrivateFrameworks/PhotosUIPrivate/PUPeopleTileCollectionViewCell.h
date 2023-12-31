//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, PHAsset, PHPerson, PXPhotoKitAssetCollectionActionManager, UIButton, UIGraphicsImageRenderer, UIImageView, UIView;
@protocol PUPeopleTileDelegate, PXMemoryAssetsActionFactory;

__attribute__((visibility("hidden")))
@interface PUPeopleTileCollectionViewCell : UICollectionViewCell
{
    id <PUPeopleTileDelegate> _peopleDelegate;	// 8 = 0x8
    UIView *_questionView;	// 16 = 0x10
    UIButton *_menuButton;	// 24 = 0x18
    UIImageView *_avatarImageView;	// 32 = 0x20
    UIView *_shadowView;	// 40 = 0x28
    UIGraphicsImageRenderer *_renderer;	// 48 = 0x30
    PHPerson *_person;	// 56 = 0x38
    PHAsset *_asset;	// 64 = 0x40
    PXPhotoKitAssetCollectionActionManager *_personActionManager;	// 72 = 0x48
    struct CGSize _previousContentViewSize;	// 80 = 0x50
}

+ (void)_fetchContactInfoForPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000005823cd
+ (id)sharedContactFetchQueue;	// IMP=0x001000000058239d
+ (struct CGSize)itemSizeForTraitCollection:(id)arg1;	// IMP=0x0010000000582377
- (void).cxx_destruct;	// IMP=0x0000000000581b20
@property(retain, nonatomic) PXPhotoKitAssetCollectionActionManager *personActionManager; // @synthesize personActionManager=_personActionManager;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property struct CGSize previousContentViewSize; // @synthesize previousContentViewSize=_previousContentViewSize;
@property(retain, nonatomic) UIGraphicsImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(readonly, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) UIView *questionView; // @synthesize questionView=_questionView;
@property(nonatomic) __weak id <PUPeopleTileDelegate> peopleDelegate; // @synthesize peopleDelegate=_peopleDelegate;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x00000000005818e1
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000581872
- (_Bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;	// IMP=0x00000000005817c4
- (id)undoManagerForActionPerformer:(id)arg1;	// IMP=0x00000000005817bc
- (void)_makeKeyPhotoActionTapped:(id)arg1 asset:(id)arg2;	// IMP=0x000000000058166a
- (void)_nameActionTapped:(id)arg1;	// IMP=0x000000000058148e
- (void)_unnameActionTapped:(id)arg1 asset:(id)arg2;	// IMP=0x00000000005812b7
- (void)_reviewPhotosActionTapped:(id)arg1;	// IMP=0x0000000000581222
- (void)_showAlbumActionTapped:(id)arg1;	// IMP=0x0000000000581113
- (void)_setupActionsForPerson:(id)arg1 asset:(id)arg2;	// IMP=0x00000000005803ae
- (void)_displayAvatarImageRequestResult:(id)arg1 faceRect:(struct CGRect)arg2 person:(id)arg3 error:(id)arg4;	// IMP=0x000000000057ff5f
- (void)_fetchAvatarImageForPerson:(id)arg1;	// IMP=0x000000000057fdbf
- (void)_fetchContactImageForPerson:(id)arg1 contact:(id)arg2;	// IMP=0x000000000057fc37
- (void)_reloadAvatarImageViewForPerson:(id)arg1;	// IMP=0x000000000057fa3e
- (void)refreshPerson;	// IMP=0x000000000057f917
- (void)_setPerson:(id)arg1 asset:(id)arg2 reloadAvatar:(_Bool)arg3;	// IMP=0x000000000057f44c
- (void)setPerson:(id)arg1 asset:(id)arg2;	// IMP=0x000000000057f434
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;	// IMP=0x000000000057f36a
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000057f28b
- (void)layoutSubviews;	// IMP=0x000000000057eea5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000057eaf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property(readonly) Class superclass;

@end

