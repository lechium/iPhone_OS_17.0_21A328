//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface COSSecurePairingViewController
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00200000001314d9
- (id)didSelectRowAtIndexPath:(id)arg1;	// IMP=0x00100000001313e7
- (id)_discoveredNRDeviceForAdvertisedName:(id)arg1;	// IMP=0x0010000000131225
- (id)cellNameForRow:(long long)arg1;	// IMP=0x00100000001310ec
- (void)endDiscovery;	// IMP=0x001000000013104e
- (void)beginDiscovery;	// IMP=0x0010000000130fb0
- (_Bool)updateDiscoveredDevices;	// IMP=0x0010000000130be7
- (Class)headerClass;	// IMP=0x0010000000130bd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

