//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMEMessageDatagramClient, HMFMessageDispatcher, NSNotificationCenter, NSString, NSUUID;
@protocol HMDRemoteEventRouterClientDataSource, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterClient : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _isPrimaryResident;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 20 = 0x14
    _Bool _isConnected;	// 24 = 0x18
    _Bool _isNetworkAvailable;	// 25 = 0x19
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    NSString *_requestMessageName;	// 40 = 0x28
    NSString *_updateMessageName;	// 48 = 0x30
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 56 = 0x38
    NSUUID *_identifier;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    NSNotificationCenter *_notificationCenter;	// 80 = 0x50
    id <HMDRemoteEventRouterClientDataSource> _dataSource;	// 88 = 0x58
    HMEMessageDatagramClient *_eventRouterClient;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x0010000000207915
+ (id)routerClientWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 logCategory:(const char *)arg4;	// IMP=0x001000000020785b
+ (id)routerClientWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 retryIntervalProvider:(id)arg4 logCategory:(const char *)arg5;	// IMP=0x0010000000207772
- (void).cxx_destruct;	// IMP=0x0000000000206502
@property(readonly) HMEMessageDatagramClient *eventRouterClient; // @synthesize eventRouterClient=_eventRouterClient;
@property(readonly) __weak id <HMDRemoteEventRouterClientDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(nonatomic) _Bool isNetworkAvailable; // @synthesize isNetworkAvailable=_isNetworkAvailable;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, copy) NSString *updateMessageName; // @synthesize updateMessageName=_updateMessageName;
@property(readonly, copy) NSString *requestMessageName; // @synthesize requestMessageName=_requestMessageName;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
- (id)dumpStateDescription;	// IMP=0x0000000000206343
- (void)didChangeFetchAvailableCondition:(_Bool)arg1;	// IMP=0x00000000002062c9
- (void)didChangeHasForegroundClient:(_Bool)arg1;	// IMP=0x000000000020624f
- (void)networkAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000002061d5
- (id)eventRouter;	// IMP=0x00000000002061c3
- (void)configureIsPrimaryResident:(_Bool)arg1 networkAvailable:(_Bool)arg2 additionalPolicies:(id)arg3;	// IMP=0x0000000000206084
- (CDUnknownBlockType)responseHandlerForMessageIdentifier:(id)arg1 serverIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000205f6e
- (void)sendMessageWithPayloadMessage:(id)arg1 messageType:(long long)arg2 destination:(id)arg3 serverIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000205c52
- (void)sendMessageWithPayloadMessage:(id)arg1 client:(id)arg2 messageType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000205a93
- (void)clientDidDisconnect:(id)arg1;	// IMP=0x000000000020591b
- (void)clientDidConnect:(id)arg1 serverIdentifier:(id)arg2;	// IMP=0x000000000020577b
- (void)client:(id)arg1 fetchWithFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000205548
- (void)sendDisconnectForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002053ca
- (void)sendKeepAliveForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020524c
- (void)client:(id)arg1 sendConnectWithAddedFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000205086
- (void)client:(id)arg1 sendChangeRegistrationsWithAddedFilters:(id)arg2 removedFilters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000205068
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg1 removedFilters:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000204e2b
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg1 removedFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000204d88
- (_Bool)client:(id)arg1 isConnectionTerminatingError:(id)arg2;	// IMP=0x0000000000204bc6
- (id)client:(id)arg1 forwardingTopicsForTopics:(id)arg2;	// IMP=0x0000000000204b49
- (id)client:(id)arg1 upstreamTopicsForTopic:(id)arg2;	// IMP=0x0000000000204a87
- (_Bool)clientIsEnabled:(id)arg1;	// IMP=0x00000000002049d3
- (id)_underlyingMessageDataFromFragmentMessageData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000204894
- (void)_handleCachedEventMessage:(id)arg1 fromServer:(id)arg2 events:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002047c5
- (void)_handleEventUpdateMessage:(id)arg1 fromServer:(id)arg2 events:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002046f6
- (void)_handleUpdatedEventsRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x0000000000204097
- (void)_handleUpdateMessage:(id)arg1;	// IMP=0x0000000000203b55
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg1;	// IMP=0x00000000002039ac
- (void)_registerForMessages:(id)arg1;	// IMP=0x00000000002037e2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000020376e
@property(readonly, nonatomic) unsigned long long messageTransportRestriction;
@property(readonly) _Bool isPrimaryResident;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 logCategory:(const char *)arg8 logEventSubmitter:(id)arg9 eventRouterClientFactory:(CDUnknownBlockType)arg10;	// IMP=0x0000000000203522
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9 retryIntervalProvider:(id)arg10 logCategory:(const char *)arg11;	// IMP=0x0000000000203324
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9 logCategory:(const char *)arg10;	// IMP=0x0000000000203154
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9;	// IMP=0x0000000000202f12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

