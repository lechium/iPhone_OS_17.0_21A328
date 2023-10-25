//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceUsageController : PSListController
{
}

- (id)getLogger;	// IMP=0x0000000000017cf1
- (id)remainingCreditDescription:(id)arg1;	// IMP=0x0000000000017c97
- (_Bool)shouldShowRemainingCredit:(id)arg1;	// IMP=0x0000000000017c4c
- (id)messagesDescription:(id)arg1;	// IMP=0x0000000000017815
- (_Bool)shouldShowOnlyRemainingMessages:(id)arg1;	// IMP=0x0000000000017723
- (_Bool)shouldShowMessages:(id)arg1;	// IMP=0x00000000000175fe
- (id)callsDescription:(id)arg1;	// IMP=0x00000000000171c7
- (_Bool)shouldShowOnlyRemainingCalls:(id)arg1;	// IMP=0x00000000000170d5
- (_Bool)shouldShowCalls:(id)arg1;	// IMP=0x0000000000016fb0
- (id)dataUsageDescription:(id)arg1;	// IMP=0x0000000000016f25
- (_Bool)shouldShowOnlyRemainingData:(id)arg1;	// IMP=0x0000000000016e33
- (_Bool)shouldShowData:(id)arg1;	// IMP=0x0000000000016d0e
- (_Bool)shouldShowPlanSection:(id)arg1;	// IMP=0x0000000000016c80
- (id)usageGraphSpecifierForSection:(id)arg1;	// IMP=0x0000000000016336
- (id)specifiers;	// IMP=0x0000000000014b16
- (_Bool)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1;	// IMP=0x0000000000014662
- (_Bool)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;	// IMP=0x0000000000014204
- (_Bool)hasMultipleDevicesOfTheSameType;	// IMP=0x0000000000013d94
- (id)planCategorySectionLabelForPlanMetrics:(id)arg1;	// IMP=0x0000000000013c25
- (id)deviceTypeSectionLabelForAccountMetrics:(id)arg1;	// IMP=0x0000000000013a51
- (id)usageSections;	// IMP=0x0000000000012d3b
- (id)usageCategories;	// IMP=0x000000000001295b
- (id)barGraphColors;	// IMP=0x0000000000012764
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x000000000001275c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000125c3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000124e0
- (void)carrierSpaceChanged;	// IMP=0x0000000000012421
- (void)simStatusChanged;	// IMP=0x00000000000122ed

@end
