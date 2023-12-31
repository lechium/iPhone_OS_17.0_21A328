//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString, PSUI5GStandaloneCache, PSUICoreTelephonyCarrierBundleCache, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory;

__attribute__((visibility("hidden")))
@interface PSUIVoiceAndDataDrillDownController : PSListItemsController
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 216 = 0xd8
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory *_switchFactory;	// 224 = 0xe0
    PSUICoreTelephonyCarrierBundleCache *_cbCache;	// 232 = 0xe8
    PSUI5GStandaloneCache *_saCache;	// 240 = 0xf0
    int _currentRATMode;	// 248 = 0xf8
    CoreTelephonyClient *_ctClient;	// 256 = 0x100
    CTServiceDescriptor *_serviceDescriptor;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000037251
- (id)getLogger;	// IMP=0x0000000000037231
- (void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;	// IMP=0x00000000000371d0
- (void)airplaneModeChanged;	// IMP=0x0000000000037137
- (void)handleMaxDataRateChanged;	// IMP=0x00000000000370d6
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;	// IMP=0x0000000000037075
- (void)listItemSelected:(id)arg1;	// IMP=0x0000000000036fc2
- (id)identifierForRATMode:(int)arg1;	// IMP=0x0000000000036f7d
- (int)RATModeForSpecifier:(id)arg1;	// IMP=0x0000000000036f0c
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000036e70
- (_Bool)shouldShow5GSASwitch;	// IMP=0x0000000000036e3f
- (_Bool)shouldShowFooterTextWithVoiceExplanation;	// IMP=0x0000000000036e18
- (_Bool)shouldShowVoNRSwitch;	// IMP=0x0000000000036de7
- (_Bool)shouldShowVoLTESwitch;	// IMP=0x0000000000036db6
- (_Bool)shouldShow5GReliabilityWarning;	// IMP=0x0000000000036d8b
- (_Bool)shouldShow5GSABatteryLifeReliabilityWarning;	// IMP=0x0000000000036d34
- (id)getSwitchSpecifiers;	// IMP=0x0000000000036895
- (void)updateCurrentRATModeFromSpecifier:(id)arg1;	// IMP=0x000000000003683f
- (void)set5GRATModeSpecifierEnabledState:(id)arg1;	// IMP=0x00000000000367a2
- (void)configure5GRATModeSpecifiersEnabledState;	// IMP=0x00000000000366c9
- (_Bool)shouldEnable5GRATModeSpecifiers;	// IMP=0x000000000003669e
- (void)setRATGroupFooterText;	// IMP=0x00000000000361cf
- (void)configureSpecifiers;	// IMP=0x00000000000361a1
- (void)setUpRATModeSpecifierIdentifiers:(id)arg1;	// IMP=0x0000000000035f8c
- (void)prepareSpecifiers:(id)arg1;	// IMP=0x0000000000035f13
- (void)reloadSpecifier:(id)arg1;	// IMP=0x0000000000035e00
- (id)specifiers;	// IMP=0x0000000000035cb0
- (void)setSpecifier:(id)arg1;	// IMP=0x0000000000035bde
- (void)startObservingNotifications;	// IMP=0x0000000000035b27
- (id)init;	// IMP=0x00000000000359de
- (id)initWithCTClient:(id)arg1 switchFactory:(id)arg2 carrierBundleCache:(id)arg3 standaloneCache:(id)arg4;	// IMP=0x00000000000358b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

