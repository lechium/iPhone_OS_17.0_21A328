//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUStorePageViewController.h>

@class NSString, SKProductPageViewController, SUBarButtonItem;

__attribute__((visibility("hidden")))
@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController
{
    SUBarButtonItem *_cancelButtonItem;	// 8 = 0x8
    NSString *_cancelButtonTitle;	// 16 = 0x10
    SKProductPageViewController *_productPageViewController;	// 24 = 0x18
    _Bool _showsCancelButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001e7d7
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) __weak SKProductPageViewController *productPageViewController; // @synthesize productPageViewController=_productPageViewController;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void)_storeSheetCancelButtonAction:(id)arg1;	// IMP=0x000000000001e729
- (id)_cancelButtonItem;	// IMP=0x000000000001e5f3
- (void)_addCancelButtonToNavigationItem:(id)arg1;	// IMP=0x000000000001e531
- (void)viewWillLayoutSubviews;	// IMP=0x000000000001e469
- (void)resetNavigationItem:(id)arg1;	// IMP=0x000000000001e3b2
- (_Bool)presentDialogForError:(id)arg1 pendUntilVisible:(_Bool)arg2;	// IMP=0x000000000001e2bf
- (void)handleFailureWithError:(id)arg1;	// IMP=0x000000000001e21b
- (void)dealloc;	// IMP=0x000000000001e19e

@end

