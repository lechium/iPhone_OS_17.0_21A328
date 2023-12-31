//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet
{
    NSManagedObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSMutableOrderedSet *_mutableOrderedSet;	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000025f576
- (Class)classForCoder;	// IMP=0x000000000025f565
- (_Bool)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000025f548
- (id)_orderedObjectsAndKeys;	// IMP=0x000000000025f52b
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;	// IMP=0x000000000025f03d
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000025f019
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000025eff5
- (void)unionSet:(id)arg1;	// IMP=0x000000000025eefe
- (void)minusSet:(id)arg1;	// IMP=0x000000000025ecd4
- (void)intersectSet:(id)arg1;	// IMP=0x000000000025eaaa
- (void)unionOrderedSet:(id)arg1;	// IMP=0x000000000025e9b3
- (void)minusOrderedSet:(id)arg1;	// IMP=0x000000000025e799
- (void)intersectOrderedSet:(id)arg1;	// IMP=0x000000000025e564
- (void)removeObjectsInArray:(id)arg1;	// IMP=0x000000000025e34a
- (void)removeObject:(id)arg1;	// IMP=0x000000000025e31b
- (void)removeAllObjects;	// IMP=0x000000000025e241
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x000000000025e198
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x000000000025e0be
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x000000000025e08f
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000025ddda
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000025ddab
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000025dcf5
- (void)insertObjects:(id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000025dc13
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000025db5a
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;	// IMP=0x000000000025daa1
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x000000000025d9a5
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000025d7d3
- (void)addObject:(id)arg1;	// IMP=0x000000000025d6d2
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000025d5db
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025d529
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000025d3e8
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000025d3cb
- (unsigned long long)count;	// IMP=0x000000000025d3ae
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000025d391
- (id)valueForKey:(id)arg1;	// IMP=0x000000000025d374
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000025d357
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x000000000025d33a
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000025d31d
- (id)description;	// IMP=0x000000000025d300
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d2e3
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;	// IMP=0x000000000025d2c6
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;	// IMP=0x000000000025d2a9
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000025d28c
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d26f
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000025d252
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000025d235
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d218
- (unsigned long long)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000025d1fb
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000025d1de
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000025d1c1
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000025d1a4
- (id)set;	// IMP=0x000000000025d187
- (id)array;	// IMP=0x000000000025d16a
- (id)reversedOrderedSet;	// IMP=0x000000000025d14d
- (id)reverseObjectEnumerator;	// IMP=0x000000000025d130
- (id)objectEnumerator;	// IMP=0x000000000025d113
- (_Bool)isSubsetOfOrderedSet:(id)arg1;	// IMP=0x000000000025d0f6
- (_Bool)isSubsetOfSet:(id)arg1;	// IMP=0x000000000025d0d9
- (_Bool)intersectsSet:(id)arg1;	// IMP=0x000000000025d0bc
- (_Bool)intersectsOrderedSet:(id)arg1;	// IMP=0x000000000025d09f
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000025d082
- (_Bool)isEqualToOrderedSet:(id)arg1;	// IMP=0x000000000025d065
- (id)lastObject;	// IMP=0x000000000025d048
- (id)firstObject;	// IMP=0x000000000025d02b
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000025d00e
- (void)getObjects:(id *)arg1;	// IMP=0x000000000025cfc1
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000025cfa4
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000025cf87
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000025cf6a
- (id)allObjects;	// IMP=0x000000000025ce60
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025ce28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025cdf0
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3;	// IMP=0x000000000025cd57
- (void)dealloc;	// IMP=0x000000000025ccda

@end

