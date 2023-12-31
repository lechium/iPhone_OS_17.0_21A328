//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SUStorePageProtocol, SUViewControllerFactory;

@interface UIViewController (SUTabBarControllerAdditions)
+ (id)transitionSafetyDelegate;	// IMP=0x002000000005a062
+ (id)transitionSafePerformer:(id)arg1;	// IMP=0x002000000005a024
+ (void)endTransitionSafety;	// IMP=0x0020000000059fb9
+ (void)beginTransitionSafety;	// IMP=0x0020000000059fac
+ (void)_iTunesStoreUI_timeoutTransitionSafety;	// IMP=0x0020000000059dfe
+ (void)_iTunesStoreUI_enqueueTransitionSafeInvocation:(id)arg1;	// IMP=0x0020000000059cfc
+ (void)_iTunesStoreUI_dequeueTransitionSafeInvocations;	// IMP=0x0020000000059c1b
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;	// IMP=0x0010000000009ac9
- (void)tabBarControllerDidLongPressTabBarItem:(id)arg1;	// IMP=0x0010000000009ac3
@property(readonly, nonatomic) long long ITunesStoreUIBarStyle;
- (id)su_closestNavigationController;	// IMP=0x0010000000027786
@property(readonly, nonatomic) SUViewControllerFactory *viewControllerFactory;
@property(readonly, nonatomic) _Bool shouldInvalidateForMemoryPurge;
- (void)setBadgeValue:(id)arg1 animated:(_Bool)arg2 blink:(_Bool)arg3;	// IMP=0x0010000000027526
- (id)section;	// IMP=0x0010000000027512
- (id)_sectionForViewController:(id)arg1;	// IMP=0x00100000000274b3
- (void)restoreArchivableContext:(id)arg1;	// IMP=0x00100000000274ad
- (void)resetRestoredContext;	// IMP=0x0010000000027470
- (void)parentViewControllerHierarchyDidChange;	// IMP=0x00100000000272e7
- (void)keyboardWillShowWithInfo:(id)arg1;	// IMP=0x001000000002715e
- (void)keyboardWillHideWithInfo:(id)arg1;	// IMP=0x0010000000026fd5
- (void)keyboardDidShowWithInfo:(id)arg1;	// IMP=0x0010000000026e4c
- (void)keyboardDidHideWithInfo:(id)arg1;	// IMP=0x0010000000026cc3
- (_Bool)isRootViewController;	// IMP=0x0010000000026b66
@property(readonly, nonatomic, getter=isSkLoading) _Bool skLoading;
@property(readonly, nonatomic, getter=isSkLoaded) _Bool skLoaded;
- (_Bool)isInMoreList;	// IMP=0x0010000000026a3a
- (_Bool)isDescendantOfViewController:(id)arg1;	// IMP=0x001000000002699d
- (void)iTunesStoreUI_dismissAction:(id)arg1;	// IMP=0x0010000000026986
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x001000000002674e
- (id)copyArchivableJetsamContext;	// IMP=0x001000000002673c
- (id)copyArchivableContext;	// IMP=0x00100000000266b9
- (_Bool)reloadWithURLRequestProperties:(id)arg1;	// IMP=0x0010000000033842
- (_Bool)pushStorePage:(id)arg1 withTarget:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000000337fd
- (_Bool)loadMoreWithURL:(id)arg1;	// IMP=0x00100000000337cc
- (_Bool)hasDisplayableContent;	// IMP=0x00100000000337c4
- (void)handleStoreFailureWithError:(id)arg1;	// IMP=0x0010000000033793
- (_Bool)viewIsReady;	// IMP=0x0010000000033930
- (void)storePageProtocolDidChange;	// IMP=0x0010000000033905
@property(retain, nonatomic) SUStorePageProtocol *storePageProtocol;
- (void)storePageCleanupBeforeTearDown;	// IMP=0x00100000000338f7
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;	// IMP=0x00100000000338eb
@property(readonly, nonatomic) struct CGRect documentBounds;
- (id)displayedURL;	// IMP=0x0010000000033873
- (id)setDisplayedSectionGroup:(id)arg1;	// IMP=0x0010000000033971
- (_Bool)reloadForSectionsWithGroup:(id)arg1;	// IMP=0x0010000000033940
- (_Bool)canDisplaySectionGroup:(id)arg1;	// IMP=0x0010000000033938
- (void)transitionSafePresentModalViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000005a087
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;	// IMP=0x0010000000067c85
- (id)copyScriptViewController;	// IMP=0x0010000000091781
- (_Bool)showsBackgroundShadow;	// IMP=0x0010000000096bd0
- (void)setShowsBackgroundShadow:(_Bool)arg1;	// IMP=0x0010000000096bca
- (_Bool)presentViewController:(id)arg1 inOverlayWithConfiguration:(id)arg2;	// IMP=0x00100000000a08d9
- (_Bool)presentOverlayViewController:(id)arg1 withTransition:(id)arg2;	// IMP=0x00100000000a07e0
- (_Bool)presentOverlayBackgroundViewController:(id)arg1;	// IMP=0x00100000000a079c
- (id)overlayBackgroundViewController;	// IMP=0x00100000000a0760
- (void)dismissOverlayBackgroundViewController;	// IMP=0x00100000000a0724
- (id)scriptWindowContext;	// IMP=0x00100000000a28d1
- (id)overlayViewController;	// IMP=0x00100000000a2875
- (id)storeSplitViewController;	// IMP=0x00100000000a5b0a
- (struct CGSize)minimumViewSize;	// IMP=0x00100000000a5aa9
- (struct CGSize)maximumViewSize;	// IMP=0x00100000000a5a48
- (id)navigationItemForScriptInterface;	// IMP=0x00100000000b242c
- (id)iTunesStoreUI_searchFieldController;	// IMP=0x00100000000debfa
@end

