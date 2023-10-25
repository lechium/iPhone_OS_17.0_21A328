//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFMessage, NSUUID;
@protocol HMFTimerManagerTimerContext;

__attribute__((visibility("hidden")))
@interface HMDHomePrimaryResidentMessagingHandlerPendingMessageContext : NSObject
{
    _Bool _messageInFlight;	// 8 = 0x8
    HMFMessage *_message;	// 16 = 0x10
    id <HMFTimerManagerTimerContext> _messageTimerContext;	// 24 = 0x18
    id <HMFTimerManagerTimerContext> _queueTimerContext;	// 32 = 0x20
    NSUUID *_lastPrimaryResidentDestinationUUID;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000511b4
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isMessageInFlight) _Bool messageInFlight; // @synthesize messageInFlight=_messageInFlight;
@property(retain, nonatomic) NSUUID *lastPrimaryResidentDestinationUUID; // @synthesize lastPrimaryResidentDestinationUUID=_lastPrimaryResidentDestinationUUID;
@property(retain, nonatomic) id <HMFTimerManagerTimerContext> queueTimerContext; // @synthesize queueTimerContext=_queueTimerContext;
@property(readonly, nonatomic) id <HMFTimerManagerTimerContext> messageTimerContext; // @synthesize messageTimerContext=_messageTimerContext;
@property(readonly, nonatomic) HMFMessage *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 messageTimerContext:(id)arg2;	// IMP=0x00000000000510a6

@end
