//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry, HMDCloudDataSyncStateFilter, HMDModernTransportDeviceReachabilityObserver, HMDRemoteDeviceMonitor, HMFFuture, HMFPromise, NSArray, NSMutableSet, NSObject, NSString;
@protocol HMDRemoteHomeMessagingManager, HMDSecureRemoteMessageTransportDataSource, HMDUserDeviceCapabilitiesRequestManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSecureRemoteMessageTransport : HMFMessageTransport
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _responseHandlerLock;	// 16 = 0x10
    NSMutableSet *_secureRemoteSessions;	// 24 = 0x18
    NSArray *_transports;	// 32 = 0x20
    HMDRemoteDeviceMonitor *_deviceMonitor;	// 40 = 0x28
    HMFFuture *_startFuture;	// 48 = 0x30
    HMDModernTransportDeviceReachabilityObserver *_modernReachabilityObserver;	// 56 = 0x38
    id <HMDSecureRemoteMessageTransportDataSource> _dataSource;	// 64 = 0x40
    HMDAccountRegistry *_accountRegistry;	// 72 = 0x48
    HMFPromise *_startPromise;	// 80 = 0x50
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;	// 88 = 0x58
    id <HMDUserDeviceCapabilitiesRequestManager> _userDeviceCapabilitiesRequestManager;	// 96 = 0x60
    id <HMDRemoteHomeMessagingManager> _homeMessagingManager;	// 104 = 0x68
}

+ (id)logCategory;	// IMP=0x00100000008bbd19
+ (id)shortDescription;	// IMP=0x00100000008bbd07
+ (id)defaultTransport;	// IMP=0x00100000008bbca4
- (void).cxx_destruct;	// IMP=0x00000000008b89a1
@property(readonly, nonatomic) id <HMDRemoteHomeMessagingManager> homeMessagingManager; // @synthesize homeMessagingManager=_homeMessagingManager;
@property(retain) id <HMDUserDeviceCapabilitiesRequestManager> userDeviceCapabilitiesRequestManager; // @synthesize userDeviceCapabilitiesRequestManager=_userDeviceCapabilitiesRequestManager;
@property(retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(readonly, nonatomic) HMFPromise *startPromise; // @synthesize startPromise=_startPromise;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) id <HMDSecureRemoteMessageTransportDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDModernTransportDeviceReachabilityObserver *modernReachabilityObserver; // @synthesize modernReachabilityObserver=_modernReachabilityObserver;
@property(readonly, nonatomic) HMFFuture *startFuture; // @synthesize startFuture=_startFuture;
@property(readonly) HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly, copy) NSArray *transports; // @synthesize transports=_transports;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000000008b87b4
- (id)dumpState;	// IMP=0x00000000008b8588
- (void)secureRemoteSession:(id)arg1 receivedRequestToSendMessage:(id)arg2;	// IMP=0x00000000008b8571
- (void)secureRemoteSession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00000000008b84b3
- (void)_handleSecureMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;	// IMP=0x00000000008b8162
- (id)_openSecureSessionToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008b7eff
- (void)openSecureSessionToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008b7e41
- (void)_sendSecureMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008b7a31
- (id)_secureRemoteSessionForDevice:(id)arg1;	// IMP=0x00000000008b7984
- (void)_sendPingToDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000008b783e
- (void)_pingDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008b7713
- (void)pingDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008b7655
- (void)_handlePingMessage:(id)arg1;	// IMP=0x00000000008b747a
- (void)_updateDeviceInformationFromMessage:(id)arg1;	// IMP=0x00000000008b70eb
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000008b6bef
- (void)electDeviceForHH1User:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000008b68a0
- (_Bool)_handleReceivedMessage:(id)arg1 transport:(id)arg2;	// IMP=0x00000000008b66d3
- (id)_preferredTransportForMessage:(id)arg1;	// IMP=0x00000000008b637d
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008b5ce1
- (void)registerHomeMessageDestinationHandler:(id)arg1;	// IMP=0x00000000008b5c78
- (void)_reset;	// IMP=0x00000000008b5a38
- (void)reset;	// IMP=0x00000000008b59e6
- (id)start;	// IMP=0x00000000008b5982
- (void)configureWithUserDeviceCapabilitiesRequestManager:(id)arg1 deviceResidencyProvider:(id)arg2;	// IMP=0x00000000008b578d
- (void)configureWithCloudDataSyncStateFilter:(id)arg1 homeMembershipVerifier:(id)arg2;	// IMP=0x00000000008b561f
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000008b5507
- (id)shortDescription;	// IMP=0x00000000008b54ed
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000008b5086

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

