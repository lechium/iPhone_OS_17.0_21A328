//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLElevationProfileRoutineAdapter, CLTimer, RTRoutineManager;
@protocol CLRoutineMonitorServiceProtocol;

@interface CLContextManagerElevationProfile
{
    CLElevationProfileRoutineAdapter *_elevationProfileRoutineAdapter;	// 40 = 0x28
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;	// 48 = 0x30
    CLTimer *_scheduleElevationProfile;	// 56 = 0x38
    double _lastPushedTime;	// 64 = 0x40
    _Bool _isVerboseLogging;	// 72 = 0x48
    RTRoutineManager *_routineManager;	// 80 = 0x50
}

@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (double)retrieveLastPushedTime;	// IMP=0x0010000000a5420f
- (void)saveLastPushedTime:(double)arg1;	// IMP=0x0010000000a5403c
- (void)sendElevationsFromEstimates:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a5298c
- (void)fetchLocationsWithStartTime:(double)arg1 andEndTime:(double)arg2 andBatchSize:(unsigned int)arg3 andLocationArray:(id)arg4 andCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000a51fdd
- (void)dealloc;	// IMP=0x0010000000a51f27
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000a51a5a

@end
