//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIControl, UITapGestureRecognizer;
@protocol SKUIOverlayContainerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOverlayContainerViewController : UIViewController
{
    UIControl *_backstopView;	// 8 = 0x8
    _Bool _isAdjustingViewsForDismiss;	// 16 = 0x10
    long long _popViewControllerCount;	// 24 = 0x18
    long long _selectedViewControllerIndex;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
    NSMutableArray *_viewControllers;	// 48 = 0x30
    id <SKUIOverlayContainerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002656b3
@property(nonatomic) __weak id <SKUIOverlayContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewControllerForPoint:(struct CGPoint)arg1;	// IMP=0x000000000026561a
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000265242
- (id)_selectedViewController;	// IMP=0x00000000002651f7
- (void)_removeChildren;	// IMP=0x0000000000265034
- (void)_pushViewController:(id)arg1;	// IMP=0x0000000000264efa
- (void)_positionViewControllersForSize:(struct CGSize)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000264b17
- (void)_popViewControllers;	// IMP=0x0000000000264974
- (double)_overlaySpacingForSize:(struct CGSize)arg1;	// IMP=0x0000000000264959
- (struct CGSize)_overlaySizeForController:(id)arg1 atBoundsSize:(struct CGSize)arg2;	// IMP=0x000000000026483c
- (long long)_indexOfViewControllerForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000264697
- (struct CGRect)_centeredFrameForViewController:(id)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x0000000000264581
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000264330
@property(readonly, nonatomic) UIColor *dimmingViewColor;
- (void)_frameAction:(id)arg1;	// IMP=0x0000000000264191
- (void)_tapAction:(id)arg1;	// IMP=0x0000000000263fc4
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000263f19
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000263e29
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000263d58
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000263c93
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000263c88
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x0000000000263c74
- (void)loadView;	// IMP=0x0000000000263c28
@property(readonly, copy, nonatomic) NSArray *viewControllers;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002636af
- (void)showViewControllers:(id)arg1;	// IMP=0x0000000000263455
- (void)showViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002633c3
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2;	// IMP=0x0000000000263216
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000262f28
- (void)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000000262f14
- (void)dismissWithFadeTransitionCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000262c70
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000262952
@property(readonly, nonatomic) UIControl *backstopControl;
- (void)dealloc;	// IMP=0x00000000002627bf
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002626c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
