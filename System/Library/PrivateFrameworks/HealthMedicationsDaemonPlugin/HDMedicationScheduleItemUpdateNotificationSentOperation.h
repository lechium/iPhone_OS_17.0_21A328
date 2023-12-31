//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDJournalableOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleItemUpdateNotificationSentOperation : HDJournalableOperation
{
    NSString *_itemIdentifier;	// 8 = 0x8
    _Bool _notificationSent;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000177df
- (void).cxx_destruct;	// IMP=0x0000000000017925
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017866
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000177e7
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000177a7
- (id)initWithScheduleItemIdentifier:(id)arg1 notificationSent:(_Bool)arg2;	// IMP=0x0000000000017728

@end

