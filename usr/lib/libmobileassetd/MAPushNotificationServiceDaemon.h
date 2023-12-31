//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAPushServiceConnection, NSMutableArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MAPushNotificationServiceDaemon : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientUpstreamQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serviceQueue;	// 32 = 0x20
    NSMutableArray *_clients;	// 40 = 0x28
    MAPushServiceConnection *_pushServiceConnection;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00100000001396d6
- (void).cxx_destruct;	// IMP=0x000000000013b866
@property(retain) MAPushServiceConnection *pushServiceConnection; // @synthesize pushServiceConnection=_pushServiceConnection;
@property(retain) NSMutableArray *clients; // @synthesize clients=_clients;
@property(retain) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(retain) NSObject<OS_dispatch_queue> *clientUpstreamQueue; // @synthesize clientUpstreamQueue=_clientUpstreamQueue;
@property(retain) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)channelSubscriptionsFailedWithReasons:(id)arg1;	// IMP=0x000000000013b770
- (void)didReceivePushNotification:(id)arg1;	// IMP=0x000000000013aa2b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000013a5a3
- (void)addSyntheticJobWithType:(id)arg1 assetSpecifier:(id)arg2 matchingAssetVersion:(id)arg3 triggerInterval:(long long)arg4;	// IMP=0x000000000013a474
- (void)pushJobsAwaitingTriggerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013a236
- (void)triggerPushNotificationWithPayload:(id)arg1;	// IMP=0x000000000013a1a1
- (void)subscribedChannelIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000139f74
- (void)unsubscribeFromAllChannels;	// IMP=0x0000000000139d94
- (void)unsubscribeToChannelWithIdentifier:(id)arg1;	// IMP=0x0000000000139ce1
- (void)subscribeToChannelWithIdentifier:(id)arg1;	// IMP=0x0000000000139c2e
- (void)subscribeToChannelForCurrentPlatform;	// IMP=0x0000000000139966
- (long long)channelTypeForDevice;	// IMP=0x000000000013987b
- (void)startListeningForConnections;	// IMP=0x0000000000139817
- (id)init;	// IMP=0x000000000013972b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

