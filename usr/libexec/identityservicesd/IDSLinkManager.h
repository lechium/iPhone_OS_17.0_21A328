//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSBTLinkManager, IDSSockAddrWrapper, IDSWPLinkManager, MISSING_TYPE, NSDate, NSDictionary, NSMutableDictionary, NSString;
@protocol IDSLinkDelegate, OS_dispatch_source;

@interface IDSLinkManager : NSObject
{
    NSMutableDictionary *_cbuuidToLinks;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToCurrentLink;	// 16 = 0x10
    NSDictionary *_deviceIDToUDPDestinations;	// 24 = 0x18
    IDSBTLinkManager *_btLinkManager;	// 32 = 0x20
    IDSWPLinkManager *_wpLinkManager;	// 40 = 0x28
    _Bool _isCentral;	// 48 = 0x30
    _Bool _mayBringUpWiFi;	// 49 = 0x31
    _Bool _isWiFiBroughtUp;	// 50 = 0x32
    _Bool _shouldBringWiFiDown;	// 51 = 0x33
    _Bool _shouldKeepWiFiUp;	// 52 = 0x34
    unsigned int _handshakeCounter;	// 56 = 0x38
    unsigned int _WiFiBringUpCounter;	// 60 = 0x3c
    double _addressRetransmissionInterval;	// 64 = 0x40
    _Bool _requireBT;	// 72 = 0x48
    _Bool _shouldStartBTLinkManager;	// 73 = 0x49
    NSMutableDictionary *_deviceIDToAllocRequests;	// 80 = 0x50
    NSMutableDictionary *_deviceIDToGlobalLinkUp;	// 88 = 0x58
    _Bool _delayedDefaultDeviceAllocateRequest;	// 96 = 0x60
    unsigned long long _totalBytesSent;	// 104 = 0x68
    unsigned long long _totalPacketsSent;	// 112 = 0x70
    unsigned long long _totalBytesReceived;	// 120 = 0x78
    unsigned long long _totalPacketsReceived;	// 128 = 0x80
    unsigned long long _totalPacketsDropped;	// 136 = 0x88
    unsigned long long _previousBytesSent;	// 144 = 0x90
    unsigned long long _previousPacketsSent;	// 152 = 0x98
    unsigned long long _previousBytesReceived;	// 160 = 0xa0
    unsigned long long _previousPacketsReceived;	// 168 = 0xa8
    unsigned long long _previousPacketsDropped;	// 176 = 0xb0
    double _previousReportTime;	// 184 = 0xb8
    double _previousReportFileOpenTime;	// 192 = 0xc0
    double _minReportFileOpenTimeInterval;	// 200 = 0xc8
    char _reporterFile[1025];	// 208 = 0xd0
    int _reporterFd;	// 1236 = 0x4d4
    _Bool _isInternalInstall;	// 1240 = 0x4d8
    _Bool _demoMode;	// 1241 = 0x4d9
    NSString *_fixedInterface;	// 1248 = 0x4e0
    NSString *_fixedInterfaceDestination;	// 1256 = 0x4e8
    _Bool _hasFixedDestination;	// 1264 = 0x4f0
    NSObject<OS_dispatch_source> *_reporterTimer;	// 1272 = 0x4f8
    struct __SCDynamicStore *_dynamicStore;	// 1280 = 0x500
    _Bool _cellularDataStatusListenerStarted;	// 1288 = 0x508
    id <IDSLinkDelegate> _delegate;	// 1296 = 0x510
    NSString *_defaultDeviceCbuuid;	// 1304 = 0x518
    _Bool _doesDefaultDevicePreferInfraWiFi;	// 1312 = 0x520
    _Bool _isDefaultDeviceUsingBTLink;	// 1313 = 0x521
    _Bool _isDefaultDeviceNearby;	// 1314 = 0x522
    _Bool _lastSentDefaultDeviceNearby;	// 1315 = 0x523
    _Bool _lastSentDefaultDeviceConnectivity;	// 1316 = 0x524
    _Bool _lastSentDefaultDeviceCloudConnectivity;	// 1317 = 0x525
    _Bool _lastSentDefaultPeerConnectivity;	// 1318 = 0x526
    _Bool _isDefaultDeviceOnPhoneCall;	// 1319 = 0x527
    _Bool _hasDelayedNoConnectivityNotification;	// 1320 = 0x528
    IDSSockAddrWrapper *_localWiFiAddressUsedForDefaultDevice;	// 1328 = 0x530
    unsigned long long _currentDefaultDeviceLinkType;	// 1336 = 0x538
    NSDate *_timeBase;	// 1344 = 0x540
    _Bool _isReliableUnicastSession;	// 1352 = 0x548
    _Bool _sharedSessionHasJoined;	// 1353 = 0x549
    NSMutableDictionary *_sessionIDToPluginNameToPluginOptionsDict;	// 1360 = 0x550
}

- (void).cxx_destruct;	// IMP=0x002000000024cf89
@property(readonly, nonatomic) unsigned long long currentDefaultDeviceLinkType; // @synthesize currentDefaultDeviceLinkType=_currentDefaultDeviceLinkType;
- (void)cellularSoMaskDidChange:(unsigned int)arg1;	// IMP=0x001000000024cbdf
- (void)cellularRadioAccessTechnologyDidChange:(_Bool)arg1;	// IMP=0x001000000024c787
- (void)_unsubscribeFromWRMForLinkRecommendation;	// IMP=0x001000000024c781
- (void)_subscribeToWRMForLinkRecommendation:(unsigned long long)arg1;	// IMP=0x001000000024c77b
- (void)_handleWRMLinkRecommendation:(unsigned long long)arg1;	// IMP=0x001000000024c691
- (id)_getIDSLinkTypeString:(unsigned long long)arg1;	// IMP=0x001000000024c672
- (unsigned long long)currentLinkType:(id)arg1;	// IMP=0x001000000024c462
- (id)linkForCBUUID:(id)arg1;	// IMP=0x001000000024c42e
- (void)currentLinkType:(unsigned long long *)arg1 andRATType:(unsigned int *)arg2 forDeviceID:(id)arg3;	// IMP=0x001000000024c1b5
- (void)_handleNetworkChanges:(id)arg1;	// IMP=0x001000000024b3a5
- (void)manager:(id)arg1 didPairedDeviceChange:(_Bool)arg2;	// IMP=0x001000000024aeff
- (void)manager:(id)arg1 linkDidDisconnect:(id)arg2;	// IMP=0x001000000024acdd
- (void)manager:(id)arg1 linkDidConnect:(id)arg2;	// IMP=0x001000000024aa54
- (void)manager:(id)arg1 didPowerStateChange:(_Bool)arg2;	// IMP=0x001000000024a644
- (void)link:(id)arg1 didReceiveErrorIndicationWithCode:(unsigned int)arg2;	// IMP=0x001000000024a5dc
- (void)link:(id)arg1 didReceiveEncryptedDataBlobs:(id)arg2;	// IMP=0x001000000024a55a
- (void)didReceiveBlockedIndicationForLink:(id)arg1 reason:(unsigned int)arg2;	// IMP=0x001000000024a4f2
- (void)link:(id)arg1 didReceiveSessionStateCounter:(unsigned int)arg2;	// IMP=0x001000000024a48a
- (void)link:(id)arg1 didReceiveMappedParticipantsDict:(id)arg2 forLinkID:(BOOL)arg3;	// IMP=0x001000000024a3f8
- (void)link:(id)arg1 didReceivePluginDisconnect:(id)arg2;	// IMP=0x001000000024a376
- (void)link:(id)arg1 didReceiveRequestToPurgeRegistration:(id)arg2;	// IMP=0x001000000024a2f4
- (void)link:(id)arg1 didReceivePluginUnregistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x001000000024a263
- (void)link:(id)arg1 didReceivePluginRegistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x001000000024a1d2
- (void)link:(id)arg1 didReceiveParticipantUpdate:(id)arg2 status:(unsigned short)arg3;	// IMP=0x001000000024a140
- (void)link:(id)arg1 didAddQREvent:(id)arg2;	// IMP=0x001000000024a0be
- (void)link:(id)arg1 didReceiveReportEvent:(id)arg2;	// IMP=0x0010000000249f10
- (void)link:(id)arg1 didReceiveSessionStats:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x0010000000249ced
- (void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 status:(unsigned int)arg5;	// IMP=0x0010000000249af2
- (void)terminateCallDueToIdleClientForLink:(id)arg1;	// IMP=0x0010000000249972
- (MISSING_TYPE *)link:didGetLinkProbingStatus: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002498f0
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;	// IMP=0x001000000024974b
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;	// IMP=0x001000000024958f
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00100000002493ea
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x0010000000249245
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;	// IMP=0x0010000000249099
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4;	// IMP=0x0010000000248e9f
- (void)link:(id)arg1 didReceiveReliableUnicastServerMaterial:(id)arg2;	// IMP=0x0010000000248d02
- (void)link:(id)arg1 didReceiveChildConnections:(id)arg2 forLinkID:(BOOL)arg3;	// IMP=0x0010000000248b30
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;	// IMP=0x001000000024892e
- (void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x001000000024859e
- (void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x001000000024831f
- (void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x0010000000247fb3
- (void)link:(id)arg1 didReceiveMaterialInfo:(id)arg2 material:(id)arg3;	// IMP=0x0010000000247dee
- (void)link:(id)arg1 didReceiveKeyMaterialMessageData:(id)arg2 fromParticipantIDs:(id)arg3 toParticipantID:(id)arg4;	// IMP=0x0010000000247bff
- (void)link:(id)arg1 didReceiveSKEData:(id)arg2;	// IMP=0x0010000000247a1b
- (void)link:(id)arg1 hasSpaceAvailable:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0010000000247884
- (void)link:(id)arg1 hostAwakeDidChange:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x001000000024777e
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_a8d8a807 *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x001000000024761b
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x001000000024743b
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x0010000000246f65
- (void)setIsOnPhoneCall:(_Bool)arg1 forDeviceID:(id)arg2;	// IMP=0x0010000000246da7
- (void)requestChildConnectionIDForLinkID:(BOOL)arg1 sessionID:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4;	// IMP=0x0010000000246bc7
- (void)setClientUniquePID:(unsigned long long)arg1 sessionID:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4;	// IMP=0x00100000002469ed
- (void)reportLinkEventForSessionID:(id)arg1 eventName:(id)arg2 linkID:(unsigned char)arg3;	// IMP=0x00100000002467f4
- (void)sendConnectedLinkInfoToAVCForSessionID:(id)arg1;	// IMP=0x001000000024664d
- (void)updateParticipantType:(unsigned short)arg1 forSessionID:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 sessionStateCounter:(unsigned int)arg5;	// IMP=0x001000000024644c
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 sessionID:(id)arg3 relayGroupID:(id)arg4 relaySessionID:(id)arg5;	// IMP=0x0010000000246248
- (unsigned long long)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2 sessionID:(id)arg3 relayGroupID:(id)arg4 relaySessionID:(id)arg5;	// IMP=0x0010000000246044
- (void)updateSessionURIToParticipantIDs:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionInfo:(id)arg4;	// IMP=0x0010000000245e38
- (void)clearisReliableUniCastSession:(id)arg1;	// IMP=0x0010000000245cbb
- (void)clearPluginCacheForSession:(id)arg1;	// IMP=0x0010000000245b3e
- (void)registerPluginForGroup:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x0010000000245805
- (void)updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4;	// IMP=0x00100000002455f9
- (void)getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x0010000000245087
- (void)removeParticipantIDsWithSessionID:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participantIDs:(id)arg4 sessionStateCounter:(unsigned int)arg5;	// IMP=0x0010000000244e60
- (void)manageDesignatedDestinationsWithSessionID:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 destinations:(id)arg4 withType:(unsigned short)arg5 sessionStateCounter:(unsigned int)arg6;	// IMP=0x0010000000244c17
- (void)setUPlusOneModeForSessionID:(id)arg1 isUPlusOneEnabled:(_Bool)arg2;	// IMP=0x0010000000244a2a
- (void)receiveJoinNotificationFromAParticipant:(id)arg1;	// IMP=0x0010000000244883
- (void)setRemoteDeviceVersion:(id)arg1 version:(unsigned int)arg2;	// IMP=0x00100000002446c5
- (void)sendStatsRequest:(id)arg1 options:(id)arg2;	// IMP=0x00100000002444f0
- (void)sendStatsRequestForClient:(id)arg1 options:(id)arg2;	// IMP=0x001000000024431b
- (void)flushLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x0010000000244146
- (void)queryLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x0010000000243f71
- (void)stopLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x0010000000243d9c
- (void)startLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x0010000000243bc7
- (void)currentCellularSignalStrength:(id)arg1 signalRaw:(int *)arg2 signalStrength:(int *)arg3 signalGrade:(int *)arg4;	// IMP=0x0010000000243a08
- (void)setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(_Bool)arg2;	// IMP=0x001000000024382c
- (void)stopKeepAlive:(id)arg1 linkIDs:(id)arg2;	// IMP=0x0010000000243657
- (void)updateProtocolQualityOfService:(id)arg1 linkID:(BOOL)arg2 isGood:(_Bool)arg3;	// IMP=0x001000000024343d
- (void)dropIPPackets:(id)arg1 linkID:(BOOL)arg2 payloadArray:(id)arg3;	// IMP=0x0010000000243245
- (void)setPacketNotificationFilter:(id)arg1 linkID:(BOOL)arg2 uniqueTag:(unsigned int)arg3 isEnabled:(_Bool)arg4;	// IMP=0x0010000000243024
- (void)setDefaultUnderlyingLink:(id)arg1 linkID:(BOOL)arg2;	// IMP=0x0010000000242e59
- (void)requestMaterialsForSession:(id)arg1 participantIDs:(id)arg2 materialType:(int)arg3;	// IMP=0x0010000000242bd0
- (void)setServerDesiredMaterialsForSession:(id)arg1 materials:(id)arg2 signer:(CDUnknownBlockType)arg3;	// IMP=0x0010000000242938
- (void)sendKeyMaterialMessage:(id)arg1 relayGroupID:(id)arg2 keyMaterialMessageData:(id)arg3 destinationURIs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000242648
- (void)sendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002422e3
- (void)setSharedSessionHasJoined:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x0010000000242147
- (void)setAllowP2PforIDSSession:(id)arg1 isEnabled:(_Bool)arg2;	// IMP=0x0010000000241f35
- (void)setIsReliableUnicastSession:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x0010000000241d99
- (void)setTimeBase:(id)arg1 forIDSSession:(id)arg2;	// IMP=0x0010000000241c13
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x0010000000241a01
- (void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;	// IMP=0x0010000000241813
- (void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3;	// IMP=0x0010000000241646
- (void)_removeAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x00100000002415e9
- (void)_addAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x00100000002413b7
- (void)disconnectGlobalLinkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000024110e
- (void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3 withLocalInterfacePreference:(int)arg4;	// IMP=0x0010000000240878
- (void)stopGlobalLinkForDevice:(id)arg1;	// IMP=0x001000000024032e
- (void)startGlobalLinkForDevice:(id)arg1;	// IMP=0x0010000000240328
- (void)_startAllocateRequestForDevice:(id)arg1;	// IMP=0x0010000000240322
- (void)stopBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00100000002401b5
- (void)startBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x0010000000240048
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3 useStunMICheck:(_Bool)arg4;	// IMP=0x001000000023fe10
- (void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000023fa34
- (void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000023f609
- (void)stopUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x001000000023f390
- (void)startUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x001000000023f26b
- (void)stopLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 disconnectWP:(_Bool)arg3;	// IMP=0x001000000023f07a
- (void)startLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x001000000023ed62
- (void)setShouldStartBTLinkManager:(_Bool)arg1;	// IMP=0x001000000023ebc4
- (void)setRequireBT:(_Bool)arg1;	// IMP=0x001000000023ea71
- (void)triggerBTCorruptionRecoveryForCBUUID:(id)arg1;	// IMP=0x001000000023e9a8
- (_Bool)isConnectedToDeviceID:(id)arg1;	// IMP=0x001000000023e984
- (void)setLinkPreferences:(id)arg1;	// IMP=0x001000000023e96e
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x001000000023e498
- (void)deletePairedDevice:(id)arg1;	// IMP=0x001000000023dfd9
- (void)connectPairedDevice:(id)arg1;	// IMP=0x001000000023de2d
- (void)addPairedDevice:(id)arg1;	// IMP=0x001000000023da44
- (void)obliterateConnectionInfo;	// IMP=0x001000000023d4e9
- (void)startLocalSetup;	// IMP=0x001000000023d3b7
- (void)flushBuffer:(unsigned long long)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x001000000023d3b1
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x001000000023d1bb
- (unsigned long long)_sendPacketBuffer:(CDStruct_a8d8a807 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 link:(id)arg4;	// IMP=0x001000000023cf76
- (unsigned long long)sendPacketBuffer:(CDStruct_a8d8a807 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x001000000023c0c5
- (void)_startCellularDataStatusListener:(_Bool)arg1;	// IMP=0x001000000023c0bf
- (void)_startNetworkInterfaceListener:(_Bool)arg1;	// IMP=0x001000000023bd7b
- (_Bool)_hasGlobalLinkConnectingOrConnected;	// IMP=0x001000000023ba05
- (void)_removeAllLinksForDeviceID:(id)arg1;	// IMP=0x001000000023b945
- (void)_removeLinkForDeviceID:(id)arg1 linkKey:(id)arg2 verifyWithLink:(id)arg3;	// IMP=0x001000000023b6b2
- (void)_bringUpWiFi:(_Bool)arg1;	// IMP=0x001000000023b6ac
- (id)_newGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 options:(id)arg3;	// IMP=0x001000000023adfb
- (id)_newUDPGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x001000000023ab36
- (id)_newUDPLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 IPVersion:(unsigned long long)arg3 port:(unsigned short)arg4;	// IMP=0x001000000023a707
- (void)_setBestLinkToCurrent:(id)arg1;	// IMP=0x001000000023a015
- (id)_selectBestLink:(id)arg1;	// IMP=0x0010000000239e21
- (void)_processLinkChangeForDefaultDeviceFrom:(id)arg1 to:(id)arg2;	// IMP=0x0010000000239821
- (_Bool)_startUDPLinkHandshakeForDefaultDevice:(_Bool)arg1 immediately:(_Bool)arg2;	// IMP=0x0010000000238a03
- (void)_sendUDPLinkInterfaceAddresses:(id)arg1 toDeviceID:(id)arg2 isRetransmission:(_Bool)arg3 isReply:(_Bool)arg4;	// IMP=0x0010000000237d68
- (void)_processLMCommandPacket:(CDStruct_a8d8a807 *)arg1 fromLink:(id)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0010000000236dfe
- (void)_nearbyChangedForDefaultDevice;	// IMP=0x0010000000236bf0
- (void)_connectivityChangedForDefaultDevice:(_Bool)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x0010000000236238
- (void)injectFakePacketInBTLink:(CDStruct_a8d8a807 *)arg1 cbuuid:(id)arg2;	// IMP=0x0010000000236232
- (void)_suspendBTLink:(_Bool)arg1 cbuuid:(id)arg2;	// IMP=0x0010000000235f5f
- (id)_linkKeyForLink:(id)arg1;	// IMP=0x0010000000235e56
- (void)_createWiFiManagerClient;	// IMP=0x0010000000235e50
- (void)_startReporter;	// IMP=0x00100000002358a5
- (id)generateLinkReport:(double)arg1 forceReport:(_Bool)arg2;	// IMP=0x0010000000233aae
- (id)copyLinkStatsDict;	// IMP=0x0010000000233746
- (void)triggerFixedInterfaceLinksDidConnect;	// IMP=0x00100000002334de
- (void)start;	// IMP=0x0010000000233287
- (void)dealloc;	// IMP=0x001000000023310e
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000232c75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

