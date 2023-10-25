//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterCardMagnitudes
{
}

+ (id)_commonDictionaryForMagnitudes:(id)arg1;	// IMP=0x004000000011976d
+ (id)_propertySettersForMagnitudes;	// IMP=0x00100000001193c4
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x00100000001193a1
+ (id)magnitudesForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000011910e
+ (void)deleteMagnitudesForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000119075
+ (id)insertOrUpdateMagnitudes:(id)arg1 forAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000118f87
+ (id)databaseTable;	// IMP=0x0010000000118eb6
- (void)updateWithMagnitudes:(id)arg1;	// IMP=0x0040000000119327
- (id)magnitudes;	// IMP=0x00100000001191b8
- (id)initWithMagnitudes:(id)arg1 forAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000118ec3

@end
