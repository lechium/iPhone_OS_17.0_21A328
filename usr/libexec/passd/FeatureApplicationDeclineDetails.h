//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FeatureApplicationDeclineDetails
{
}

+ (id)_propertySettersForFeatureApplicationDeclineDetails;	// IMP=0x0040000000491a9b
+ (id)_predicateForApplicationPID:(long long)arg1;	// IMP=0x0010000000491a2a
+ (void)updateFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000049189a
+ (id)featureApplicationDeclineDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004917f0
+ (void)deleteFeatureApplicationDeclineDetailsForApplicationPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000491757
+ (id)insertFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004916da
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000004915bd
+ (id)databaseTable;	// IMP=0x00100000004915b0
- (id)featureApplicationDeclineDetails;	// IMP=0x0040000000491b26
- (void)updateWithFeatureApplicationDeclineDetails:(id)arg1;	// IMP=0x001000000049198c
- (id)initWithFeatureApplicationDeclineDetails:(id)arg1 forApplicationPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004915ca

@end
