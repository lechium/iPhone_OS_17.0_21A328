//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WalkPreferences
{
    _Bool _avoidHills;	// 8 = 0x8
    _Bool _avoidBusyRoads;	// 9 = 0x9
    _Bool _avoidStairs;	// 10 = 0xa
}

@property(nonatomic) _Bool avoidStairs; // @synthesize avoidStairs=_avoidStairs;
@property(nonatomic) _Bool avoidBusyRoads; // @synthesize avoidBusyRoads=_avoidBusyRoads;
@property(nonatomic) _Bool avoidHills; // @synthesize avoidHills=_avoidHills;
- (id)_values;	// IMP=0x0010000000c7b0db
- (id)_keys;	// IMP=0x0010000000c7b0ce
- (void)loadValuesFromDefaults;	// IMP=0x0010000000c7afdf
- (_Bool)hasAnyNonStandardPreferences;	// IMP=0x0010000000c7af92
- (id)walkingOptions;	// IMP=0x0010000000c7aede
- (id)initWithCopy:(id)arg1;	// IMP=0x0010000000c7ae40
- (id)initWithDefaults:(id)arg1;	// IMP=0x0010000000c7ae11
- (id)initWithWalkingOptions:(id)arg1 defaults:(id)arg2;	// IMP=0x0010000000c7ad5c
- (id)initWithAvoidHills:(_Bool)arg1 avoidBusyRoads:(_Bool)arg2 avoidStairs:(_Bool)arg3 defaults:(id)arg4;	// IMP=0x0010000000c7acf2

@end
