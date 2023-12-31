//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMFTimer, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeKeySetupWalletLogEvent : HMMLogEvent
{
    _Bool _success;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006972e6
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) _Bool success; // @synthesize success=_success;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000069723e
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (void)timeout;	// IMP=0x000000000069709b
- (void)submitSuccess;	// IMP=0x000000000069701f
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000696f5e

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

