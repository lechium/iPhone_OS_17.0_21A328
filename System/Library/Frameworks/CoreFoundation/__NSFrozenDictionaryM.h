//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenDictionaryM : NSDictionary
{
    CDStruct_bc24fd1e storage;	// 8 = 0x8
    _Atomic struct __cow_state_t *cow;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000001a43b2
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a4527
- (id)mutableCopy;	// IMP=0x00000000001a4484
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a447f
- (id)copy;	// IMP=0x00000000001a447a
- (void)dealloc;	// IMP=0x00000000001a43b7
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000001a42c0
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a41c2
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a3ff5
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a3e2b
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001a3c34
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x00000000001a3b5b
- (id)objectForKey:(id)arg1;	// IMP=0x00000000001a3a69
- (id)keyEnumerator;	// IMP=0x00000000001a3a33
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001a384c
- (unsigned long long)count;	// IMP=0x00000000001a383b

@end

