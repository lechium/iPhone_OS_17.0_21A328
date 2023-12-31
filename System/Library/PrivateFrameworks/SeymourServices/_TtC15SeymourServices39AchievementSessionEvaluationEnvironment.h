//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC15SeymourServices39AchievementSessionEvaluationEnvironment : NSObject
{
    MISSING_TYPE *achievementDataStore;	// 8 = 0x8
    MISSING_TYPE *energyBurnedAwardingCache;	// 48 = 0x30
    MISSING_TYPE *workoutPlanDataStore;	// 56 = 0x38
    MISSING_TYPE *configurationDataStore;	// 96 = 0x60
    MISSING_TYPE *session;	// 0 = 0x0
    MISSING_TYPE *modalityReference;	// 0 = 0x0
    MISSING_TYPE *planCompletionDate;	// 0 = 0x0
    MISSING_TYPE *numberOfWorkoutsOver5MinutesForModality;	// 0 = 0x0
    MISSING_TYPE *numberOfGuidedWorkoutsOver5MinutesForModality;	// 0 = 0x0
    MISSING_TYPE *sessionDuration;	// 6987584 = 0x6a9f40
    MISSING_TYPE *modalityIdentifier;	// 0 = 0x0
    MISSING_TYPE *isSessionGuided;	// 0 = 0x0
    MISSING_TYPE *numberOfWorkoutsOver5Minutes;	// 0 = 0x0
    MISSING_TYPE *currentWeeklyStreak;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *longestWeeklyStreak;	// 1701273965 = 0x6567616d
    MISSING_TYPE *sessionEnergyBurned;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *bestEnergyBurnedOfWorkoutModality;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *isSessionCompletingProgram;	// 6988032 = 0x6aa100
    MISSING_TYPE *isSessionCompletingPlan;	// 8 = 0x8
    MISSING_TYPE *isSessionParticipatingInPlan;	// 6988032 = 0x6aa100
}

- (void).cxx_destruct;	// IMP=0x00000000004794f0
- (id)init;	// IMP=0x0000000000479490
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000478fc0
@property(nonatomic) _Bool isSessionParticipatingInPlan; // @synthesize isSessionParticipatingInPlan;
@property(nonatomic) _Bool isSessionCompletingPlan; // @synthesize isSessionCompletingPlan;
@property(nonatomic) _Bool isSessionCompletingProgram; // @synthesize isSessionCompletingProgram;
@property(nonatomic) double bestEnergyBurnedOfWorkoutModality; // @synthesize bestEnergyBurnedOfWorkoutModality;
@property(nonatomic) double sessionEnergyBurned; // @synthesize sessionEnergyBurned;
@property(nonatomic) long long longestWeeklyStreak; // @synthesize longestWeeklyStreak;
@property(nonatomic) long long currentWeeklyStreak; // @synthesize currentWeeklyStreak;
@property(nonatomic) long long numberOfWorkoutsOver5Minutes; // @synthesize numberOfWorkoutsOver5Minutes;
@property(nonatomic) _Bool isSessionGuided; // @synthesize isSessionGuided;
@property(nonatomic, copy) NSString *modalityIdentifier;
@property(nonatomic) double sessionDuration; // @synthesize sessionDuration;

@end

