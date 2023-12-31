//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPayLaterFinancingPlan;

@interface PDAccountFinancingPlanPaidOffNotification
{
    PKPayLaterFinancingPlan *_financingPlan;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000031b5ae
+ (id)notificationIdentifierForFinancingPlan:(id)arg1;	// IMP=0x001000000031b396
- (void).cxx_destruct;	// IMP=0x002000000031b8e6
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000031b6e1
- (_Bool)isValid;	// IMP=0x001000000031b6d9
- (unsigned long long)notificationType;	// IMP=0x001000000031b6ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000031b651
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000031b5b6
- (id)initWithFinancingPlan:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x001000000031b405

@end

