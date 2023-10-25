//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICTelephonyController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    CoreTelephonyClient *_telephonyClient;	// 32 = 0x20
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x0010000000196320
- (void).cxx_destruct;	// IMP=0x0000000000195adb
- (void)_updatePhoneNumberAllowingDidChangeNotification:(_Bool)arg1;	// IMP=0x0000000000195857
- (id)_telephonySubscriptionContext;	// IMP=0x00000000001955ba
- (id)_telephonyClient;	// IMP=0x0000000000195451
- (void)_handleActiveSubscriptionsDidChange;	// IMP=0x0000000000195400
- (_Bool)_ensureTelephonyHandlesAreReady;	// IMP=0x000000000019538f
- (void)phoneNumberChanged:(id)arg1;	// IMP=0x00000000001952e9
- (void)phoneNumberAvailable:(id)arg1;	// IMP=0x0000000000195243
- (void)activeSubscriptionsDidChange;	// IMP=0x000000000019519d
- (_Bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id *)arg3;	// IMP=0x000000000019501f
@property(readonly, copy, nonatomic) NSString *IMEI;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property(readonly, copy, nonatomic) NSString *providerName;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
- (void)dealloc;	// IMP=0x0000000000194c17
- (id)_init;	// IMP=0x0000000000194b42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
