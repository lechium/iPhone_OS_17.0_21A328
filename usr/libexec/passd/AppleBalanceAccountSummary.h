//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppleBalanceAccountSummary
{
}

+ (id)_commonDictionaryForAppleBalanceAccountSummary:(id)arg1;	// IMP=0x0040000000219af3
+ (id)_propertySettersForAppleBalanceAccountSummary;	// IMP=0x001000000021989d
+ (id)_predicateForAppleBalanceAccountDetailsPID:(long long)arg1;	// IMP=0x001000000021982c
+ (void)updateAppleBalanceAccountSummary:(id)arg1 forAppleBalanceAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002196c0
+ (id)appleBalanceAccountSummaryForAppleBalanceAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000219616
+ (void)deleteAppleBalanceAccountSummaryForAppleBalanceAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000021957d
+ (id)insertAppleBalanceAccountSummary:(id)arg1 forAppleBalanceAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000219500
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002193e1
+ (id)databaseTable;	// IMP=0x00100000002193d4
- (id)appleBalanceAccountSummary;	// IMP=0x0040000000219984
- (void)updateWithAppleBalanceAccountSummary:(id)arg1;	// IMP=0x00100000002197b2
- (id)initWithAppleBalanceAccountSummary:(id)arg1 forAppleBalanceAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000219410

@end
