//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSPaymentSheetTask.h"

@class AMSDelegatePaymentSheetRequest, AMSPromise;

__attribute__((visibility("hidden")))
@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask
{
    AMSDelegatePaymentSheetRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000024ed81
@property(retain, nonatomic) AMSDelegatePaymentSheetRequest *request; // @synthesize request=_request;
- (id)perform;	// IMP=0x000000000024e642
- (id)initWithRequest:(id)arg1 bag:(id)arg2;	// IMP=0x000000000024e5c7

// Remaining properties
@property(retain, nonatomic) AMSPromise *paymentSheetPromise; // @dynamic paymentSheetPromise;

@end

