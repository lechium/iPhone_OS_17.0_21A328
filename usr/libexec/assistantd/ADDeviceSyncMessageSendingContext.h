//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFWatchdogTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADDeviceSyncMessageSendingContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_deviceIdentifier;	// 16 = 0x10
    AFWatchdogTimer *_watchdogTimer;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    unsigned long long _numberOfActiveMessageSenders;	// 40 = 0x28
    NSMutableArray *_errors;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000010388f
- (void)_finalizeWithError:(id)arg1;	// IMP=0x0010000000103824
- (void)_finalizeWithResponseMessage:(id)arg1;	// IMP=0x00100000001037b9
- (void)_addError:(id)arg1;	// IMP=0x0010000000103753
- (void)_cancelWatchdogTimer;	// IMP=0x0010000000103715
- (void)_handleWatchdogTimeout;	// IMP=0x00100000001036a0
- (void)_endSendingWithMessageSender:(id)arg1 replyMessage:(id)arg2 error:(id)arg3;	// IMP=0x001000000010359c
- (void)_beginSendingWithMessageSender:(id)arg1;	// IMP=0x0010000000103567
- (void)endSendingWithMessageSender:(id)arg1 replyMessage:(id)arg2 error:(id)arg3;	// IMP=0x0010000000103482
- (void)beginSendingWithMessageSender:(id)arg1;	// IMP=0x00100000001033f5
- (id)initWithQueue:(id)arg1 deviceIdentifier:(id)arg2 timeoutDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000103248
- (void)dealloc;	// IMP=0x00100000001031bc

@end
