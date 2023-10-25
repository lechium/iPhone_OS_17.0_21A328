//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class UIView;
@protocol AVFullScreenViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVFullScreenViewController : UIViewController
{
    UIViewController<AVFullScreenViewControllerDelegate> *_delegate;	// 8 = 0x8
    AVFullScreenViewController *_associatedFullScreenViewController;	// 16 = 0x10
    AVFullScreenViewController *_sourceFullScreenViewController;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000094221
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak AVFullScreenViewController *sourceFullScreenViewController; // @synthesize sourceFullScreenViewController=_sourceFullScreenViewController;
@property(nonatomic) __weak AVFullScreenViewController *associatedFullScreenViewController; // @synthesize associatedFullScreenViewController=_associatedFullScreenViewController;
@property(nonatomic) __weak UIViewController<AVFullScreenViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)avkit_isEffectivelyFullScreen;	// IMP=0x0000000000094165
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x000000000009415a
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x0000000000094148
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000094096
- (long long)preferredStatusBarStyle;	// IMP=0x0000000000094043
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000000093ff2
- (_Bool)shouldAutorotate;	// IMP=0x0000000000093fae
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000093f6a
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000000093f26
- (_Bool)modalPresentationCapturesStatusBarAppearance;	// IMP=0x0000000000093f1e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000093edd
- (void)attachContentView;	// IMP=0x0000000000093b35
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000000093a86
- (void)viewWillMoveToWindow:(id)arg1;	// IMP=0x00000000000939f9
- (void)loadView;	// IMP=0x00000000000939c0
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000939b8
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000000938bf
- (id)keyCommands;	// IMP=0x000000000009383f
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000937fb

@end
