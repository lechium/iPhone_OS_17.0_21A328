//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, MNLocationProviderCLParameters, NSBundle, NSRunLoop, NSString;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNCoreLocationProvider : NSObject
{
    _Bool _hasQueriedAuthorization;	// 8 = 0x8
    CLLocationManager *_clLocationManager;	// 16 = 0x10
    MNLocationProviderCLParameters *_clParameters;	// 24 = 0x18
    id <MNLocationProviderDelegate> _delegate;	// 32 = 0x20
    int _authorizationStatus;	// 40 = 0x28
    _Bool _coarseModeEnabled;	// 44 = 0x2c
    NSBundle *_effectiveBundle;	// 48 = 0x30
    NSString *_effectiveBundleIdentifier;	// 56 = 0x38
    double _distanceFilter;	// 64 = 0x40
    double _desiredAccuracy;	// 72 = 0x48
    _Bool _matchInfoEnabled;	// 80 = 0x50
    NSRunLoop *_debug_initRunLoop;	// 88 = 0x58
    NSRunLoop *_debug_deinitRunLoop;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000056238
@property(readonly, nonatomic) _Bool coarseModeEnabled; // @synthesize coarseModeEnabled=_coarseModeEnabled;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x000000000005616c
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x00000000000560de
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x0000000000056050
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;	// IMP=0x0000000000055ebe
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;	// IMP=0x0000000000055d2c
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x0000000000055cf6
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0000000000055c56
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0000000000055b1b
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000055a14
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x00000000000559b8
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000000005565b
- (void)stopMonitoringForRegion:(id)arg1;	// IMP=0x0000000000055645
- (void)startMonitoringForRegion:(id)arg1;	// IMP=0x000000000005562f
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) unsigned long long traceVersion;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(readonly, nonatomic) _Bool isAuthorized;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)_resetForNewEffectiveBundle;	// IMP=0x0000000000054fe9
- (void)resetForActiveTileGroupChanged;	// IMP=0x0000000000054f2c
- (void)stopUpdatingVehicleHeading;	// IMP=0x0000000000054eab
- (void)startUpdatingVehicleHeading;	// IMP=0x0000000000054e2a
- (void)stopUpdatingVehicleSpeed;	// IMP=0x0000000000054da9
- (void)startUpdatingVehicleSpeed;	// IMP=0x0000000000054d28
- (void)stopUpdatingHeading;	// IMP=0x0000000000054c7b
- (void)startUpdatingHeading;	// IMP=0x0000000000054ba5
- (void)requestLocation;	// IMP=0x0000000000054af8
- (void)stopUpdatingLocation;	// IMP=0x0000000000054a0c
- (void)startUpdatingLocation;	// IMP=0x0000000000054714
- (void)setMatchInfoEnabled:(_Bool)arg1;	// IMP=0x00000000000546fb
- (void)setDesiredAccuracy:(double)arg1;	// IMP=0x00000000000546e0
- (void)setDistanceFilter:(double)arg1;	// IMP=0x00000000000546ca
- (void)_updateCoarseModeEnabled;	// IMP=0x0000000000054565
- (void)_updateAuthorizationStatus;	// IMP=0x00000000000542a4
- (void)_updateForCLParameters:(id)arg1;	// IMP=0x0000000000054148
@property(readonly, nonatomic) CLLocationManager *_clLocationManager;
- (void)_createCLLocationManager;	// IMP=0x0000000000053b2b
- (void)setCLParameters:(id)arg1;	// IMP=0x0000000000053ad1
- (void)_sharedInit;	// IMP=0x0000000000053a9c
- (void)dealloc;	// IMP=0x00000000000536a1
- (id)initWithEffectiveBundleIdentifier:(id)arg1;	// IMP=0x0000000000053585
- (id)initWithEffectiveBundle:(id)arg1;	// IMP=0x0000000000053476
- (id)init;	// IMP=0x00000000000533a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

