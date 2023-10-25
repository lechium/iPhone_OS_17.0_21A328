//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNEntityIdentificationModel.h"

@class NSString, VNEntityIdentificationModelTrainedModel;

__attribute__((visibility("hidden")))
@interface VNReadOnlyEntityIdentificationModel : VNEntityIdentificationModel
{
    VNEntityIdentificationModelTrainedModel *_trainedModel;	// 8 = 0x8
}

+ (_Bool)isReadOnly;	// IMP=0x00100000002a9cfc
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id *)arg3;	// IMP=0x00100000002a9ae1
- (void).cxx_destruct;	// IMP=0x00000000002a9ace
- (id)entityIdentificationModel:(id)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;	// IMP=0x00000000002a9ac6
- (unsigned long long)entityIdentificationModel:(id)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;	// IMP=0x00000000002a9a65
- (unsigned long long)entityIdentificationModel:(id)arg1 indexOfEntityWithUniqueIdentifier:(id)arg2;	// IMP=0x00000000002a9a45
- (id)entityIdentificationModel:(id)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;	// IMP=0x00000000002a9a25
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)arg1;	// IMP=0x00000000002a9a08
- (id)observationCountsForAllEntities;	// IMP=0x00000000002a99eb
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x00000000002a99ce
- (id)observationsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a9998
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002a997b
- (id)trainedModelWithCanceller:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a9966
- (_Bool)dropTrainedModelAndReturnError:(id *)arg1;	// IMP=0x00000000002a9935
- (id)initWithConfiguration:(id)arg1 trainedModel:(id)arg2;	// IMP=0x00000000002a98ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
