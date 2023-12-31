//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PlatformController, RoutePlanningSessionRouteLoadedNotifier, VehicleDisambiguationTask;

@interface AuxiliaryTasksManager : NSObject
{
    NSMutableArray *_auxiliaryTasks;	// 8 = 0x8
    PlatformController *_platformController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0010000000d335af
@property(nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
@property(retain, nonatomic) NSMutableArray *auxiliaryTasks; // @synthesize auxiliaryTasks=_auxiliaryTasks;
- (id)auxilaryTaskForClass:(Class)arg1;	// IMP=0x0010000000d3339c
- (void)addTasks:(id)arg1;	// IMP=0x0010000000d33132
@property(readonly, copy, nonatomic) NSArray *tasks;
- (id)initWithPlatformController:(id)arg1;	// IMP=0x0010000000d3300a
@property(readonly, nonatomic) VehicleDisambiguationTask *vehicleDisambiguationTask;
@property(readonly, nonatomic) RoutePlanningSessionRouteLoadedNotifier *routePlanningSessionRouteLoadedNotifier;

@end

