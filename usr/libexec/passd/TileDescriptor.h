//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TileDescriptor
{
}

+ (id)_createDescriptorForPID:(long long)arg1 withProperties:(id)arg2 values:(const id *)arg3 propertySetters:(id)arg4 indices:(CDStruct_69d7cc99)arg5 inDatabase:(id)arg6;	// IMP=0x0040000000433199
+ (id)_propertySettersWithProperties:(id)arg1 effectiveProperties:(id *)arg2 indices:(CDStruct_69d7cc99 *)arg3;	// IMP=0x0010000000432e9c
+ (id)_tileDescriptorQueryWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000432b75
+ (id)_predicateForPassUniqueID:(id)arg1;	// IMP=0x0010000000432b52
+ (id)_predicateForPassPID:(unsigned long long)arg1;	// IMP=0x0010000000432ae1
+ (void)deleteEntitiesForPassPID:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000043285d
+ (id)updatePassTileDescriptorStatesInDatabase:(id)arg1 forPassUniqueID:(id)arg2 withTransform:(CDUnknownBlockType)arg3;	// IMP=0x001000000043200d
+ (id)descriptorsInDatabase:(id)arg1 forPassUniqueID:(id)arg2;	// IMP=0x0010000000431b6b
+ (id)insertDescriptor:(id)arg1 withState:(id)arg2 order:(long long)arg3 forPass:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00100000004317e2
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000004315fe
+ (id)databaseTable;	// IMP=0x00100000004315f1
- (id)passTileDescriptor;	// IMP=0x0040000000432c94
- (id)state;	// IMP=0x0010000000432a4d
- (id)metadata;	// IMP=0x00100000004329b9
- (_Bool)deleteFromDatabase;	// IMP=0x00100000004328fa
- (id)initWithDescriptor:(id)arg1 metadata:(id)arg2 state:(id)arg3 order:(long long)arg4 forPass:(id)arg5 inDatabase:(id)arg6;	// IMP=0x0010000000431653

@end

