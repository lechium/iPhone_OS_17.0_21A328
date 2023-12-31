//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableArray
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyArrays;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x000000000068aa70
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000068a9fa
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x000000000068a993
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000068a92c
- (void)removeLastObject;	// IMP=0x000000000068a8ca
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)arg1;	// IMP=0x000000000068a86a
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000068a65e
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000068a54b
- (void)addObject:(id)arg1;	// IMP=0x000000000068a44a
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000068a416
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000068a3e2
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000068a39a
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;	// IMP=0x000000000068a346
- (unsigned long long)count;	// IMP=0x000000000068a2d8
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x000000000068a241
- (void)_proxyNonGCFinalize;	// IMP=0x000000000068a1b4
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000068a0e1

@end

