//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PDXPCEventStreamsManager : NSObject
{
    unsigned long long _pauseCounter;	// 8 = 0x8
    NSMutableDictionary *_streamToStreamManagerMap;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateQueue;	// 24 = 0x18
}

+ (id)eventStreamManager;	// IMP=0x004000000004ca4b
- (void).cxx_destruct;	// IMP=0x002000000004d34b
- (id)_managerForEventStream:(id)arg1;	// IMP=0x001000000004d2b4
- (void)unregisterObserver:(id)arg1 forEventStream:(id)arg2;	// IMP=0x001000000004d120
- (void)registerObserver:(id)arg1 forEventStream:(id)arg2 withReplyQueue:(id)arg3;	// IMP=0x001000000004cf53
- (void)registerObserver:(id)arg1 forEventStream:(id)arg2;	// IMP=0x001000000004cf3e
- (void)beginEventDelivery;	// IMP=0x001000000004ccf1
- (void)pauseEventDelivery;	// IMP=0x001000000004cbfa
- (void)registerForLaunchEvents;	// IMP=0x001000000004cb3d
- (id)_init;	// IMP=0x001000000004cabe
- (id)init;	// IMP=0x001000000004cab0

@end

