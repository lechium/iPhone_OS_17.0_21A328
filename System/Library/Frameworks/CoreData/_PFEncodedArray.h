//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : NSArray
{
    NSData *_sourceData;	// 8 = 0x8
    int _cd_rc;	// 16 = 0x10
    unsigned int _count;	// 20 = 0x14
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0060000000070028
- (const id *)_values;	// IMP=0x00000000000700c6
- (void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007008f
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000070084
- (unsigned long long)count;	// IMP=0x0000000000070074
- (id)mutableCopy;	// IMP=0x0000000000070039
- (Class)classForCoder;	// IMP=0x0000000000070017
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070005
- (id)copy;	// IMP=0x000000000006fffa
- (id)description;	// IMP=0x000000000006ffe0
- (_Bool)_isDeallocating;	// IMP=0x000000000006ffc0
- (_Bool)_tryRetain;	// IMP=0x000000000006ff83
- (unsigned long long)retainCount;	// IMP=0x000000000006ff6b
- (oneway void)release;	// IMP=0x000000000006ff2d
- (id)retain;	// IMP=0x000000000006ff0c
- (void)dealloc;	// IMP=0x000000000006feb8
- (id)init;	// IMP=0x000000000006fe81

@end
