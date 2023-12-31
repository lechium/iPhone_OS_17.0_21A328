//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterFinancingPlan
{
}

+ (id)_propertySettersForPayLaterFinancingPlan;	// IMP=0x004000000005193a
+ (id)_propertyValuesForPayLaterFinancingPlan:(id)arg1;	// IMP=0x001000000005176b
+ (id)_predicateForInstallmentEndPayoffDate:(id)arg1;	// IMP=0x00100000000516ea
+ (id)_predicateForInstallmentStartPayoffDate:(id)arg1;	// IMP=0x0010000000051669
+ (id)_predicateForInstallmentEndDueDate:(id)arg1;	// IMP=0x00100000000515e8
+ (id)_predicateForInstallmentStartDueDate:(id)arg1;	// IMP=0x0010000000051567
+ (id)_predicateForTransactionEndDate:(id)arg1;	// IMP=0x00100000000514e6
+ (id)_predicateForTransactionStartDate:(id)arg1;	// IMP=0x0010000000051465
+ (id)_predicateForStateReason:(unsigned long long)arg1;	// IMP=0x00100000000513f4
+ (id)_predicateForState:(unsigned long long)arg1;	// IMP=0x0010000000051383
+ (id)_predicateForStateReasonList:(id)arg1;	// IMP=0x0010000000051123
+ (id)_predicateForStates:(id)arg1;	// IMP=0x0010000000050ec3
+ (id)_predicateForPID:(id)arg1;	// IMP=0x0010000000050ea0
+ (id)_predicateForPlanIdentifier:(id)arg1;	// IMP=0x0010000000050e7d
+ (id)_predicateForAccountEndpointMetadataPID:(long long)arg1;	// IMP=0x0010000000050e0c
+ (id)_predicateForAccountEndpointMetadataPID:(long long)arg1 planIdentifier:(id)arg2;	// IMP=0x0010000000050d1b
+ (void)deletePayLaterFinancingPlanWithIdentifier:(id)arg1 forAccountEndpointMetadataPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000050785
+ (void)deletePayLaterFinancingPlansForAccountEndpointMetadataPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000506ec
+ (id)anyInDatabase:(id)arg1 withPlanPID:(id)arg2;	// IMP=0x0010000000050660
+ (id)anyInDatabase:(id)arg1 withPlanIdentifier:(id)arg2;	// IMP=0x00100000000505d4
+ (id)_financingPlansWithQuery:(id)arg1;	// IMP=0x001000000005016b
+ (id)totalPendingAmountForFinancingPlansForEndpointMetadataPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000004fdfe
+ (id)financingPlansIdentifiersWithState:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000004fc3d
+ (long long)countOfFinancingPlansForEndpointMetadataPID:(long long)arg1 financingPlanStates:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004facc
+ (id)financingPlanIdentifiersForEndpointMetadataPID:(long long)arg1 states:(id)arg2 transactionStartDate:(id)arg3 transactionEndDate:(id)arg4 limit:(long long)arg5 inDatabase:(id)arg6;	// IMP=0x001000000004f7a2
+ (id)financingPlansForEndpointMetadataPID:(long long)arg1 stateReasons:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004f596
+ (id)financingPlansForEndpointMetadataPID:(long long)arg1 states:(id)arg2 transactionStartDate:(id)arg3 transactionEndDate:(id)arg4 installmentDueOrPaidDateStart:(id)arg5 installmentDueOrPaidDateEnd:(id)arg6 limit:(long long)arg7 inDatabase:(id)arg8;	// IMP=0x001000000004f0ac
+ (id)financingPlansForEndpointMetadataPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000004ef52
+ (id)insertOrUpdatePayLaterFinancingPlans:(id)arg1 forEndpointMetadataPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004ecb7
+ (id)insertOrUpdatePayLaterFinancingPlan:(id)arg1 forEndpointMetadataPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004e8f4
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x001000000004e637
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000004e608
+ (id)databaseTable;	// IMP=0x001000000004e5fb
- (id)planIdentifier;	// IMP=0x0040000000050d02
- (id)financingPlan;	// IMP=0x0010000000050923
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000050821
- (void)updateWithPayLaterFinancingPlan:(id)arg1;	// IMP=0x001000000004eed8
- (id)initWithPayLaterFinancingPlan:(id)arg1 forEndpointMetadataPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000004e801

@end

