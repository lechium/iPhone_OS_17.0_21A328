//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet
{
    NSMutableSet *_mutableSet;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x006000000068d14e
- (void)unionSet:(id)arg1;	// IMP=0x000000000068d77c
- (void)setSet:(id)arg1;	// IMP=0x000000000068d6f7
- (void)removeObject:(id)arg1;	// IMP=0x000000000068d615
- (void)removeAllObjects;	// IMP=0x000000000068d582
- (void)minusSet:(id)arg1;	// IMP=0x000000000068d4fd
- (void)intersectSet:(id)arg1;	// IMP=0x000000000068d478
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000068d3c6
- (void)addObject:(id)arg1;	// IMP=0x000000000068d2e4
- (id)objectEnumerator;	// IMP=0x000000000068d2c7
- (id)member:(id)arg1;	// IMP=0x000000000068d2aa
- (unsigned long long)count;	// IMP=0x000000000068d28d
- (void)_proxyNonGCFinalize;	// IMP=0x000000000068d21c
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000068d175

@end
