//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, CARSettingsSwitchCellSpecifier, CRSSiriPreferences, NSString;

@interface CARSiriPanel
{
    _Bool _autoSendMessagesSpecifierVisible;	// 8 = 0x8
    CARSettingsCellSpecifier *_cellSpecifier;	// 16 = 0x10
    CARSettingsSwitchCellSpecifier *_autoSendMessagesSpecifier;	// 24 = 0x18
    CARSettingsSwitchCellSpecifier *_showAppsBehindSiriSpecifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000164d8
@property(readonly, nonatomic) _Bool autoSendMessagesSpecifierVisible; // @synthesize autoSendMessagesSpecifierVisible=_autoSendMessagesSpecifierVisible;
- (void)preferences:(id)arg1 showAppsBehindSiriInCarPlayEnabledChanged:(_Bool)arg2;	// IMP=0x0010000000016467
- (void)preferences:(id)arg1 autoSendInHeadphonesEnabledChanged:(_Bool)arg2;	// IMP=0x0010000000016406
- (void)preferences:(id)arg1 mainAutoSendEnabledChanged:(_Bool)arg2;	// IMP=0x00100000000163a5
- (void)preferences:(id)arg1 autoSendInCarPlayEnabledChanged:(_Bool)arg2;	// IMP=0x0010000000016344
- (void)preferences:(id)arg1 announceNotificationsInCarPlayTemporarilyDisabledChanged:(_Bool)arg2;	// IMP=0x001000000001633e
- (void)preferences:(id)arg1 carPlayAnnounceEnablementTypeChanged:(long long)arg2;	// IMP=0x0010000000016338
- (void)invalidate;	// IMP=0x00100000000162f7
@property(readonly, nonatomic) CARSettingsSwitchCellSpecifier *showAppsBehindSiriSpecifier; // @synthesize showAppsBehindSiriSpecifier=_showAppsBehindSiriSpecifier;
- (void)setAutoSendMessagesSpecifierVisible:(_Bool)arg1;	// IMP=0x0010000000016144
@property(readonly, nonatomic) CARSettingsSwitchCellSpecifier *autoSendMessagesSpecifier; // @synthesize autoSendMessagesSpecifier=_autoSendMessagesSpecifier;
@property(readonly, nonatomic) CRSSiriPreferences *siriPreferences;
- (id)cellSpecifier;	// IMP=0x0010000000015c92
- (id)specifierSections;	// IMP=0x001000000001587c
- (id)initWithPanelController:(id)arg1;	// IMP=0x0010000000015800

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
