//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentTransactionArchiveLocation
{
}

+ (id)_propertySettersForTransactionArchiveLocation;	// IMP=0x004000000037bc3c
+ (id)_transactionArchiveLocationsWithQuery:(id)arg1;	// IMP=0x001000000037b705
+ (id)transactionArchiveLocationsForArchivePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000037b439
+ (void)deleteArchiveLocationsForCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000037b2ec
+ (void)deleteArchiveLocationsForArchivePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000037b253
+ (id)_predicateForCloudStoreZonePID:(long long)arg1;	// IMP=0x001000000037b1e2
+ (id)_predicateForCloudStoreZone:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000037b175
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x001000000037b104
+ (id)_predicateForArchivePID:(long long)arg1;	// IMP=0x001000000037b093
+ (id)_predicateForLocation:(id)arg1 archivePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000037af02
+ (id)insertOrUpdateTransactionArchiveLocations:(id)arg1 forArchivePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000037aa6a
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000037aa3b
+ (id)databaseTable;	// IMP=0x001000000037aa2e
- (id)_commonDictionaryForArchiveLocation:(id)arg1 inDatabase:(id)arg2;	// IMP=0x004000000037ba45
- (id)cloudStoreZone;	// IMP=0x001000000037b68f
- (id)archiveLocation;	// IMP=0x001000000037b4ec
- (void)updateWithTransactionArchiveLocation:(id)arg1;	// IMP=0x001000000037aea8
- (id)initWithTransactionArchiveLocation:(id)arg1 forArchivePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000037ada4

@end

