//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueMutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet
{
    NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007eeb21
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007ee9a7
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007ee915
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007ee876
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007ee7e4
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007ee6c4
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007ee653
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007ee5c6

@end

