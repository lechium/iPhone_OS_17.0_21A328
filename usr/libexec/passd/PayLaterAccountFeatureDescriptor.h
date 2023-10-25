//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PayLaterAccountFeatureDescriptor
{
}

+ (id)_propertySettersForPayLaterAccountFeatureDescriptor;	// IMP=0x00400000000e2169
+ (id)_propertyValuesForPayLaterAccountFeatureDescriptor:(id)arg1;	// IMP=0x00100000000e1ee4
+ (id)_payLaterAccountFeatureDescriptorsWithQuery:(id)arg1;	// IMP=0x00100000000e1d1d
+ (id)_predicateForFeatureIdentifier:(id)arg1;	// IMP=0x00100000000e1cfa
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x00100000000e1c89
+ (id)payLaterAccountFeatureDescriptorsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000e1a67
+ (void)deletePayLaterAccountFeatureDescriptorsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000e19ce
+ (void)insertOrUpdatePayLaterAccountFeatureDescriptors:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000e1507
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000000e136b
+ (id)databaseTable;	// IMP=0x00100000000e135e
- (id)payLaterAccountFeatureDescriptor;	// IMP=0x00400000000e1b1a
- (void)updateWithPayLaterFeatureDescriptor:(id)arg1;	// IMP=0x00100000000e148d
- (id)initWithPayLaterAccountFeatureDescriptor:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000e139a

@end
