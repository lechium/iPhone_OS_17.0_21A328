//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableArray.h"

__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000007780b
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0080000000077505
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077ab2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007796b
- (unsigned long long)retainCount;	// IMP=0x0000000000077966
- (_Bool)_isDeallocating;	// IMP=0x0000000000077956
- (_Bool)_tryRetain;	// IMP=0x0000000000077945
- (oneway void)release;	// IMP=0x0000000000077940
- (id)retain;	// IMP=0x000000000007793b
- (id)description;	// IMP=0x0000000000077880
- (unsigned long long)hash;	// IMP=0x000000000007787b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077823
- (Class)classForCoder;	// IMP=0x00000000000777e5
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007774a
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000000776a6
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000775d9
- (void)removeLastObject;	// IMP=0x0000000000077588
- (void)addObject:(id)arg1;	// IMP=0x000000000007755c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000077508
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000077465
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000000773c2
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007731f
- (unsigned long long)count;	// IMP=0x00000000000772e4

@end

