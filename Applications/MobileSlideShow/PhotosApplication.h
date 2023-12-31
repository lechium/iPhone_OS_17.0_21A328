//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/PLPhotosApplication.h>

@class CAMNebulaDaemonProxyManager, NSMutableArray, NSSet, NSString, NSUndoManager, PFStateCaptureHandler, PHPhotoLibrary, PUImportViewController, PUTabbedLibraryViewController, PXActionManager, PXAlertController, PXUndoActionsInvalidator, UIScene, UIViewController;
@protocol PXActionManagerProvider, PXCollectionActionReceiver;

@interface PhotosApplication : PLPhotosApplication
{
    PUImportViewController *_importViewController;	// 8 = 0x8
    NSMutableArray *_importDeviceQueue;	// 16 = 0x10
    id <PXActionManagerProvider> _actionManagerProvider;	// 24 = 0x18
    _Bool _hasPresentedWelcomeViewControllers;	// 32 = 0x20
    PFStateCaptureHandler *_stateCaptureHandler;	// 40 = 0x28
    _Bool _hiddenAlbumIsVisible;	// 48 = 0x30
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;	// 56 = 0x38
    PXAlertController *_iPhotoMigrationAlertController;	// 64 = 0x40
    PXUndoActionsInvalidator *_undoActionsInvalidator;	// 72 = 0x48
}

+ (void)_donateTipsAppPhotosSignals;	// IMP=0x0020000000015f67
- (void).cxx_destruct;	// IMP=0x0010000000013dd4
@property(retain, nonatomic) PXUndoActionsInvalidator *undoActionsInvalidator; // @synthesize undoActionsInvalidator=_undoActionsInvalidator;
@property(nonatomic) _Bool hiddenAlbumIsVisible; // @synthesize hiddenAlbumIsVisible=_hiddenAlbumIsVisible;
@property(retain, nonatomic) PXAlertController *iPhotoMigrationAlertController; // @synthesize iPhotoMigrationAlertController=_iPhotoMigrationAlertController;
@property(retain, nonatomic, setter=_setNebulaDaemonProxyManager:) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property(readonly, nonatomic) id <PXCollectionActionReceiver> keyCollectionActionReceiver;
- (id)importViewControllerInstanceHost;	// IMP=0x0010000000013ca5
@property(readonly, nonatomic) PUTabbedLibraryViewController *keyTabbedLibraryViewController;
- (id)keySpec;	// IMP=0x0010000000013c05
- (id)photosWindowSceneDelegate;	// IMP=0x0010000000013a16
@property(readonly, nonatomic) UIScene *applicationScene;
- (id)importViewControllerForImportSource:(id)arg1;	// IMP=0x0010000000013782
- (void)performNebuladCrashRecoveryIfNeededForceEndLastTimelapseSession:(_Bool)arg1;	// IMP=0x00100000000136c7
- (void)importController:(id)arg1 removedImportSource:(id)arg2;	// IMP=0x00100000000133a4
- (void)importController:(id)arg1 addedImportSource:(id)arg2;	// IMP=0x00100000000130df
- (void)_showWelcomeViewControllersIfNecessary;	// IMP=0x001000000001302d
- (void)_showSyncReminderPromptIfNecessary;	// IMP=0x0010000000012cd8
- (void)_showCPLOverQuotaPromptIfNecessary;	// IMP=0x0010000000012997
- (void)_showCloudPhotoLibraryExitPromptIfNecessary;	// IMP=0x0010000000012492
- (void)handleOAuthRedirectURL:(id)arg1;	// IMP=0x0010000000012246
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;	// IMP=0x0010000000012229
- (void)_tearDownImportViewController;	// IMP=0x001000000001218e
- (void)_dequeueNextImportDevice;	// IMP=0x001000000001200e
- (_Bool)isShowingImportTab;	// IMP=0x0010000000011fab
- (id)_newImportViewController;	// IMP=0x0010000000011e47
- (void)photosPreferencesChanged;	// IMP=0x0010000000011d4f
- (void)updateShowHiddenAlbumCachedValue;	// IMP=0x0010000000011d28
- (void)_beginUndoActionsInvalidator;	// IMP=0x0010000000011c21
- (void)_userDidTakeScreenshot:(id)arg1;	// IMP=0x0010000000011aed
- (id)stateCaptureDictionary;	// IMP=0x00100000000119c7
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000117ad
- (void)_registerForUserNotifications;	// IMP=0x001000000001175d
- (void)_displayAndRemovePhoneInvitationFailures;	// IMP=0x0010000000011707
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000000116c6
- (void)prepareForApplicationDidEnterBackground;	// IMP=0x0010000000011683
- (void)prepareForApplicationWillEnterForeground;	// IMP=0x0010000000011538
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x00100000000111fa
- (void)invalidateActionManagerProvider;	// IMP=0x00100000000111d9
@property(readonly, nonatomic) PXActionManager *assetActionManager;
@property(readonly) PHPhotoLibrary *px_photoLibrary;
@property(readonly, nonatomic) NSUndoManager *fallbackUndoManager;
@property(readonly, nonatomic) UIViewController *contentViewController;
- (void)showInternalSettings:(id)arg1;	// IMP=0x00100000000188fe
- (void)revertAdjustments:(id)arg1;	// IMP=0x0010000000018889
- (void)pasteAdjustments:(id)arg1;	// IMP=0x0010000000018814
- (void)copyAdjustments:(id)arg1;	// IMP=0x001000000001879f
- (void)mergeDuplicatesWithoutConfirmation:(id)arg1;	// IMP=0x001000000001872a
- (void)mergeDuplicates:(id)arg1;	// IMP=0x00100000000186b5
- (void)trashAssetsWithoutConfirmation:(id)arg1;	// IMP=0x001000000001860c
- (void)trashAssets:(id)arg1;	// IMP=0x0010000000018546
- (void)makeKeyPhoto:(id)arg1;	// IMP=0x0010000000018480
- (void)favoriteAssets:(id)arg1;	// IMP=0x001000000001840b
- (void)hideAssets:(id)arg1;	// IMP=0x0010000000018396
- (void)duplicateAssets:(id)arg1;	// IMP=0x0010000000018321
- (void)addAssetsToLastUsedAlbum:(id)arg1;	// IMP=0x00100000000182ac
- (void)addAssetsToAlbum:(id)arg1;	// IMP=0x0010000000018237
- (void)shareAssets:(id)arg1;	// IMP=0x00100000000181c2
- (void)printAssets:(id)arg1;	// IMP=0x001000000001814d
- (void)copy:(id)arg1;	// IMP=0x00100000000180d8
- (void)redo:(id)arg1;	// IMP=0x001000000001809b
- (void)undo:(id)arg1;	// IMP=0x001000000001805e
- (void)find:(id)arg1;	// IMP=0x0010000000018021
- (void)validateCommand:(id)arg1;	// IMP=0x0010000000017e11
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000017d98
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000017aa3
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x0010000000016043

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *notificationSuppressionContexts;
@property(readonly) Class superclass;

@end

