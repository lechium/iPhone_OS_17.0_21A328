//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKInterfaceListener, LoopbackSocketTunnel, NSCondition, NSData, NSDictionary, NSMutableDictionary, NSObject, NSString, TCPTunnelClient, VCTransport;
@protocol OS_dispatch_source, VCConnectionProtocol, VCTransportSessionLegacyDelegate, VideoConferenceRealTimeChannel;

__attribute__((visibility("hidden")))
@interface VCTransportSessionLegacy
{
    unsigned char _localU8Version;	// 176 = 0xb0
    long long relayState;	// 184 = 0xb8
    int pendingRelayCount;	// 192 = 0xc0
    float callerPreEmptiveTimeoutInSecs;	// 196 = 0xc4
    unsigned int _connectionSetupRTTEstimate;	// 200 = 0xc8
    _Bool allowsRelay;	// 204 = 0xcc
    _Bool initialSecondaryRelaySetupDone;	// 205 = 0xcd
    _Bool requestedTimeoutRelay;	// 206 = 0xce
    _Bool _isCaller;	// 207 = 0xcf
    _Bool _didReceivePiggybackBlob;	// 208 = 0xd0
    _Bool _useLoopback;	// 209 = 0xd1
    _Bool _isRemoteOSPreLion;	// 210 = 0xd2
    _Bool _isStarted;	// 211 = 0xd3
    NSObject<OS_dispatch_source> *relaySetupTimer;	// 216 = 0xd8
    VCTransport *transport;	// 224 = 0xe0
    unsigned int _callID;	// 232 = 0xe8
    unsigned int _remoteCallID;	// 236 = 0xec
    int _NATType;	// 240 = 0xf0
    NSMutableDictionary *_localRelayRequestResponse;	// 248 = 0xf8
    NSDictionary *_localRelayUpdate;	// 256 = 0x100
    NSMutableDictionary *_remoteRelayRequestResponse;	// 264 = 0x108
    NSDictionary *_remoteRelayUpdate;	// 272 = 0x110
    NSData *_localConnectionData;	// 280 = 0x118
    NSData *_localRelayConnectionData;	// 288 = 0x120
    NSData *_remoteConnectionData;	// 296 = 0x128
    NSData *_remoteRelayConnectionData;	// 304 = 0x130
    NSString *_localParticipantID;	// 312 = 0x138
    NSString *_remoteParticipantID;	// 320 = 0x140
    NSString *_sessionID;	// 328 = 0x148
    struct __SecIdentity *_identity;	// 336 = 0x150
    TCPTunnelClient *_tcpTunnelClient;	// 344 = 0x158
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;	// 352 = 0x160
    LoopbackSocketTunnel *_tunnel;	// 360 = 0x168
    id <VCConnectionProtocol> _loopbackConnection;	// 368 = 0x170
    NSCondition *_connectionDataTimeoutCondVar;	// 376 = 0x178
    GKInterfaceListener *_interfaceListener;	// 384 = 0x180
    int _operatingMode;	// 392 = 0x188
    id _delegate;	// 400 = 0x190
}

@property int operatingMode; // @synthesize operatingMode=_operatingMode;
@property int NATType; // @synthesize NATType=_NATType;
@property(retain, nonatomic) NSDictionary *remoteRelayUpdate; // @synthesize remoteRelayUpdate=_remoteRelayUpdate;
@property(retain, nonatomic) NSDictionary *localRelayUpdate; // @synthesize localRelayUpdate=_localRelayUpdate;
@property(retain, nonatomic) NSMutableDictionary *remoteRelayRequestResponse; // @synthesize remoteRelayRequestResponse=_remoteRelayRequestResponse;
@property(retain) NSMutableDictionary *localRelayRequestResponse; // @synthesize localRelayRequestResponse=_localRelayRequestResponse;
- (_Bool)isRemoteOSPreLion;	// IMP=0x00000000002217e6
- (unsigned int)connectionSetupRTTEstimate;	// IMP=0x00000000002217d6
@property unsigned int remoteCallID; // @synthesize remoteCallID=_remoteCallID;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property _Bool allowsRelay; // @synthesize allowsRelay;
@property(retain, nonatomic) NSData *remoteRelayConnectionData; // @synthesize remoteRelayConnectionData=_remoteRelayConnectionData;
@property(retain) NSData *localRelayConnectionData; // @synthesize localRelayConnectionData=_localRelayConnectionData;
@property(retain) NSData *remoteConnectionData; // @synthesize remoteConnectionData=_remoteConnectionData;
@property(retain) NSData *localConnectionData; // @synthesize localConnectionData=_localConnectionData;
@property(copy) NSString *remoteParticipantID; // @synthesize remoteParticipantID=_remoteParticipantID;
@property(copy) NSString *localParticipantID; // @synthesize localParticipantID=_localParticipantID;
@property _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) _Bool initialSecondaryRelaySetupDone; // @synthesize initialSecondaryRelaySetupDone;
@property(nonatomic) int pendingRelayCount; // @synthesize pendingRelayCount;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x0000000000221620
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x000000000022161a
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x0000000000221614
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x000000000022160e
- (void)setIdentity:(struct __SecIdentity *)arg1;	// IMP=0x00000000002215e2
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;	// IMP=0x00000000002215be
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;	// IMP=0x000000000022159d
- (void)reportNetworkConditionsDegraded;	// IMP=0x000000000022150f
- (int)detailedErrorCode;	// IMP=0x00000000002214e5
- (_Bool)isConnectedAndAllowAdditionalConnection;	// IMP=0x00000000002213f6
- (unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT *)arg1;	// IMP=0x00000000002213bd
- (struct tagIPPORT)IPPortForPrimaryConnectionOnLocalInterface:(_Bool)arg1;	// IMP=0x0000000000221320
- (double)iceTimeoutInSeconds:(_Bool)arg1;	// IMP=0x00000000002212ba
- (void)resetICETimeoutToLongTimeout;	// IMP=0x0000000000221237
- (void)setupTransport;	// IMP=0x0000000000221015
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int *)arg3 nonCellularCandidateTimeout:(double)arg4;	// IMP=0x0000000000220d44
- (id)connectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id *)arg4;	// IMP=0x0000000000220811
- (id)connectionData:(char *)arg1 connectionDataSizeInBytes:(int)arg2 shouldUseRelay:(_Bool)arg3;	// IMP=0x0000000000220616
- (void)getConnectionDataUsingRelay:(_Bool)arg1 isInitialRelay:(_Bool)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000022047c
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000220412
- (id)createRelayUpdateDictionary:(id)arg1;	// IMP=0x000000000021ffa3
- (id)createInitiateRelayDictionaryForCall:(unsigned int)arg1 primaryConnection:(struct tagCONNRESULT *)arg2;	// IMP=0x000000000021f978
- (id)createInitiateRelayDictionary;	// IMP=0x000000000021f701
- (void)stopLoopbackProc:(id)arg1;	// IMP=0x000000000021f54b
- (void)stopLoopback;	// IMP=0x000000000021f4d9
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;	// IMP=0x000000000021f2c4
- (void)setupLoopbackWithConnectionType:(unsigned int)arg1;	// IMP=0x000000000021ec7b
- (void)resetLoopback;	// IMP=0x000000000021eae9
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT *)arg3;	// IMP=0x000000000021e9ca
- (void)deleteTCPTunnel;	// IMP=0x000000000021e97d
- (_Bool)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(_Bool)arg3 relayType:(unsigned char)arg4 error:(id *)arg5;	// IMP=0x000000000021df0f
- (void)didMediaQualityDegrade:(_Bool)arg1;	// IMP=0x000000000021df09
- (void)handleRATChanged:(id)arg1;	// IMP=0x000000000021df03
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x000000000021defd
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg1 notifyPeer:(_Bool)arg2 enableDuplication:(_Bool)arg3 isMediaUnrecoverableSignal:(_Bool)arg4;	// IMP=0x000000000021def7
- (void)didEnableDuplication:(_Bool)arg1 activeConnection:(id)arg2;	// IMP=0x000000000021de41
- (void)connectionCallback:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x000000000021dc3c
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;	// IMP=0x000000000021dc36
- (_Bool)handleExchangedKey:(id)arg1 result:(int)arg2;	// IMP=0x000000000021daa6
- (void)connectionResultCallback:(struct tagCONNRESULT *)arg1 didReceiveICEPacket:(_Bool)arg2 didUseRelay:(_Bool)arg3 secretKey:(id)arg4 skeResult:(int)arg5;	// IMP=0x000000000021d740
- (void)processRemoteIPChange:(id)arg1;	// IMP=0x000000000021d584
- (void)processRemoteIPChange:(char *)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3;	// IMP=0x000000000021d517
- (void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2;	// IMP=0x000000000021d2dc
- (void)networkStateDidChange;	// IMP=0x000000000021cd69
- (void)triggerInterfaceChange;	// IMP=0x000000000021cd57
- (_Bool)isHandoverSupported;	// IMP=0x000000000021cc2f
- (void)handleConnectionSetupDataChangeMessageDelivered;	// IMP=0x000000000021cb78
- (void)initiateRelayRequest;	// IMP=0x000000000021c70f
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(_Bool)arg1 callID:(unsigned int)arg2 connectionId:(int)arg3;	// IMP=0x000000000021c09e
- (void)setupSecondaryRelayForCall:(unsigned int)arg1 callerRequired:(_Bool)arg2;	// IMP=0x000000000021be02
- (void)notifyDelegateToCancelRelay;	// IMP=0x000000000021bb8b
- (void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1;	// IMP=0x000000000021b987
- (void)destroySecondaryRelayDispatchTimer;	// IMP=0x000000000021b89a
- (void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned int)arg2 callerRequired:(_Bool)arg3;	// IMP=0x000000000021b5d5
- (void)processRelayUpdate:(id)arg1 didOriginateRequest:(_Bool)arg2;	// IMP=0x000000000021aef6
- (void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(_Bool)arg2;	// IMP=0x000000000021a1cc
- (void)setForceRelay;	// IMP=0x000000000021a0cf
- (void)stop;	// IMP=0x0000000000219f38
- (_Bool)startConnectionWithBlob:(id)arg1 useRelay:(_Bool)arg2 isInitialRelay:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000219cb7
- (void)start;	// IMP=0x0000000000219a96
@property id <VCTransportSessionLegacyDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000002198d7
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;	// IMP=0x00000000002196c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

