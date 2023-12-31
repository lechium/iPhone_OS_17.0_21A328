//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class COSManualPairingHeader, COSPasskeyEntryViewController, NSMutableArray, NSString, NSTimer;

@interface COSManualPairingViewController : UITableViewController
{
    NSMutableArray *_displayedDeviceNames;	// 8 = 0x8
    NSTimer *_tableUpdateTimer;	// 16 = 0x10
    COSManualPairingHeader *_headerView;	// 24 = 0x18
    COSPasskeyEntryViewController *_passkeyEntryController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003fb80
@property(retain, nonatomic) COSPasskeyEntryViewController *passkeyEntryController; // @synthesize passkeyEntryController=_passkeyEntryController;
@property(retain, nonatomic) COSManualPairingHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSTimer *tableUpdateTimer; // @synthesize tableUpdateTimer=_tableUpdateTimer;
@property(retain, nonatomic) NSMutableArray *displayedDeviceNames; // @synthesize displayedDeviceNames=_displayedDeviceNames;
- (id)didSelectRowAtIndexPath:(id)arg1;	// IMP=0x001000000003fa4b
- (id)cellNameForRow:(long long)arg1;	// IMP=0x001000000003f9a5
- (void)endDiscovery;	// IMP=0x001000000003f906
- (void)beginDiscovery;	// IMP=0x001000000003f867
- (_Bool)updateDiscoveredDevices;	// IMP=0x001000000003f7c6
- (Class)headerClass;	// IMP=0x001000000003f725
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000003f524
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000003f507
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000003f448
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x001000000003f2be
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000003f2a9
- (void)controllerCancelled:(id)arg1;	// IMP=0x001000000003f231
- (void)_reloadDataForUI;	// IMP=0x001000000003f1d8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000003f164
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000003f0cc
- (id)initWithStyle:(long long)arg1;	// IMP=0x001000000003edb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

