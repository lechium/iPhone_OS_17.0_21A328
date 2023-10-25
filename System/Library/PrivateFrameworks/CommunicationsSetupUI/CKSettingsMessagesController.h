//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNFRegListController.h"

@class CKFilteringListController, CKMultipleCTSubscriptionsController, CKNSExtension, CKOnboardingController, CKSettingsiMessageAppManager, IMCTXPCServiceSubscriptionInfo, NSString, PSSystemPolicyForApp, UIViewController;
@protocol PSController;

__attribute__((visibility("hidden")))
@interface CKSettingsMessagesController : CNFRegListController
{
    _Bool _showingChildViewController;	// 216 = 0xd8
    int _profileToken;	// 220 = 0xdc
    CKFilteringListController *_filteringController;	// 224 = 0xe0
    id _beginMappingID;	// 232 = 0xe8
    PSSystemPolicyForApp *_systemPolicy;	// 240 = 0xf0
    CKSettingsiMessageAppManager *_iMessageAppManager;	// 248 = 0xf8
    CKMultipleCTSubscriptionsController *_mmsMessagingController;	// 256 = 0x100
    IMCTXPCServiceSubscriptionInfo *_ctSubscriptionInfo;	// 264 = 0x108
    CKOnboardingController *_onboardingController;	// 272 = 0x110
    UIViewController<PSController> *_blackholeConversationListViewController;	// 280 = 0x118
    CKNSExtension *_ckExtension;	// 288 = 0x120
}

+ (id)currentKeepMessages;	// IMP=0x001000000008e07a
+ (_Bool)shouldShowFirstPartyExtension;	// IMP=0x001000000008affb
+ (id)removeFirstPartyExtensionFromArrayIfNecessary:(id)arg1;	// IMP=0x001000000008a875
+ (id)getDefaultExtension;	// IMP=0x001000000008a50d
+ (int)currentMessageAutoKeepOptionForType:(int)arg1;	// IMP=0x001000000008910f
+ (_Bool)currentMessageAutoKeepForType:(int)arg1;	// IMP=0x00100000000890d8
+ (void)setSyncedSettingsManager:(id)arg1;	// IMP=0x00100000000852d6
+ (id)syncedSettingsManager;	// IMP=0x0010000000085299
- (void).cxx_destruct;	// IMP=0x00000000000903ce
@property(retain, nonatomic) CKNSExtension *ckExtension; // @synthesize ckExtension=_ckExtension;
@property(retain, nonatomic) UIViewController<PSController> *blackholeConversationListViewController; // @synthesize blackholeConversationListViewController=_blackholeConversationListViewController;
@property(retain, nonatomic) CKOnboardingController *onboardingController; // @synthesize onboardingController=_onboardingController;
@property(retain, nonatomic) IMCTXPCServiceSubscriptionInfo *ctSubscriptionInfo; // @synthesize ctSubscriptionInfo=_ctSubscriptionInfo;
@property(retain, nonatomic) CKMultipleCTSubscriptionsController *mmsMessagingController; // @synthesize mmsMessagingController=_mmsMessagingController;
@property(retain, nonatomic) CKSettingsiMessageAppManager *iMessageAppManager; // @synthesize iMessageAppManager=_iMessageAppManager;
@property(retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // @synthesize systemPolicy=_systemPolicy;
@property(retain) id beginMappingID; // @synthesize beginMappingID=_beginMappingID;
@property(retain, nonatomic) CKFilteringListController *filteringController; // @synthesize filteringController=_filteringController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000009018a
- (id)controllerForSpecifier:(id)arg1;	// IMP=0x000000000008ff04
- (id)_smsRelayDevicesController;	// IMP=0x000000000008fd60
- (id)_madridSettingsController;	// IMP=0x000000000008fc70
- (void)_clearMessagesAppExtensionSalt;	// IMP=0x000000000008fba0
- (void)_setupAccountHandlersForDisabling;	// IMP=0x000000000008f9b8
- (_Bool)_allAccountsAreDeactivated;	// IMP=0x000000000008f811
- (void)_setupAccountHandlers;	// IMP=0x000000000008f524
- (void)_updateUIWithError:(id)arg1;	// IMP=0x000000000008f28f
- (void)firstRunControllerDidFinish:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000008f201
- (void)_showMadridSetupIfNecessary;	// IMP=0x000000000008f1ed
- (void)_showMadridSetupIfNecessary:(_Bool)arg1;	// IMP=0x000000000008ee1e
- (void)_showSignInController;	// IMP=0x000000000008ea25
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;	// IMP=0x000000000008e1a5
- (void)setKeepMessages:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000008e0ac
- (id)getKeepMessages:(id)arg1;	// IMP=0x000000000008e093
- (id)getSMSRelayDevicesSummary:(id)arg1;	// IMP=0x000000000008dff2
- (void)setPreviewTranscodingEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000008df98
- (id)getPreviewTranscodingEnabled:(id)arg1;	// IMP=0x000000000008df13
- (id)madridSigninButtonTextForSpecifier:(id)arg1;	// IMP=0x000000000008de99
- (void)madridSigninTappedWithSpecifier:(id)arg1;	// IMP=0x000000000008de87
- (id)madridSigninSpecifiers;	// IMP=0x000000000008de5b
- (_Bool)shouldShowMadridSignin;	// IMP=0x000000000008dc68
- (id)getAccountSummaryForSpecifier:(id)arg1;	// IMP=0x000000000008dc05
- (id)madridEnabledSpecifierIdentifiers;	// IMP=0x000000000008db88
- (_Bool)shouldShowMadridAccounts;	// IMP=0x000000000008daad
- (_Bool)_isMessagesInICloudEnabled;	// IMP=0x000000000008da54
- (id)getMessagesInICloudEnabledSpecifier:(id)arg1;	// IMP=0x000000000008d9d8
- (void)showMessagesInICloudSettings:(id)arg1;	// IMP=0x000000000008d957
- (id)sendAsSMSIdentifiers;	// IMP=0x000000000008d92b
- (_Bool)shouldShowSendAsSMS;	// IMP=0x000000000008d8f2
- (id)_iMessageAppsViewController;	// IMP=0x000000000008d84e
- (id)iMessageAppsIdentifiers;	// IMP=0x000000000008d7dc
- (_Bool)shouldShowiMessageApps;	// IMP=0x000000000008d74c
- (void)setJunkFilteringReceiptsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000008d5d7
- (id)areJunkFilteringReceiptsEnabled:(id)arg1;	// IMP=0x000000000008d552
- (_Bool)shouldShowJunkFilteringReceipts;	// IMP=0x000000000008d52f
- (void)setReadReceiptsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000008d3ba
- (id)areReadReceiptsEnabled:(id)arg1;	// IMP=0x000000000008d335
- (id)readReceiptSpecifierIdentifiers;	// IMP=0x000000000008d309
- (_Bool)shouldShowReadReceipts;	// IMP=0x000000000008d2f7
- (id)smsRelaySettingsSpecifierIdentifiers;	// IMP=0x000000000008d2cb
- (_Bool)hasPhoneNumber;	// IMP=0x000000000008d06e
- (_Bool)shouldShowSMSRelaySettings;	// IMP=0x000000000008ce2e
- (void)_setUpBusinessChatGroupSpecifiers:(id)arg1;	// IMP=0x000000000008ccb7
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;	// IMP=0x000000000008cc4a
- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;	// IMP=0x000000000008cbd0
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(_Bool)arg2;	// IMP=0x000000000008cb57
- (void)sharingSettingsViewControllerDidUpdateContact:(id)arg1;	// IMP=0x000000000008cb51
- (void)checkInPrivacySplashControllerDidRequestDismissal:(id)arg1;	// IMP=0x000000000008cb38
- (void)presentCheckInPrivacySplashController;	// IMP=0x000000000008ca30
- (void)configureCheckInSpecifiers:(id)arg1;	// IMP=0x000000000008c790
- (_Bool)isCheckInAllowedInRegion;	// IMP=0x000000000008c4c5
- (id)getCheckInLocationHistorySetting:(id)arg1;	// IMP=0x000000000008c448
- (id)checkInLocationHistorySettingsSpecifierIdentifiers;	// IMP=0x000000000008c3d6
- (_Bool)shouldShowCheckInLocationHistorySettings;	// IMP=0x000000000008c34e
- (id)_sharedWithYouViewController;	// IMP=0x000000000008c2d8
- (_Bool)_sharedWithYouEnabled;	// IMP=0x000000000008c27f
- (id)getSharedWithYouForSpecifier:(id)arg1;	// IMP=0x000000000008c203
- (_Bool)shouldShowSharedWithYouSettings;	// IMP=0x000000000008c1d0
- (id)sharedWithYouSettingsSpecifierIdentifiers;	// IMP=0x000000000008c15e
- (_Bool)_imageForkedFromMeCard;	// IMP=0x000000000008c127
- (unsigned long long)_meCardSharingAudience;	// IMP=0x000000000008c0d1
- (_Bool)_meCardSharingEnabled;	// IMP=0x000000000008c09a
- (void)_showSetupMeCardAlert;	// IMP=0x000000000008bf89
- (id)getNameAndPhotoSharingFooterText;	// IMP=0x000000000008befc
- (id)getNameAndPhotoSharingSpecifierSummary:(id)arg1;	// IMP=0x000000000008be88
- (void)showMeCardViewControllerWithNickname:(id)arg1;	// IMP=0x000000000008bc06
- (void)onboardingControllerDidFinish:(id)arg1;	// IMP=0x000000000008bbd6
- (id)presentingViewControllerForOnboardingController:(id)arg1;	// IMP=0x000000000008bbcd
- (void)showNicknameOnboardingOrEditFlowController;	// IMP=0x000000000008bab4
- (void)showNicknameOnboardingController;	// IMP=0x000000000008b9e1
- (void)nameAndPhotoSharingForSpecifier:(id)arg1;	// IMP=0x000000000008b5ec
- (void)showMultiplePhoneNumbersAlertForNicknames;	// IMP=0x000000000008b4c1
- (void)showiCloudNotSignedInAlertForNicknames;	// IMP=0x000000000008b2ff
- (_Bool)shouldShowNicknames;	// IMP=0x000000000008b2f5
- (id)nameAndPhotoSharingSpecifiers;	// IMP=0x000000000008b283
- (id)contactPhotoSettingsSpecifierIdentifiers;	// IMP=0x000000000008b257
- (_Bool)shouldShowContactPhotoSettings;	// IMP=0x000000000008b193
- (id)audioMessageSettingsSpecifierIdentifiers;	// IMP=0x000000000008b15c
- (_Bool)shouldShowAudioMessageSettings;	// IMP=0x000000000008b14a
- (void)setSiriToneNotificationEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000008b11d
- (id)isSiriToneNotificationEnabled:(id)arg1;	// IMP=0x000000000008b0e2
- (id)siriSettingsIdentifiers;	// IMP=0x000000000008b0b6
- (_Bool)isPersonalCompanionEnabled;	// IMP=0x000000000008b09e
- (_Bool)shouldShowSiriSettings;	// IMP=0x000000000008b06a
- (_Bool)shouldShowJunkConversationsRow;	// IMP=0x000000000008afd8
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000008aea5
- (id)isConversationListFilteringEnabled:(id)arg1;	// IMP=0x000000000008ae20
- (id)junkFilterReceiptsRowIdentifier;	// IMP=0x000000000008adf4
- (id)junkConversationsRowIdentifier;	// IMP=0x000000000008add0
- (id)spamFilteringSpecifierIdentifiers;	// IMP=0x000000000008adac
- (id)iMessageFilteringSpecifierIdentifiers;	// IMP=0x000000000008ad88
- (_Bool)shouldShowiMessageFilteringSettings:(id)arg1;	// IMP=0x000000000008ad64
- (void)messageFilteringTapped:(id)arg1;	// IMP=0x000000000008acbe
- (void)findSpamExtensions;	// IMP=0x000000000008a5a9
- (void)endMatchingExtensions;	// IMP=0x000000000008a550
- (void)notifyThatConversationFilteringChanged;	// IMP=0x000000000008a52d
- (id)raiseToListenSpecifierIdentifiers;	// IMP=0x000000000008a4ed
- (_Bool)shouldShowRaiseToListenSwitch;	// IMP=0x000000000008a4db
- (_Bool)_isRaiseGestureSupported;	// IMP=0x000000000008a3fd
- (id)blocklistSettingsSpecifierIdentifiers;	// IMP=0x000000000008a3dd
- (_Bool)shouldShowBlocklistSettings;	// IMP=0x000000000008a3a4
- (id)characterCountSpecifierIdentifiers;	// IMP=0x000000000008a384
- (_Bool)shouldShowCharacterCount;	// IMP=0x000000000008a372
- (id)genericSettingsSpecifierIdentifiers;	// IMP=0x000000000008a352
- (_Bool)shouldShowGenericSettings;	// IMP=0x000000000008a340
- (void)_updateSwitchDelayed;	// IMP=0x000000000008a2e5
- (void)_updateSwitch;	// IMP=0x000000000008a2d3
- (id)_switchFooterText:(_Bool *)arg1;	// IMP=0x0000000000089d66
- (void)setMadridEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000089513
- (id)isMadridEnabled:(id)arg1;	// IMP=0x00000000000894de
- (id)madridSwitchSpecifierIdentifiers;	// IMP=0x00000000000894b2
- (_Bool)shouldShowMadridSwitch;	// IMP=0x000000000008946e
- (_Bool)_isMadridSwitchOn;	// IMP=0x000000000008942a
- (_Bool)_isMadridAccountOperational;	// IMP=0x0000000000089356
- (_Bool)_isSMSDevice;	// IMP=0x000000000008930b
- (id)_syncManager;	// IMP=0x00000000000892da
- (void)setAudioMessageAutoKeep:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000089207
- (id)getAudioMessageAutoKeep:(id)arg1;	// IMP=0x00000000000891a7
- (void)setRaiseToListenEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000089079
- (id)getRaiseToListenEnabled:(id)arg1;	// IMP=0x0000000000088fe3
- (id)willSendGroupMMS:(id)arg1;	// IMP=0x0000000000088d10
- (void)setMMSEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000889e7
- (id)isMMSEnabled:(id)arg1;	// IMP=0x000000000008868e
- (id)getMMSDictionary;	// IMP=0x0000000000088573
- (void)setDeliveryReportsEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000884bf
- (id)isDeliveryReportsEnabled:(id)arg1;	// IMP=0x00000000000883fa
- (id)deliveryReceiptSpecifierIdentifiers;	// IMP=0x00000000000883da
- (_Bool)shouldShowDeliveryReceipts;	// IMP=0x00000000000883d2
- (void)setSpecifierLoading:(id)arg1 loading:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000882f1
- (void)_setupMultipleSubscriptionsMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(_Bool)arg2;	// IMP=0x0000000000087a97
- (void)_setupMMSGroupSpecifiers:(id)arg1 wantsMMSBasicGroup:(_Bool)arg2;	// IMP=0x0000000000087488
- (id)specifiers;	// IMP=0x00000000000862e2
- (id)newDNDGlobalConfigurationService;	// IMP=0x0000000000086205
- (void)notifyDNDFocusStatusAuthorizationChanged;	// IMP=0x000000000008614d
- (void)systemPolicyForApp:(id)arg1 didUpdateForSystemPolicyOptions:(unsigned long long)arg2 withValue:(id)arg3;	// IMP=0x00000000000860da
- (void)_showPrivacySheetForBusinessChat:(id)arg1;	// IMP=0x0000000000085ed1
- (void)_showPrivacySheetForiMessageFaceTime:(id)arg1;	// IMP=0x0000000000085e67
- (void)newCarrierNotification;	// IMP=0x0000000000085e55
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x0000000000085e4d
- (void)systemApplicationDidEnterBackground;	// IMP=0x0000000000085e0c
- (void)systemApplicationWillEnterForeground;	// IMP=0x0000000000085d79
- (void)applicationDidResume;	// IMP=0x0000000000085d2b
- (void)applicationWillSuspend;	// IMP=0x0000000000085cea
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000085ca9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000085c68
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000085afa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000085a5a
- (_Bool)wantsWiFiChooser;	// IMP=0x0000000000085a52
- (void)_stopListeningForProfileChanges;	// IMP=0x0000000000085a27
- (void)_startListeningForProfileChanges;	// IMP=0x000000000008585d
- (id)logName;	// IMP=0x0000000000085850
- (void)dealloc;	// IMP=0x00000000000856be
- (id)bundle;	// IMP=0x000000000008563e
- (id)init;	// IMP=0x0000000000085311
- (void)_syncedSettingsDidChange:(id)arg1;	// IMP=0x00000000000852ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
