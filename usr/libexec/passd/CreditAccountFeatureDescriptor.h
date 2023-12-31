//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditAccountFeatureDescriptor
{
}

+ (id)_propertySettersForCreditAccountFeatureDescriptor;	// IMP=0x004000000045cbe3
+ (id)_propertyValuesForCreditAccountFeatureDescriptor:(id)arg1;	// IMP=0x001000000045c5d9
+ (id)_creditAccountFeatureDescriptorsWithQuery:(id)arg1;	// IMP=0x001000000045c420
+ (id)_predicateForFeatureIdentifier:(id)arg1;	// IMP=0x001000000045c28e
+ (id)_predicateForAccountUserPID:(id)arg1;	// IMP=0x001000000045c26b
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x001000000045c1fa
+ (void)updateCreditAccountFeatureDescriptors:(id)arg1 forAccountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000045bc83
+ (void)updateCreditAccountFeatureDescriptors:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000045b7bc
+ (id)creditAccountFeatureDescriptorsForAccountUserPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000045b53a
+ (id)creditAccountFeatureDescriptorsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000045b487
+ (void)deleteCreditAccountFeatureDescriptorsForAccountUserPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000045b3ee
+ (void)deleteCreditAccountFeatureDescriptorsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000045b355
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000045b30c
+ (id)databaseTable;	// IMP=0x001000000045b2ff
- (id)creditAccountFeatureDescriptor;	// IMP=0x004000000045c2b1
- (void)updateWithCreditFeatureDescriptor:(id)arg1;	// IMP=0x001000000045c180
- (id)initWithCreditAccountFeatureDescriptor:(id)arg1 forAccountUserPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000045b6e0
- (id)initWithCreditAccountFeatureDescriptor:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000045b5ed

@end

