//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNAtomicUtils : NSObject
{
}

+ (_Bool)atomicAdd:(long long)arg1 notSurpassing:(long long)arg2 atAddress:(void *)arg3;	// IMP=0x008000000004f387
+ (long long)atomicUpdateValue:(CDUnknownBlockType)arg1 atAddress:(void *)arg2;	// IMP=0x008000000004f2cd
- (id)init;	// IMP=0x000000000004f3e6

@end
