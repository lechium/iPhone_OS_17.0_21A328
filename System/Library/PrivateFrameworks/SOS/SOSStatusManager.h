//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, NSUUID, NSXPCConnection, TUCall;
@protocol SOSCoreAnalyticsReporting;

__attribute__((visibility("hidden")))
@interface SOSStatusManager : NSObject
{
    _Bool _inSOSFlow;	// 8 = 0x8
    _Bool _inSOSFlowOnCurrentDevice;	// 9 = 0x9
    _Bool _hasActiveSOSCall;	// 10 = 0xa
    NSXPCConnection *_clientConnection;	// 16 = 0x10
    TUCall *_activeSOSCall;	// 24 = 0x18
    NSTimer *_currentDeviceStatusClearTimer;	// 32 = 0x20
    NSTimer *_pairedDeviceStatusClearTimer;	// 40 = 0x28
    long long _mostRecentTriggerSource;	// 48 = 0x30
    id <SOSCoreAnalyticsReporting> _coreAnalyticsReporter;	// 56 = 0x38
    NSUUID *_handoffTriggerUUID;	// 64 = 0x40
    long long _handoffTrigger;	// 72 = 0x48
    NSTimer *_handoffFallbackTimer;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x001000000002d4b3
- (void).cxx_destruct;	// IMP=0x0000000000030b8c
@property(retain, nonatomic) NSTimer *handoffFallbackTimer; // @synthesize handoffFallbackTimer=_handoffFallbackTimer;
@property(nonatomic) long long handoffTrigger; // @synthesize handoffTrigger=_handoffTrigger;
@property(retain, nonatomic) NSUUID *handoffTriggerUUID; // @synthesize handoffTriggerUUID=_handoffTriggerUUID;
@property(retain, nonatomic) id <SOSCoreAnalyticsReporting> coreAnalyticsReporter; // @synthesize coreAnalyticsReporter=_coreAnalyticsReporter;
@property(nonatomic) long long mostRecentTriggerSource; // @synthesize mostRecentTriggerSource=_mostRecentTriggerSource;
@property(retain, nonatomic) NSTimer *pairedDeviceStatusClearTimer; // @synthesize pairedDeviceStatusClearTimer=_pairedDeviceStatusClearTimer;
@property(retain, nonatomic) NSTimer *currentDeviceStatusClearTimer; // @synthesize currentDeviceStatusClearTimer=_currentDeviceStatusClearTimer;
@property(nonatomic) _Bool hasActiveSOSCall; // @synthesize hasActiveSOSCall=_hasActiveSOSCall;
@property(retain, nonatomic) TUCall *activeSOSCall; // @synthesize activeSOSCall=_activeSOSCall;
@property(nonatomic) _Bool inSOSFlowOnCurrentDevice; // @synthesize inSOSFlowOnCurrentDevice=_inSOSFlowOnCurrentDevice;
@property(nonatomic) _Bool inSOSFlow; // @synthesize inSOSFlow=_inSOSFlow;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000030404
- (void)clearHandoffFallbackState;	// IMP=0x00000000000303d2
- (void)checkHandoffFallback;	// IMP=0x00000000000300f7
- (void)triggerHandoffFallback;	// IMP=0x000000000002ff1f
- (void)cancelHandoffFallbackTimer;	// IMP=0x000000000002fe43
- (void)startHandoffFallbackTimer;	// IMP=0x000000000002fba9
- (void)sosTriggerPushedToPairedDeviceWithUUID:(id)arg1 trigger:(long long)arg2;	// IMP=0x000000000002fb0e
- (void)cancelPairedDeviceClearStatusTimer;	// IMP=0x000000000002fa32
- (void)startPairedDeviceClearStatusTimer;	// IMP=0x000000000002f716
- (void)updatePairedDeviceSOSStatus:(id)arg1;	// IMP=0x000000000002f563
- (void)sosTriggeredOnPairedDevice:(id)arg1;	// IMP=0x000000000002f433
- (void)pairedDeviceSOSStatusDidUpdate:(id)arg1 progression:(long long)arg2 shouldHandleThirdParty:(_Bool)arg3;	// IMP=0x000000000002f1e4
- (void)_reportSOSEvent:(id)arg1 callDuration:(long long)arg2;	// IMP=0x000000000002f14f
- (void)endAudioSession;	// IMP=0x000000000002f063
- (void)startAudioSession;	// IMP=0x000000000002ef0e
- (void)flowEndedOnCurrentDevice;	// IMP=0x000000000002ee8c
- (void)flowEndedOnBothDevices;	// IMP=0x000000000002ed2d
- (void)flowEnded;	// IMP=0x000000000002ec66
- (void)flowStartedOnCurrentDevice;	// IMP=0x000000000002ebe1
- (void)flowStartedOnEitherDevice;	// IMP=0x000000000002ea7f
- (void)flowStarted;	// IMP=0x000000000002e9b8
- (void)cancelCurrentDeviceClearStatusTimer;	// IMP=0x000000000002e8dc
- (void)startCurrentDeviceClearStatusTimer;	// IMP=0x000000000002e5f5
- (void)handleLostStatusReporterConnection;	// IMP=0x000000000002e382
- (void)checkSOSStatusOnLaunch;	// IMP=0x000000000002e01d
- (void)handleSOSCallStatusChange:(id)arg1;	// IMP=0x000000000002de3c
- (void)updateSOSFlowState:(long long)arg1;	// IMP=0x000000000002d9b6
- (void)sosTriggerDisabledWithUUID:(id)arg1 trigger:(long long)arg2;	// IMP=0x000000000002d800
- (void)sosTriggeredWithUUID:(id)arg1 trigger:(long long)arg2 source:(long long)arg3;	// IMP=0x000000000002d5f6
- (id)init;	// IMP=0x000000000002d538

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

