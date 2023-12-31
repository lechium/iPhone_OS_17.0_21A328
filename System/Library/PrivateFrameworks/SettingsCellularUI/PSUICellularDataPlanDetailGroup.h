//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PSListController, PSSpecifier, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanDetailGroup : NSObject
{
    TSSIMSetupFlow *_flow;	// 8 = 0x8
    PSListController *_listController;	// 16 = 0x10
    PSSpecifier *_groupSpecifier;	// 24 = 0x18
}

+ (void)configurePlanSpecifiers:(id)arg1 planItem:(id)arg2 target:(id)arg3;	// IMP=0x0010000000064638
+ (id)accountManageButtonForPlanItem:(id)arg1 target:(id)arg2;	// IMP=0x0010000000064630
+ (id)specifiersFromCellularPlanItem:(id)arg1 target:(id)arg2;	// IMP=0x00100000000644df
- (void).cxx_destruct;	// IMP=0x0000000000065dc1
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (id)getLogger;	// IMP=0x0000000000065d53
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x0000000000065c2d
- (void)handleRemovePlanTapped:(id)arg1;	// IMP=0x000000000006563b
- (void)handleAccountSettingsTapped:(id)arg1;	// IMP=0x00000000000652ef
- (void)managePlanPressed:(id)arg1;	// IMP=0x0000000000064c1a
- (id)removeCellularPlanConfirmationTitle:(id)arg1;	// IMP=0x0000000000064aaa
- (id)removeCellularPlanConfirmationMessage:(id)arg1;	// IMP=0x000000000006493a
- (id)localizedManageAccountAlertTitle:(id)arg1;	// IMP=0x0000000000064700
- (_Bool)isFlowRunning;	// IMP=0x00000000000646f2
- (id)lastUpdatedText;	// IMP=0x00000000000646ea
- (id)specifiers;	// IMP=0x00000000000646e2
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x000000000006463e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

