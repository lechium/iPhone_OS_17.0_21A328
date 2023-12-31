//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet, NSString, SKPresence, SKPresencePayload;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface COIDSPresence : NSObject
{
    _Bool _presenceAsserted;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    SKPresence *_presenceChannel;	// 24 = 0x18
    NSMutableSet *_devices;	// 32 = 0x20
    NSMapTable *_observers;	// 40 = 0x28
    SKPresencePayload *_presencePayload;	// 48 = 0x30
    unsigned long long _retryAttempts;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_retryTimer;	// 64 = 0x40
}

+ (id)presenceForMesh:(id)arg1;	// IMP=0x0010000000040d1b
- (void).cxx_destruct;	// IMP=0x0000000000043fa2
@property(retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) unsigned long long retryAttempts; // @synthesize retryAttempts=_retryAttempts;
@property(nonatomic) _Bool presenceAsserted; // @synthesize presenceAsserted=_presenceAsserted;
@property(readonly, nonatomic) SKPresencePayload *presencePayload; // @synthesize presencePayload=_presencePayload;
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableSet *devices; // @synthesize devices=_devices;
@property(readonly, retain, nonatomic) SKPresence *presenceChannel; // @synthesize presenceChannel=_presenceChannel;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)presentDevicesChangedForPresence:(id)arg1;	// IMP=0x0000000000043acf
- (void)_usersChangedInHomeNotification:(id)arg1;	// IMP=0x0000000000043a19
- (void)_usersChangedInHome:(id)arg1;	// IMP=0x000000000004308e
- (void)_synchronizePresence:(_Bool)arg1;	// IMP=0x000000000004249c
- (void)_synchronizeInitiate;	// IMP=0x0000000000042302
- (void)_retrainSubscriptionWithRetryCounter:(unsigned long long)arg1;	// IMP=0x0000000000041f5e
- (void)_informObserversAboutDevice:(id)arg1 added:(_Bool)arg2;	// IMP=0x0000000000041d0a
- (void)_informObserver:(id)arg1 aboutRecord:(id)arg2 added:(_Bool)arg3;	// IMP=0x0000000000041b7c
- (id)_recordForDevice:(id)arg1;	// IMP=0x0000000000041a2c
- (void)_start;	// IMP=0x0000000000041793
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004150f
- (void)addObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000041191
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithPresenceProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

