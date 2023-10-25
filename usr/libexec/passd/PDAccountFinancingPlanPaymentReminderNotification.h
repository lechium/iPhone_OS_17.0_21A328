//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPayLaterFinancingPlan, PKPayLaterInstallment;

@interface PDAccountFinancingPlanPaymentReminderNotification
{
    PKPayLaterInstallment *_installment;	// 8 = 0x8
    PKPayLaterFinancingPlan *_financingPlan;	// 16 = 0x10
    unsigned long long _paymentReminderOffset;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000031bf32
+ (id)notificationIdentifierForInstallment:(id)arg1 reminderOffset:(unsigned long long)arg2;	// IMP=0x001000000031b8f9
- (void).cxx_destruct;	// IMP=0x002000000031c6e0
- (id)applicationMessageContent;	// IMP=0x001000000031c5a3
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000031c119
- (_Bool)isValid;	// IMP=0x001000000031c111
- (unsigned long long)notificationType;	// IMP=0x001000000031c106
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000031c048
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000031bf3a
- (id)planIdentifier;	// IMP=0x001000000031bf15
- (id)initWithInstallment:(id)arg1 financingPlan:(id)arg2 accountCreatedDate:(id)arg3 passUniqueIdentifier:(id)arg4 reminderOffset:(unsigned long long)arg5;	// IMP=0x001000000031b9ac

@end
