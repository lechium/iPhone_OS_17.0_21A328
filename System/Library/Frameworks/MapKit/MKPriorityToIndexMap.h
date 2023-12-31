//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MKPriorityToIndexMap : NSObject
{
    NSMutableArray *_priorities;	// 8 = 0x8
    NSMutableDictionary *_prioritiesToIndexes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b907
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000004b8f1
- (_Bool)contains:(id)arg1;	// IMP=0x000000000004b8ba
- (_Bool)containsPriority:(double)arg1;	// IMP=0x000000000004b84b
- (double)priorityOfIndex:(unsigned long long)arg1;	// IMP=0x000000000004b7ce
- (long long)indexOfPriority:(double)arg1;	// IMP=0x000000000004b73e
- (id)nextPriorityFromPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000004b656
- (void)appendRemainingPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000004b4ca
- (void)insertPriorities:(id)arg1 prioritiesToReAdd:(id)arg2;	// IMP=0x000000000004b288
- (_Bool)addPriorities:(id)arg1;	// IMP=0x000000000004afdc
- (id)initWithPriorities:(id)arg1;	// IMP=0x000000000004af3b
- (id)init;	// IMP=0x000000000004af27

@end

