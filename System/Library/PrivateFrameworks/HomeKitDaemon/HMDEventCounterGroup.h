//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol HMDEventCounterContext;

__attribute__((visibility("hidden")))
@interface HMDEventCounterGroup : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDEventCounterContext> _context;	// 16 = 0x10
    NSMutableDictionary *_mutableEventCounters;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000251726
@property(readonly, nonatomic) NSMutableDictionary *mutableEventCounters; // @synthesize mutableEventCounters=_mutableEventCounters;
@property(readonly, nonatomic) __weak id <HMDEventCounterContext> context; // @synthesize context=_context;
- (void)forceSave;	// IMP=0x00000000002516bf
- (void)resetEventCounters;	// IMP=0x00000000002514b9
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000002514a4
- (_Bool)_resetEventCounterForEventName:(id)arg1;	// IMP=0x00000000002511e1
- (void)resetEventCounterForEventName:(id)arg1;	// IMP=0x0000000000251137
- (unsigned long long)maxCounterName:(id *)arg1;	// IMP=0x0000000000250fce
@property(readonly, nonatomic) unsigned long long summedEventCounters;
@property(readonly, nonatomic) NSDictionary *eventCounters;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000250cfd
- (unsigned long long)fetchEventCounterForEventName:(id)arg1;	// IMP=0x0000000000250c53
- (void)incrementEventCounterForEventName:(id)arg1;	// IMP=0x0000000000250c3c
- (void)incrementEventCounterForEventName:(id)arg1 withValue:(unsigned long long)arg2;	// IMP=0x00000000002509fc
- (id)_getOrCreateEventCounterForEventName:(id)arg1;	// IMP=0x0000000000250969
- (void)addObserver:(id)arg1 forEventName:(id)arg2;	// IMP=0x00000000002507bd
- (id)initWithContext:(id)arg1 serializedEventCounters:(id)arg2;	// IMP=0x000000000025066b

@end

