//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSOwnedDictionaryProxy : NSDictionary
{
    id _owner;	// 8 = 0x8
}

- (id)objectForKey:(id)arg1;	// IMP=0x000000000082252b
- (id)keyEnumerator;	// IMP=0x000000000082250e
- (unsigned long long)count;	// IMP=0x00000000008224f1
- (void)superRelease;	// IMP=0x000000000082249f
- (oneway void)release;	// IMP=0x000000000082243a
- (id)retain;	// IMP=0x00000000008223d5
- (id)initWithOwner:(id)arg1;	// IMP=0x000000000082236e

@end

