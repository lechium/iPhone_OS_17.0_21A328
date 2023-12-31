//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class CUIKCalendarModel, NSString, SearchResultsViewController, UISearchBar;

@interface SearchResultsNavigationController : UINavigationController
{
    _Bool _initialPresentationHasCompleted;	// 8 = 0x8
    SearchResultsViewController *_searchResultsViewController;	// 16 = 0x10
    UISearchBar *_searchBar;	// 24 = 0x18
    CUIKCalendarModel *_model;	// 32 = 0x20
}

+ (id)_todayLocalizedString;	// IMP=0x0020000000143348
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x001000000014190b
- (void).cxx_destruct;	// IMP=0x002000000014343e
@property(nonatomic) _Bool initialPresentationHasCompleted; // @synthesize initialPresentationHasCompleted=_initialPresentationHasCompleted;
@property(retain, nonatomic) CUIKCalendarModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) SearchResultsViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
- (void)todayPressed;	// IMP=0x0010000000143234
- (void)_setSearchBarEnabledState:(_Bool)arg1;	// IMP=0x0010000000142e43
- (void)_updateTodayButtonPosition;	// IMP=0x0010000000142be9
- (void)_showSearchBar;	// IMP=0x0010000000142944
- (void)_hideSearchBar;	// IMP=0x001000000014282d
- (void)animateShowingSearchBarAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001426ad
- (void)hideSearchBarForNavigationTransitionAnimated:(_Bool)arg1;	// IMP=0x00100000001424e1
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000001422c3
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00100000001421f9
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000141913
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000141774
- (void)viewDidLoad;	// IMP=0x00100000001416dc
- (void)dealloc;	// IMP=0x0010000000141667
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x0010000000141560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

