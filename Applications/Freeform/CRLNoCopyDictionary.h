//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class MISSING_TYPE;

@interface CRLNoCopyDictionary : NSMutableDictionary
{
    struct __CFDictionary *mDictionary;	// 8 = 0x8
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0040000000013c50
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x002000000001435c
- (id)keyEnumerator;	// IMP=0x0010000000014331
- (id)allKeys;	// IMP=0x001000000001426e
- (id)objectEnumerator;	// IMP=0x0010000000014243
- (id)allValues;	// IMP=0x0010000000014180
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000014160
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000000140f6
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;	// IMP=0x00100000000140dd
- (unsigned long long)count;	// IMP=0x00100000000140c8
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000140b6
- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;	// IMP=0x0010000000013e16
- (void)removeAllObjects;	// IMP=0x0010000000013e01
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0010000000013de9
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000013d99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000013d87
- (void)dealloc;	// IMP=0x0010000000013d35
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0010000000013ccf
- (MISSING_TYPE *)initWithCFDictionary: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000013c75
- (id)init;	// IMP=0x0010000000013c61

@end

