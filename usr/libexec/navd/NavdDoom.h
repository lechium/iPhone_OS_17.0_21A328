//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsActionCircuit, MapsSuggestionsBlockAction, MapsSuggestionsBlockCondition, MapsSuggestionsEngineRunner, MapsSuggestionsObservers, MapsSuggestionsSimpleTrigger, MapsSuggestionsVisitMonitor, MapsSuggestionsXPCActivityTimer, NSDate, NSDictionary, NSString, NavdDoomStorage;
@protocol MapsSuggestionsFullResourceDepot, NavdDoomAlerter, NavdDoomGuard, NavdDoomRoutesUpdater, OS_dispatch_queue;

@interface NavdDoom : NSObject
{
    MapsSuggestionsEngineRunner *_engineRunner;	// 8 = 0x8
    MapsSuggestionsBlockAction *_updateExitTimesAction;	// 16 = 0x10
    MapsSuggestionsActionCircuit *_updateExitTimeActionCircuit;	// 24 = 0x18
    MapsSuggestionsSimpleTrigger *_exitTimesUpdatedTrigger;	// 32 = 0x20
    MapsSuggestionsBlockCondition *_isWithinWindowCondition;	// 40 = 0x28
    MapsSuggestionsXPCActivityTimer *_xpcTimer;	// 48 = 0x30
    MapsSuggestionsVisitMonitor *_visitMonitor;	// 56 = 0x38
    id <MapsSuggestionsFullResourceDepot> _resourceDepot;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSDate *_currentExitTime;	// 80 = 0x50
    MapsSuggestionsObservers *_observers;	// 88 = 0x58
    id <NavdDoomGuard> _guard;	// 96 = 0x60
    id <NavdDoomAlerter> _alerter;	// 104 = 0x68
    id <NavdDoomRoutesUpdater> _routesUpdater;	// 112 = 0x70
    NSDictionary *_lastEngineRunnerState;	// 120 = 0x78
    NSDictionary *_lastActionCircuitState;	// 128 = 0x80
    NavdDoomStorage *_internalStorage;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000000453b5
@property(copy) NavdDoomStorage *internalStorage; // @synthesize internalStorage=_internalStorage;
- (void)unregisterObserver:(id)arg1;	// IMP=0x0010000000043466
- (void)registerObserver:(id)arg1;	// IMP=0x001000000004333c
- (id)nameForJSON;	// IMP=0x0010000000043322
- (id)objectForJSON;	// IMP=0x00100000000431f3
- (void)engineRunner:(id)arg1 stoppedWithEntries:(id)arg2;	// IMP=0x0010000000040eb2
- (void)engineRunner:(id)arg1 step:(id)arg2 jsonDict:(id)arg3;	// IMP=0x0010000000040376
- (void)engineRunner:(id)arg1 receivedEntries:(id)arg2;	// IMP=0x00100000000401cc
- (void)engineRunner:(id)arg1 startedBecauseOfTrigger:(id)arg2;	// IMP=0x0010000000040022
- (void)actionCircuit:(id)arg1 step:(id)arg2 jsonDict:(id)arg3;	// IMP=0x001000000003fdeb
- (void)actionCircuitDidAct:(id)arg1;	// IMP=0x001000000003fb3a
@property(readonly, nonatomic) NSString *uniqueName;
- (void)triggerFired:(id)arg1;	// IMP=0x001000000003f98a
- (id)initFromResourceDepot:(id)arg1 triggers:(id)arg2 conditions:(id)arg3 storage:(id)arg4 routesUpdater:(id)arg5 guard:(id)arg6 alerter:(id)arg7 visitMonitor:(id)arg8;	// IMP=0x001000000003cf27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
