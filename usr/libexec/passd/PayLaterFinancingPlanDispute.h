//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingPlanDispute
{
}

+ (id)_propertySettersForFinancingPlanDispute;	// IMP=0x0040000000431309
+ (id)_propertyValuesForFinancingPlanDispute:(id)arg1;	// IMP=0x00100000004310f4
+ (id)_predicateForDisputeState:(unsigned long long)arg1;	// IMP=0x0010000000430fb8
+ (id)_predicateForDisputeIdentifier:(id)arg1;	// IMP=0x0010000000430f95
+ (id)_predicateForFinancingPlanPID:(long long)arg1;	// IMP=0x0010000000430f24
+ (id)_predicateForFinancingPlanPID:(long long)arg1 disputeIdentifier:(id)arg2;	// IMP=0x0010000000430e0f
+ (void)deleteFinancingPlanDisputesForFinancingPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000430ce6
+ (id)_diputesForQuery:(id)arg1;	// IMP=0x0010000000430a27
+ (id)financingPlanDisputesForFinancingPlanPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004308cd
+ (id)disputeIdentifiersWithState:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000043070c
+ (id)insertOrUpdateFinancingPlanDisputes:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000043044d
+ (id)insertOrUpdateFinancingPlanDispute:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004302c4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000004301a2
+ (id)databaseTable;	// IMP=0x0010000000430195
- (id)disputeIdentifier;	// IMP=0x00400000004310db
- (id)planIdentifier;	// IMP=0x0010000000431029
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000430d7f
- (void)updateWithFinancingPlanDispute:(id)arg1;	// IMP=0x0010000000430692
- (id)initWithFinancingPlanDispute:(id)arg1 forFinancingPlanPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004301d1

@end

