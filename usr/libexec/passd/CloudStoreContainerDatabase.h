//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreContainerDatabase
{
}

+ (id)_predicateForPID:(long long)arg1;	// IMP=0x00400000004cd2f6
+ (id)_predicateForScope:(long long)arg1;	// IMP=0x00100000004cd285
+ (id)_predicateForContainerName:(id)arg1;	// IMP=0x00100000004cd262
+ (id)_predicateForContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x00100000004cd16b
+ (id)anyInDatabase:(id)arg1 withPID:(long long)arg2;	// IMP=0x00100000004cd0df
+ (id)anyInDatabase:(id)arg1 withContainerName:(id)arg2 scope:(long long)arg3;	// IMP=0x00100000004cd050
+ (void)removeCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004ccf92
+ (id)_cloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004ccf74
+ (id)insertOrUpdateCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004ccd88
+ (id)databaseTable;	// IMP=0x00100000004ccd7b
- (id)_commonDictionaryFoDatabaseWithScope:(long long)arg1 containerName:(id)arg2;	// IMP=0x00400000004cd436
- (id)databaseSubscription;	// IMP=0x00100000004cd3cf
- (id)cloudStoreZones;	// IMP=0x00100000004cd367
- (_Bool)deleteFromDatabase;	// IMP=0x00100000004ccfd4
- (void)updateWithDatabaseSubscription:(id)arg1;	// IMP=0x00100000004ccf1e
- (void)updateWithContainerName:(id)arg1 scope:(long long)arg2;	// IMP=0x00100000004ccec9
- (id)initWithCloudStoreDatabaseWithContainerName:(id)arg1 scope:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000004cce46

@end

