//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSObject, NSString, UIImageView, UITableViewCell, UIWebClip, WKWebView;
@protocol _SFWebClipViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SFWebClipViewController : UITableViewController
{
    WKWebView *_webView;	// 8 = 0x8
    UITableViewCell *_titleCell;	// 16 = 0x10
    UITableViewCell *_addressCell;	// 24 = 0x18
    UIImageView *_iconImageView;	// 32 = 0x20
    _Bool _suspendAfterDismiss;	// 40 = 0x28
    _Bool _delegateNotifiedOfResult;	// 41 = 0x29
    _Bool _showingDemoModeAlert;	// 42 = 0x2a
    _Bool _canEditAndSave;	// 43 = 0x2b
    UIWebClip *_webClip;	// 48 = 0x30
    NSObject<_SFWebClipViewControllerDelegate> *_delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a2226
@property(nonatomic) _Bool canEditAndSave; // @synthesize canEditAndSave=_canEditAndSave;
@property(nonatomic) __weak NSObject<_SFWebClipViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (_Bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x00000000001a21ba
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;	// IMP=0x00000000001a2167
- (_Bool)_shouldUseTranslucentAppearance;	// IMP=0x00000000001a212e
- (void)dealloc;	// IMP=0x00000000001a207c
- (void)_textFieldChanged:(id)arg1;	// IMP=0x00000000001a1f63
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000001a1f2d
- (_Bool)_canAddWebClip;	// IMP=0x00000000001a1ecd
- (_Bool)createAndAddToHomeScreenBundle;	// IMP=0x00000000001a1c88
- (_Bool)_showDemoModeFeatureDisabledAlert;	// IMP=0x00000000001a1af2
- (void)_add;	// IMP=0x00000000001a1859
- (void)_cancel;	// IMP=0x00000000001a17ee
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001a16f8
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001a160f
- (struct CGPoint)_centerForIconView;	// IMP=0x00000000001a13fe
- (struct UIEdgeInsets)_cellInset;	// IMP=0x00000000001a135a
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000000001a1352
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001a12bd
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001a12af
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a11c6
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a1145
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000001a10cb
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001a108b
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001a1080
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001a0f83
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001a0f05
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a0dcf
- (void)updateUIAnimated:(_Bool)arg1;	// IMP=0x00000000001a093c
- (void)viewDidLoad;	// IMP=0x00000000001a08f9
- (void)loadView;	// IMP=0x00000000001a0638
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000001a0465

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

