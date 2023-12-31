//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTXConnection, DTXProxyChannel, NSError, NSString, XCTCapabilities, XCTDSignpostListener;
@protocol OS_dispatch_queue, XCTDAutomationModeInterface, XCTDAutomationServicesProviding, XCTDDiagnosticsProviding, XCTDProcessManagementServicesProviding, XCTDRemoteAutomationSessionDelegate, XCTDScreenRecordingProviding, XCTDScreenshotProviding, XCTDTargetBootstrapSessionProviding;

@interface XCTDRemoteAutomationSession : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _hasEnabledAutomationMode;	// 9 = 0x9
    id <XCTDRemoteAutomationSessionDelegate> _delegate;	// 16 = 0x10
    id <XCTDAutomationModeInterface> _automationModeInterface;	// 24 = 0x18
    id <XCTDScreenshotProviding> _screenshotProvider;	// 32 = 0x20
    id <XCTDScreenRecordingProviding> _screenRecordingProvider;	// 40 = 0x28
    id <XCTDDiagnosticsProviding> _diagnosticsProvider;	// 48 = 0x30
    id <XCTDProcessManagementServicesProviding> _processManagementServices;	// 56 = 0x38
    id <XCTDAutomationServicesProviding> _automationServices;	// 64 = 0x40
    id <XCTDTargetBootstrapSessionProviding> _targetBootstrapSessionProvider;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    DTXProxyChannel *_proxyChannel;	// 88 = 0x58
    DTXConnection *_dtxConnection;	// 96 = 0x60
    unsigned long long _clientProtocolVersion;	// 104 = 0x68
    NSError *_automationServicesError;	// 112 = 0x70
    XCTCapabilities *_remoteInterfaceCapabilities;	// 120 = 0x78
    XCTDSignpostListener *_signpostListener;	// 128 = 0x80
}

+ (_Bool)isOperatingSystemSupportingDelayedAttachmentTransfer;	// IMP=0x0020000000014dc6
+ (id)capabilitiesBuilder;	// IMP=0x000000000001492b
- (void).cxx_destruct;	// IMP=0x001000000001b6eb
@property(readonly) XCTDSignpostListener *signpostListener; // @synthesize signpostListener=_signpostListener;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities; // @synthesize remoteInterfaceCapabilities=_remoteInterfaceCapabilities;
@property(readonly) NSError *automationServicesError; // @synthesize automationServicesError=_automationServicesError;
@property unsigned long long clientProtocolVersion; // @synthesize clientProtocolVersion=_clientProtocolVersion;
@property(readonly) DTXConnection *dtxConnection; // @synthesize dtxConnection=_dtxConnection;
@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property _Bool hasEnabledAutomationMode; // @synthesize hasEnabledAutomationMode=_hasEnabledAutomationMode;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) id <XCTDTargetBootstrapSessionProviding> targetBootstrapSessionProvider; // @synthesize targetBootstrapSessionProvider=_targetBootstrapSessionProvider;
@property(readonly) id <XCTDAutomationServicesProviding> automationServices; // @synthesize automationServices=_automationServices;
@property(readonly) id <XCTDProcessManagementServicesProviding> processManagementServices; // @synthesize processManagementServices=_processManagementServices;
@property(readonly) id <XCTDDiagnosticsProviding> diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(readonly) id <XCTDScreenRecordingProviding> screenRecordingProvider; // @synthesize screenRecordingProvider=_screenRecordingProvider;
@property(readonly) id <XCTDScreenshotProviding> screenshotProvider; // @synthesize screenshotProvider=_screenshotProvider;
@property(readonly) id <XCTDAutomationModeInterface> automationModeInterface; // @synthesize automationModeInterface=_automationModeInterface;
@property __weak id <XCTDRemoteAutomationSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_XCTD_hasHardwareButton:(id)arg1;	// IMP=0x001000000001b49b
- (id)_XCTD_fastExit;	// IMP=0x001000000001b41f
- (id)_XCTD_getFrontmostUsername;	// IMP=0x001000000001b3a3
- (id)_XCTD_getBootSessionUUID;	// IMP=0x001000000001b308
- (id)_sysctlForName:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001b171
- (id)_XCTD_requestElementsPotentiallyInterruptingElement:(id)arg1 targetFrame:(id)arg2 applicationIsForeground:(id)arg3;	// IMP=0x001000000001b0f5
- (id)_XCTD_performWhenMenuOpens:(id)arg1;	// IMP=0x001000000001b079
- (id)_XCTD_notifyWhenEventLoopIsIdleForApplicationWithPID:(id)arg1;	// IMP=0x001000000001affd
- (id)_XCTD_performAccessibilityAction:(id)arg1 onElement:(id)arg2 value:(id)arg3;	// IMP=0x001000000001af81
- (id)_XCTD_unregisterForAXNotificationsForApplicationWithPID:(id)arg1;	// IMP=0x001000000001af05
- (id)_XCTD_registerForAXNotificationsForApplicationWithPID:(id)arg1 timeout:(id)arg2;	// IMP=0x001000000001ae89
- (id)_XCTD_removeObserver:(id)arg1 forAXNotification:(id)arg2;	// IMP=0x001000000001ae0d
- (id)_XCTD_registerForAXNotification:(id)arg1;	// IMP=0x001000000001ad91
- (id)_XCTD_resetAuthorizationStatusForResourceWithBundleIdentifier:(id)arg1 resourceIdentifier:(id)arg2;	// IMP=0x001000000001ad76
- (id)_IDE_convertConnectionToRemoteAutomationSessionForApplicationWithPID:(id)arg1;	// IMP=0x001000000001a89f
- (void)_transferConnectionToProcessWithPID:(int)arg1 endpoint:(id)arg2;	// IMP=0x001000000001a0a4
- (id)_IDE_initiateRemoteAutomationSessionForApplicationWithPID:(id)arg1;	// IMP=0x0010000000019ef4
- (id)_XCTD_requestUnsupportedBundleIdentifiersForAutomationSessions;	// IMP=0x0010000000019e8b
- (void)orientationManagerDidUpdateInterfaceOrientation:(long long)arg1;	// IMP=0x0010000000019d70
- (void)orientationManagerDidUpdateDeviceOrientation:(long long)arg1;	// IMP=0x0010000000019c55
- (void)applicationDidUpdateState:(id)arg1;	// IMP=0x0010000000019918
- (id)_XCTD_injectAssistantRecognitionStrings:(id)arg1;	// IMP=0x0010000000019809
- (id)_XCTD_startSiriUIRequestWithText:(id)arg1;	// IMP=0x00100000000196fa
- (id)_XCTD_requestSiriEnabledStatus;	// IMP=0x0010000000019633
- (id)_XCTD_requestTailspinWithRequest:(id)arg1;	// IMP=0x0010000000019475
- (id)_XCTD_requestSpindumpWithSpecification:(id)arg1;	// IMP=0x00100000000192b7
- (id)_XCTD_stopScreenRecordingWithUUID:(id)arg1;	// IMP=0x00100000000192a5
- (id)_XCTD_startScreenRecordingWithRequest:(id)arg1;	// IMP=0x0010000000019293
- (id)_XCTD_requestScreenshotAttachment:(id)arg1;	// IMP=0x0010000000019281
- (id)_XCTD_requestScreenshot:(id)arg1;	// IMP=0x001000000001926f
- (id)_XCTD_requestBoundsForScreenWithIdentifier:(id)arg1;	// IMP=0x0010000000019134
- (id)_XCTD_requestScaleForScreenWithIdentifier:(id)arg1;	// IMP=0x0010000000018ff0
- (id)_XCTD_requestTraitsForScreenWithIdentifier:(id)arg1;	// IMP=0x0010000000018e57
- (id)_displayWithIdentifier:(long long)arg1;	// IMP=0x0010000000018cee
- (id)_XCTD_requestScreenIdentifiers;	// IMP=0x0010000000018ae9
- (id)_XCTD_requestPressureEventsSupported;	// IMP=0x0010000000018a48
- (id)_XCTD_clearSimulatedLocation;	// IMP=0x0010000000018959
- (id)_XCTD_setSimulatedLocation:(id)arg1;	// IMP=0x0010000000018803
- (id)_XCTD_getSimulatedLocation;	// IMP=0x0010000000018704
- (id)_XCTD_updateAppearanceMode:(id)arg1;	// IMP=0x0010000000018563
- (id)_XCTD_getAppearanceMode;	// IMP=0x001000000001844d
- (id)_XCTD_updateDeviceOrientation:(id)arg1;	// IMP=0x00100000000182ec
- (id)_XCTD_sendString:(id)arg1 keysPerSecond:(id)arg2;	// IMP=0x00100000000180c7
- (id)_XCTD_performHandGesture:(id)arg1;	// IMP=0x001000000001804b
- (id)_XCTD_performDeviceEvent:(id)arg1;	// IMP=0x0010000000017e5b
- (id)_XCTD_synthesizeEvent:(id)arg1 implicitConfirmationInterval:(id)arg2;	// IMP=0x0010000000017c34
- (void)_XCTD_unregisterForSignpostsWithToken:(id)arg1;	// IMP=0x0010000000017bcb
- (id)_XCTD_registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(id)arg3;	// IMP=0x00100000000179e4
- (id)_XCTD_unloadAccessibility;	// IMP=0x00100000000178f3
- (id)_XCTD_loadAccessibilityWithTimeout:(id)arg1;	// IMP=0x001000000001776a
- (id)_XCTD_getInterfaceOrientation;	// IMP=0x0010000000017647
- (id)_XCTD_getDeviceOrientation;	// IMP=0x0010000000017524
- (id)_XCTD_enableFauxCollectionViewCells;	// IMP=0x00100000000174b9
- (id)_XCTD_setLocalizableStringsDataGatheringEnabled:(id)arg1;	// IMP=0x0010000000017446
- (id)_XCTD_requestElementAtPoint:(id)arg1;	// IMP=0x00100000000172dd
- (id)_XCTD_fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3;	// IMP=0x0010000000017192
- (id)_XCTD_setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3;	// IMP=0x0010000000017028
- (id)_XCTD_fetchAttributes:(id)arg1 forElement:(id)arg2;	// IMP=0x0010000000016f17
- (id)_XCTD_runAccessibilityAuditForElement:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x0010000000016e06
- (id)_XCTD_fetchSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3;	// IMP=0x00100000000169cf
- (id)_XCTD_requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3;	// IMP=0x0010000000016809
- (id)_XCTD_performAccessibilityAction:(id)arg1 onElement:(id)arg2 withValue:(id)arg3;	// IMP=0x0010000000016641
- (id)_XCTD_unregisterForAccessibilityNotification:(id)arg1 withRegistrationToken:(id)arg2;	// IMP=0x0010000000016511
- (id)_XCTD_registerForAccessibilityNotification:(id)arg1;	// IMP=0x001000000001600c
- (id)_XCTD_setAXTimeout:(id)arg1;	// IMP=0x0010000000015ea3
- (id)_XCTD_bundleIdentifierForApplicationAtURL:(id)arg1;	// IMP=0x0010000000015e27
- (id)_XCTD_URLForApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000015dab
- (id)_XCTD_setFrontProcess:(id)arg1;	// IMP=0x0010000000015d2f
- (id)_XCTD_openURL:(id)arg1 usingApplication:(id)arg2;	// IMP=0x0010000000015b95
- (id)_XCTD_openDefaultApplicationForURL:(id)arg1;	// IMP=0x0010000000015a24
- (id)_XCTD_terminateApplicationWithBundleID:(id)arg1 pid:(id)arg2;	// IMP=0x0010000000015888
- (id)_XCTD_terminateApplicationWithBundleID:(id)arg1;	// IMP=0x001000000001586f
- (id)_XCTD_launchApplicationWithBundleID:(id)arg1 path:(id)arg2 arguments:(id)arg3 environment:(id)arg4;	// IMP=0x0010000000015698
- (id)_XCTD_launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3;	// IMP=0x001000000001567e
- (id)_XCTD_startMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x00100000000155d7
- (id)_XCTD_startMonitoringApplicationWithBundleID:(id)arg1;	// IMP=0x00100000000155c3
- (id)_XCTD_requestBackgroundAssertionForPID:(id)arg1;	// IMP=0x00100000000153dd
- (id)_XCTD_requestBundleIDForPID:(id)arg1;	// IMP=0x00100000000152d9
- (id)_XCTD_requestProcessSpecifierForPID:(id)arg1;	// IMP=0x00100000000151d5
- (id)_XCTD_enableAutomationMode;	// IMP=0x0010000000014f78
- (id)_XCTD_exchangeCapabilities:(id)arg1;	// IMP=0x0010000000014e3e
- (id)_XCTD_beginSessionWithClientProtocolVersion:(id)arg1;	// IMP=0x0010000000014795
- (_Bool)allowsUITestControl;	// IMP=0x0010000000014751
- (id)orientationManager;	// IMP=0x0010000000014701
- (id)remoteAutomationClient;	// IMP=0x0010000000014554
- (void)invalidate;	// IMP=0x0010000000014282
- (id)initWithConnectedSocket:(int)arg1 diagnosticsProvider:(id)arg2 targetBootstrapSessionProvider:(id)arg3;	// IMP=0x00100000000140e8
- (id)initWithConnectedSocket:(int)arg1 automationModeInterface:(id)arg2 diagnosticsProvider:(id)arg3 screenshotProvider:(id)arg4 screenRecordingProvider:(id)arg5 processManagementServices:(id)arg6 targetBootstrapSessionProvider:(id)arg7 automationServicesFactory:(CDUnknownBlockType)arg8 timeout:(double)arg9;	// IMP=0x0010000000013649
- (void)dealloc;	// IMP=0x0010000000013597
- (id)_XCTD_requestStopScreenRecordingAttachmentWithUUID:(id)arg1;	// IMP=0x0010000000054143
- (id)_XCTD_requestStartScreenRecordingWithRequest:(id)arg1;	// IMP=0x0010000000053945
- (id)_XCTD_requestScreenshotAttachmentWithRequest:(id)arg1;	// IMP=0x00100000000578b0
- (id)_XCTD_requestScreenshotWithRequest:(id)arg1;	// IMP=0x0010000000057459
- (id)_XCT_resetAuthorizationStatusOfProtectedResourceWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000005ec16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

