//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CRLWidthLimitedQueue : NSObject
{
    int mReaderCount;	// 8 = 0x8
    int mLimit;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *mManagerQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mTargetQueue;	// 24 = 0x18
    struct os_unfair_lock_s mUnfairLock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000526a30
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000005268a4
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000526718
- (id)initWithLimit:(unsigned long long)arg1 name:(id)arg2 targetQueue:(id)arg3;	// IMP=0x00100000005261d1
- (id)initWithLimit:(unsigned long long)arg1 name:(id)arg2;	// IMP=0x00100000005261bc
- (id)initWithLimit:(unsigned long long)arg1;	// IMP=0x00100000005261a5
- (id)init;	// IMP=0x001000000052618c

@end
