//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableOrderedSet
{
    struct objc_ivar *_ivar;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007f00c9
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007f0086
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007f0052
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007f001e
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007efe4a
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007efd58
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007efd24
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007efcf0
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000007efc9f
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007efc57
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000007efc02
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000007efb8c
- (unsigned long long)count;	// IMP=0x00000000007efb54
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007efaf1
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007efa6d

@end
