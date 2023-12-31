//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifierDataSource.h>

@class NRDevice, NSArray, NSString, PSSpecifier;

@interface COSPairedDeviceListDataSource : PSSpecifierDataSource
{
    _Bool _tinkerOnly;	// 8 = 0x8
    NRDevice *_loadingDevice;	// 16 = 0x10
    PSSpecifier *_pairedDevicesGroupSpecifier;	// 24 = 0x18
    NSArray *_pairedDeviceSpecifiers;	// 32 = 0x20
    PSSpecifier *_tinkerDevicesGroupSpecifier;	// 40 = 0x28
    NSArray *_tinkerDeviceSpecifiers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000e3da5
@property(retain, nonatomic) NSArray *tinkerDeviceSpecifiers; // @synthesize tinkerDeviceSpecifiers=_tinkerDeviceSpecifiers;
@property(retain, nonatomic) PSSpecifier *tinkerDevicesGroupSpecifier; // @synthesize tinkerDevicesGroupSpecifier=_tinkerDevicesGroupSpecifier;
@property(retain, nonatomic) NSArray *pairedDeviceSpecifiers; // @synthesize pairedDeviceSpecifiers=_pairedDeviceSpecifiers;
@property(retain, nonatomic) PSSpecifier *pairedDevicesGroupSpecifier; // @synthesize pairedDevicesGroupSpecifier=_pairedDevicesGroupSpecifier;
@property(retain, nonatomic) NRDevice *loadingDevice; // @synthesize loadingDevice=_loadingDevice;
- (void);	// IMP=0x00100000000e3cdc
@property(nonatomic) _Bool tinkerOnly; // @synthesize tinkerOnly=_tinkerOnly;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x00100000000e3b54
- (void)presentInternalFlow;	// IMP=0x00100000000e3b10
- (void)presentNewPairingFlowIfPossible;	// IMP=0x00100000000e3ab6
- (void)tappedMigrate:(id)arg1;	// IMP=0x00100000000e39c9
- (void)deviceBecameActive;	// IMP=0x00100000000e3930
- (void)_updateSelectedWatchInGroupSpecifier:(id)arg1 deviceSpecifiers:(id)arg2;	// IMP=0x00100000000e34a8
- (void)updateSelectedWatch;	// IMP=0x00100000000e3381
- (void)loadSpecifiers;	// IMP=0x00100000000e1ccc
- (id)newDeviceSpecifierForNRDevice:(id)arg1 enableCell:(_Bool)arg2 deviceState:(id)arg3;	// IMP=0x00100000000e1a68
- (id)_fakeList;	// IMP=0x00100000000e1692
- (id)_fakeWatchName:(unsigned long long)arg1;	// IMP=0x00100000000e1600
- (void)_reloadForDeviceStateChange:(id)arg1;	// IMP=0x00100000000e15ee
- (void)magicSwitchStateChanged;	// IMP=0x00100000000e15dc
- (void)dealloc;	// IMP=0x00100000000e154b
- (id)init;	// IMP=0x00100000000e135c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

