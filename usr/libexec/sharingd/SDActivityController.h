//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSService, NSArray, NSString;

@interface SDActivityController
{
    _Bool _shouldStart;	// 8 = 0x8
    IDSService *_activityService;	// 16 = 0x10
    NSArray *_allPeerBTIdentifiers;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000772b0
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSArray *allPeerBTIdentifiers; // @synthesize allPeerBTIdentifiers=_allPeerBTIdentifiers;
@property(nonatomic) _Bool shouldStart; // @synthesize shouldStart=_shouldStart;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x001000000007719c
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0010000000077039
- (void)nearbyServiceDevicesChanged:(id)arg1;	// IMP=0x0010000000076aae
- (void)activityServiceDevicesChanged:(id)arg1;	// IMP=0x0010000000076aa8
- (id)idsDeviceFromBTIdentifier:(id)arg1;	// IMP=0x00100000000766e3
- (void)stop;	// IMP=0x00100000000766dd
- (_Bool)restart;	// IMP=0x00100000000766d5
- (void)start;	// IMP=0x00100000000766cf
- (id)init;	// IMP=0x0010000000076637

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

