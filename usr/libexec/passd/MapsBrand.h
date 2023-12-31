//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsBrand
{
}

+ (id)_propertySetters;	// IMP=0x0040000000451075
+ (id)_propertyValuesForMapsBrand:(id)arg1;	// IMP=0x0010000000450bae
+ (id)_predicateForEndDate:(id)arg1;	// IMP=0x0010000000450b2d
+ (id)_predicateForStartDate:(id)arg1;	// IMP=0x0010000000450aac
+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x0010000000450a89
+ (id)_predicateForPID:(id)arg1;	// IMP=0x0010000000450a66
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000450a43
+ (id)_mapsBrandsMatchingQuery:(id)arg1;	// IMP=0x0010000000450882
+ (id)insertOrUpdateMapsBrand:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000004503fe
+ (id)insertMapsBrand:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000450390
+ (void)associateMapsBrandsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044ffd2
+ (id)_mapsBrandsWithQuery:(id)arg1;	// IMP=0x001000000044fe0b
+ (id)mapsBrandsWithLastUpdatedDateFromStartDate:(id)arg1 endDate:(id)arg2 limit:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x001000000044fc72
+ (id)mapsBrandsInDatabase:(id)arg1;	// IMP=0x001000000044fc11
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x001000000044fb85
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x001000000044faf9
+ (id)databaseTable;	// IMP=0x001000000044fa52
- (id)mapsBrand;	// IMP=0x0040000000450713
- (void)updateWithMapsBrand:(id)arg1;	// IMP=0x001000000045050d
- (id)initWithMapsBrand:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000044fa5f

@end

