//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDocumentBrowserViewController.h>

@class DOCConcreteLocation, DOCSourceObserver, NSArray, NSString, RBSAssertion, UINavigationController, UIScrollView, UITapGestureRecognizer, UITraitCollection, UIViewController, _TtC5Files16DOCActionManager, _TtC5Files16DOCPickerContext, _TtC5Files18DOCDocumentManager, _TtC5Files19DOCSearchController, _TtC5Files21DOCFileProviderSource, _TtC5Files21DOCPickerFilenameView, _TtC5Files22DOCHierarchyController, _TtC5Files22DOCLocationChangePacer, _TtC5Files22DOCSourceOrderObserver, _TtC5Files25DOCItemCollectionViewPool, _TtC5Files27DOCDisplayModeChangeHandler, _TtC5Files29DOCBrowserContainerController, _TtC5Files30DOCBrowserNavigationDataSource;
@protocol DOCFullDocumentManagerViewControllerDelegate, UIViewControllerTransitionCoordinator, _TtP5Files25DOCContentOverlayDimmable_, _TtP5Files27DOCScannedDocumentReceiving_;

@interface DOCFullDocumentManagerViewController : UIDocumentBrowserViewController
{
    UITapGestureRecognizer *_multiTapDebugGestureRecognizer;	// 8 = 0x8
    int _userChangedDefaultSaveLocationToken;	// 16 = 0x10
    _Bool _viewDidLoadResetLocationDisabled;	// 20 = 0x14
    _Bool _resetNavBarScrollEdgeAfterPop;	// 21 = 0x15
    _Bool _updateLocationsAfterPopTransition;	// 22 = 0x16
    _Bool _isActivated;	// 23 = 0x17
    _Bool _canGoToEnclosingFolder;	// 24 = 0x18
    _Bool _needsFirstResponder;	// 25 = 0x19
    _Bool _environmentSupportsColumnView;	// 26 = 0x1a
    NSString *_shortDebugID;	// 32 = 0x20
    UINavigationController *_internalNavigationController;	// 40 = 0x28
    UIViewController *_rootViewController;	// 48 = 0x30
    id <DOCFullDocumentManagerViewControllerDelegate> _fullDocumentManagerDelegate;	// 56 = 0x38
    _TtC5Files22DOCHierarchyController *_hierarchyController;	// 64 = 0x40
    _TtC5Files18DOCDocumentManager *_documentManager;	// 72 = 0x48
    _TtC5Files16DOCActionManager *_actionManager;	// 80 = 0x50
    _TtC5Files27DOCDisplayModeChangeHandler *_displayModeHandler;	// 88 = 0x58
    _TtC5Files30DOCBrowserNavigationDataSource *_dataSource;	// 96 = 0x60
    _TtC5Files25DOCItemCollectionViewPool *_itemCollectionViewPool;	// 104 = 0x68
    _TtC5Files22DOCLocationChangePacer *_locationChangePacer;	// 112 = 0x70
    DOCSourceObserver *_sourceObserver;	// 120 = 0x78
    _TtC5Files22DOCSourceOrderObserver *_sourceOrderObserver;	// 128 = 0x80
    _TtC5Files21DOCFileProviderSource *_currentGoToFileProviderSource;	// 136 = 0x88
    NSArray *_goToFileProviderSources;	// 144 = 0x90
    id _goToFileProviderCandidateSource;	// 152 = 0x98
    id _goToHiddenFileProviderCandidateSource;	// 160 = 0xa0
    _TtC5Files16DOCPickerContext *_pickerContext;	// 168 = 0xa8
    _TtC5Files21DOCPickerFilenameView *;	// 176 = 0xb0
    UIViewController *_pickerPresentingController;	// 184 = 0xb8
    RBSAssertion *_processAssertion;	// 192 = 0xc0
    NSArray *_droppedLocationsAfterSwitchingDisplayMode;	// 200 = 0xc8
    id __postSearchInitializationBufferStorage;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x001000000000940e
@property(nonatomic) _Bool environmentSupportsColumnView; // @synthesize environmentSupportsColumnView=_environmentSupportsColumnView;
@property(nonatomic) _Bool needsFirstResponder; // @synthesize needsFirstResponder=_needsFirstResponder;
@property(retain, nonatomic) id _postSearchInitializationBufferStorage; // @synthesize _postSearchInitializationBufferStorage=__postSearchInitializationBufferStorage;
@property(retain, nonatomic) NSArray *droppedLocationsAfterSwitchingDisplayMode; // @synthesize droppedLocationsAfterSwitchingDisplayMode=_droppedLocationsAfterSwitchingDisplayMode;
@property(nonatomic) _Bool canGoToEnclosingFolder; // @synthesize canGoToEnclosingFolder=_canGoToEnclosingFolder;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) _Bool updateLocationsAfterPopTransition; // @synthesize updateLocationsAfterPopTransition=_updateLocationsAfterPopTransition;
@property(retain, nonatomic) RBSAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) UIViewController *pickerPresentingController; // @synthesize pickerPresentingController=_pickerPresentingController;
@property(retain, nonatomic) _TtC5Files21DOCPickerFilenameView *pickerFilenameView; // @synthesize pickerFilenameView=_pickerFilenameView;
@property(retain, nonatomic) _TtC5Files16DOCPickerContext *pickerContext; // @synthesize pickerContext=_pickerContext;
@property(retain, nonatomic) id goToHiddenFileProviderCandidateSource; // @synthesize goToHiddenFileProviderCandidateSource=_goToHiddenFileProviderCandidateSource;
@property(retain, nonatomic) id goToFileProviderCandidateSource; // @synthesize goToFileProviderCandidateSource=_goToFileProviderCandidateSource;
@property(copy, nonatomic) NSArray *goToFileProviderSources; // @synthesize goToFileProviderSources=_goToFileProviderSources;
@property(retain, nonatomic) _TtC5Files21DOCFileProviderSource *currentGoToFileProviderSource; // @synthesize currentGoToFileProviderSource=_currentGoToFileProviderSource;
@property(retain, nonatomic) _TtC5Files22DOCSourceOrderObserver *sourceOrderObserver; // @synthesize sourceOrderObserver=_sourceOrderObserver;
@property(nonatomic) __weak DOCSourceObserver *sourceObserver; // @synthesize sourceObserver=_sourceObserver;
@property(readonly) _TtC5Files22DOCLocationChangePacer *locationChangePacer; // @synthesize locationChangePacer=_locationChangePacer;
@property(readonly) _TtC5Files25DOCItemCollectionViewPool *itemCollectionViewPool; // @synthesize itemCollectionViewPool=_itemCollectionViewPool;
@property(readonly) _TtC5Files30DOCBrowserNavigationDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) _TtC5Files27DOCDisplayModeChangeHandler *displayModeHandler; // @synthesize displayModeHandler=_displayModeHandler;
@property(retain) _TtC5Files16DOCActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain) _TtC5Files18DOCDocumentManager *documentManager; // @synthesize documentManager=_documentManager;
@property(retain) _TtC5Files22DOCHierarchyController *hierarchyController; // @synthesize hierarchyController=_hierarchyController;
@property(nonatomic) __weak id <DOCFullDocumentManagerViewControllerDelegate> fullDocumentManagerDelegate; // @synthesize fullDocumentManagerDelegate=_fullDocumentManagerDelegate;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly) UINavigationController *internalNavigationController; // @synthesize internalNavigationController=_internalNavigationController;
- (void)resetNavigationStepwise;	// IMP=0x0010000000008f2d
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(_Bool)arg2 updateLastUsedDate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000088f5
- (void)columnViewController:(id)arg1 didShowItemControllers:(id)arg2;	// IMP=0x0010000000008524
- (void)columnViewController:(id)arg1 willShowItemControllers:(id)arg2;	// IMP=0x001000000000851e
- (id)_navigationControllerDimmingColorForParallaxTransition:(id)arg1;	// IMP=0x001000000000847e
- (_Bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;	// IMP=0x0010000000008411
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000007c91
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000007c74
- (void)endForcedNavigationTransitionChrome:(id)arg1 appearingViewController:(id)arg2;	// IMP=0x0010000000007c13
- (void)beginForcedNavigationTransitionChromeIfNeeded:(id)arg1 appearingViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000007a29
- (_Bool)navigationController:(id)arg1 canPop:(id)arg2;	// IMP=0x0010000000007a17
- (void)dismissSearch;	// IMP=0x00100000000079c4
- (void)setCustomActions:(id)arg1;	// IMP=0x0010000000007983
@property(readonly, nonatomic) _Bool prefersTabBarHidden;
- (_Bool)_canPopViewController;	// IMP=0x00100000000077db
@property(readonly) _TtC5Files19DOCSearchController *effectiveSearchController;
@property(readonly) _TtC5Files29DOCBrowserContainerController *effectiveBrowserViewController;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000071df
- (void)setAdditionalLeadingNavigationBarButtonItems:(id)arg1;	// IMP=0x0010000000006fa3
- (void)setAdditionalTrailingNavigationBarButtonItems:(id)arg1;	// IMP=0x0010000000006d2c
- (void)revealLocation:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006b97
- (void)showLocation:(id)arg1 fromRootAnimated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006a68
- (void)showLocation:(id)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000693d
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0010000000006929
- (id)currentItemCollectionViewController;	// IMP=0x00100000000068a6
- (id)currentViewController;	// IMP=0x0010000000006856
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000006709
- (void)setAllowsPickingMultipleItems:(_Bool)arg1;	// IMP=0x001000000000632b
- (void)_navigateBack;	// IMP=0x00100000000062a2
- (_Bool)_canNavigateBack;	// IMP=0x001000000000622f
- (void)setDelegate:(id)arg1;	// IMP=0x001000000000619b
- (void)viewDidLoad;	// IMP=0x0010000000005e5b
- (_Bool)_defaultLocationIsRecentsTab;	// IMP=0x0010000000005db5
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000005ce3
- (void)dealloc;	// IMP=0x0010000000005bb1
@property(readonly, copy) NSString *description;
@property(retain) NSString *shortDebugID; // @synthesize shortDebugID=_shortDebugID;
- (void)doc_commonInitWithSourceObserver:(id)arg1;	// IMP=0x001000000000529f
- (id)initWithConfiguration:(id)arg1 sourceObserver:(id)arg2;	// IMP=0x001000000000522d
- (void)preloadLaunchServiceDatabase;	// IMP=0x0010000000005144
@property(nonatomic, readonly) id <_TtP5Files25DOCContentOverlayDimmable_> dimmable;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x001000000007bf80
- (void)documentPickerWasCancelled:(id)arg1;	// IMP=0x001000000007be60
- (void)importScannedDocumentAt:(id)arg1 presentingController:(id)arg2;	// IMP=0x001000000007bd30
- (void)createNewFolderIn:(id)arg1 moving:(id)arg2;	// IMP=0x001000000007a300
- (void)beginRenameOf:(id)arg1;	// IMP=0x001000000007a100
- (_Bool)infoPanelPreviewingMultipleItems;	// IMP=0x0010000000078c80
- (_Bool)isBrowserCurrentLocation:(id)arg1;	// IMP=0x0010000000078aa0
- (void)beginLoadingAdditionalParents:(CDUnknownBlockType)arg1;	// IMP=0x0010000000078850
- (_Bool)canLoadAdditionalParents;	// IMP=0x00100000000787f0
- (void)didFinishGatheringItemsAndThumbnailsWithSender:(id)arg1;	// IMP=0x00100000000787a0
- (void)didToggleEditStateWithEditing:(_Bool)arg1 in:(id)arg2;	// IMP=0x00100000000781d0
- (void)didIndicateCancelPicker;	// IMP=0x00100000000781a0
- (void)didTapLocationOf:(id)arg1;	// IMP=0x0010000000077e60
- (void)didCommitPreviewOf:(id)arg1;	// IMP=0x0010000000076bf0
- (void)didSelectLocation:(id)arg1 atParentLocation:(id)arg2;	// IMP=0x0010000000076620
- (void)didSelectItem:(id)arg1 atParentLocation:(id)arg2 wasAlreadySelected:(_Bool)arg3 onlyRevealIfColumn:(_Bool)arg4;	// IMP=0x0010000000075e40
- (_Bool)establishFirstResponder;	// IMP=0x001000000007d240
- (void)updateNavigationBarPrefersLargeTitles;	// IMP=0x00100000000854b0
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000085390
- (void)splitViewWillChangeFrom:(long long)arg1 to:(long long)arg2 alongsideCoordinator:(id)arg3;	// IMP=0x0010000000085220
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000084f80
- (void)updateAvailableDisplayModesWithAnimated:(_Bool)arg1;	// IMP=0x0010000000084ef0
- (void)didChangeEnvironmentSupportsColumnView;	// IMP=0x0010000000084af0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000084a60
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000084970
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000084800
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000084780
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00100000000843a0
- (void)swift_viewDidLoad;	// IMP=0x0010000000084310
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000083eb0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000083c90
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)updateRelatedViewControllersWithCurrentHierarchy;	// IMP=0x00100000000833d0
@property(nonatomic, readonly) DOCConcreteLocation *displayedRootLocation;
- (void)activateContainerViewControllersIfNeeded;	// IMP=0x0010000000082f30
- (void)itemCollectionViewControllerDidLoad;	// IMP=0x0010000000081680
- (void)fullDocumentManagerViewControllerDidFinishLoading:(id)arg1;	// IMP=0x0010000000081600
- (void)swift_commonInitWith:(id)arg1;	// IMP=0x00100000000812c0
@property(nonatomic, readonly) UIScrollView *primaryContentScrollView;
- (void)swift_navigationController:(id)arg1 didShow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000085e30
- (void)swift_navigationController:(id)arg1 willShow:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000085da0
- (void)didDismissSearchResultsController:(id)arg1;	// IMP=0x00100000000874f0
- (void)willDismissSearchResultsController:(id)arg1;	// IMP=0x00100000000874a0
- (void)didPresentSearchResultsController:(id)arg1;	// IMP=0x00100000000873a0
- (void)willPresentSearchResultsController:(id)arg1;	// IMP=0x0010000000087350
- (void)didDismissSearchController:(id)arg1;	// IMP=0x00100000000871a0
- (void)willDismissSearchController:(id)arg1;	// IMP=0x0010000000086c30
- (void)didPresentSearchController:(id)arg1;	// IMP=0x0010000000086a40
- (void)willPresentSearchController:(id)arg1;	// IMP=0x00100000000869f0
@property(nonatomic, readonly) UITraitCollection *traitCollectionExpectedForSearchPresentation;
- (void)performShowDebugMenu:(id)arg1;	// IMP=0x0010000000182860
- (void)presentDebugMenuForMultipleTaps:(id)arg1;	// IMP=0x00100000001827f0
- (void)presentDebugMenuForLongPress:(id)arg1;	// IMP=0x0010000000182770
- (void)installDebugMenuGesture;	// IMP=0x0010000000182000
- (void)invokeDebugGathering;	// IMP=0x0010000000181e30
- (void)documentCameraViewController:(id)arg1 didFinishWithScan:(id)arg2;	// IMP=0x001000000025a7b0
- (void)documentCameraViewControllerDidCancel:(id)arg1;	// IMP=0x001000000025a640
@property(nonatomic, readonly) id <_TtP5Files27DOCScannedDocumentReceiving_> doc_documentScannerReceivingTarget;
- (void)updateCustomActions;	// IMP=0x00100000002739f0
- (long long)pickerOperationFor:(id)arg1;	// IMP=0x0010000000280030
- (void)didConfirmPickIn:(id)arg1;	// IMP=0x001000000027f150
- (void)didTapOnUnselectableItem:(id)arg1;	// IMP=0x001000000027c120
- (void)validateCommand:(id)arg1;	// IMP=0x0010000000320de0
- (void)performMoveHere:(id)arg1;	// IMP=0x00100000003208a0
- (void)performDismiss:(id)arg1;	// IMP=0x0010000000320850
- (void)performRename:(id)arg1;	// IMP=0x00100000003205b0
- (void)performConfirmPickerExportOrDrillIn:(id)arg1;	// IMP=0x00100000003204d0
- (void)performCommandReturnKey:(id)arg1;	// IMP=0x00100000003203e0
- (void)performConnectToServer:(id)arg1;	// IMP=0x0010000000320300
- (void)performGoToLocation:(id)arg1;	// IMP=0x00100000003202b0
- (void)performEjectMedium:(id)arg1;	// IMP=0x0010000000320260
- (void)performCreateDocumentOrOpenNewWindow:(id)arg1;	// IMP=0x0010000000320210
- (void)performCreateFolderWithSelection:(id)arg1;	// IMP=0x00100000003201f0
- (void)performCreateFolder:(id)arg1;	// IMP=0x00100000003201a0
- (void)performGroupBySharedBy:(id)arg1;	// IMP=0x001000000031ffa0
- (void)performGroupBySize:(id)arg1;	// IMP=0x001000000031ff80
- (void)performGroupByDate:(id)arg1;	// IMP=0x001000000031ff60
- (void)performGroupByKind:(id)arg1;	// IMP=0x001000000031ff40
- (void)performSortBySharedBy:(id)arg1;	// IMP=0x001000000031fd90
- (void)performSortByTags:(id)arg1;	// IMP=0x001000000031fd70
- (void)performSortByKind:(id)arg1;	// IMP=0x001000000031fd50
- (void)performSortBySize:(id)arg1;	// IMP=0x001000000031fd30
- (void)performSortByDate:(id)arg1;	// IMP=0x001000000031fce0
- (void)performSortByName:(id)arg1;	// IMP=0x001000000031fcc0
- (void)performUseGrouping:(id)arg1;	// IMP=0x001000000031fb40
- (void)performViewAsColumns:(id)arg1;	// IMP=0x001000000031fad0
- (void)performViewAsList:(id)arg1;	// IMP=0x001000000031fac0
- (void)performViewAsIcons:(id)arg1;	// IMP=0x001000000031fab0
- (void)performGoForwardInHistory:(id)arg1;	// IMP=0x001000000031f960
- (void)performGoBackInHistory:(id)arg1;	// IMP=0x001000000031f900
- (void)performGoToEnclosingFolder:(id)arg1;	// IMP=0x001000000031f8e0
- (_Bool)canPerformGoToEnclosingFolder;	// IMP=0x001000000031f870
- (void)performFind:(id)arg1;	// IMP=0x001000000031f820
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)clearDroppedLocationsAfterSwitchingViewStyle;	// IMP=0x00100000003414a0
- (void)dataSource:(id)arg1 didSet:(id)arg2 on:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00100000003412a0
- (void)dataSource:(id)arg1 willSet:(id)arg2 on:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0010000000341280
- (void)dataSource:(id)arg1 didUpdate:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000003411f0
- (void)dataSource:(id)arg1 willSwitchFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x001000000033dff0
@property(nonatomic, readonly) id <UIViewControllerTransitionCoordinator> hierarchyChangeTransitionCoordinator;
- (void)configureColumnViewController:(id)arg1;	// IMP=0x0010000000343040
- (id)provideColumnViewControllerWithContains:(id)arg1;	// IMP=0x0010000000342f80
- (id)provideContainerControllerAt:(id)arg1 from:(id)arg2 isUserInteraction:(_Bool)arg3 isBrowsingTrash:(_Bool)arg4;	// IMP=0x0010000000342ef0
@property(nonatomic, readonly) _Bool presentationContextShowsProvidersAsBrowserRoot;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0010000000360950
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0010000000360880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

