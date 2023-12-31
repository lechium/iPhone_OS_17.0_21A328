//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, MapsAmbientLightMonitor, MapsAstronomicalConditionMonitor, MapsExternalDeviceLightMonitor, NSString;

@interface MapsLightLevelController : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    _Bool _connectedToCarplay;	// 17 = 0x11
    long long _currentLightLevel;	// 24 = 0x18
    MapsAmbientLightMonitor *_ambientLightMonitor;	// 32 = 0x20
    MapsAstronomicalConditionMonitor *_astronomicalConditionMonitor;	// 40 = 0x28
    MapsExternalDeviceLightMonitor *_externalLightMonitor;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x002000000053ccfd
- (void).cxx_destruct;	// IMP=0x002000000053dbab
@property(retain, nonatomic) MapsExternalDeviceLightMonitor *externalLightMonitor; // @synthesize externalLightMonitor=_externalLightMonitor;
@property(retain, nonatomic) MapsAstronomicalConditionMonitor *astronomicalConditionMonitor; // @synthesize astronomicalConditionMonitor=_astronomicalConditionMonitor;
@property(retain, nonatomic) MapsAmbientLightMonitor *ambientLightMonitor; // @synthesize ambientLightMonitor=_ambientLightMonitor;
@property(nonatomic) _Bool connectedToCarplay; // @synthesize connectedToCarplay=_connectedToCarplay;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long currentLightLevel; // @synthesize currentLightLevel=_currentLightLevel;
- (long long)_computedLightLevel;	// IMP=0x001000000053d602
- (void)externalLightMonitorDidUpdate:(id)arg1;	// IMP=0x001000000053d5d1
- (void)astronomicalConditionMonitorDidUpdate:(id)arg1;	// IMP=0x001000000053d3ee
- (void)ambientLightMonitorDidUpdate:(id)arg1;	// IMP=0x001000000053d3bd
- (void)lightMonitorDidUpdate:(id)arg1;	// IMP=0x001000000053d2ee
- (void)didUpdateMitigationNamed:(id)arg1;	// IMP=0x001000000053d211
- (void)reloadForChangedLightLevelTrackers;	// IMP=0x001000000053d1db
- (void)removeObserver:(id)arg1;	// IMP=0x001000000053d198
- (void)addObserver:(id)arg1;	// IMP=0x001000000053d161
@property(readonly, nonatomic) _Bool shouldUseNightMode;
- (void)setCurrentLightLevel:(long long)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x001000000053cf22
- (id)init;	// IMP=0x001000000053cbf3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

