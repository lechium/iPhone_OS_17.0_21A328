//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModelVIPv3
{
    shared_ptr_d8728072 _faceIDModel;	// 8 = 0x8
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;	// 24 = 0x18
    NSArray *_entityUniqueIdentifiers;	// 32 = 0x20
    NSArray *_entityPrintCounts;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001672ec
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x0060000000166066
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0060000000166058
- (id).cxx_construct;	// IMP=0x0000000000165471
- (void).cxx_destruct;	// IMP=0x0000000000165420
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016522d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000164cd9
- (id)printCountsForAllEntities;	// IMP=0x0000000000164bdf
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000164a5c
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000164999
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000016497c
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016495f
- (id)entityUniqueIdentifiers;	// IMP=0x000000000016494a
- (unsigned long long)entityCount;	// IMP=0x000000000016492d
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x000000000016435c
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016406e
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x0000000000164059
- (id)initWithFaceIDModel:(shared_ptr_d8728072)arg1 entityPrintOriginatingRequestSpecifier:(id)arg2 entityUniqueIdentifiers:(id)arg3 entityPrintCounts:(id)arg4;	// IMP=0x0000000000163ec2

@end
