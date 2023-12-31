//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface CSCarKitUtils : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_lock_s _recacheCarCapabilitiesLock;	// 16 = 0x10
    NSDictionary *_carPlayCapabilitiesDict;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000e2ea0
- (void).cxx_destruct;	// IMP=0x00200000000e2dcc
@property(readonly, nonatomic) NSDictionary *carPlayCapabilitiesDict; // @synthesize carPlayCapabilitiesDict=_carPlayCapabilitiesDict;
- (id)_fetchCarCapabilitiesDict;	// IMP=0x00100000000e2dba
- (_Bool)isFlexibleFollowupDisabledForConnectedVehicle;	// IMP=0x00100000000e2db2
- (id)_latencyCorrectionSecondsForHeadUnit;	// IMP=0x00100000000e2daa
- (id)_getAndPotentiallyCacheCarPlayCapabilitiesDict;	// IMP=0x00100000000e2da2
- (_Bool)_isValidLatencyCorrectionValue:(id)arg1;	// IMP=0x00100000000e2d57
- (id)potentiallyAddHWLatencyToOption:(id)arg1 streamHandle:(unsigned long long)arg2 voiceController:(id)arg3;	// IMP=0x00100000000e2d41
- (_Bool)isCarPlayConnected;	// IMP=0x00100000000e2d39
- (void)_recacheCarPlayCapabilitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e2cd6
- (void)invalidateCachedCarPlayCapabilities;	// IMP=0x00100000000e2c36
- (void)fetchCarCapabilitiesInBackgroundWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e2ba9
- (void)handleCarCapabilitiesUpdatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e2aef
- (void)handleHeadUnitConnectedWithAsyncCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e2a35
- (void)_startObservingCarCapabilitiesNotfication:(const struct __CFString *)arg1;	// IMP=0x00100000000e2a01
- (void)dealloc;	// IMP=0x00100000000e2945
- (id)init;	// IMP=0x00100000000e2856

@end

