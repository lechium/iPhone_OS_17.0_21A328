//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DynamicAssociatedDomainPattern
{
}

+ (id)_propertySetters;	// IMP=0x0040000000135e1a
+ (id)_propertyValuesFor:(id)arg1;	// IMP=0x0010000000135d8f
+ (id)_predicateForDomainPID:(long long)arg1;	// IMP=0x0010000000135d1e
+ (void)deletePatternsForDomainPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000135c85
+ (id)_objectsWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000135ab6
+ (id)patternsForDomainPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000135a06
+ (void)insertPatterns:(id)arg1 forDomainPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000013588d
+ (id)databaseTable;	// IMP=0x00100000001357a2
- (id)initWithPattern:(id)arg1 forDomainPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00400000001357af

@end
