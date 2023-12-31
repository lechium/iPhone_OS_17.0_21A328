//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class TFFeedbackFormPresenter, TFFeedbackFormViewDataSource, UIActivityIndicatorView, UIBarButtonItem, UITableView;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewController : UIViewController
{
    TFFeedbackFormPresenter *_presenter;	// 8 = 0x8
    TFFeedbackFormViewDataSource *_viewDataSource;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    UIBarButtonItem *_submitButtonItem;	// 32 = 0x20
    UIBarButtonItem *_activityItem;	// 40 = 0x28
    UIActivityIndicatorView *_activityIndicatorView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000007643
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) UIBarButtonItem *activityItem; // @synthesize activityItem=_activityItem;
@property(readonly, nonatomic) UIBarButtonItem *submitButtonItem; // @synthesize submitButtonItem=_submitButtonItem;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) TFFeedbackFormViewDataSource *viewDataSource; // @synthesize viewDataSource=_viewDataSource;
@property(readonly, nonatomic) TFFeedbackFormPresenter *presenter; // @synthesize presenter=_presenter;
- (void)submitButtonPressed:(id)arg1;	// IMP=0x0000000000007548
- (void)adjustContentOffsetForKeyboardNotification:(id)arg1;	// IMP=0x00000000000073c5
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x00000000000072eb
- (void)showSubmitButtonForSubmissionPendingState:(_Bool)arg1;	// IMP=0x000000000000721c
- (void)reloadEntriesAtIndexPaths:(id)arg1;	// IMP=0x000000000000719e
- (void)reloadEntryGroupsAtIndices:(id)arg1;	// IMP=0x0000000000007120
- (void)prepareForEntryType:(unsigned long long)arg1;	// IMP=0x0000000000007090
- (void)setNavigationItemTitle:(id)arg1;	// IMP=0x0000000000007027
- (void)unregisterNotifications;	// IMP=0x0000000000006f7b
- (void)registerNotifications;	// IMP=0x0000000000006ec1
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000006e57
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000006e16
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000006da7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000006d66
- (void)viewDidLoad;	// IMP=0x0000000000006cfc
- (void)loadView;	// IMP=0x00000000000069cc
- (id)initWithPresenter:(id)arg1;	// IMP=0x0000000000006848

@end

