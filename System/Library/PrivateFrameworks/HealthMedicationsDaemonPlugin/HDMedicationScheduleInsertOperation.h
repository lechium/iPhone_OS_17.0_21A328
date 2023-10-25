//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleInsertOperation : HDJournalableOperation
{
    NSArray *_schedules;	// 8 = 0x8
    long long _syncProvenance;	// 16 = 0x10
    long long _syncIdentity;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000017538
- (void).cxx_destruct;	// IMP=0x0000000000017715
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000175dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017540
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017483
- (id)initWithMedicationSchedules:(id)arg1 syncProvenance:(long long)arg2 syncIdentity:(long long)arg3;	// IMP=0x00000000000173ef

@end
