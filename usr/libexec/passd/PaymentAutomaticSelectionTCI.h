//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentAutomaticSelectionTCI
{
}

+ (id)_predicateForIsPrimary:(_Bool)arg1;	// IMP=0x00400000001b1aa3
+ (id)_predicateForPaymentAutomaticSelectionCriterionPID:(long long)arg1;	// IMP=0x00100000001b1a32
+ (id)insertPrimaryTCIs:(id)arg1 TCIs:(id)arg2 withPaymentAutomaticSelectionCriterion:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000001b1467
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00100000001b13ce
+ (id)_TCIsInDatabase:(id)arg1 withPredicate:(id)arg2;	// IMP=0x00100000001b1269
+ (id)TCIsInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00100000001b112b
+ (id)primaryTCIsInDatabase:(id)arg1 forPaymentAutomaticSelectionCriterionPID:(long long)arg2;	// IMP=0x00100000001b0fea
+ (id)databaseTable;	// IMP=0x00100000001b0fdd
- (id)initWithTCI:(id)arg1 primary:(_Bool)arg2 forPaymentAutomaticSelectionCriterionPID:(long long)arg3 database:(id)arg4;	// IMP=0x00400000001b18d7

@end

