//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface PCDispatchTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _fireTime;	// 24 = 0x18
    NSDate *_fireDate;	// 32 = 0x20
    CUTWeakReference *_target;	// 40 = 0x28
    SEL _selector;	// 48 = 0x30
    _Bool _isValid;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001b715
- (void)invalidate;	// IMP=0x000000000001b61c
@property(retain, nonatomic) NSDate *fireDate;
- (void)start;	// IMP=0x000000000001b1aa
- (void)_cleanupTimer;	// IMP=0x000000000001b146
@property(readonly, nonatomic) _Bool isValid;
- (void)_callTarget;	// IMP=0x000000000001af7d
- (void)dealloc;	// IMP=0x000000000001aef2
- (id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4;	// IMP=0x000000000001abaf

@end

