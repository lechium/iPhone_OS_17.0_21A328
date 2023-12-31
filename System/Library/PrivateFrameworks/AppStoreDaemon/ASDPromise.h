//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDPromiseResult, NSMutableArray, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface ASDPromise : NSObject
{
    NSMutableArray *_observers;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSRecursiveLock *_stateLock;	// 24 = 0x18
    ASDPromiseResult *_result;	// 32 = 0x20
}

+ (id)promiseWithError:(id)arg1;	// IMP=0x006000000006302f
+ (id)promiseWithValue:(id)arg1;	// IMP=0x0060000000062fe6
+ (id)onScheduler:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0060000000062f78
- (void).cxx_destruct;	// IMP=0x000000000006444f
@property(readonly) ASDPromiseResult *result; // @synthesize result=_result;
- (void)rejectWithError:(id)arg1;	// IMP=0x0000000000064147
- (void)resolveWithValue:(id)arg1;	// IMP=0x0000000000063ef8
- (CDUnknownBlockType)completionHandlerAdapter;	// IMP=0x0000000000063e7b
- (id)joinWithPromise:(id)arg1;	// IMP=0x0000000000063b57
- (id)flatMapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x00000000000638be
- (id)mapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x0000000000063714
- (void)thenPerform:(CDUnknownBlockType)arg1 orCatchError:(CDUnknownBlockType)arg2 onScheduler:(id)arg3;	// IMP=0x00000000000634c7
- (void)catchError:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x00000000000634a2
- (void)alwaysPerform:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x00000000000633a3
@property(readonly, getter=isResolved) _Bool resolved;
- (id)initOnScheduler:(id)arg1 withExecutor:(CDUnknownBlockType)arg2;	// IMP=0x00000000000631d9
- (id)initWithError:(id)arg1;	// IMP=0x000000000006318c
- (id)initWithValue:(id)arg1;	// IMP=0x000000000006313f
- (id)init;	// IMP=0x0000000000063078

@end

