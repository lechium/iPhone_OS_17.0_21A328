//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassType
{
}

+ (id)anyInDatabase:(id)arg1 withPassTypeIdentifierHash:(id)arg2;	// IMP=0x00400000002c70fd
+ (id)anyInDatabase:(id)arg1 withPassTypeID:(id)arg2;	// IMP=0x00100000002c7071
+ (id)_passTypeIdentifierHashPredicate:(id)arg1;	// IMP=0x00100000002c704e
+ (id)_passTypeIDPredicate:(id)arg1;	// IMP=0x00100000002c702b
+ (id)insertPassTypeWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002c6f9f
+ (id)_insertionDictionaryWithPassTypeID:(id)arg1 teamID:(id)arg2;	// IMP=0x00100000002c6b51
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002c6a5f
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002c6a16
+ (id)databaseTable;	// IMP=0x00100000002c6a09
- (void)updateIdentifierHash;	// IMP=0x00400000002c6edd
- (void)updateFrequencyScore:(double)arg1;	// IMP=0x00100000002c6e83
- (void)updateLastUpdateDate:(id)arg1;	// IMP=0x00100000002c6e6a
- (void)updateLastPushDate:(id)arg1;	// IMP=0x00100000002c6e51
- (id)identifierHash;	// IMP=0x00100000002c6e38
- (id)teamID;	// IMP=0x00100000002c6e1f
- (id)passTypeID;	// IMP=0x00100000002c6e06
- (double)frequencyScore;	// IMP=0x00100000002c6daf
- (id)lastUpdateDate;	// IMP=0x00100000002c6d61
- (id)lastPushDate;	// IMP=0x00100000002c6d13
- (id)initWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002c6c87

@end

