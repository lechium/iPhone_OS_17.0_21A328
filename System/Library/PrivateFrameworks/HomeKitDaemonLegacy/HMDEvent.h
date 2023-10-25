//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDEventTrigger, HMDHome, HMFMessageDispatcher, NSObject, NSSet, NSString, NSUUID;
@protocol HMDEventDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEvent : HMFObject
{
    _Bool _endEvent;	// 8 = 0x8
    HMDEventTrigger *_eventTrigger;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMFMessageDispatcher *_msgDispatcher;	// 32 = 0x20
    id <HMDEventDelegate> _delegate;	// 40 = 0x28
    HMDHome *_home;	// 48 = 0x30
    NSUUID *_uuid;	// 56 = 0x38
    NSString *_triggerType;	// 64 = 0x40
    NSString *_logString;	// 72 = 0x48
    unsigned long long _activationType;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000720e76
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0010000000720e6e
+ (id)logCategory;	// IMP=0x0010000000720e3e
- (void).cxx_destruct;	// IMP=0x0000000000720dad
@property(nonatomic) unsigned long long activationType; // @synthesize activationType=_activationType;
@property(readonly, nonatomic, getter=isEndEvent) _Bool endEvent; // @synthesize endEvent=_endEvent;
@property(retain, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HMDEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
- (id)analyticsTriggerEventData;	// IMP=0x0000000000720ba7
- (_Bool)_activate:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007209e6
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000720922
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000720910
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000720843
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000720831
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000072073b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007205f1
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x0000000000720560
@property(readonly) unsigned long long hash;
- (id)createPayload;	// IMP=0x00000000007203cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000720311
- (id)dumpState;	// IMP=0x00000000007201ea
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000007201c0
- (void)_registerForMessages;	// IMP=0x000000000072008b
- (void)invalidate;	// IMP=0x000000000071ffc7
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000071fde7
- (id)emptyModelObject;	// IMP=0x000000000071fddf
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000071fdd7
@property(readonly, nonatomic, getter=isConfigured) _Bool configured;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;	// IMP=0x000000000071fcfd
- (void)_updateTriggerType;	// IMP=0x000000000071fb90
- (void)_setup;	// IMP=0x000000000071fa7d
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x000000000071f975

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end
