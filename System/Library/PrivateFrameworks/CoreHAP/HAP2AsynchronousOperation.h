//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class HAP2PropertyLock, HMFActivity, NSError;

__attribute__((visibility("hidden")))
@interface HAP2AsynchronousOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    _Bool _cancelled;	// 10 = 0xa
    NSError *_error;	// 16 = 0x10
    HMFActivity *_activity;	// 24 = 0x18
    HAP2PropertyLock *_propertyLock;	// 32 = 0x20
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000ec59f
- (void).cxx_destruct;	// IMP=0x00000000000ecf7a
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000ecf5a
- (void)finish;	// IMP=0x00000000000ecf4c
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000000ecf3a
- (void)cancel;	// IMP=0x00000000000ecee2
- (void)main;	// IMP=0x00000000000ece3a
- (void)start;	// IMP=0x00000000000ecba2
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)isAsynchronous;	// IMP=0x00000000000eca96
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (id)initWithName:(id)arg1 activity:(id)arg2;	// IMP=0x00000000000ec7f0
- (id)initWithName:(id)arg1;	// IMP=0x00000000000ec7dc
- (id)init;	// IMP=0x00000000000ec793
- (id)initWithName:(id)arg1 optionalActivity:(id)arg2;	// IMP=0x00000000000ec68c

@end

