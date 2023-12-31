//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSDictionary, NSMutableSet, NSString;

@interface CLAudioAccessoryService : CLIntersiloService
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSDictionary *_latestData;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x0020000000df757a
+ (id)getSilo;	// IMP=0x0010000000df74e1
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000df74c8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000df746b
@property(retain, nonatomic) NSDictionary *latestData; // @synthesize latestData=_latestData;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)fireMotionAlarm;	// IMP=0x0010000000df83b5
- (void)onAudioAccessoryInterfaceDailyUsageCallback:(int)arg1 data:(id)arg2;	// IMP=0x0010000000df7e83
- (void)unregisterForUsageMetricsUpdates:(byref id)arg1;	// IMP=0x0010000000df7cc6
- (void)registerForUsageMetricsUpdates:(byref id)arg1;	// IMP=0x0010000000df7988
- (void)endService;	// IMP=0x0010000000df77b1
- (void)beginService;	// IMP=0x0010000000df75c0
- (id)init;	// IMP=0x0010000000df753d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

