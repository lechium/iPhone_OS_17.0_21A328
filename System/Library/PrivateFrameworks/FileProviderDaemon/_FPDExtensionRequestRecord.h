//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPXPCAutomaticErrorProxy, NSDate, NSObservation, NSProgress;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface _FPDExtensionRequestRecord : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_progressTimer;	// 16 = 0x10
    NSDate *_timeout;	// 24 = 0x18
    SEL _selector;	// 32 = 0x20
    NSProgress *_progress;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSObject<OS_os_log> *_log;	// 56 = 0x38
    CDUnknownBlockType _handler;	// 64 = 0x40
    NSDate *_lastEventDate;	// 72 = 0x48
    NSObservation *_fractionCompletedObservation;	// 80 = 0x50
    FPXPCAutomaticErrorProxy *_proxy;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000955da
@property(readonly) __weak FPXPCAutomaticErrorProxy *proxy; // @synthesize proxy=_proxy;
- (id)description;	// IMP=0x00000000000954a2
- (const char *)_timeoutExpirationState;	// IMP=0x000000000009543b
- (void)_setupProgressTimer;	// IMP=0x000000000009515f
- (void)_setupTimer:(double)arg1;	// IMP=0x0000000000094eee
- (void)_handleTimeout;	// IMP=0x0000000000094d06
- (void)monitorProgress:(id)arg1;	// IMP=0x0000000000094a28
- (void)cancelTimeout;	// IMP=0x00000000000949aa
- (id)initWithSelector:(SEL)arg1 proxy:(id)arg2 timeout:(double)arg3 queue:(id)arg4 log:(id)arg5 timeoutHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000094860

@end

