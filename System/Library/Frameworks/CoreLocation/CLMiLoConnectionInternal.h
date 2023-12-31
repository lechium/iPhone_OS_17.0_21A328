//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLMiLoConnection, NSUUID;
@protocol CLMiLoConnectionDelegate, OS_dispatch_queue;

@interface CLMiLoConnectionInternal : NSObject
{
    void *_locationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    id <CLMiLoConnectionDelegate> _delegate;	// 32 = 0x20
    CLMiLoConnection *_sender;	// 40 = 0x28
    NSUUID *_connectedServiceIdentifier;	// 48 = 0x30
}

+ (_Bool)_isKnownNonActionableMessage:(void *)arg1;	// IMP=0x00600000000e2247
- (void)_requestExportDatabaseWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000efb2a
- (void)_purgeAllMiLoDataWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000ef535
- (void)_requestModelLearningWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000eeda0
- (void)_stopUpdatingMicroLocationWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000ee605
- (void)_startUpdatingMicroLocationWithConfiguration:(id)arg1 withRequestIdentifier:(id)arg2;	// IMP=0x00000000000ede4e
- (void)_removeLabels:(id)arg1 withRequestIdentifier:(id)arg2;	// IMP=0x00000000000ed634
- (void)_labelEventsWithStartDate:(id)arg1 endDate:(id)arg2 placeIdentifier:(id)arg3 requestIdentifier:(id)arg4;	// IMP=0x00000000000ecddd
- (void)_labelEventWithRequestIdentifier:(id)arg1 placeIdentifier:(id)arg2 observationIdentifier:(id)arg3;	// IMP=0x00000000000ec5b1
- (void)_requestObservationWithRequestIdentifier:(id)arg1 placeIdentifier:(id)arg2;	// IMP=0x00000000000ebd6f
- (void)_requestMiLoPredictionWithRequestIdentifier:(id)arg1;	// IMP=0x00000000000eb56a
- (void)_disconnectServiceWithIdentifier:(id)arg1;	// IMP=0x00000000000eaa8f
- (void)_connectServiceWithIdentifier:(id)arg1;	// IMP=0x00000000000ea108
- (void)_queryMiLoConnectionStatus;	// IMP=0x00000000000e98df
- (void)_queryMyServices;	// IMP=0x00000000000e92c0
- (void)_deleteServiceWithIdentifier:(id)arg1;	// IMP=0x00000000000e8cc5
- (void)_createServiceWithServiceType:(unsigned long long)arg1 locationTypes:(id)arg2;	// IMP=0x00000000000e85c5
- (void)_handleGenericEvent:(id)arg1;	// IMP=0x00000000000e80e4
- (void)_handleMiLoConnectionStatusEvent:(id)arg1;	// IMP=0x00000000000e7c63
- (void)_handleDebugResponseEvent:(id)arg1;	// IMP=0x00000000000e7942
- (void)_handlePredictionUpdateEvent:(id)arg1;	// IMP=0x00000000000e73b4
- (void)_handleDaemonEvent:(id)arg1;	// IMP=0x00000000000e473f
- (void)_notifyClientRecordingMetaInfo:(id)arg1;	// IMP=0x00000000000e46b1
- (void)_notifyClientQueryMiLoConnectionStatusDidFailWithError:(id)arg1;	// IMP=0x00000000000e4623
- (void)_notifyClientOfGenericEventResponse:(id)arg1;	// IMP=0x00000000000e4535
- (void)_notifyClientDidExportDatabaseWithResponse:(id)arg1;	// IMP=0x00000000000e441d
- (void)_notifyClientDidCompleteClientRequest:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000e437d
- (void)_notifyClientDisconnectServiceDidFailWithError:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x00000000000e42dd
- (void)_notifyClientQueryServiceDidFailWithError:(id)arg1;	// IMP=0x00000000000e424f
- (void)_notifyClientDidUpdatePrediction:(id)arg1;	// IMP=0x00000000000e41c1
- (void)_notifyClientConnectServiceDidFailWithServiceIdentifier:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000e4121
- (void)_notifyClientDidFindMyServicesWithServiceDescriptors:(id)arg1;	// IMP=0x00000000000e4093
- (void)_notifyClientDidDeleteServiceWithServiceIdentifier:(id)arg1;	// IMP=0x00000000000e4005
- (void)_notifyClientDeleteServiceDidFailWithServiceIdentifier:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000e3f65
- (void)_notifyClientCreateServiceDidFailWithError:(id)arg1;	// IMP=0x00000000000e3ed7
- (void)_notifyClientDidCreateServiceWithServiceIdentifier:(id)arg1;	// IMP=0x00000000000e3e49
- (void)_notifyClientDidUpdateServiceStatus:(id)arg1;	// IMP=0x00000000000e3dbb
- (void)_notifyClientDidUpdateMiLoConnectionStatus:(id)arg1;	// IMP=0x00000000000e3d2d
- (void)_unregisterForMiLoConnectionStatusEvents;	// IMP=0x00000000000e3c25
- (void)_registerForMiLoConnectionStatusEvents;	// IMP=0x00000000000e3811
- (void)_unregisterForMiLoGenericEvents;	// IMP=0x00000000000e3709
- (void)_registerForMiLoGenericEvents;	// IMP=0x00000000000e33f1
- (void)_unregisterForMiLoDebugResponseEvents;	// IMP=0x00000000000e32e9
- (void)_registerForMiLoDebugResponseEvents;	// IMP=0x00000000000e2fd1
- (void)_unsetHandlerForMiLoPredictionEvents;	// IMP=0x00000000000e2ec9
- (void)_setHandlerForMiLoPredictionEvents;	// IMP=0x00000000000e2bb1
- (void)_unregisterForMiloServiceEvents;	// IMP=0x00000000000e29af
- (void)_registerForMiLoServiceEvents;	// IMP=0x00000000000e2540
- (void)_teardown;	// IMP=0x00000000000e23c7
- (void)dealloc;	// IMP=0x00000000000e2384
- (void)_invalidateLocationClient;	// IMP=0x00000000000e2297
- (id)initWithInfo:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x00000000000e199c

@end

