//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKDActivityTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_activityIdentifiers;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_adjustCriteriaTimer;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_removePostWakeActivityTimer;	// 32 = 0x20
    _Bool _xpcActivityRegistered;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00400000000075ae
- (void).cxx_destruct;	// IMP=0x0020000000007fcd
- (void)_queue_setOrUpdateActivityAndTimer;	// IMP=0x0010000000007c72
- (void)_queue_endActivity:(id)arg1;	// IMP=0x0010000000007afa
- (void)_queue_beginActivity:(id)arg1;	// IMP=0x0010000000007a1d
- (void)checkin;	// IMP=0x00100000000077ce
- (void)endActivity:(id)arg1;	// IMP=0x0010000000007724
- (void)beginActivity:(id)arg1;	// IMP=0x001000000000767a
- (id)init;	// IMP=0x0010000000007603

@end
