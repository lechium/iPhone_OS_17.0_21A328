//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MacBaseActionCoordinator, NSLayoutConstraint, NSString, SupplementalStackViewController, UIViewController;
@protocol ContaineeContentInjection, ContaineeProtocol;

@interface MacContainerViewController
{
    UIViewController<ContaineeProtocol> *_currentMenuViewController;	// 8 = 0x8
    UIViewController<ContaineeProtocol> *_currentPopoverViewController;	// 16 = 0x10
    UIViewController<ContaineeProtocol> *_deferredPopoverViewController;	// 24 = 0x18
    SupplementalStackViewController *_paletteViewController;	// 32 = 0x20
    NSLayoutConstraint *_paletteWidthConstraint;	// 40 = 0x28
    long long _deferMapPopoverCount;	// 48 = 0x30
    id <ContaineeContentInjection> _sidebarContentInjector;	// 56 = 0x38
}

+ (Class)actionCoordinatorClass;	// IMP=0x0020000000745db8
- (void).cxx_destruct;	// IMP=0x002000000074825b
@property(retain, nonatomic) id <ContaineeContentInjection> sidebarContentInjector; // @synthesize sidebarContentInjector=_sidebarContentInjector;
- (void)deferPresentingMapPopoversInsideBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000074800b
- (_Bool)_isDeferringMapPopovers;	// IMP=0x0010000000747ff6
- (void)macPopoverPresentationControllerDidDismiss:(id)arg1;	// IMP=0x0010000000747fe4
- (void)macPopoverPresentationControllerWillDismiss:(id)arg1;	// IMP=0x0010000000747eba
- (void)_popoverDismissDidFinish;	// IMP=0x0010000000747e93
- (void)_popCurrentPopoverViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000747de7
- (void)_dismissPopoverViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000747c37
- (void)_presentCurrentPopoverAnimated:(_Bool)arg1;	// IMP=0x001000000074795c
- (void)_presentPopoverViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007477ca
- (void)macMenuPresentationControllerDidDismiss:(id)arg1;	// IMP=0x001000000074778f
- (void)macMenuPresentationControllerWillDismiss:(id)arg1;	// IMP=0x0010000000747702
- (void)_dismissCurrentMenuViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000007476d9
- (void)_dismissMenuViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000007475f3
- (void)_presentCurrentMenuViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000747410
- (void)_presentMenuViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000747358
- (double)leftSafeOffset;	// IMP=0x0010000000747259
- (double)rightSafeOffset;	// IMP=0x001000000074715a
- (void)_popPalette:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007470ef
- (void)_pushPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007470a6
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;	// IMP=0x001000000074708f
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000747039
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x0010000000746fa1
- (void)mapViewDidStartUserInteraction:(id)arg1;	// IMP=0x0010000000746f8a
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x0010000000746ef8
- (id)topSidebarController_forTests;	// IMP=0x0010000000746e54
- (void)shareFromMenuDidSelect:(id)arg1;	// IMP=0x0010000000746da1
- (id)currentViewController;	// IMP=0x0010000000746c87
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000746c70
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000746c27
- (id)_mapViewIfCurrent;	// IMP=0x0010000000746b54
- (void)popLastViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3;	// IMP=0x0010000000746918
- (void)replaceCurrentWithController:(id)arg1 moveToContaineeLayout:(unsigned long long)arg2;	// IMP=0x001000000074685b
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000074657f
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007464d2
- (void)setChromeViewController:(id)arg1;	// IMP=0x0010000000746463
- (_Bool)supportsEmptyStack;	// IMP=0x001000000074645b
- (id)preferredFocusEnvironments;	// IMP=0x0010000000746381
- (void)viewDidLoad;	// IMP=0x0010000000745e2c
- (id)initWithPlatformController:(id)arg1;	// IMP=0x0010000000745ddb
@property(readonly, nonatomic) MacBaseActionCoordinator *macBaseActionCoordinator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

