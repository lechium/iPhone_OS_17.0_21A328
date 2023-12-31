//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, _COMessagingServiceMeter;

__attribute__((visibility("hidden")))
@interface COMessagingService
{
    NSMutableDictionary *_connectedClients;	// 8 = 0x8
    _COMessagingServiceMeter *_meter;	// 16 = 0x10
    NSMutableDictionary *_requestHandlers;	// 24 = 0x18
    NSMutableDictionary *_outstandingActivateCompletionHandlers;	// 32 = 0x20
}

+ (id)serviceWithDelegate:(id)arg1;	// IMP=0x001000000008ec97
- (void).cxx_destruct;	// IMP=0x00000000000935e0
@property(retain, nonatomic) NSMutableDictionary *outstandingActivateCompletionHandlers; // @synthesize outstandingActivateCompletionHandlers=_outstandingActivateCompletionHandlers;
@property(retain, nonatomic) NSMutableDictionary *requestHandlers; // @synthesize requestHandlers=_requestHandlers;
@property(readonly, nonatomic) _COMessagingServiceMeter *meter; // @synthesize meter=_meter;
@property(retain, nonatomic) NSMutableDictionary *connectedClients; // @synthesize connectedClients=_connectedClients;
- (_Bool)_applicableToCluster:(id)arg1;	// IMP=0x0000000000093511
- (void)_addOnRemoved:(id)arg1;	// IMP=0x000000000009341a
- (void)_addOnAdded:(id)arg1;	// IMP=0x0000000000092fc1
- (void)addOn:(id)arg1 receivedRequest:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000092318
- (void)sessionEndedForSubTopic:(id)arg1;	// IMP=0x0000000000092241
- (void)sessionStartedForSubTopic:(id)arg1 withMember:(id)arg2 produced:(_Bool)arg3;	// IMP=0x0000000000092112
- (void)sendRequestWithPayload:(id)arg1 payloadType:(id)arg2 requestType:(long long)arg3 requestID:(unsigned int)arg4 members:(id)arg5 activityToken:(id)arg6;	// IMP=0x000000000009084a
- (void)_completeActivationForClient:(id)arg1;	// IMP=0x0000000000090110
- (void)activateMessageChannelForTopic:(id)arg1 cluster:(id)arg2 handlers:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000008fceb
- (void)_clientLost:(id)arg1;	// IMP=0x000000000008f1dc
- (void)_configureServiceInterfacesOnConnection:(id)arg1;	// IMP=0x000000000008efb6
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000008ed48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

