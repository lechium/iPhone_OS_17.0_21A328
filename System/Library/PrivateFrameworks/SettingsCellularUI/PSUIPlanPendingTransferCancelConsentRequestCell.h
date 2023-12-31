//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell
{
    CTCellularPlanPendingTransfer *_planPendingTransfer;	// 120 = 0x78
    CTCellularPlanManager *_cellularPlanManager;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000033394
@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
- (id)getLogger;	// IMP=0x000000000003332a
- (void)cancelPressed;	// IMP=0x00000000000331f2
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000328a7

@end

