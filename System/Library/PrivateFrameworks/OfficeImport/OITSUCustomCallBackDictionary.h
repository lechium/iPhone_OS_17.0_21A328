//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface OITSUCustomCallBackDictionary : NSMutableDictionary
{
    struct __CFDictionary *mDictionary;	// 8 = 0x8
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000027e48d
- (id)keyEnumerator;	// IMP=0x000000000027e462
- (id)allKeys;	// IMP=0x000000000027e39f
- (id)objectEnumerator;	// IMP=0x000000000027e374
- (id)allValues;	// IMP=0x000000000027e2b1
- (id)objectForKey:(id)arg1;	// IMP=0x000000000027e299
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000027e22f
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;	// IMP=0x000000000027e216
- (unsigned long long)count;	// IMP=0x000000000027e201
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000027e1ef
- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;	// IMP=0x000000000027e177
- (void)removeAllObjects;	// IMP=0x000000000027e162
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000027e14a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027e0fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027e0e8
- (void)dealloc;	// IMP=0x000000000027e096
- (id)initWithCapacity:(unsigned long long)arg1 keyCallBacks:(const CDStruct_90be15af *)arg2 valueCallBacks:(const CDStruct_70d275a4 *)arg3;	// IMP=0x000000000027e02a
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000027e00a
- (id)initWithCFDictionary:(struct __CFDictionary *)arg1;	// IMP=0x000000000027dfb0
- (id)init;	// IMP=0x000000000027df8e

@end

