//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDevice, IDSService, NSString;

@interface CLCompanionTransport : NSObject
{
    _Bool _isConnected;	// 8 = 0x8
    IDSDevice *_pairedDevice;	// 16 = 0x10
    double _pairedDeviceLastSeenTimestamp;	// 24 = 0x18
    CDUnknownBlockType _receivedMessageHandler;	// 32 = 0x20
    CDUnknownBlockType _connectionUpdateHandler;	// 40 = 0x28
    IDSService *_idsService;	// 48 = 0x30
}

+ (id)computeMD5:(id)arg1;	// IMP=0x00200000006e7b64
@property(retain) IDSService *idsService; // @synthesize idsService=_idsService;
@property(copy) CDUnknownBlockType connectionUpdateHandler; // @synthesize connectionUpdateHandler=_connectionUpdateHandler;
@property(copy) CDUnknownBlockType receivedMessageHandler; // @synthesize receivedMessageHandler=_receivedMessageHandler;
@property double pairedDeviceLastSeenTimestamp; // @synthesize pairedDeviceLastSeenTimestamp=_pairedDeviceLastSeenTimestamp;
@property(retain) IDSDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void)handleColdStorageDataUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e7b0c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00100000006e7951
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000006e76ef
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000006e76e9
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000006e76d7
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e749e
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e72e3
- (void)handleCardioChangeUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e728b
- (void)handleContextConfigurationUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e7233
- (void)handleVO2MaxCloudKitDailyStats:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e71db
- (void)handleCompanionPingDataForAbsoluteAltitude:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e7183
- (void)handlePredictedWalkDistanceBout:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e712b
- (void)handleAbsoluteAltitudeSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e70d3
- (void)handleAbsoluteAltitudeUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e707b
- (void)handleRemoteAppLaunch:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e7023
- (void)handleMotionStateUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6fcb
- (void)handleCompanionPingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6f73
- (void)handleMotionCalsUpdate:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6f1b
- (void)handleOdometerCoarseElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6ec3
- (void)handleOdometerCoarseElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6e87
- (void)handleOdometerCoarseElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6e4b
- (void)handleStrideCalDataUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6e0f
- (void)handleStrideCalDataSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6db7
- (void)handleOdometerElevationData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6d5f
- (void)handleOdometerElevationUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6d23
- (void)handleOdometerElevationSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6ce7
- (void)handleOdometerCyclingData:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6c8f
- (void)handleOdometerCyclingUnsubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6c53
- (void)handleOdometerCyclingSubscribe:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6c1a
- (void)handleKappaStop:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6bde
- (void)handleKappaCollect:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000006e6b86
- (void)receivedMessage:(unsigned short)arg1 data:(id)arg2 identifierString:(id)arg3;	// IMP=0x00100000006e66e6
- (void)sendMessage:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 fireAndForget:(_Bool)arg4 encrypt:(_Bool)arg5 bypassConnectionCheck:(_Bool)arg6 timeout:(double)arg7 nonWaking:(_Bool)arg8;	// IMP=0x00100000006e60bb
- (void)updateIDSStatusAndNotify;	// IMP=0x00100000006e5dfb
- (void)updateIDSStatus;	// IMP=0x00100000006e5934
- (void)dealloc;	// IMP=0x00100000006e58dc
- (id)initWithSilo:(id)arg1 iDSService:(id)arg2;	// IMP=0x00100000006e52ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
