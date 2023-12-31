//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LKUser, LUIDashBoardView, LUISwipeUpAnimationController, NSString;

@interface LUIDashBoardViewController
{
    LKUser *_userInfo;	// 8 = 0x8
    LUIDashBoardView *_dashBoardView;	// 16 = 0x10
    LUISwipeUpAnimationController *_swipeUpAnimationController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000021772
@property(retain, nonatomic) LUISwipeUpAnimationController *swipeUpAnimationController; // @synthesize swipeUpAnimationController=_swipeUpAnimationController;
@property(retain, nonatomic) LUIDashBoardView *dashBoardView; // @synthesize dashBoardView=_dashBoardView;
@property(retain, nonatomic) LKUser *userInfo; // @synthesize userInfo=_userInfo;
- (void)swipeUpAnimationControllerSwipeGestureDidEnd:(id)arg1;	// IMP=0x00100000000216c1
- (void)swipeUpAnimationControllerSwipeGestureDidBegin:(id)arg1;	// IMP=0x0010000000021682
- (void)swipeUpAnimationControllerSwipeGestureDidPassThreshold:(id)arg1;	// IMP=0x0010000000021670
- (void)homeButtonSingleTapped;	// IMP=0x001000000002165e
- (id)userForStatusBarDisplay;	// IMP=0x001000000002164c
- (id)titleForBottomLeftVibrantButton;	// IMP=0x00100000000215e4
- (long long)imageTypeForBottomLeftVibrantButton;	// IMP=0x00100000000215d9
- (_Bool)shouldShowBottomLeftVibrantButton;	// IMP=0x00100000000215d1
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x0010000000021538
- (id)callToActionLabelText;	// IMP=0x0010000000021530
- (void)userActionTriggered;	// IMP=0x001000000002152a
- (void)_setupGesture;	// IMP=0x0010000000021487
- (long long)preferredStatusBarStyle;	// IMP=0x001000000002143c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000021386
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000212bc
- (void)viewDidLoad;	// IMP=0x00100000000211fe
- (void)loadView;	// IMP=0x0010000000021041

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

