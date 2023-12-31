//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject
{
    NSMutableDictionary *_assertionsPerPID;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0060000000786b86
- (void)removeAssertionWithToken:(id)arg1;	// IMP=0x0000000000786d53
- (id)addAssertionWithName:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000000786c41
- (id)init;	// IMP=0x0000000000786bcb

@end

