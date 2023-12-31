//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDEventTrigger, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEventTriggerSession : HMFObject
{
    NSUUID *_sessionID;	// 8 = 0x8
    NSString *_logString;	// 16 = 0x10
    HMFMessageDispatcher *_msgDispatcher;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMDEventTrigger *_eventTrigger;	// 40 = 0x28
    NSUUID *_eventTriggerUUID;	// 48 = 0x30
    HMDDevice *_currentDevice;	// 56 = 0x38
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0010000000516c78
+ (id)logCategory;	// IMP=0x0010000000516c48
- (void).cxx_destruct;	// IMP=0x0000000000516bc4
@property(readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) NSUUID *eventTriggerUUID; // @synthesize eventTriggerUUID=_eventTriggerUUID;
@property(nonatomic) __weak HMDEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (_Bool)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000516874
- (_Bool)sendMessage:(id)arg1 payload:(id)arg2 device:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005167a8
- (_Bool)sendResidentMessage:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000516679
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000516643
@property(readonly, copy) NSString *description;
- (id)dumpState;	// IMP=0x00000000005164cf
- (void)_registerForMessages;	// IMP=0x00000000005164c9
- (void)dealloc;	// IMP=0x0000000000516330
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;	// IMP=0x0000000000516104

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

