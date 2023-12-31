//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSCollection.h>

@class NSArray, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSCollection (PDEndpointServerEntityHooks)
+ (void)endpointServer:(id)arg1 willQueryForObjectWithPredicate:(id)arg2;	// IMP=0x00200000000f8876
+ (long long)migrationOrder;	// IMP=0x0010000000120807
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001206bc
+ (id)entityName;	// IMP=0x001000000012024b
+ (id)recordType;	// IMP=0x001000000018d4e9
- (_Bool)willBeProcessedByEndpointServer:(id)arg1;	// IMP=0x00100000000f886e
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x0010000000120812
@property(readonly, nonatomic) NSArray *immutableColumnNames;
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000012045c
- (void)bindTo:(id)arg1;	// IMP=0x0010000000120258
@property(readonly, nonatomic) NSString *parentReferenceName;
- (long long)syncOrder;	// IMP=0x001000000018d837
- (long long)syncBackend:(id)arg1;	// IMP=0x001000000018d818
- (void)populate:(id)arg1;	// IMP=0x001000000018d687
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000018d501
@property(readonly, nonatomic) long long syncableItemType;

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isImmutabilityEnforced) _Bool enforceImmutability;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

