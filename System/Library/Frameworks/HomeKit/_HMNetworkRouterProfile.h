//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMAccessoryProfile.h"

@class NSSet;
@protocol _HMNetworkRouterProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkRouterProfile : _HMAccessoryProfile
{
    _Bool _satellite;	// 12 = 0xc
    unsigned long long _networkStatus;	// 16 = 0x10
    NSSet *_identifiersForSatelliteProfiles;	// 24 = 0x18
    id <_HMNetworkRouterProfileDelegate> _delegate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ff258
- (void).cxx_destruct;	// IMP=0x00000000000ff1ef
@property(nonatomic) __weak id <_HMNetworkRouterProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ff01a
- (void)handleRuntimeStateUpdate:(id)arg1;	// IMP=0x00000000000feef7
- (void)_handleNetworkStatusUpdated:(id)arg1;	// IMP=0x00000000000feea8
- (void)__handleNetworkStatusUpdated:(id)arg1;	// IMP=0x00000000000fee3a
- (void)_handleSatelliteProfilesUpdated:(id)arg1;	// IMP=0x00000000000fec07
- (_Bool)checkForUpdatedNetworkStatus:(unsigned long long)arg1;	// IMP=0x00000000000feaa1
- (_Bool)checkForUpdatedIdentifiersForSatellites:(id)arg1;	// IMP=0x00000000000fe906
- (id)messageReceiveQueue;	// IMP=0x00000000000fe8b6
- (id)messageDestination;	// IMP=0x00000000000fe84d
- (id)messageTargetUUID;	// IMP=0x00000000000fe7fd
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;	// IMP=0x00000000000fe780
@property(readonly) NSSet *identifiersForSatelliteProfiles; // @synthesize identifiersForSatelliteProfiles=_identifiersForSatelliteProfiles;
- (void)setSatellite:(_Bool)arg1;	// IMP=0x00000000000fe706
@property(readonly, getter=isSatellite) _Bool satellite; // @synthesize satellite=_satellite;
- (void)setNetworkStatus:(unsigned long long)arg1;	// IMP=0x00000000000fe69a
@property(readonly) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)_registerNotificationHandlers;	// IMP=0x00000000000fe5a1

@end
