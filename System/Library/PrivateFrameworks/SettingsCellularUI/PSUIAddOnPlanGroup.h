//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCellularPlanManager, NSMutableArray, NSString, PSListController, PSSpecifier, PSUICellularPlanManagerCache, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUIAddOnPlanGroup : NSObject
{
    PSUICellularPlanManagerCache *_cellularPlanManager;	// 8 = 0x8
    CTCellularPlanManager *_ctCellularPlanManager;	// 16 = 0x10
    PSSpecifier *_groupSpecifier;	// 24 = 0x18
    NSString *_carrierName;	// 32 = 0x20
    NSMutableArray *_remotePlansSpecifiers;	// 40 = 0x28
    PSListController *_listController;	// 48 = 0x30
    TSSIMSetupFlow *_flow;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006027f
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (id)getLogger;	// IMP=0x0000000000060215
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x0000000000060101
- (void)_handleAddRemotePlan:(id)arg1;	// IMP=0x000000000005fac2
- (void)_addButtonPressed:(id)arg1;	// IMP=0x000000000005f55b
- (id)specifiersForRemotePlans;	// IMP=0x000000000005f143
- (id)specifiers;	// IMP=0x000000000005ef6d
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 planManager:(id)arg3 ctPlanManager:(id)arg4;	// IMP=0x000000000005ee7e
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x000000000005edbe
- (id)init;	// IMP=0x000000000005ed81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

