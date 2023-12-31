//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, APSIDSProxyManager, APSTopicGroup, APSTopicManager, MISSING_TYPE, NSData, NSDate, NSMutableDictionary, NSMutableSet, NSString;
@protocol APSProxyClientDelegate;

@interface APSProxyClient : NSObject
{
    _Bool _invalid;	// 8 = 0x8
    _Bool _active;	// 9 = 0x9
    _Bool _isConnected;	// 10 = 0xa
    _Bool _needsToConnect;	// 11 = 0xb
    APSIDSProxyManager *_proxyManager;	// 16 = 0x10
    id <APSProxyClientDelegate> _delegate;	// 24 = 0x18
    NSData *_certificate;	// 32 = 0x20
    NSData *_nonce;	// 40 = 0x28
    NSData *_signature;	// 48 = 0x30
    NSString *_hwVersion;	// 56 = 0x38
    NSDate *_lastPresence;	// 64 = 0x40
    NSString *_swVersion;	// 72 = 0x48
    NSString *_swBuild;	// 80 = 0x50
    NSData *_publicToken;	// 88 = 0x58
    NSString *_guid;	// 96 = 0x60
    APSEnvironment *_environment;	// 104 = 0x68
    NSMutableDictionary *_stateByInterfaceIdentifier;	// 112 = 0x70
    NSMutableDictionary *_filterModeByInterfaceIdentifier;	// 120 = 0x78
    APSTopicManager *_topicManager;	// 128 = 0x80
    NSMutableSet *_pendingMessageGUIDs;	// 136 = 0x88
    long long _countOfConnectedNotesSent;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000073c60
@property(nonatomic) long long countOfConnectedNotesSent; // @synthesize countOfConnectedNotesSent=_countOfConnectedNotesSent;
@property(retain, nonatomic) NSMutableSet *pendingMessageGUIDs; // @synthesize pendingMessageGUIDs=_pendingMessageGUIDs;
@property(retain, nonatomic) APSTopicManager *topicManager; // @synthesize topicManager=_topicManager;
@property(retain, nonatomic) NSMutableDictionary *filterModeByInterfaceIdentifier; // @synthesize filterModeByInterfaceIdentifier=_filterModeByInterfaceIdentifier;
@property(retain, nonatomic) NSMutableDictionary *stateByInterfaceIdentifier; // @synthesize stateByInterfaceIdentifier=_stateByInterfaceIdentifier;
@property(retain, nonatomic) APSEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(copy, nonatomic) NSString *swBuild; // @synthesize swBuild=_swBuild;
@property(copy, nonatomic) NSString *swVersion; // @synthesize swVersion=_swVersion;
@property(readonly, nonatomic) NSDate *lastPresence; // @synthesize lastPresence=_lastPresence;
@property(copy, nonatomic) NSString *hwVersion; // @synthesize hwVersion=_hwVersion;
@property(copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(readonly, nonatomic) _Bool needsToConnect; // @synthesize needsToConnect=_needsToConnect;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) __weak id <APSProxyClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APSIDSProxyManager *proxyManager; // @synthesize proxyManager=_proxyManager;
- (id)tokenName;	// IMP=0x0010000000073a8b
- (void)handleAppTokenGenerateResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000073955
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x00100000000736b1
- (void)sendPubSubChannelListRequestForConnectionType:(long long)arg1;	// IMP=0x00100000000735b6
- (void)sendPubSubUpdateMessage:(id)arg1 forConnectionType:(long long)arg2;	// IMP=0x001000000007349c
- (id)_createRequestForPubSubData:(id)arg1 messageID:(unsigned int)arg2 connectionType:(long long)arg3 environment:(id)arg4;	// IMP=0x0010000000073349
- (void)sendPubSubChannelListResponse:(id)arg1;	// IMP=0x0010000000073234
- (void)proxyManager:(id)arg1 sendPubSubChannelList:(id)arg2 messageID:(unsigned int)arg3 token:(id)arg4 connectionType:(long long)arg5 environmentName:(id)arg6 guid:(id)arg7;	// IMP=0x0010000000073047
- (void)proxyManager:(id)arg1 messageTracingWithStatus:(int)arg2 topic:(id)arg3 tracingUUID:(id)arg4 token:(id)arg5 guid:(id)arg6 environmentName:(id)arg7;	// IMP=0x0010000000072e1b
- (void)proxyManager:(id)arg1 tokenGenerateWithTopicHash:(id)arg2 baseToken:(id)arg3 appId:(id)arg4 expirationTTL:(id)arg5 vapidPublicKeyHash:(id)arg6 type:(id)arg7 guid:(id)arg8 environmentName:(id)arg9;	// IMP=0x0010000000072b9c
- (void)proxyManager:(id)arg1 sendReversePush:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x0010000000072ad2
- (void)proxyManager:(id)arg1 receivedPushAckResponse:(id)arg2 messageId:(id)arg3 token:(id)arg4 connectionType:(id)arg5 generation:(id)arg6 guid:(id)arg7 environmentName:(id)arg8;	// IMP=0x0010000000072888
- (void)proxyManager:(id)arg1 inactiveReceivedForGuid:(id)arg2 environmentName:(id)arg3;	// IMP=0x0010000000072683
- (void)proxyManager:(id)arg1 incomingFilterForGuid:(id)arg2 environmentName:(id)arg3 enabledTopics:(id)arg4 ignoredTopics:(id)arg5 opportunisticTopics:(id)arg6 nonWakingTopics:(id)arg7 topicSalts:(id)arg8;	// IMP=0x00100000000716e3
- (void)proxyManager:(id)arg1 isNearbyChanged:(_Bool)arg2;	// IMP=0x001000000007162a
@property(readonly, retain, nonatomic) APSTopicGroup *topics;
- (void)setMessageSize:(unsigned long long)arg1;	// IMP=0x00100000000715ab
- (void)setLargeMessageSize:(unsigned long long)arg1;	// IMP=0x0010000000071545
- (void)invalidate;	// IMP=0x0010000000071483
- (_Bool)_setToken:(id)arg1;	// IMP=0x00100000000710c3
- (_Bool)shouldOnlySendFilterOnPreferredInterface;	// IMP=0x0010000000070f4a
- (unsigned long long)filterModeOnInterface:(id)arg1;	// IMP=0x0010000000070eb5
- (void)setFilterMode:(unsigned long long)arg1 onInterface:(id)arg2;	// IMP=0x0010000000070e18
- (unsigned long long)stateOnInterface:(id)arg1;	// IMP=0x0010000000070d83
- (void)setState:(unsigned long long)arg1 onInterface:(id)arg2;	// IMP=0x0010000000070b80
- (void)noteIsConnected;	// IMP=0x0010000000070a89
- (void)_adjustConnectedStateWithInterfaceHint:(_Bool)arg1;	// IMP=0x001000000007082b
- (_Bool)isConnectedOnInterface:(id)arg1;	// IMP=0x00100000000707df
@property(readonly, nonatomic) _Bool needsToDisconnect;
- (MISSING_TYPE *)needsToDisconnectOnInterface: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000070628
- (_Bool)needsToConnectOnInterface:(id)arg1;	// IMP=0x00100000000705c3
- (void)receivedPush:(id)arg1 onConnectionType:(long long)arg2 withGeneration:(unsigned long long)arg3;	// IMP=0x0010000000070531
- (void)handleExpiredNonceWithServerTime:(id)arg1 shouldRollToken:(_Bool)arg2;	// IMP=0x00100000000704b0
- (void)incomingPresenceWithCertificate:(id)arg1 nonce:(id)arg2 signature:(id)arg3 token:(id)arg4 hwVersion:(id)arg5 swVersion:(id)arg6 swBuild:(id)arg7;	// IMP=0x0010000000070286
- (id)aps_prettyDescription;	// IMP=0x001000000006ff8d
- (void)dealloc;	// IMP=0x001000000006ff44
- (id)initWithEnvironment:(id)arg1 guid:(id)arg2;	// IMP=0x001000000006fe67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

