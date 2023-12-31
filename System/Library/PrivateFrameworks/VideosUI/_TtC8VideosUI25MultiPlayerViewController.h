//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray, VUIImageProxy;
@protocol VUIMultiPlayerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI25MultiPlayerViewController : UIViewController
{
    MISSING_TYPE *fullscreenPadding;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_playerViewLayout;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_detailsViewLayout;	// 48 = 0x30
    MISSING_TYPE *fullscreenPlayerViewController;	// 56 = 0x38
    MISSING_TYPE *exitFullscreenCompletion;	// 64 = 0x40
    MISSING_TYPE *swappedPlayerIndices;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_metricsRecorder;	// 104 = 0x68
    MISSING_TYPE *isSupportedScreenSize;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_imageView;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_blurView;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_activityTapGesture;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_playerPanGesture;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_playerPinchGesture;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_panGesture;	// 160 = 0xa0
    MISSING_TYPE *inactivityTimeout;	// 168 = 0xa8
    MISSING_TYPE *inactivityTimer;	// 176 = 0xb0
    MISSING_TYPE *$__lazy_storage_$_ghostPlayerViewController;	// 184 = 0xb8
    MISSING_TYPE *delegate;	// 192 = 0xc0
    MISSING_TYPE *isDetailsViewControllerVisible;	// 200 = 0xc8
    MISSING_TYPE *playerView;	// 208 = 0xd0
    MISSING_TYPE *$__lazy_storage_$_headerPresenter;	// 216 = 0xd8
    MISSING_TYPE *$__lazy_storage_$_headerView;	// 224 = 0xe0
    MISSING_TYPE *$__lazy_storage_$_grabberView;	// 232 = 0xe8
    MISSING_TYPE *detailsViewController;	// 240 = 0xf0
    MISSING_TYPE *presentationPlayerViewControllers;	// 248 = 0xf8
    MISSING_TYPE *topConstraint;	// 256 = 0x100
    MISSING_TYPE *bottomConstraint;	// 264 = 0x108
    MISSING_TYPE *leadingConstraint;	// 272 = 0x110
    MISSING_TYPE *trailingConstraint;	// 280 = 0x118
    MISSING_TYPE *cancellables;	// 288 = 0x120
    MISSING_TYPE *stateMachine;	// 296 = 0x128
    MISSING_TYPE *initiallyShowsDetails;	// 304 = 0x130
    MISSING_TYPE *prospectivePlayerView;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00000000003d1417
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000003d13b7
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000003d0e04
- (void)viewPinchedWithGesture:(id)arg1;	// IMP=0x00000000003d01b3
- (void)viewSwipedWithGesture:(id)arg1;	// IMP=0x00000000003cfb63
- (void)viewTappedWithGesture:(id)arg1;	// IMP=0x00000000003cf7c5
- (void)setDetailsViewControllerVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cf615
- (void)exitFullscreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003cdde6
- (void)recordMetricsEventWithIdentifier:(id)arg1 impressionsData:(id)arg2 locationData:(id)arg3 didAddPlayer:(_Bool)arg4;	// IMP=0x00000000003cdbad
- (void)enterFullscreenWithPlayerViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003cd6e5
- (void)captureAndShowPlayerScreenshots;	// IMP=0x00000000003cd40d
- (void)setProspectivePlayerVisible:(_Bool)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003cd326
- (void)setProspectivePlayerVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cce13
@property(nonatomic, readonly) _Bool isShowingProspectivePlayer;
- (_Bool)isSupportedScreenSize:(struct CGSize)arg1;	// IMP=0x00000000003cccd2
- (struct CGRect)presentationRectForPlayerViewController:(id)arg1;	// IMP=0x00000000003ccae8
- (void)replacePlayerViewController:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003cc7cb
- (void)removePlayerViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cc3e0
- (void)addPlayerViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003cc017
- (void)onPanWithGesture:(id)arg1;	// IMP=0x00000000003cbc95
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003cbc63
- (void)viewDidLoad;	// IMP=0x00000000003cbbff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cbbd9
@property(nonatomic, readonly) unsigned long long distribution;
@property(nonatomic) __weak id <VUIMultiPlayerViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, retain) VUIImageProxy *backgroundImageProxy;
@property(nonatomic, readonly) NSArray *playerViewControllers;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x000000000063c359
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x000000000063bf4f
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x000000000063bacb
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;	// IMP=0x000000000063b791
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x000000000063b400
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x000000000063b164

@end

