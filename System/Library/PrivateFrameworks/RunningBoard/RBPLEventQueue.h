//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RBPLEventQueue : NSObject
{
    NSMutableArray *_eventQueue;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    _Bool _scheduled;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007dce9
- (id)dequeueEvent;	// IMP=0x000000000007dce1
- (void)enqueueEvent:(id)arg1;	// IMP=0x000000000007dcdb
- (void)scheduleWork;	// IMP=0x000000000007dcd5
- (id)init;	// IMP=0x000000000007dc46

@end

