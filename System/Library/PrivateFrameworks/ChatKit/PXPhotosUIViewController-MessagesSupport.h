//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotosUIViewController.h>

@class CKChatController, NSString, UIView;

@interface PXPhotosUIViewController (MessagesSupport)
- (void)_handleBackButton;	// IMP=0x002000000051cd9d
- (id)toolbarItemForIdentifier:(id)arg1;	// IMP=0x002000000051cd95
- (void)providerWillBeRemovedFromToolbarController:(id)arg1;	// IMP=0x002000000051cd8f
- (void)configureWithToolbarController:(id)arg1;	// IMP=0x002000000051cd89
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;	// IMP=0x002000000051cd81
- (void)previewControllerDidCancelDismiss:(id)arg1;	// IMP=0x002000000051cd7b
- (void)sendMessageAcknowledgment:(long long)arg1 chatItem:(id)arg2 previewController:(id)arg3;	// IMP=0x002000000051cc71
- (_Bool)previewControllerIsInGroupConversation:(id)arg1;	// IMP=0x002000000051cb93
- (id)chatItemForMediaObject:(id)arg1 previewController:(id)arg2;	// IMP=0x002000000051cacc
- (void)replyButtonTappedForMediaObject:(id)arg1 previewController:(id)arg2;	// IMP=0x002000000051c8e2
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;	// IMP=0x002000000051c8da
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect *)arg3;	// IMP=0x002000000051c645
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x002000000051c5e8
- (void)previewControllerWillDismiss:(id)arg1;	// IMP=0x002000000051c467
- (id)_assetReferenceForPreviewItem:(id)arg1;	// IMP=0x002000000051c337
- (_Bool)shouldHideInteractionOptions;	// IMP=0x002000000051c2f3
- (id)additionalActivitiesTypesForPreviewController:(id)arg1;	// IMP=0x002000000051c173
- (id)excludedActivityTypesForPreviewController:(id)arg1;	// IMP=0x002000000051c07d
@property(nonatomic) __weak CKChatController *ck_chatController;
@property(retain, nonatomic) UIView *ck_transitionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

