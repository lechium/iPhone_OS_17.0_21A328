//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPayLaterFinancingPlan, PKPayLaterFinancingPlanDispute;

@interface PDAccountFinancingPlanDisputeUpdateNotification
{
    PKPayLaterFinancingPlan *_financingPlan;	// 8 = 0x8
    PKPayLaterFinancingPlanDispute *_dispute;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000031dfae
+ (id)notificationIdentifierForFinancingPlan:(id)arg1 dispute:(id)arg2 type:(long long)arg3;	// IMP=0x001000000031d9bb
- (void).cxx_destruct;	// IMP=0x002000000031e440
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000031e195
- (_Bool)isValid;	// IMP=0x001000000031e18d
- (unsigned long long)notificationType;	// IMP=0x001000000031e182
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000031e0c4
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000031dfb6
- (id)disputeIdentifier;	// IMP=0x001000000031df91
- (id)planIdentifier;	// IMP=0x001000000031df74
- (id)initWithFinancingPlan:(id)arg1 dispute:(id)arg2 type:(long long)arg3 passUniqueIdentifier:(id)arg4;	// IMP=0x001000000031dae8

@end

