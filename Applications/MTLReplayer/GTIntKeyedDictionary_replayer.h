//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTIntKeyedDictionary_replayer : NSObject
{
    void *_private;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000004f486
- (id)allKeys;	// IMP=0x002000000004ee8a
- (void)removeObjectForKey:(id)arg1;	// IMP=0x001000000004ee56
- (id)objectForKey:(id)arg1;	// IMP=0x001000000004ee22
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000004eddf
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ed98
- (void)removeObjectForIntKey:(long long)arg1;	// IMP=0x001000000004ec26
- (id)objectForIntKey:(long long)arg1;	// IMP=0x001000000004ec07
- (void)setObject:(id)arg1 forIntKey:(long long)arg2;	// IMP=0x001000000004e938
- (void)removeAllObjects;	// IMP=0x001000000004e8c3
- (unsigned long long)count;	// IMP=0x001000000004e8b5
- (void)dealloc;	// IMP=0x001000000004e839
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000004e782
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000004e640
- (id)initWithIntKeyedDictionary:(id)arg1;	// IMP=0x001000000004e5b2
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x001000000004e514
- (id)init;	// IMP=0x001000000004e500

@end

