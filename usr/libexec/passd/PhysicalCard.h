//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PhysicalCard
{
}

+ (id)_propertySettersForPhysicalCard;	// IMP=0x00400000003ba943
+ (id)_physicalCardsWithQuery:(id)arg1;	// IMP=0x00100000003ba660
+ (id)_predicateForPhysicalCardIdentifier:(id)arg1;	// IMP=0x00100000003ba408
+ (id)_predicateForPhysicalCardStatusUpdatePID:(long long)arg1;	// IMP=0x00100000003ba397
+ (id)_predicateForAccountPID:(long long)arg1 physicalCardIdentifier:(id)arg2;	// IMP=0x00100000003ba282
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x00100000003ba211
+ (id)physicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003ba15e
+ (id)physicalCardsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003ba0ab
+ (void)deletePhysicalCardsForPhysicalCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b9f82
+ (void)deletePhysicalCardsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003b9ee9
+ (id)insertPhysicalCards:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003b9962
+ (id)insertOrUpdatePhysicalCard:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003b980e
+ (id)insertOrUpdatePhysicalCards:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003b949a
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003b8d29
+ (id)databaseTable;	// IMP=0x00100000003b8d1c
- (id)physicalCard;	// IMP=0x00400000003ba42b
- (_Bool)deleteFromDatabase;	// IMP=0x00100000003ba01b
- (void)updateWithPhysicalCard:(id)arg1;	// IMP=0x00100000003b9b7d
- (id)initWithPhysicalCard:(id)arg1 forPhysicalCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003b913c
- (id)initWithPhysicalCard:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003b8d72

@end

