//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class COSMigrationChoiceDevicePickerViewCell, COSMigrationChoiceFooterView, COSMigrationChoiceHeaderView, NSString;
@protocol COSBuddyControllerDelegate;

@interface COSMigrationChoiceSetupController : UITableViewController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
    COSMigrationChoiceHeaderView *_headerView;	// 16 = 0x10
    COSMigrationChoiceFooterView *_footerView;	// 24 = 0x18
    COSMigrationChoiceDevicePickerViewCell *_listCell;	// 32 = 0x20
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x00200000000cf592
- (void).cxx_destruct;	// IMP=0x00200000000cfbe6
@property(retain, nonatomic) COSMigrationChoiceDevicePickerViewCell *listCell; // @synthesize listCell=_listCell;
@property(retain, nonatomic) COSMigrationChoiceFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) COSMigrationChoiceHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000000cfb2d
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000000cfb25
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000cfaeb
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;	// IMP=0x00100000000cfaba
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x00100000000cfa89
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00100000000cfa74
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00100000000cfa5f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000000cfa12
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000000cfa07
- (void)userTappedContinue:(id)arg1;	// IMP=0x00100000000cf964
- (void)controllerCancelled:(id)arg1;	// IMP=0x00100000000cf941
- (void)viewDidLoad;	// IMP=0x00100000000cf728
- (id)init;	// IMP=0x00100000000cf5d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

