//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeBackoffTimerController : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
    long long _timeout;	// 16 = 0x10
    CDUnknownBlockType _updateHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c631
- (void)_startTimerWithTimeout:(long long)arg1;	// IMP=0x000000000001c472
- (void)start;	// IMP=0x000000000001c435
- (id)initWithTimeout:(long long)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c386

@end

