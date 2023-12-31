//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, GEOLocationShifter, NSArray, NSDate, NSMutableArray, NSString;
@protocol NavdLocationProvider, OS_dispatch_queue;

@interface NavdLocationLeecher : NSObject
{
    id <NavdLocationProvider> _locationProvider;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool _leechingLocations;	// 24 = 0x18
    _Bool _leechingPaused;	// 25 = 0x19
    GEOLocationShifter *_locationShifter;	// 32 = 0x20
    CLLocation *_lastLeechedLocation;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    NSMutableArray *_leechedLocations;	// 56 = 0x38
    NSDate *_lastRecordDate;	// 64 = 0x40
    double _maxLeechingTimeInterval;	// 72 = 0x48
}

+ (id)sharedLeecher;	// IMP=0x002000000002aceb
- (void).cxx_destruct;	// IMP=0x002000000002c77c
- (void)locationProvider:(id)arg1 didChangeCoarseMode:(_Bool)arg2;	// IMP=0x001000000002c5a2
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;	// IMP=0x001000000002c59c
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x001000000002c3d3
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x001000000002c159
- (void)_handleShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 fromClientLocation:(CDStruct_7cf4616f)arg2;	// IMP=0x001000000002bfce
- (void)_handleLeechedLocation:(id)arg1;	// IMP=0x001000000002bcb0
- (void)_notifyObserversAboutPrecision;	// IMP=0x001000000002bb1f
- (void)_notifyObserversAboutError:(id)arg1;	// IMP=0x001000000002b9c5
- (void)_notifyObserversAboutLocation:(id)arg1;	// IMP=0x001000000002b86b
- (void)removeObserver:(id)arg1;	// IMP=0x001000000002b7bf
- (void)addObserver:(id)arg1;	// IMP=0x001000000002b713
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) NSArray *leechedLocations;
- (id)lastLeechedLocation;	// IMP=0x001000000002b578
- (void)_recordLeechedLocation:(id)arg1;	// IMP=0x001000000002b3d7
- (void)_clearLeachedLocations;	// IMP=0x001000000002b3c1
- (void)_pruneLeachedLocations;	// IMP=0x001000000002b22e
- (void)stopLeeching;	// IMP=0x001000000002b149
- (void)resumeLeeching;	// IMP=0x001000000002b07d
- (void)pauseLeeching;	// IMP=0x001000000002afb1
- (void)startLeeching;	// IMP=0x001000000002aecc
- (id)init;	// IMP=0x001000000002ad40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

