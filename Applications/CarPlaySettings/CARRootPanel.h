//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARAnnounceNotificationsPanel, CARNowPlayingAlbumArtSpecifier, CARSessionStatus, CARSettingsSwitchCellSpecifier, NSArray, NSString;

@interface CARRootPanel
{
    NSArray *_panels;	// 8 = 0x8
    NSArray *_cellSpecifiers;	// 16 = 0x10
    CARSessionStatus *_sessionStatus;	// 24 = 0x18
    CARAnnounceNotificationsPanel *_announceNotificationsPanel;	// 32 = 0x20
    CARSettingsSwitchCellSpecifier *_dndSpecifier;	// 40 = 0x28
    CARNowPlayingAlbumArtSpecifier *_albumArtSpecifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000002d4f
@property(retain, nonatomic) CARNowPlayingAlbumArtSpecifier *albumArtSpecifier; // @synthesize albumArtSpecifier=_albumArtSpecifier;
@property(retain, nonatomic) CARSettingsSwitchCellSpecifier *dndSpecifier; // @synthesize dndSpecifier=_dndSpecifier;
@property(retain, nonatomic) CARAnnounceNotificationsPanel *announceNotificationsPanel; // @synthesize announceNotificationsPanel=_announceNotificationsPanel;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (_Bool)_announceNotificationsEnabled;	// IMP=0x0010000000002c49
- (void)announceEnabledStateUpdated:(long long)arg1;	// IMP=0x0010000000002b8a
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000002afd
- (void)setVehicle:(id)arg1;	// IMP=0x0010000000002a94
- (id)title;	// IMP=0x0010000000002a83
- (id)cellSpecifiers;	// IMP=0x001000000000299c
@property(readonly, nonatomic) NSArray *panels; // @synthesize panels=_panels;
- (_Bool)showCellImages;	// IMP=0x001000000000234e
- (id)initWithPanelController:(id)arg1;	// IMP=0x00100000000022cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

