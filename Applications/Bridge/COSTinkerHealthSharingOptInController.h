//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTinkerSharingOptInController.h>

@class COSTinkerHealthSharingSetupDelegate, HKSecondaryDevicePairingAgent, NSObject;
@protocol OS_dispatch_source;

@interface COSTinkerHealthSharingOptInController : HKTinkerSharingOptInController
{
    COSTinkerHealthSharingSetupDelegate *_setupDelegate;	// 8 = 0x8
    _Bool _fetchingShareStatus;	// 16 = 0x10
    HKSecondaryDevicePairingAgent *_healthSyncAgent;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timeoutSource;	// 32 = 0x20
    _Bool _taskDidTimeout;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008e6e7
- (void)_cancelTaskTimeout;	// IMP=0x001000000008e6a2
- (void)_didTimeOutWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008e68c
- (void)_scheduleTaskTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e511
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x001000000008e4bd
- (void)_fetchSharingStatus;	// IMP=0x001000000008dfea
- (_Bool)holdBeforeDisplaying;	// IMP=0x001000000008dfda
- (void)userDidRequestCancel;	// IMP=0x001000000008dfc6
- (void)dealloc;	// IMP=0x001000000008df88
- (id)init;	// IMP=0x001000000008deea

@end
