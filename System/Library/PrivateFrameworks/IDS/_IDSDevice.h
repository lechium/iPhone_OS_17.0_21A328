//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTWeakReference, IDSEndpointCapabilities, NSArray, NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface _IDSDevice : NSObject
{
    NSDictionary *_info;	// 8 = 0x8
    CUTWeakReference *_account;	// 16 = 0x10
    CUTWeakReference *_serviceReference;	// 24 = 0x18
    int _nearbyToken;	// 32 = 0x20
    _Bool _nearby;	// 36 = 0x24
    _Bool _connected;	// 37 = 0x25
    _Bool _immutableCloudConnected;	// 38 = 0x26
    _Bool _cloudConnected;	// 39 = 0x27
    IDSEndpointCapabilities *_capabilities;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000eb08d
@property(readonly, nonatomic) IDSEndpointCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)_setService:(id)arg1;	// IMP=0x00000000000eafa1
- (void)_setAccount:(id)arg1;	// IMP=0x00000000000eaebf
- (void)_stateChanged;	// IMP=0x00000000000ead4d
- (void)_cloudConnectedStateChanged;	// IMP=0x00000000000eac0e
- (void)_connectedStateChanged;	// IMP=0x00000000000eaacf
- (void)_nearbyStateChanged;	// IMP=0x00000000000ea990
- (_Bool)isTinker;	// IMP=0x00000000000ea978
- (void)_addIdentity:(id)arg1;	// IMP=0x00000000000ea62b
@property(readonly, nonatomic) NSArray *identities;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) _Bool isHSATrusted;
@property(readonly, nonatomic) NSString *enclosureColor;
@property(readonly, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, nonatomic) _Bool supportsPhoneCalls;
@property(readonly, nonatomic) _Bool supportsMMSRelay;
@property(readonly, nonatomic) _Bool supportsSMSRelay;
@property(readonly, nonatomic) _Bool supportsApplePay;
@property(readonly, nonatomic) _Bool supportsHandoff;
@property(readonly, nonatomic) _Bool supportsTethering;
@property(readonly, nonatomic) _Bool supportsiCloudPairing;
@property(readonly, nonatomic) NSUUID *stableBluetoothIdentifier;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) unsigned long long serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long minCompatibilityVersion;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property(readonly, nonatomic) NSDate *lastActivityDate;
@property(readonly, nonatomic) long long relationship;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) _Bool isLocallyPaired;
@property(readonly, nonatomic) _Bool isDefaultPairedDevice;
@property(readonly, nonatomic) _Bool locallyPresent;
@property(readonly, nonatomic, getter=isCloudConnected) _Bool cloudConnected;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby;
- (id)compactDescription;	// IMP=0x00000000000e8932
- (id)description;	// IMP=0x00000000000e84ad
- (id)fullDescription;	// IMP=0x00000000000e7ff9
@property(readonly, nonatomic) NSString *service;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *uniqueIDOverride;
@property(readonly, nonatomic) NSString *uniqueID;
- (void)dealloc;	// IMP=0x00000000000e78eb
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e7142

@end

