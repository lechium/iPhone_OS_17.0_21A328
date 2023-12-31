//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSCPPowerAssertion, APSIDSProxyManager, APSTaskListener, NSDate, NSMutableDictionary, NSString, NSTimer, PCSimpleTimer;
@protocol APSUserTracker, OS_dispatch_source, OS_xpc_object;

@interface APSDaemon : NSObject
{
    _Bool _systemReady;	// 8 = 0x8
    _Bool _hasEnabledCouriers;	// 9 = 0x9
    _Bool _systemIsShuttingDown;	// 10 = 0xa
    int _systemReadyToken;	// 12 = 0xc
    int _isConnectedToken;	// 16 = 0x10
    id <APSUserTracker> _userTracker;	// 24 = 0x18
    NSObject<OS_xpc_object> *_connection;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_sigTERMSource;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigUSR1Source;	// 48 = 0x30
    APSIDSProxyManager *_proxyManager;	// 56 = 0x38
    APSTaskListener *_taskListener;	// 64 = 0x40
    NSMutableDictionary *_environmentsToCouriers;	// 72 = 0x48
    PCSimpleTimer *_courierConnectTimer;	// 80 = 0x50
    NSTimer *_inactivityTerminationTimer;	// 88 = 0x58
    APSCPPowerAssertion *_courierConnectTimerPowerAssertion;	// 96 = 0x60
    NSString *_networkGuidanceString;	// 104 = 0x68
    NSDate *_lastClientConnection;	// 112 = 0x70
    double _startupTime;	// 120 = 0x78
}

+ (void)setLaunchdLaunchSemaphoreEnabled:(_Bool)arg1;	// IMP=0x002000000004d6a7
- (void).cxx_destruct;	// IMP=0x0020000000052795
@property(nonatomic) double startupTime; // @synthesize startupTime=_startupTime;
@property(retain, nonatomic) NSDate *lastClientConnection; // @synthesize lastClientConnection=_lastClientConnection;
@property(retain, nonatomic) NSString *networkGuidanceString; // @synthesize networkGuidanceString=_networkGuidanceString;
@property(retain, nonatomic) APSCPPowerAssertion *courierConnectTimerPowerAssertion; // @synthesize courierConnectTimerPowerAssertion=_courierConnectTimerPowerAssertion;
@property(retain, nonatomic) NSTimer *inactivityTerminationTimer; // @synthesize inactivityTerminationTimer=_inactivityTerminationTimer;
@property(retain, nonatomic) PCSimpleTimer *courierConnectTimer; // @synthesize courierConnectTimer=_courierConnectTimer;
@property(retain, nonatomic) NSMutableDictionary *environmentsToCouriers; // @synthesize environmentsToCouriers=_environmentsToCouriers;
@property(retain, nonatomic) APSTaskListener *taskListener; // @synthesize taskListener=_taskListener;
@property(nonatomic) _Bool systemIsShuttingDown; // @synthesize systemIsShuttingDown=_systemIsShuttingDown;
@property(nonatomic) _Bool hasEnabledCouriers; // @synthesize hasEnabledCouriers=_hasEnabledCouriers;
@property(nonatomic) int isConnectedToken; // @synthesize isConnectedToken=_isConnectedToken;
@property(nonatomic) _Bool systemReady; // @synthesize systemReady=_systemReady;
@property(nonatomic) int systemReadyToken; // @synthesize systemReadyToken=_systemReadyToken;
@property(retain, nonatomic) APSIDSProxyManager *proxyManager; // @synthesize proxyManager=_proxyManager;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sigUSR1Source; // @synthesize sigUSR1Source=_sigUSR1Source;
- (void)setSigTERMSource:(id)arg1;	// IMP=0x001000000005262b
- (id)sigTERMSource;	// IMP=0x0010000000052621
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) id <APSUserTracker> userTracker; // @synthesize userTracker=_userTracker;
- (void)finalizeProcessedUsers;	// IMP=0x00100000000525bd
- (void)logoutUser:(id)arg1;	// IMP=0x00100000000523f0
- (void)flushUser:(id)arg1;	// IMP=0x001000000005224b
- (void)loginForUser:(id)arg1;	// IMP=0x0010000000051a83
- (void)setupUser:(id)arg1;	// IMP=0x001000000005185c
- (void)finishLoggingInUserID:(id)arg1;	// IMP=0x00100000000517f3
- (void)loginInUserID:(id)arg1;	// IMP=0x001000000005178a
- (id)_connectionsDebuggingState;	// IMP=0x0010000000051733
- (id)courierForEnvironmentName:(id)arg1;	// IMP=0x001000000005161e
- (id)courierForEnvironment:(id)arg1;	// IMP=0x0010000000051608
- (id)createCourierForEnvironment:(id)arg1;	// IMP=0x0010000000051478
- (void)_removeCourierForEnvironment:(id)arg1;	// IMP=0x0010000000051462
- (void)_inactivityTerminationTimerFired:(id)arg1;	// IMP=0x0010000000051430
- (void)_clearInactivityTerminationTimer;	// IMP=0x001000000005138b
- (void)_startInactivityTerminationTimerIfNecessary;	// IMP=0x0010000000051275
- (void)_performPeriodicSignal;	// IMP=0x0010000000050f13
- (void)_schedulePeriodicSignal;	// IMP=0x0010000000050e21
- (void)proxyManager:(id)arg1 incomingPresenceWithGuid:(id)arg2 token:(id)arg3 hwVersion:(id)arg4 swVersion:(id)arg5 swBuild:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9 environmentName:(id)arg10;	// IMP=0x0010000000050a7a
- (void)proxyManager:(id)arg1 canUseProxyChanged:(_Bool)arg2;	// IMP=0x0010000000050872
- (void)courierHasNoConnections:(id)arg1;	// IMP=0x0010000000050732
- (void)shouldUseInternetDidChange:(id)arg1;	// IMP=0x001000000005065c
- (void)courierConnectionStatusDidChange:(id)arg1;	// IMP=0x0010000000050586
- (void)courierIsIdle:(id)arg1;	// IMP=0x0010000000050491
- (void)courierFilterChanged:(id)arg1;	// IMP=0x001000000005047f
- (void)invalidateDeviceIdentity;	// IMP=0x0010000000050209
- (void)requestCourierConnections;	// IMP=0x001000000004ff25
- (id)environmentForConnectionPortName:(id)arg1 connection:(id)arg2;	// IMP=0x001000000004fdf0
- (id)getConnectionServerForEnvironment:(id)arg1 connectionPortName:(id)arg2 processName:(id)arg3 enableDarkWake:(_Bool)arg4 peerConnection:(id)arg5 isNewConnection:(_Bool *)arg6;	// IMP=0x001000000004f282
- (double)keepAliveIntervalForEnvironment:(id)arg1;	// IMP=0x001000000004f1e9
- (void)receivedClientConnection;	// IMP=0x001000000004f0cd
- (void)_enableAllCouriers;	// IMP=0x001000000004ee1f
- (void)_connectCouriersTimerFired;	// IMP=0x001000000004ed28
- (void)_clearCourierConnectTimerAndPowerAssertion;	// IMP=0x001000000004ecd8
- (void)_updateNetworkGuidance;	// IMP=0x001000000004e6b4
- (void)_receivedShutdownNotification;	// IMP=0x001000000004e4c9
- (_Bool)_systemIsReady;	// IMP=0x001000000004e478
- (void)_updateCourierConnectTimerAndPowerAssertion;	// IMP=0x001000000004e10b
- (void)updateSafeToSendFilterForce:(_Bool)arg1;	// IMP=0x001000000004df3e
- (void)_setupNotifyToken;	// IMP=0x001000000004dd3d
- (void)_setActivePushConnectionState;	// IMP=0x001000000004dd37
- (id)JSONDebugString:(_Bool)arg1;	// IMP=0x001000000004d99d
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x001000000004d720
- (id)prettyStatus;	// IMP=0x001000000004d6ad
- (void)dealloc;	// IMP=0x001000000004d5b7
- (id)init;	// IMP=0x001000000004ce70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

