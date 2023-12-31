//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MNLocationSimulationData;
@protocol _MNLocationSimulationStateDelegate;

__attribute__((visibility("hidden")))
@interface _MNLocationSimulationState : NSObject
{
    id <_MNLocationSimulationStateDelegate> _delegate;	// 8 = 0x8
    _MNLocationSimulationData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000081a1c
@property(retain, nonatomic) _MNLocationSimulationData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <_MNLocationSimulationStateDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_courseFromCoordinate:(CDStruct_071ac149)arg1 toCoordinate:(CDStruct_071ac149)arg2;	// IMP=0x000000000008197b
- (CDStruct_071ac149)_projectedCoordinateOffRouteFrom:(CDStruct_071ac149)arg1 toCoordinate:(CDStruct_071ac149)arg2 overTimeDelta:(double)arg3 outCourse:(out double *)arg4 outSpeed:(out double *)arg5;	// IMP=0x00000000000816d6
- (id)_locationWithCoordinate:(CDStruct_071ac149)arg1 course:(double)arg2 speed:(double)arg3;	// IMP=0x0000000000081593
- (void)updateWithRouteInfo:(id)arg1;	// IMP=0x0000000000081120
- (id)nextSimulatedLocationWithElapsedTime:(double)arg1;	// IMP=0x00000000000810ca
- (void)onLeaveState;	// IMP=0x00000000000810c4
- (void)onEnterState;	// IMP=0x00000000000810be
@property(readonly, nonatomic) long long type;

@end

