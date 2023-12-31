//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSCondition, NSError, NSMutableArray, NSTimer;

@interface GTFuture_replayer : NSOperation
{
    NSTimer *_timeout;	// 8 = 0x8
    NSCondition *_condition;	// 16 = 0x10
    _Bool _resolved;	// 24 = 0x18
    _Bool _cancelled;	// 25 = 0x19
    id _result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSMutableArray *_notifyList;	// 48 = 0x30
    NSMutableArray *_inflightDependencies;	// 56 = 0x38
    _Bool _started;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
    long long _priority;	// 80 = 0x50
}

+ (_Bool)logPerformance;	// IMP=0x0040000000050e91
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000050e19
+ (id)futureWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0010000000050dc8
+ (id)future;	// IMP=0x0010000000050dae
- (id)_dependencies_NOLOCK;	// IMP=0x0020000000050972
- (_Bool)_waitForDependencies_REQUIRESLOCK;	// IMP=0x00100000000508e6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000050857
- (void)_addDependency_REQUIRESLOCK:(id)arg1;	// IMP=0x0010000000050749
- (void)notifyGroup:(id)arg1;	// IMP=0x0010000000050663
- (void)notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005056d
- (void)resolveWithFuture:(id)arg1;	// IMP=0x0010000000050450
- (void)timeoutAfter:(double)arg1 label:(id)arg2;	// IMP=0x0010000000050374
- (void)setError:(id)arg1;	// IMP=0x001000000005035a
- (void)cancel;	// IMP=0x00100000000502aa
- (id)error;	// IMP=0x0010000000050275
- (void)setResult:(id)arg1;	// IMP=0x001000000005025b
- (void)_setResult:(id)arg1 error:(id)arg2 notify_NOLOCK:(_Bool)arg3;	// IMP=0x001000000004ffea
- (int)intResult;	// IMP=0x001000000004ffa0
- (unsigned int)uint32Result;	// IMP=0x001000000004ff56
- (_Bool)boolResult;	// IMP=0x001000000004ff0e
- (void)requestResult:(CDUnknownBlockType)arg1;	// IMP=0x001000000004fee0
- (void)addResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000004fd83
- (id)result;	// IMP=0x001000000004fd4e
- (void)waitUntilResolved;	// IMP=0x001000000004fac9
- (void)start;	// IMP=0x001000000004fab7
- (id)dependencies;	// IMP=0x001000000004faa5
- (void)addDependency:(id)arg1;	// IMP=0x001000000004fa50
- (void)waitUntilFinished;	// IMP=0x001000000004f9ce
- (void)_start_NOLOCK;	// IMP=0x001000000004f939
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004f8dc
- (CDUnknownBlockType)completionBlock;	// IMP=0x001000000004f878
- (void)setQueuePriority:(long long)arg1;	// IMP=0x001000000004f828
- (long long)queuePriority;	// IMP=0x001000000004f7d9
- (_Bool)isFinished;	// IMP=0x001000000004f776
- (_Bool)isExecuting;	// IMP=0x001000000004f711
- (_Bool)isAsynchronous;	// IMP=0x001000000004f709
- (_Bool)isCancelled;	// IMP=0x001000000004f6ba
- (void)dealloc;	// IMP=0x001000000004f550
- (id)init;	// IMP=0x001000000004f48e

@end

