//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLOdometerNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000001ed91a
+ (id)getSilo;	// IMP=0x00100000001ed706
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ed6ed
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001ed690
- (void)unregisterForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x00200000001edba4
- (void)registerForCyclingWorkoutDistanceUpdates:(byref id)arg1;	// IMP=0x00100000001edb76
- (void)updatePhoneWorkoutElevationSubscription:(_Bool)arg1;	// IMP=0x00100000001edb4a
- (void)querySignificantElevationDeltaFromDate:(id)arg1 toDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ed96e
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ed8f2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ed8c5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ed89d
- (void *)adaptee;	// IMP=0x00100000001ed86a
- (void)endService;	// IMP=0x00100000001ed84f
- (void)beginService;	// IMP=0x00100000001ed79f
- (id)init;	// IMP=0x00100000001ed762

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
