//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TransactionSource
{
}

+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x0040000000077e68
+ (id)_predicateForPersistentID:(long long)arg1;	// IMP=0x0010000000077df7
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000077dd4
+ (id)_predicateForAccountPersistentID:(long long)arg1;	// IMP=0x0010000000077ca9
+ (id)_predicateForAccountUserPersistentID:(long long)arg1;	// IMP=0x0010000000077b7e
+ (id)_predicateForPeerPaymentAccountPersistentID:(long long)arg1;	// IMP=0x0010000000077a53
+ (id)_predicateForPaymentApplicationPersistentID:(long long)arg1;	// IMP=0x0010000000077928
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x00100000000778b7
+ (void)deleteEntitiesInDatabase:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000077795
+ (void)deleteEntitiesInDatabase:(id)arg1 forAccountUser:(id)arg2;	// IMP=0x00100000000776ef
+ (void)deleteEntitiesInDatabase:(id)arg1 forPeerPaymentAccount:(id)arg2;	// IMP=0x0010000000077649
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00100000000775a3
+ (void)updateTransactionSourceIdentifier:(id)arg1 toNewTransactionSourceIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000772d7
+ (void)associateTransactionSourcesToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000076eef
+ (id)transactionSourceIdentifiersInDatabase:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x0010000000076cff
+ (id)anyInDatabase:(id)arg1 withPersistentID:(long long)arg2;	// IMP=0x0010000000076c73
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000076be7
+ (id)insertTransactionSourceWithType:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000076af7
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000076909
+ (id)databaseTable;	// IMP=0x00100000000768fc
- (unsigned long long)type;	// IMP=0x0040000000077ea4
- (id)identifier;	// IMP=0x0010000000077e8b
- (_Bool)deleteFromDatabase;	// IMP=0x001000000007783b
- (id)_commonDictionary;	// IMP=0x0010000000076b4f
- (id)initWithTransactionSourceType:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000076a3b

@end
