//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC4Maps28NavigationWaypointController : NSObject
{
    MISSING_TYPE *displayedWaypoints;	// 8 = 0x8
    MISSING_TYPE *service;	// 16 = 0x10
    MISSING_TYPE *observers;	// 24 = 0x18
    MISSING_TYPE *targetLegIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x004000000007f860
- (id)init;	// IMP=0x001000000007f800
- (void)removeWaypointAt:(long long)arg1;	// IMP=0x001000000007ea50
- (void)replaceWaypoint:(id)arg1 with:(id)arg2;	// IMP=0x001000000007e6b0
- (void)insertWaypoint:(id)arg1;	// IMP=0x001000000007e2b0
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000007e000
- (void)registerObserver:(id)arg1;	// IMP=0x001000000007dfe0
- (id)initWithService:(id)arg1;	// IMP=0x001000000007dfa0
@property(nonatomic) unsigned long long targetLegIndex; // @synthesize targetLegIndex;
@property(nonatomic, copy) NSArray *displayedWaypoints;

@end

