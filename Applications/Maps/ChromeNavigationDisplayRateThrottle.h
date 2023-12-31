//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, MNLocation, NSString, NSTimer;
@protocol ChromeNavigationDisplayRateThrottleDelegate;

@interface ChromeNavigationDisplayRateThrottle : NSObject
{
    long long _temporaryDisplayRate;	// 8 = 0x8
    long long _lastCalculatedDisplayRate;	// 16 = 0x10
    NSString *_lastCalculatedDisplayRateReason;	// 24 = 0x18
    MNLocation *_latestMovingLocation;	// 32 = 0x20
    NSTimer *_temporaryDisplayRateTimer;	// 40 = 0x28
    NSTimer *_idleTimer;	// 48 = 0x30
    long long _initialBatchedDisplayRate;	// 56 = 0x38
    long long _finalBatchedDisplayRate;	// 64 = 0x40
    unsigned long long _batchingUpdates;	// 72 = 0x48
    _Bool _enabled;	// 80 = 0x50
    _Bool _idle;	// 81 = 0x51
    id <ChromeNavigationDisplayRateThrottleDelegate> _delegate;	// 88 = 0x58
    MKMapView *_mapView;	// 96 = 0x60
    CDStruct_0c99a9cc _settings;	// 104 = 0x68
}

+ (void)_clearAllSettings;	// IMP=0x002000000030ae56
+ (id)_defaultSettings;	// IMP=0x0010000000309771
+ (_Bool)isAvailable;	// IMP=0x001000000030975a
+ (void)initialize;	// IMP=0x00100000003096c7
- (void).cxx_destruct;	// IMP=0x002000000030c34a
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) CDStruct_0c99a9cc settings; // @synthesize settings=_settings;
@property(nonatomic, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <ChromeNavigationDisplayRateThrottleDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_descriptionComponentsForSettings:(CDStruct_0c99a9cc)arg1;	// IMP=0x001000000030b882
@property(readonly, copy) NSString *description;
- (void)_readFromDefaults;	// IMP=0x001000000030b0b3
- (void)clearAllSettings;	// IMP=0x001000000030ae20
- (void)_checkForRecentMovement;	// IMP=0x001000000030acaa
- (_Bool)_isLocationStationary:(id)arg1;	// IMP=0x001000000030ac68
- (void)_cancelWaitForNoMovement;	// IMP=0x001000000030ac0f
- (void)_waitForNoMovement;	// IMP=0x001000000030aabf
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x001000000030aa4b
- (void)_notifyAfterChanges:(CDUnknownBlockType)arg1;	// IMP=0x001000000030a8dd
- (void)_notifyDelegateOfDisplayRate:(long long)arg1;	// IMP=0x001000000030a875
- (void)_rememberNewDisplayRate:(long long)arg1 reason:(id)arg2;	// IMP=0x001000000030a721
- (void)setTemporaryDisplayRate:(long long)arg1 forDuration:(double)arg2;	// IMP=0x001000000030a46e
- (double)_scaleFactorWithValue:(double)arg1 maximumValue:(double)arg2 minimumValue:(double)arg3;	// IMP=0x001000000030a44b
- (long long)calculateThrottledDisplayRate;	// IMP=0x0010000000309c4a
- (void)setSettings:(CDStruct_0c99a9cc)arg1;	// IMP=0x0010000000309beb
- (id)init;	// IMP=0x0010000000309866
- (void)dealloc;	// IMP=0x001000000030977e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

