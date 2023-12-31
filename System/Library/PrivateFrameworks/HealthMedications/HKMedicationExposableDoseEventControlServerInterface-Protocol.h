//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedications/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKMedicationIdentifier, NSArray, NSDateInterval, NSUUID;

@protocol HKMedicationExposableDoseEventControlServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_deleteDoseEventWithPersistentUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_writeDoseEvents:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_doseEventsForDateInterval:(NSDateInterval *)arg1 medicationIdentifier:(HKMedicationIdentifier *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
@end

