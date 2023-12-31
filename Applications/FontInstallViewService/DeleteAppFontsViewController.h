//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DeleteAppFontsMainController, NSString, UIButton, UILabel, UITableView, UIView;

@interface DeleteAppFontsViewController : UIViewController
{
    DeleteAppFontsMainController *_mainController;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UILabel *_deleteLabel;	// 24 = 0x18
    UILabel *_deleteDescriptionLabel;	// 32 = 0x20
    UITableView *_fontsTableView;	// 40 = 0x28
    UIButton *_deleteButton;	// 48 = 0x30
    UIButton *_dontDeleteButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000002f75
@property(nonatomic) __weak UIButton *dontDeleteButton; // @synthesize dontDeleteButton=_dontDeleteButton;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak UITableView *fontsTableView; // @synthesize fontsTableView=_fontsTableView;
@property(nonatomic) __weak UILabel *deleteDescriptionLabel; // @synthesize deleteDescriptionLabel=_deleteDescriptionLabel;
@property(nonatomic) __weak UILabel *deleteLabel; // @synthesize deleteLabel=_deleteLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak DeleteAppFontsMainController *mainController; // @synthesize mainController=_mainController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000002d2f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000002cc7
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000002cbc
- (void)dontDelete:(id)arg1;	// IMP=0x0010000000002c86
- (void)doDelete:(id)arg1;	// IMP=0x0010000000002c4d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000002c1e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000026fe
- (void)viewDidLoad;	// IMP=0x00100000000026cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

