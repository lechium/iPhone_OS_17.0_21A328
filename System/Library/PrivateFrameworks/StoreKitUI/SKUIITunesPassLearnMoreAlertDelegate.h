//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKUIClientContext, SKUIRedeemConfiguration, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    UIViewController *_presentingViewController;	// 16 = 0x10
    SKUIRedeemConfiguration *_redeemConfiguration;	// 24 = 0x18
}

+ (_Bool)shouldShowAlertForRedeem:(id)arg1 configuration:(id)arg2;	// IMP=0x0010000000358a42
+ (void)beginThrottleInterval;	// IMP=0x00100000003589a1
- (void).cxx_destruct;	// IMP=0x0000000000358e1f
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x0000000000358ccc
- (void)show;	// IMP=0x0000000000358c17
- (id)initWithRedeemConfiguration:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000003588c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

