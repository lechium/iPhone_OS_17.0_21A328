//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CPConversationServerBag <NSObject>
@property(readonly, nonatomic) _Bool fastSyncRecoveryMessageHandlingEnabled;
@property(readonly, nonatomic) NSArray *blockedActivitySessionBundleIdentifiers;
@property(readonly, nonatomic) unsigned long long timeBetweenMacOSSharePlayNotificationsSeconds;
@property(readonly, nonatomic) unsigned long long unreliableMessengerSeqNumBufferSize;
@property(readonly, nonatomic) unsigned long long unreliableMessengerChannelStreamRetryIntervalMillis;
@property(readonly, nonatomic) unsigned long long unreliableMessengerChannelStreamMaxTries;
@property(readonly, nonatomic) unsigned long long unreliableMessengerChannelStreamMaxQueueSize;
@property(readonly, nonatomic) unsigned long long unreliableMessengerEgressMessagePayloadMaxSizeBytes;
@property(readonly, nonatomic) unsigned long long unreliableMessengerEstablishChannelRetryIntervalMillis;
@property(readonly, nonatomic) unsigned long long unreliableMessengerEstablishChannelMaxAttempts;
@property(readonly, nonatomic) unsigned long long qrPluginRpcStreamRetryIntervalMillis;
@property(readonly, nonatomic) unsigned long long qrPluginMaxRpcStreamAttempts;
@property(readonly, nonatomic) unsigned long long qrPluginConnectionRetryIntervalMillis;
@property(readonly, nonatomic) unsigned long long qrPluginMaxConnectionAttempts;
@property(readonly, nonatomic) unsigned long long backgroundAppPolicyHandleExpiryDays;
@property(readonly, nonatomic) unsigned long long maxActiveParticipantFetchRetries;
@property(readonly, nonatomic) unsigned long long activeParticipantRefreshDelay;
@property(readonly, nonatomic) unsigned long long rebroadcastTimeThreshold;
@property(readonly, nonatomic) unsigned long long AVCBlobRecoveryTimeout;
@property(readonly, nonatomic) unsigned long long AVCBlobRecoveryGracePeriod;
@property(readonly, nonatomic) unsigned long long sessionCleanupTimeout;
@property(readonly, nonatomic) unsigned long long activeParticipantPruningTimeout;
- (NSString *)stableBundleIdentifierForLocalBundleIdentifier:(NSString *)arg1;
@end

