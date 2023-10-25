//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ACHVisibilityEnvironment : NSObject
{
    _Bool _isStandalonePhoneFitnessMode;	// 8 = 0x8
    _Bool _prerequisiteMet;	// 9 = 0x9
    _Bool _isWheelchairUser;	// 10 = 0xa
    long long _activityMoveMode;	// 16 = 0x10
    unsigned long long _experienceType;	// 24 = 0x18
    long long _earnedInstanceCount;	// 32 = 0x20
}

@property(nonatomic) _Bool isWheelchairUser; // @synthesize isWheelchairUser=_isWheelchairUser;
@property(nonatomic) long long earnedInstanceCount; // @synthesize earnedInstanceCount=_earnedInstanceCount;
@property(nonatomic) _Bool prerequisiteMet; // @synthesize prerequisiteMet=_prerequisiteMet;
@property(nonatomic) _Bool isStandalonePhoneFitnessMode; // @synthesize isStandalonePhoneFitnessMode=_isStandalonePhoneFitnessMode;
@property(nonatomic) unsigned long long experienceType; // @synthesize experienceType=_experienceType;
@property(nonatomic) long long activityMoveMode; // @synthesize activityMoveMode=_activityMoveMode;
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x000000000001cf70

@end
