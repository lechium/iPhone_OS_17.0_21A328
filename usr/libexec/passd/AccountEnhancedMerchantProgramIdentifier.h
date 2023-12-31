//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountEnhancedMerchantProgramIdentifier
{
}

+ (id)_propertyValuesForProgramIdentifier:(id)arg1 enhancedMerchantPID:(long long)arg2;	// IMP=0x004000000022a0b8
+ (id)_predicateForEnhancedMerchantPID:(long long)arg1;	// IMP=0x001000000022a047
+ (void)deleteEnhancedMerchantProgramIdentifiersForEnhancedMerchantPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000229fae
+ (id)_insertEnhancedMerchantProgramIdentifier:(id)arg1 forEnhancedMerchantPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000229f31
+ (void)insertOrUpdateEnhancedMerchantProgramIdentifiers:(id)arg1 enhancedMerchantPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000229d91
+ (id)_accountEnhancedMerchantProgramIdentifiersWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000229be4
+ (id)accountEnhancedMerchantProgramIdentifiersForEnhancedMerchantPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000229b58
+ (id)databaseTable;	// IMP=0x0010000000229abf
- (id)initWithProgramIdentifier:(id)arg1 forEnhancedMerchantPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0040000000229acc

@end

