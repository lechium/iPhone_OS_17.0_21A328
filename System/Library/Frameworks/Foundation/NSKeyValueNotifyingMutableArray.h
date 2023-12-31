//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray
{
    NSMutableArray *_mutableArray;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x006000000068b21e
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x000000000068b898
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000068b7d9
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x000000000068b754
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000068b6a2
- (void)removeLastObject;	// IMP=0x000000000068b5e4
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000068b555
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000068b496
- (void)addObject:(id)arg1;	// IMP=0x000000000068b3d1
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x000000000068b3b4
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000068b397
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000068b37a
- (unsigned long long)count;	// IMP=0x000000000068b35d
- (void)_proxyNonGCFinalize;	// IMP=0x000000000068b2ec
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x000000000068b245

@end

