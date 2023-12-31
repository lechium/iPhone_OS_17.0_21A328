//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInputViewController.h"

@class NSArray, NSString, UIFindSession, UIResponder, UITextSearchOptions, _UIFindNavigatorView;
@protocol _UIFindNavigatorViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorViewController : UIInputViewController
{
    long long _assistantBarStyle;	// 416 = 0x1a0
    _UIFindNavigatorView *_findNavigatorView;	// 424 = 0x1a8
    NSArray *_extraKeyCommands;	// 432 = 0x1b0
    NSString *_lastSearchQuery;	// 440 = 0x1b8
    UITextSearchOptions *_lastSearchOptions;	// 448 = 0x1c0
    _Bool _performingReplacement;	// 456 = 0x1c8
    UIFindSession *_findSession;	// 464 = 0x1d0
    id <_UIFindNavigatorViewControllerDelegate> _findNavigatorViewControllerDelegate;	// 472 = 0x1d8
    UIResponder *_parentResponder;	// 480 = 0x1e0
    unsigned long long _tintTechnique;	// 488 = 0x1e8
}

- (void).cxx_destruct;	// IMP=0x000000000087246c
@property(nonatomic) unsigned long long tintTechnique; // @synthesize tintTechnique=_tintTechnique;
@property(nonatomic) __weak UIResponder *parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <_UIFindNavigatorViewControllerDelegate> findNavigatorViewControllerDelegate; // @synthesize findNavigatorViewControllerDelegate=_findNavigatorViewControllerDelegate;
@property(retain, nonatomic) UIFindSession *findSession; // @synthesize findSession=_findSession;
- (double)preferredWidthForTraitCollection:(id)arg1;	// IMP=0x000000000087234f
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x000000000087229b
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x0000000000872293
- (_Bool)allowsCompactAssistantBar;	// IMP=0x000000000087228b
- (_Bool)findNavigatorShouldShowReplacementOption:(id)arg1;	// IMP=0x000000000087226e
- (void)findNavigatorDidInvalidateSearchSession:(id)arg1;	// IMP=0x0000000000872195
- (void)findNavigator:(id)arg1 didInvokeNextResultInDirection:(long long)arg2;	// IMP=0x00000000008720ab
- (void)findNavigator:(id)arg1 didInvokeReplaceReplacingAll:(_Bool)arg2;	// IMP=0x0000000000871de9
- (void)findNavigator:(id)arg1 didChangeMode:(long long)arg2;	// IMP=0x0000000000871d91
- (void)updateViewForActiveFindSession;	// IMP=0x0000000000871c5b
- (void)_replaceFieldDidChange:(id)arg1;	// IMP=0x0000000000871bc3
- (void)_didEnterReplacementString:(id)arg1;	// IMP=0x0000000000871ba4
- (void)_searchTextFieldChanged:(id)arg1;	// IMP=0x0000000000871ab5
- (void)_performAutoSearch;	// IMP=0x0000000000871994
- (void)_performSearchWithQuery:(id)arg1 options:(id)arg2;	// IMP=0x00000000008718a8
- (void)_didEnterSearchQuery:(id)arg1;	// IMP=0x00000000008717d9
- (void)_handleInsertNewline:(id)arg1;	// IMP=0x0000000000871684
- (void)_handleSearchReturn:(id)arg1;	// IMP=0x00000000008715fa
- (void)_handleHighlightPreviousResult:(id)arg1;	// IMP=0x00000000008715d8
- (void)_handleDone:(id)arg1;	// IMP=0x000000000087159c
- (void)_recomputeConfiguredSearchOptions;	// IMP=0x0000000000871485
- (id)_configuredSearchOptions;	// IMP=0x0000000000871468
- (void)_updateReplaceButtonEnabled;	// IMP=0x0000000000871355
- (void)_updateResultsCount;	// IMP=0x0000000000871101
- (void)_updateReturnKeyType;	// IMP=0x0000000000871031
- (_Bool)_dismissesKeyboardOnReturn;	// IMP=0x0000000000870fe9
- (void)findPrevious:(id)arg1;	// IMP=0x0000000000870fc7
- (void)findNext:(id)arg1;	// IMP=0x0000000000870fa8
- (void)findAndReplace:(id)arg1;	// IMP=0x0000000000870f0c
- (void)find:(id)arg1;	// IMP=0x0000000000870ec4
- (void)_textViewDidChangeNotification:(id)arg1;	// IMP=0x0000000000870dc6
- (void)_windowDidChangeToFirstResponder:(id)arg1;	// IMP=0x0000000000870da8
- (void)_finishSearchingOnResignIfNecessary;	// IMP=0x0000000000870c64
- (void)resignFirstResponderAndFinishSearching;	// IMP=0x0000000000870bf9
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000870bf1
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x0000000000870b67
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x0000000000870a7b
- (id)keyCommands;	// IMP=0x0000000000870904
- (id)undoManager;	// IMP=0x00000000008708a9
- (id)parentFocusEnvironment;	// IMP=0x00000000008707ee
- (id)nextResponder;	// IMP=0x0000000000870768
- (void)setAssistantBarStyle:(long long)arg1;	// IMP=0x000000000087065f
@property(readonly, nonatomic) _Bool hostedInKeyboard;
- (void)viewDidLoad;	// IMP=0x00000000008701fe
- (void)loadView;	// IMP=0x0000000000870174
@property(readonly, nonatomic) _UIFindNavigatorView *findNavigatorView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *displayedCandidates;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

