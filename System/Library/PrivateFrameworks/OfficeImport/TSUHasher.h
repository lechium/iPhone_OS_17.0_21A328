//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUHasher : NSObject
{
    unsigned long long _currentHash;	// 8 = 0x8
}

@property(nonatomic) unsigned long long currentHash; // @synthesize currentHash=_currentHash;
- (unsigned long long)hashValue;	// IMP=0x00000000002b3fce
- (void)addObject:(id)arg1;	// IMP=0x00000000002b3f9a
- (void)addUnsignedInteger:(unsigned long long)arg1;	// IMP=0x00000000002b3f88
- (void)addInteger:(long long)arg1;	// IMP=0x00000000002b3f76
- (void)addBool:(_Bool)arg1;	// IMP=0x00000000002b3f62
- (void)addUnsignedInt:(unsigned int)arg1;	// IMP=0x00000000002b3f4e
- (void)addInt:(int)arg1;	// IMP=0x00000000002b3f39
- (void)p_appendUnsignedInteger:(unsigned long long)arg1;	// IMP=0x00000000002b3ee9
- (id)init;	// IMP=0x00000000002b3ea7

@end

