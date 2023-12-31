//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDRelayIDSDualSession, IDSDestination, IDSDevice, NSMutableArray, NSObject, NSString;
@protocol CSDRelayIDSSessionMessengerDelegate, OS_dispatch_queue;

@interface CSDRelayIDSSessionMessenger
{
    NSMutableArray *_sessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001f5d9b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
- (void)session:(id)arg1 receivedData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001f5c26
- (void)session:(id)arg1 receivedInvitationDeclineWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001f5a50
- (void)session:(id)arg1 receivedInvitationCancelWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001f5871
- (void)session:(id)arg1 receivedInvitationAcceptWithData:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00100000001f5703
- (void)session:(id)arg1 endedWithReason:(int)arg2;	// IMP=0x00100000001f5366
- (id)deviceForFromID:(id)arg1;	// IMP=0x00100000001f52e8
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x00100000001f4a22
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 toDestinations:(id)arg3 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg4 waitUntilConnected:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001f44d6
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg3 waitUntilConnected:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001f44b2
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001f448d
- (void)sendMessage:(id)arg1 customizedForRemoteProtocolVersion:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001f4473
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001f445c
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2 toDestinations:(id)arg3;	// IMP=0x00100000001f443e
- (void)sendMessage:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001f4412
- (void)_sendMessage:(id)arg1 andDeclineInvitationIfNecessaryForSession:(id)arg2;	// IMP=0x00100000001f427c
- (void)_sendMessage:(id)arg1 andCancelInvitationIfNecessaryForSession:(id)arg2;	// IMP=0x00100000001f40f6
- (void)sendMessage:(id)arg1 andCancelOrDeclineInvitationIfNecessaryForIdentifier:(id)arg2;	// IMP=0x00100000001f3e4a
- (void)sendMessage:(id)arg1 andAcceptInvitationIfNecessaryForIdentifier:(id)arg2;	// IMP=0x00100000001f38d2
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifiers:(id)arg2 toDestination:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001f317f
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifier:(id)arg2 toDestination:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001f307c
- (_Bool)deviceOrDestinationWithActiveSessionCanReceiveMessagesForCallProvider:(id)arg1 needsGFTRelaySupport:(_Bool)arg2;	// IMP=0x00100000001f2fc2
- (void)sendMessage:(id)arg1 andStartSessionIfNecessaryForIdentifier:(id)arg2 toDevicesSupportingProvider:(id)arg3 requiresGFTRelay:(_Bool)arg4 withTimeout:(long long)arg5;	// IMP=0x00100000001f2815
- (void)_startSession:(id)arg1 withMessage:(id)arg2 identifiers:(id)arg3 timeout:(long long)arg4 declineOnError:(_Bool)arg5;	// IMP=0x00100000001f264b
- (void)endEndingSessions;	// IMP=0x00100000001f2493
- (void)cancelOrDeclineInvitationForIdentifier:(id)arg1;	// IMP=0x00100000001f23a5
- (void)acceptInvitationForIdentifier:(id)arg1;	// IMP=0x00100000001f22b7
- (void)prepareConnectedSessionsToEnd;	// IMP=0x00100000001f20ff
- (void)prepareSessionToEndForIdentifier:(id)arg1;	// IMP=0x00100000001f201e
- (int)sessionProtocolVersionForIdentifier:(id)arg1;	// IMP=0x00100000001f1fda
- (id)sessionForIdentifier:(id)arg1;	// IMP=0x00100000001f1e35
- (id)activeSessionForIdentifier:(id)arg1;	// IMP=0x00100000001f1c7b
@property(readonly, nonatomic) CSDRelayIDSDualSession *currentSession;
@property(readonly, nonatomic) CSDRelayIDSDualSession *waitingSession;
- (void)_destroySession:(id)arg1;	// IMP=0x00100000001f1878
- (id)_createSessionToDestinations:(id)arg1;	// IMP=0x00100000001f16bb
- (id)_createSessionToDevices:(id)arg1;	// IMP=0x00100000001f13d1
- (id)_createSessionToAllDevicesSupportingProvider:(id)arg1 requiresGFTRelaySupport:(_Bool)arg2;	// IMP=0x00100000001f1092
@property(readonly, nonatomic) IDSDevice *deviceWithActiveSession;
@property(readonly, nonatomic) IDSDestination *destinationWithActiveSession;
- (void)performBlockOnTransportAvailability:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001f0dc3
- (void)dealloc;	// IMP=0x00100000001f0d4e
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001f0c5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CSDRelayIDSSessionMessengerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

