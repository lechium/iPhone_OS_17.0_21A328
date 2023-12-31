//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class AFUserUtterance, NSArray, NSString, SRCompactEditableUtteranceView, SRPreferences, UITableView, UITextView;
@protocol SRCompactEditableUtteranceViewControllerDataSource, SRCompactEditableUtteranceViewControllerDelegate;

@interface SRCompactEditableUtteranceViewController : UIViewController
{
    SRCompactEditableUtteranceView *_editableUtteranceView;	// 8 = 0x8
    AFUserUtterance *_userUtterance;	// 16 = 0x10
    NSArray *_alternativeUtterances;	// 24 = 0x18
    id <SRCompactEditableUtteranceViewControllerDataSource> _dataSource;	// 32 = 0x20
    SRPreferences *_userPreferences;	// 40 = 0x28
    UITextView *_textViewForFooterText;	// 48 = 0x30
    _Bool _shouldShowTip;	// 56 = 0x38
    _Bool _didUpdateShowTipCount;	// 57 = 0x39
    id <SRCompactEditableUtteranceViewControllerDelegate> _delegate;	// 64 = 0x40
    UITableView *_alternativesTableView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000801a3
@property(nonatomic, getter=_didUpdateShowTipCount, setter=_setDidUpdateShowTipCount:) _Bool didUpdateShowTipCount; // @synthesize didUpdateShowTipCount=_didUpdateShowTipCount;
@property(nonatomic, getter=_shouldShowTip, setter=_setShouldShowTip:) _Bool shouldShowTip; // @synthesize shouldShowTip=_shouldShowTip;
@property(retain, nonatomic, getter=_alternativesTableView, setter=_setAlternativesTableView:) UITableView *alternativesTableView; // @synthesize alternativesTableView=_alternativesTableView;
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <SRCompactEditableUtteranceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didShowTip;	// IMP=0x001000000008009c
- (id)_attributedStringForTip;	// IMP=0x001000000007ff19
- (_Bool)_shouldShowAlternativesTableView;	// IMP=0x001000000007fef5
- (void)_setupAlternativesTableView;	// IMP=0x001000000007fc1e
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x001000000007fbb3
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000007fba9
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000007fb24
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x001000000007fa82
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x001000000007f7c9
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x001000000007f728
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x001000000007f64b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000007f46d
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000007f462
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000007f437
- (void)editableUtteranceView:(id)arg1 didFinishEditingWithText:(id)arg2;	// IMP=0x001000000007f3cc
- (void)didResignFirstResponderFromUtteranceView:(id)arg1;	// IMP=0x001000000007f380
- (void)willBeginEditingFromUtteranceView:(id)arg1;	// IMP=0x001000000007f334
- (void)editableUtteranceView:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f2c9
- (void)loadView;	// IMP=0x001000000007f021
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000007efd8
- (id)initWithUserUtterance:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3 preferences:(id)arg4;	// IMP=0x001000000007eeae
- (id)initWithUserUtterance:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;	// IMP=0x001000000007ee0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

