//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCorrelation.h>

@class NSString;

@interface HKCorrelation (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000026fe1d
+ (Class)hd_dataEntityClass;	// IMP=0x00100000008e4755
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x001000000026fdaa
- (id)codableRepresentationForSync;	// IMP=0x001000000026fd38
- (id)hd_relatedJournalEntriesWithProfile:(id)arg1;	// IMP=0x00100000002ae303
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x00100000002ae1dc
- (id)hd_associatedSampleTypes;	// IMP=0x00100000008e47b6
- (id)hd_associatedObjects;	// IMP=0x00100000008e4766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

