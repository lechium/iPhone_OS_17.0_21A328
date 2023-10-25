//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADUserNotificationAnnouncementSpeakingStatePublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_currentlyAnnouncingNotificationIdentifiers;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

+ (id)_notificationIdentifiersForObject:(id)arg1;	// IMP=0x002000000009ef59
+ (_Bool)supportsPublishingArrivalForAceObject:(id)arg1;	// IMP=0x001000000009eea9
+ (id)sharedPublisher;	// IMP=0x001000000009ee79
- (void).cxx_destruct;	// IMP=0x002000000009ea30
- (void)_invalidateConnection;	// IMP=0x001000000009e9eb
- (void)connectionInvalidated;	// IMP=0x001000000009e925
- (void)connectionInterrupted;	// IMP=0x001000000009e85f
- (id)connectionProxy;	// IMP=0x001000000009e842
- (void)beginObserving;	// IMP=0x001000000009e7bd
- (void)_publishFinishedAndRemoveAllObjectsForReason:(id)arg1;	// IMP=0x001000000009e6c8
- (void)_publishCancelAndRemoveAllObjectsForReason:(id)arg1;	// IMP=0x001000000009e5d3
- (_Bool)_publishStateChanged:(long long)arg1 forIdentifiers:(id)arg2;	// IMP=0x001000000009e3c2
- (void)_publishObjectHasArrived:(id)arg1;	// IMP=0x001000000009e18f
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000009e05f
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000009e014
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000009dfc9
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x001000000009df7e
- (void)publishObjectHasArrived:(id)arg1;	// IMP=0x001000000009def1
- (void)dealloc;	// IMP=0x001000000009de97
- (id)_initWithQueue:(id)arg1;	// IMP=0x001000000009dd93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
