//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityWatchProductTypeHasPrefixRule
{
    NSString *_productType;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x00100000000336e5
- (void).cxx_destruct;	// IMP=0x0000000000033837
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (_Bool)evaluate;	// IMP=0x000000000003374b
- (void)processUserInfo:(id)arg1;	// IMP=0x00000000000336f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
