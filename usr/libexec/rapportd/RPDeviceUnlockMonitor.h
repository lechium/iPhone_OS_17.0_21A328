//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol OS_dispatch_queue;

@interface RPDeviceUnlockMonitor : NSObject
{
    MISSING_TYPE *_keyBagUnlockToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned int _unlockStatus;	// 24 = 0x18
    CDUnknownBlockType _unlockStatusHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000638b3
@property(copy, nonatomic) CDUnknownBlockType unlockStatusHandler; // @synthesize unlockStatusHandler=_unlockStatusHandler;
@property(readonly, nonatomic) unsigned int unlockStatus;
- (void)stop;	// IMP=0x0010000000063889
- (void)dealloc;	// IMP=0x001000000006384b
- (void)start;	// IMP=0x0010000000063845
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000637d0

@end
