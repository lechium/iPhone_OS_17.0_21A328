//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AVCaptureVideoPreviewLayer, BCSActionCoordinator, BCSCoachingMessageView, BCSPreviewContainerView, BCSScanningAnimator, BCSSubjectIndicatorView, BCSTorchButtonView, NSLayoutConstraint, NSString, UIImageView, UITapGestureRecognizer, UIView;
@protocol BCSLiveViewControllerDelegate;

@interface BCSLiveViewController : UIViewController
{
    AVCaptureVideoPreviewLayer *_previewLayer;	// 8 = 0x8
    BCSPreviewContainerView *_previewContainerView;	// 16 = 0x10
    BCSCoachingMessageView *_coachingMessageView;	// 24 = 0x18
    BCSSubjectIndicatorView *_focusIndicator;	// 32 = 0x20
    UIView *_focusIndicatorInsetView;	// 40 = 0x28
    BCSTorchButtonView *_torchButtonView;	// 48 = 0x30
    BCSScanningAnimator *_animator;	// 56 = 0x38
    UITapGestureRecognizer *_tapGestureRecognizer;	// 64 = 0x40
    UIImageView *_targetQRImage;	// 72 = 0x48
    NSLayoutConstraint *_coachingMessageTopAnchorConstraint;	// 80 = 0x50
    double _videoRotationAngle;	// 88 = 0x58
    id <BCSLiveViewControllerDelegate> _delegate;	// 96 = 0x60
    BCSActionCoordinator *_actionCoordinator;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000019135
@property(readonly, nonatomic) BCSActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(nonatomic) __weak id <BCSLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)torchButtonView:(id)arg1 torchModeChangedTo:(_Bool)arg2;	// IMP=0x00100000000190a8
- (void)actionCoordinator:(id)arg1 didFinishPerformingAction:(id)arg2;	// IMP=0x0010000000019091
- (id)actionCoordinatorViewForContextMenu:(id)arg1;	// IMP=0x001000000001907c
- (id)actionCoordinatorPresentingViewController:(id)arg1;	// IMP=0x001000000001906a
- (void)actionCoordinator:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0010000000019053
- (void)rotationAnimationDidFinish;	// IMP=0x0010000000019036
- (void)rotationAnimationWillStart;	// IMP=0x0010000000019019
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000019011
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000018f00
- (void)_layOutWithPreviewSize:(struct CGSize)arg1 angle:(double)arg2 isPortrait:(_Bool)arg3;	// IMP=0x0010000000018d70
- (void)compensateForInterfaceOrientationInLiveView:(long long)arg1 referenceSize:(struct CGSize)arg2;	// IMP=0x0010000000018c53
- (void)compensateForVideoRotationAngleInLiveView:(double)arg1;	// IMP=0x0010000000018b47
- (void)_setTorchButtonPosition;	// IMP=0x0010000000018930
- (void)_applyTorchButtonRotationForDeviceOrientation;	// IMP=0x001000000001886d
- (void)torchActivenessChangedTo:(_Bool)arg1;	// IMP=0x0010000000018850
- (void)torchAvailabilityChangedTo:(_Bool)arg1;	// IMP=0x0010000000018833
- (void)cameraDeviceDidChange;	// IMP=0x00100000000187cd
- (struct CGPoint)_convertPointFromCaptureDeviceLocation:(struct CGPoint)arg1;	// IMP=0x0010000000018714
- (struct CGPoint)_convertPointToCaptureDeviceLocation:(struct CGPoint)arg1;	// IMP=0x0010000000018654
- (struct CGPoint)_pointFromNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x00100000000185b0
- (id)_perspectiveCorrectedImage:(id)arg1 imageQuad:(id)arg2;	// IMP=0x0010000000018374
- (struct CGPoint)_convertLogicalPoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x0010000000018358
- (struct CGPoint)_normalize:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x001000000001833c
- (void)_continueToPopAnimationForDetectedCode:(id)arg1;	// IMP=0x0010000000017941
- (void)didCaptureVisualCode:(id)arg1 image:(id)arg2;	// IMP=0x00100000000169b5
- (void)updateQRCodeAvailability:(long long)arg1;	// IMP=0x001000000001694d
- (void)_updateCoacheMessageWithString:(id)arg1;	// IMP=0x00100000000168e7
- (void)_liveViewTapped;	// IMP=0x001000000001680e
- (void)resetUIAndStartCapturing:(_Bool)arg1;	// IMP=0x001000000001667e
- (void)viewDidLoad;	// IMP=0x0010000000015ae4
- (id)initWithPreviewLayer:(id)arg1;	// IMP=0x0010000000015a2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
