//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSArray, NSString;
@protocol CSDCarrierBundleProviderControllerDelegate, OS_dispatch_queue;

@interface CSDCarrierBundleProviderController : NSObject
{
    NSArray *_serviceProviders;	// 8 = 0x8
    id <CSDCarrierBundleProviderControllerDelegate> _delegate;	// 16 = 0x10
    CoreTelephonyClient *_telephonyClient;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006d1d9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CoreTelephonyClient *telephonyClient; // @synthesize telephonyClient=_telephonyClient;
@property(nonatomic) __weak id <CSDCarrierBundleProviderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)subscriptionInfoDidChange;	// IMP=0x001000000006d085
- (void)carrierBundleChange:(id)arg1;	// IMP=0x001000000006cf2e
- (id)arrayOfStringsForKeyHierarchy:(id)arg1 subscriptionContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006cece
- (id)objectForKeyHierarchy:(id)arg1 subscriptionContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006ce04
- (id)carrierNumbersForSubscriptionContext:(id)arg1;	// IMP=0x001000000006cca7
- (id)spamIdentifiersForSubscriptionUUID:(id)arg1;	// IMP=0x001000000006c928
- (id)fetchServiceProviders;	// IMP=0x001000000006c4c7
@property(copy, nonatomic) NSArray *serviceProviders; // @synthesize serviceProviders=_serviceProviders;
@property(readonly, copy, nonatomic) NSArray *serviceProvidersWithCarrierNumbers;
- (id)init;	// IMP=0x001000000006be9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
