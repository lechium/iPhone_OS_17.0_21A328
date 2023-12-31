//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIRedeemStepViewController.h"

@class SKUIRedeem;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController
{
    SKUIRedeem *_redeem;	// 8 = 0x8
    long long _redeemCategory;	// 16 = 0x10
}

+ (id)redeemResultsControllerForRedeem:(id)arg1;	// IMP=0x00600000000f5c42
+ (_Bool)canShowResultsForRedeem:(id)arg1;	// IMP=0x00600000000f5b6c
- (void).cxx_destruct;	// IMP=0x00000000000f6478
@property(nonatomic) long long redeemCategory; // @synthesize redeemCategory=_redeemCategory;
@property(retain, nonatomic) SKUIRedeem *redeem; // @synthesize redeem=_redeem;
- (void)_doneAction:(id)arg1;	// IMP=0x00000000000f619d
- (void)viewDidLoad;	// IMP=0x00000000000f6033
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f5fd5
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000f5f77
- (id)initWithRedeem:(id)arg1;	// IMP=0x00000000000f5e5a

@end

