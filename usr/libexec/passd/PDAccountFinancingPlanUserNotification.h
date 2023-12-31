//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPayLaterFinancingPlan;

@interface PDAccountFinancingPlanUserNotification
{
    PKPayLaterFinancingPlan *_financingPlan;	// 8 = 0x8
    long long _updateType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000319f69
+ (id)notificationIdentifierForFinancingPlan:(id)arg1 updateType:(long long)arg2;	// IMP=0x0010000000319d17
- (void).cxx_destruct;	// IMP=0x002000000031a547
- (id)applicationMessageContent;	// IMP=0x001000000031a381
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000031a0f3
- (_Bool)isValid;	// IMP=0x001000000031a0de
- (unsigned long long)notificationType;	// IMP=0x001000000031a0d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000031a033
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000319f71
- (id)initWithFinancingPlan:(id)arg1 updateType:(long long)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x0010000000319d9e

@end

