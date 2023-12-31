//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLInspectorNavigationControllerBackgroundView, CRLInspectorRefreshManager;

@interface CRLInspectorNavigationController
{
    _Bool _poppingViewController;	// 8 = 0x8
    CRLInspectorRefreshManager *_inspectorRefreshingManager;	// 16 = 0x10
    CRLInspectorNavigationControllerBackgroundView *_backgroundView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004b2832
@property(retain, nonatomic) CRLInspectorNavigationControllerBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isPoppingViewController) _Bool poppingViewController; // @synthesize poppingViewController=_poppingViewController;
@property(nonatomic) __weak CRLInspectorRefreshManager *inspectorRefreshingManager; // @synthesize inspectorRefreshingManager=_inspectorRefreshingManager;
- (_Bool)accessibilityPerformEscape;	// IMP=0x00100000004b27a4
- (_Bool)wantsDefaultSizeForHalfHeightPresentation;	// IMP=0x00100000004b279c
- (_Bool)wantsHalfHeightBlurMaterialBackground;	// IMP=0x00100000004b2794
@property(readonly, nonatomic) _Bool wantsCustomNavigationAnimator;
- (_Bool)crl_wantsCustomPopoverPresentationController;	// IMP=0x00100000004b2784
- (void)addChildViewController:(id)arg1;	// IMP=0x00100000004b2755
- (id)childViewControllerForStatusBarStyle;	// IMP=0x00100000004b2717
- (id)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000004b2690
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00100000004b25e5
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000004b2334
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000004b22bc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000004b2211
- (void)viewDidLoad;	// IMP=0x00100000004b1fbe
- (id)initWithRootViewController:(id)arg1;	// IMP=0x00100000004b1f3e

@end

