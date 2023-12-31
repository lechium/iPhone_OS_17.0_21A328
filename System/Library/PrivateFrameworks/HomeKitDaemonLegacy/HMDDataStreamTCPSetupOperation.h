//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPSecuritySessionEncryption, HMFNetAddress, NSData;

__attribute__((visibility("hidden")))
@interface HMDDataStreamTCPSetupOperation
{
    HMFNetAddress *_remoteNetAddress;	// 56 = 0x38
    NSData *_controllerKeySalt;	// 64 = 0x40
    NSData *_accessoryKeySalt;	// 72 = 0x48
    long long _remoteTcpPort;	// 80 = 0x50
    HAPSecuritySessionEncryption *_sessionEncryption;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00600000002139f6
- (void).cxx_destruct;	// IMP=0x0000000000210fe1
@property(retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // @synthesize sessionEncryption=_sessionEncryption;
@property(nonatomic) long long remoteTcpPort; // @synthesize remoteTcpPort=_remoteTcpPort;
@property(retain, nonatomic) NSData *accessoryKeySalt; // @synthesize accessoryKeySalt=_accessoryKeySalt;
@property(readonly, nonatomic) NSData *controllerKeySalt; // @synthesize controllerKeySalt=_controllerKeySalt;
@property(retain, nonatomic) HMFNetAddress *remoteNetAddress; // @synthesize remoteNetAddress=_remoteNetAddress;
- (void)_finishStreamTransport;	// IMP=0x0000000000210d01
- (id)_createTCPTransport;	// IMP=0x0000000000210ac1
- (void)_generateStreamKeys;	// IMP=0x00000000002108ae
- (void)processTransportSetupResponse:(id)arg1;	// IMP=0x00000000002104b9
- (void)startSetup;	// IMP=0x000000000020fe0d
- (id)_fullKeySalt;	// IMP=0x000000000020fd69
- (_Bool)_isComplete;	// IMP=0x000000000020fcef
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4;	// IMP=0x000000000020fc8c

@end

