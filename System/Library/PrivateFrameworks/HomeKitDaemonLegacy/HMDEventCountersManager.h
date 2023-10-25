//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPersistentStore, HMMCountersManager, NSArray, NSMutableArray, NSMutableDictionary, NSObject;
@protocol HMDEventCountersStoring, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEventCountersManager : HMFObject
{
    HMDPersistentStore *_persistentStore;	// 8 = 0x8
    NSMutableDictionary *_counterGroups;	// 16 = 0x10
    NSMutableArray *_saveHooks;	// 24 = 0x18
    double _lastSaveTime;	// 32 = 0x20
    _Bool _pendingSave;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    id <HMDEventCountersStoring> _counterStorage;	// 56 = 0x38
    double _saveInterval;	// 64 = 0x40
    CDUnknownBlockType _timeSourceBlock;	// 72 = 0x48
    HMMCountersManager *_bridgedCountersManager;	// 80 = 0x50
}

+ (id)allowedSpecifierClasses;	// IMP=0x00100000009f6d6f
- (void).cxx_destruct;	// IMP=0x00000000009f6507
@property(readonly, nonatomic) HMMCountersManager *bridgedCountersManager; // @synthesize bridgedCountersManager=_bridgedCountersManager;
@property(readonly, nonatomic) CDUnknownBlockType timeSourceBlock; // @synthesize timeSourceBlock=_timeSourceBlock;
@property(readonly, nonatomic) double saveInterval; // @synthesize saveInterval=_saveInterval;
@property(readonly, nonatomic) id <HMDEventCountersStoring> counterStorage; // @synthesize counterStorage=_counterStorage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)unarchiveEventCounters;	// IMP=0x00000000009f6301
- (void)_save;	// IMP=0x00000000009f6293
- (void)counterChanged;	// IMP=0x00000000009f620e
- (void)forceSave;	// IMP=0x00000000009f61b3
- (id)_fetchAllEventCounters;	// IMP=0x00000000009f60db
- (void)resetAllEventCounters;	// IMP=0x00000000009f5f1e
- (void)resetEventCountersForRequestGroup:(id)arg1;	// IMP=0x00000000009f5ee1
- (void)resetEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x00000000009f5e69
- (id)fetchAllEventCounters;	// IMP=0x00000000009f5dd4
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)arg1;	// IMP=0x00000000009f5d90
- (id)fetchEventCountersForRequestGroup:(id)arg1;	// IMP=0x00000000009f5d40
- (unsigned long long)fetchEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x00000000009f5cc3
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2;	// IMP=0x00000000009f5c4b
- (void)incrementEventCounterForEventName:(id)arg1 requestGroup:(id)arg2 withValue:(unsigned long long)arg3;	// IMP=0x00000000009f5bd1
- (void)addObserver:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3;	// IMP=0x00000000009f5b43
- (void)_removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x00000000009f5aea
- (void)removeCounterGroupsBasedOnPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000009f5915
- (void)removeCounterGroupForSpecifier:(id)arg1;	// IMP=0x00000000009f58a7
- (void)removeCounterGroupForName:(id)arg1;	// IMP=0x00000000009f5854
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000009f5842
- (id)counterGroupsForPredicate:(CDUnknownBlockType)arg1;	// IMP=0x00000000009f571a
- (id)counterGroupForSpecifier:(id)arg1;	// IMP=0x00000000009f5258
- (id)counterGroupForName:(id)arg1;	// IMP=0x00000000009f51f2
@property(readonly, nonatomic) NSArray *saveHooks;
- (void)addSaveHook:(CDUnknownBlockType)arg1;	// IMP=0x00000000009f5103
- (id)initWithBridgedCountersManager:(id)arg1;	// IMP=0x00000000009f50ec
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2 saveInterval:(double)arg3 timeSourceBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000009f4ec2
- (id)initWithEventCountersStorage:(id)arg1 bridgedCountersManager:(id)arg2;	// IMP=0x00000000009f4db4
- (id)init;	// IMP=0x00000000009f4d27

@end
