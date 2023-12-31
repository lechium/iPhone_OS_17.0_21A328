//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CLLocation, CarTableView, MISSING_TYPE, NSIndexPath, NSMapTable, NSMutableDictionary, NSString;

@interface CarBaseSearchViewController : UIViewController
{
    NSMutableDictionary *_quickRouteManagers;	// 8 = 0x8
    NSMapTable *_lastKnownETAResultsForItem;	// 16 = 0x10
    CLLocation *_lastFetchedFromLocation;	// 24 = 0x18
    _Bool _suppressETAUpdates;	// 32 = 0x20
    _Bool _disableETAUpdates;	// 33 = 0x21
    NSMapTable *_modelsByItem;	// 40 = 0x28
    _Bool _userIsActive;	// 48 = 0x30
    _Bool _userIsActiveStateChangeQueued;	// 49 = 0x31
    CarTableView *_tableView;	// 56 = 0x38
    NSIndexPath *_lastSelectedIndexPath;	// 64 = 0x40
    long long _cellStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000536747
@property _Bool userIsActiveStateChangeQueued; // @synthesize userIsActiveStateChangeQueued=_userIsActiveStateChangeQueued;
@property(nonatomic) _Bool userIsActive; // @synthesize userIsActive=_userIsActive;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) CarTableView *tableView; // @synthesize tableView=_tableView;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00100000005365c1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000053656e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000053620d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000536205
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000005360da
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000535f73
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0010000000535f5f
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0010000000535f45
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000535ec4
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000535ead
- (id)modelForItem:(id)arg1;	// IMP=0x0010000000535e90
- (id)modelForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000535e31
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0010000000535e29
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000535e23
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000535e1d
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x0010000000535e17
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000535e11
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x0010000000535e0b
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000535e05
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000535dfd
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x0010000000535deb
- (_Bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;	// IMP=0x0010000000535de3
- (_Bool)quickRouteShouldOnlyUseAutomobile;	// IMP=0x0010000000535ddb
- (unsigned long long)preferredDirectionsTypeForQuickRoute;	// IMP=0x0010000000535dd0
- (void)_applyRouteETA:(id)arg1 toCell:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000535db8
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0010000000535a24
- (id)_quickRouteManagerForIndexPath:(id)arg1;	// IMP=0x00100000005358d7
- (void)_markAllQuickRouteManagersNotVisible;	// IMP=0x0010000000535760
- (unsigned long long)_markVisibleQuickRouteManagersVisible;	// IMP=0x00100000005354a4
- (id)_lastKnownETAForIndexPath:(id)arg1;	// IMP=0x0010000000535445
- (id)_lastKnownETAForItem:(id)arg1;	// IMP=0x00100000005353ac
- (void)updateAllETAs;	// IMP=0x00100000005351aa
- (void)continueQuickRouteETAs;	// IMP=0x00100000005350f1
- (void)prepareQuickRouteETAs;	// IMP=0x0010000000534ecb
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000534d21
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000534cc9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000534c27
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000534bd6
- (void)dealloc;	// IMP=0x0010000000534b61
- (MISSING_TYPE *)initWithDisabledETAUpdates: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000534a79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

