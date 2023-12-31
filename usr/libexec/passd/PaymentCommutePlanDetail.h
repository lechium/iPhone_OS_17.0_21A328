//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentCommutePlanDetail
{
}

+ (id)_postProcessValue:(id)arg1;	// IMP=0x004000000038f8d8
+ (id)_propertySettersForPaymentPlan;	// IMP=0x001000000038f62d
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000038f60a
+ (id)_predicateForPaymentPass:(id)arg1;	// IMP=0x001000000038f586
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x001000000038f563
+ (id)paymentPlansInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;	// IMP=0x001000000038f100
+ (long long)countInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;	// IMP=0x001000000038f080
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3;	// IMP=0x001000000038ef24
+ (void)truncateEntitiesForPass:(id)arg1 inDatabase:(id)arg2 toCount:(long long)arg3;	// IMP=0x001000000038ed38
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000038ec9f
+ (id)updateWitPaymentPlans:(id)arg1 withPaymentPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038ea1f
+ (id)insertPaymentPlan:(id)arg1 withPaymentPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038e993
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000038e8ac
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000038e87d
+ (id)databaseTable;	// IMP=0x001000000038e870
- (id)passUniqueIdentifier;	// IMP=0x004000000038f54a
- (id)identifier;	// IMP=0x001000000038f531
- (id)paymentPlan;	// IMP=0x000000000038f3e3
- (id)initWithPaymentPlan:(id)arg1 paymentPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000038e571

@end

