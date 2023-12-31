//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UASimulator;

@interface UASimulatorAdvertiser
{
    NSMutableArray *_advertisableItems;	// 8 = 0x8
    UASimulator *_simulator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001c43c
@property(readonly, retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (id)statusString;	// IMP=0x001000000001c2a0
- (id)pairedDevices;	// IMP=0x001000000001c181
- (_Bool)updateItem:(id)arg1;	// IMP=0x001000000001bfee
- (id)advertisingItems;	// IMP=0x001000000001bfdc
- (_Bool)advertising;	// IMP=0x001000000001bf65
- (_Bool)active;	// IMP=0x001000000001bf36
- (void)setAdvertisableItems:(id)arg1;	// IMP=0x001000000001bac0
- (id)advertisableItems;	// IMP=0x001000000001ba54
- (id)initWithSimulator:(id)arg1;	// IMP=0x001000000001b91e

@end

