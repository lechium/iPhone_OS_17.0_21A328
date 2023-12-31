//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MLRXPCActivityManager : NSObject
{
    _Bool _submissionWasAllowed;	// 8 = 0x8
    _Bool _hasRegistered;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_notifydHandlerQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001bea0
- (void)setCriteriaForXPCActivityIfNeeded:(id)arg1 criteria:(id)arg2;	// IMP=0x001000000001bd77
- (void)registerWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bd64
- (void)unregisterXPCActivityWithIdentifier:(const char *)arg1;	// IMP=0x001000000001bd57
- (_Bool)shouldDeferForXPCActivity:(id)arg1;	// IMP=0x001000000001bd4a
- (void)removeEligibilityChangedHandler:(struct _xpc_activity_eligibility_changed_handler_s *)arg1;	// IMP=0x001000000001bd3d
- (struct _xpc_activity_eligibility_changed_handler_s *)addEligibilityChangedHandlerForActivity:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001bd2d
- (long long)getStateForForXPCActivity:(id)arg1;	// IMP=0x001000000001bd20
- (_Bool)setStateForXPCActivity:(id)arg1 state:(long long)arg2;	// IMP=0x001000000001bc96
- (_Bool)submissionAllowed;	// IMP=0x001000000001bc8c
- (void)registerBMLTActivity;	// IMP=0x001000000001b9af
- (void)registerNotifydEvents;	// IMP=0x001000000001b6fe
- (void)registerIfNeeded;	// IMP=0x001000000001b616
- (id)createXPCActivityTasks;	// IMP=0x001000000001b3cb
- (id)createBMLTActivityTasks;	// IMP=0x001000000001b305
- (void)_registerXPCActivityTasks:(id)arg1;	// IMP=0x001000000001ad86
- (void)runActivityTask:(id)arg1;	// IMP=0x001000000001a7f9
- (double)intervalSinceBMLTActivatedEvent;	// IMP=0x001000000001a75b
- (void)setBMLTActivatedEventDate;	// IMP=0x001000000001a6f0
- (void)handleDeferActivityTask:(id)arg1 withStartTime:(double)arg2;	// IMP=0x001000000001a4cf
- (void)handleCompleteActivityTask:(id)arg1 withError:(id)arg2;	// IMP=0x001000000001a28a
- (id)init;	// IMP=0x001000000001a208

@end

