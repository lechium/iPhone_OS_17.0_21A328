//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessage, HMFTimer, NSString, NSUUID;
@protocol HMDMessageHandlerQueuedMessageDelegate;

__attribute__((visibility("hidden")))
@interface HMDMessageHandlerQueuedMessage : HMFObject
{
    id <HMDMessageHandlerQueuedMessageDelegate> _delegate;	// 8 = 0x8
    HMFMessage *_message;	// 16 = 0x10
    HMFTimer *_timer;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000070ccfb
- (void).cxx_destruct;	// IMP=0x000000000070ccbb
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) HMFMessage *message; // @synthesize message=_message;
@property __weak id <HMDMessageHandlerQueuedMessageDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000070cbe8
- (id)attributeDescriptions;	// IMP=0x000000000070caca
- (id)privateDescription;	// IMP=0x000000000070cab8
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000070c9ab
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSUUID *identifier;
- (void)suspendTimer;	// IMP=0x000000000070c8ce
- (void)resumeTimer;	// IMP=0x000000000070c891
- (id)initWithMessage:(id)arg1 timeInterval:(double)arg2;	// IMP=0x000000000070c7be
- (id)initWithMessage:(id)arg1;	// IMP=0x000000000070c7a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

