//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RideBookingPlanningSession;

@interface RideSharingSessionDirectionsPlanBuilder : NSObject
{
    RideBookingPlanningSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000006c6eaa
@property(readonly, nonatomic) RideBookingPlanningSession *session; // @synthesize session=_session;
- (void)_addOriginDestinationToPlan:(id)arg1;	// IMP=0x00100000006c6c2d
- (id)buildDirectionsPlan;	// IMP=0x00100000006c688a
- (id)initWithRideBookingPlanningSession:(id)arg1;	// IMP=0x00100000006c681f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

