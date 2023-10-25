//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AKController, NSArray, NSSet, NSString, UITableView;
@protocol AKAttributePickerViewControllerDelegate;

@interface AKAttributePickerViewController : UIViewController
{
    AKController *_controller;	// 8 = 0x8
    id <AKAttributePickerViewControllerDelegate> _delegate;	// 16 = 0x10
    NSSet *_selectedAnnotations;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    NSArray *_rowViews;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009b2ac
@property(retain) NSArray *rowViews; // @synthesize rowViews=_rowViews;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSSet *selectedAnnotations; // @synthesize selectedAnnotations=_selectedAnnotations;
@property(nonatomic) __weak id <AKAttributePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000009b15d
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000009afcd
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000009af89
- (void)revalidateItems;	// IMP=0x000000000009adbd
- (void)_lineAttributesChanged:(id)arg1;	// IMP=0x000000000009ad0a
- (void)_attributeStyleChanged:(id)arg1;	// IMP=0x000000000009ac85
- (void)_updatePreferredContentSize;	// IMP=0x000000000009a9f0
- (void)updateLayoutForSelectedAnnotations;	// IMP=0x000000000009a49f
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000009a41d
- (void)viewDidLoad;	// IMP=0x000000000009a19d
- (id)initWithController:(id)arg1 selectedAnnotations:(id)arg2;	// IMP=0x000000000009a0ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
