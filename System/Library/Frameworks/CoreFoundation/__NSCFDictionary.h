//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary
{
    unsigned char _cfinfo[4];	// 8 = 0x8
    unsigned int _rc;	// 12 = 0xc
    unsigned int _bits[4];	// 16 = 0x10
    void *_callbacks;	// 32 = 0x20
    id *_values;	// 40 = 0x28
    id *_keys;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000055b6e
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000055952
- (unsigned long long)retainCount;	// IMP=0x0000000000055ef3
- (_Bool)_isDeallocating;	// IMP=0x0000000000055ee3
- (_Bool)_tryRetain;	// IMP=0x0000000000055ed2
- (oneway void)release;	// IMP=0x0000000000055ecd
- (id)retain;	// IMP=0x0000000000055ec8
- (id)description;	// IMP=0x0000000000055df4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055db5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000055d5d
- (void)removeAllObjects;	// IMP=0x0000000000055d07
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000055cb3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000055c08
- (unsigned long long)hash;	// IMP=0x0000000000055c03
- (Class)classForCoder;	// IMP=0x0000000000055bdd
- (void)setObservationInfo:(void *)arg1;	// IMP=0x0000000000055b71
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000055af6
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000055a47
- (id)keyEnumerator;	// IMP=0x00000000000559ed
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000559a5
- (unsigned long long)count;	// IMP=0x000000000005596a

@end

