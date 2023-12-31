//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNRDevicePreferences, NSMutableSet;

@interface IDSNRDevicePreferencesHandler : NSObject
{
    unsigned int _quickRelayRequestsCount;	// 8 = 0x8
    IDSNRDevicePreferences *_nrDevicePreferences;	// 16 = 0x10
    NSMutableSet *_servicesPreferringInfraWiFi;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002c8c26
@property(nonatomic) unsigned int quickRelayRequestsCount; // @synthesize quickRelayRequestsCount=_quickRelayRequestsCount;
@property(retain, nonatomic) NSMutableSet *servicesPreferringInfraWiFi; // @synthesize servicesPreferringInfraWiFi=_servicesPreferringInfraWiFi;
@property(retain, nonatomic) IDSNRDevicePreferences *nrDevicePreferences; // @synthesize nrDevicePreferences=_nrDevicePreferences;
- (void)cancel;	// IMP=0x00100000002c8ab3
- (void)setQuickRelayRequest:(_Bool)arg1;	// IMP=0x00100000002c896f
- (void)setAllowedTrafficClasses:(id)arg1;	// IMP=0x00100000002c8906
- (void)_reportPreferInfraWiFiToPowerLogs:(_Bool)arg1;	// IMP=0x00100000002c8844
- (void)localSetUpCompleted;	// IMP=0x00100000002c87d9
- (void)localSetUpStarted;	// IMP=0x00100000002c876e
- (void)setPreferInfraWiFiRequest:(_Bool)arg1 services:(id)arg2;	// IMP=0x00100000002c8361
- (void)setBluetoothLinkPreferences:(id)arg1 inputbps:(id)arg2 outputbps:(id)arg3;	// IMP=0x00100000002c8277
- (id)initWithDeviceIdentifier:(id)arg1;	// IMP=0x00100000002c804d

@end

