//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountHold
{
}

+ (id)_propertySettersForHold;	// IMP=0x00400000000136d0
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x001000000001365f
+ (id)_predicateForPlacedHoldsWithAccountIdentifier:(id)arg1;	// IMP=0x0010000000013553
+ (id)_predicateForHoldIdentifier:(id)arg1;	// IMP=0x0010000000013530
+ (void)deleteHoldWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000013497
+ (id)_holdsFromQuery:(id)arg1;	// IMP=0x00100000000132b1
+ (id)_accountHoldWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000013225
+ (id)holdsWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000013172
+ (id)placedHoldsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000130bf
+ (id)_commonDictionaryForHold:(id)arg1;	// IMP=0x0010000000012f1f
+ (id)insertOrUpdateHold:(id)arg1 forEventPID:(long long)arg2 accountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000012c8a
+ (id)databaseTable;	// IMP=0x0010000000012c7d
- (id)hold;	// IMP=0x004000000001382b

@end

