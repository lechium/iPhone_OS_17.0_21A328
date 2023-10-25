//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteLeg, MNEVChargingStateMonitor, MNNavigationSessionState, MNObserverHashTable, MNParkedVehicleDetector, NSMutableArray, NSString, _MNArrivalUpdaterDetails, _MNArrivalUpdaterState;

__attribute__((visibility("hidden")))
@interface MNArrivalUpdater : NSObject
{
    MNObserverHashTable *_safeDelegate;	// 8 = 0x8
    _MNArrivalUpdaterState *_currentState;	// 16 = 0x10
    _MNArrivalUpdaterDetails *_details;	// 24 = 0x18
    NSMutableArray *_timeoutRegions;	// 32 = 0x20
    MNEVChargingStateMonitor *_evChargingStateMonitor;	// 40 = 0x28
    MNParkedVehicleDetector *_parkedVehicleDetector;	// 48 = 0x30
    unsigned long long _stateCaptureHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f07ff
@property(readonly, nonatomic) MNObserverHashTable *safeDelegate; // @synthesize safeDelegate=_safeDelegate;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x00000000000f0608
- (void)parkedVehicleDetectorDidDetectParkedVehicle:(id)arg1;	// IMP=0x00000000000f0568
- (void)evChargingStateMonitor:(id)arg1 didChangeChargingState:(_Bool)arg2;	// IMP=0x00000000000f04fe
- (void)evChargingStateMonitor:(id)arg1 didReachTargetBatteryCharge:(id)arg2;	// IMP=0x00000000000f04e8
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)arg1;	// IMP=0x00000000000f040f
- (void)arrivalRegionTimerDidFire:(id)arg1;	// IMP=0x00000000000f033c
@property(readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)stopMonitoringForEV;	// IMP=0x00000000000f0209
- (void)startMonitoringForEV;	// IMP=0x00000000000f002b
- (void)changeState:(id)arg1;	// IMP=0x00000000000efdf1
- (void)_updateTimeoutRegions;	// IMP=0x00000000000efaa8
@property(readonly, nonatomic) _Bool isApproachingWaypoint;
@property(readonly, nonatomic) _Bool isInPreArrivalRegion;
- (_Bool)_checkForParkingDetectionRegion;	// IMP=0x00000000000ef7c6
- (void)_updateForParkingDetectionRegion;	// IMP=0x00000000000ef6cd
- (void)forceDepartureForCurrentLeg:(unsigned long long)arg1;	// IMP=0x00000000000ef674
- (void)updateForLocation:(id)arg1;	// IMP=0x00000000000ef4bf
- (void)stop;	// IMP=0x00000000000ef478
- (void)start;	// IMP=0x00000000000ef433
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000ef3a8
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState;
- (void)dealloc;	// IMP=0x00000000000ef088
- (id)init;	// IMP=0x00000000000eee7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
