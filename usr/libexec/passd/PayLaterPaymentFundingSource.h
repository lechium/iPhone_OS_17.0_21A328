//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterPaymentFundingSource
{
}

+ (id)_propertySettersForFundingSource;	// IMP=0x0040000000419b02
+ (id)_propertyValuesForFundingSource:(id)arg1;	// IMP=0x0010000000419a3a
+ (id)_predicateForInstallmentPaymentPID:(long long)arg1;	// IMP=0x00100000004199c9
+ (void)deleteInstallmentPaymentFundingSourceForInstallmentPaymentPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000041963c
+ (id)installmentPaymentFundingSourceForInstallmentPaymentPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000419592
+ (id)insertOrUpdateInstallmentPaymentFundingSource:(id)arg1 forInstallmentPaymentPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004192b9
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000041917d
+ (id)databaseTable;	// IMP=0x0010000000419170
- (id)fundingSource;	// IMP=0x004000000041979c
- (_Bool)deleteFromDatabase;	// IMP=0x00100000004196d5
- (void)updateWithFundingSource:(id)arg1;	// IMP=0x0010000000419518
- (id)initWithFundingSource:(id)arg1 forInstallmentPaymentPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004191c6

@end

