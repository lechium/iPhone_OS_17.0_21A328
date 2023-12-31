//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRAVOutputDevice, MRDIDSServiceConnection, MRDIDSTransportConnection, MRDeviceInfo, NSError, NSString;

@interface MRDIDSTransport : MRExternalDeviceTransport
{
    _Bool _shouldUseSystemAuthenticationPrompt;	// 16 = 0x10
    MRDeviceInfo *_deviceInfo;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSString *_sessionUID;	// 40 = 0x28
    MRAVOutputDevice *_outputDevice;	// 48 = 0x30
    MRDIDSTransportConnection *_transport;	// 56 = 0x38
    MRDIDSServiceConnection *_idsConnection;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000005d621
@property(retain, nonatomic) MRDIDSServiceConnection *idsConnection; // @synthesize idsConnection=_idsConnection;
@property(retain, nonatomic) MRDIDSTransportConnection *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
@property(retain, nonatomic) NSString *sessionUID; // @synthesize sessionUID=_sessionUID;
- (id)deviceInfo;	// IMP=0x001000000005d5a4
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;	// IMP=0x001000000005d594
- (_Bool)shouldUseSystemAuthenticationPrompt;	// IMP=0x001000000005d584
- (id)_generateSessionUID;	// IMP=0x001000000005d4df
- (void)_synchronized_setSessionUID:(id)arg1;	// IMP=0x001000000005d24e
- (_Bool)supportsIdleDisconnection;	// IMP=0x001000000005d1cb
- (void)resetWithError:(id)arg1;	// IMP=0x000000000005d148
- (id)_createConnectionWithUserInfo:(id)arg1;	// IMP=0x001000000005cd06
- (id)createConnectionWithUserInfo:(id)arg1;	// IMP=0x001000000005c90f
- (id)error;	// IMP=0x001000000005c8c5
- (id)uid;	// IMP=0x001000000005c875
- (long long)port;	// IMP=0x001000000005c86d
- (id)hostname;	// IMP=0x001000000005c865
- (id)name;	// IMP=0x001000000005c815
- (id)debugDescription;	// IMP=0x001000000005c6cc
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x001000000005c475

@end

