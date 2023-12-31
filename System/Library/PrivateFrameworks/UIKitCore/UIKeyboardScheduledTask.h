//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, UIKeyboardTaskQueue, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardScheduledTask : NSObject
{
    CDUnknownBlockType _task;	// 8 = 0x8
    double _timeInterval;	// 16 = 0x10
    UIKeyboardTaskQueue *_taskQueue;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    _UIActionWhenIdle *_deferredAction;	// 40 = 0x28
    CDUnknownBlockType _enqueuedTask;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000d8aabf
@property(copy, nonatomic) CDUnknownBlockType enqueuedTask; // @synthesize enqueuedTask=_enqueuedTask;
@property(retain, nonatomic) _UIActionWhenIdle *deferredAction; // @synthesize deferredAction=_deferredAction;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
- (void)resetTimer;	// IMP=0x0000000000d8a823
- (void)invalidate;	// IMP=0x0000000000d8a763
- (_Bool)isValid;	// IMP=0x0000000000d8a6ab
- (void)handleDeferredTimerFiredEvent;	// IMP=0x0000000000d8a42a
- (void)timerFired:(id)arg1;	// IMP=0x0000000000d8a35a
@property(readonly, nonatomic) _Bool repeats;
- (id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3 task:(CDUnknownBlockType)arg4;	// IMP=0x0000000000d8a1fd
- (void)dealloc;	// IMP=0x0000000000d8a1a2

@end

