//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PKPaymentSetupFieldsViewController.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI40ProvisioningAddPaymentPassViewController : PKPaymentSetupFieldsViewController
{
    MISSING_TYPE *provisioningContext;	// 8 = 0x8
    MISSING_TYPE *configuration;	// 16 = 0x10
    MISSING_TYPE *hasMultipleDestinationDevices;	// 24 = 0x18
    MISSING_TYPE *privacyController;	// 32 = 0x20
    MISSING_TYPE *coordinator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000029c920
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;	// IMP=0x000000000029c8a0
- (void)cancel;	// IMP=0x000000000029c830
- (void)viewWillLayoutSubviews;	// IMP=0x000000000029c800
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000029c430
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029bff0

@end

