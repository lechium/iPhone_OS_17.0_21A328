//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableArray : NSMutableArray
{
    int _cd_rc;	// 8 = 0x8
    NSMutableArray *_realArray;	// 16 = 0x10
    NSManagedObject *_source;	// 24 = 0x18
    NSPropertyDescription *_relationship;	// 32 = 0x20
    struct _NSFaultingMutableArrayFlags _flags;	// 40 = 0x28
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x006000000005d1ad
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000005c6c4
+ (id)alloc;	// IMP=0x006000000005c6b8
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x006000000005c6b0
- (Class)classForCoder;	// IMP=0x000000000005d19c
- (id)valueForKeyPath:(id)arg1;	// IMP=0x000000000005d157
- (id)valueForKey:(id)arg1;	// IMP=0x000000000005d112
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005d0c8
- (void)getObjects:(id *)arg1;	// IMP=0x000000000005d083
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000005d039
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005cff4
- (void)removeLastObject;	// IMP=0x000000000005cfbe
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005cf74
- (id)objectEnumerator;	// IMP=0x000000000005cf3e
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cee5
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ce9b
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ce42
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000005cdf8
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cd9f
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005cd55
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000005ccfc
- (void)addObject:(id)arg1;	// IMP=0x000000000005ccb7
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005cc72
- (unsigned long long)count;	// IMP=0x000000000005cc3c
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x000000000005cb9a
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005caf8
- (id)description;	// IMP=0x000000000005ca56
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005ca44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c9aa
@property(readonly, nonatomic) NSPropertyDescription *relationship;
@property(readonly, nonatomic) NSManagedObject *source;
- (void)turnIntoFault;	// IMP=0x000000000005c955
- (void)willRead;	// IMP=0x000000000005c895
@property(readonly, nonatomic, getter=isFault) _Bool fault;
- (void)dealloc;	// IMP=0x000000000005c840
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(_Bool)arg3;	// IMP=0x000000000005c7a4
- (_Bool)_isDeallocating;	// IMP=0x000000000005c784
- (_Bool)_tryRetain;	// IMP=0x000000000005c747
- (unsigned long long)retainCount;	// IMP=0x000000000005c72f
- (oneway void)release;	// IMP=0x000000000005c6f1
- (id)retain;	// IMP=0x000000000005c6d0

@end

