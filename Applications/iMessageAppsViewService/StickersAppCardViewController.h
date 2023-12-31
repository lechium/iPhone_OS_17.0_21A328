//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IMAAppPresenter, ImmediatePanGestureRecognizer, NSString, UIView;

@interface StickersAppCardViewController : UIViewController
{
    ImmediatePanGestureRecognizer *_dismissalGestureTracker;	// 8 = 0x8
    UIView *_dismissalView;	// 16 = 0x10
    double _compactHeight;	// 24 = 0x18
    _Bool _isPresentingStandaloneFullscreenModal;	// 32 = 0x20
    IMAAppPresenter *_appPresenter;	// 40 = 0x28
}

+ (id)_exportedInterface;	// IMP=0x0020000000005599
+ (id)_remoteViewControllerInterface;	// IMP=0x001000000000552d
+ (void)setNextPresentationIsFullscreenModal:(_Bool)arg1;	// IMP=0x0010000000003779
+ (_Bool)nextPresentationIsFullscreenModal;	// IMP=0x001000000000376d
- (void).cxx_destruct;	// IMP=0x0020000000005a63
@property(retain, nonatomic) IMAAppPresenter *appPresenter; // @synthesize appPresenter=_appPresenter;
- (id)stickersHostViewController;	// IMP=0x00100000000059ac
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0010000000005525
- (void)appPresenterCardDidDismiss:(id)arg1;	// IMP=0x001000000000540b
- (void)appPresenterDidDismissFullscreenModal:(id)arg1;	// IMP=0x00100000000053f9
- (void)overrideDropPointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000053db
- (void)didDragStickerToTarget:(id)arg1 outsideSwitcher:(_Bool)arg2;	// IMP=0x00100000000053d5
- (void)didSelectAppWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000053a0
- (void)addSticker:(id)arg1 atDropTarget:(id)arg2;	// IMP=0x001000000000538e
- (void)addSticker:(id)arg1;	// IMP=0x001000000000537c
@property(readonly, nonatomic) UIViewController *dockPresentationViewController;
- (void)setHostBundleID:(id)arg1;	// IMP=0x001000000000536d
- (void)prepareForAddStickerFromSubjectLift;	// IMP=0x0010000000005367
- (void)didRemoveStickerPreview;	// IMP=0x0010000000005314
- (void)addStickerAnimationDidFinishWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000528f
- (void)addStickerToStoreWithRepresentations:(id)arg1 sourceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005072
- (void)addStickerToStoreWithRepresentations:(id)arg1 completionWithStickerIDs:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004cbf
- (void)addStickerToStoreWithRepresentations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000479a
- (void)animatedStickerCreationProgressChanged:(id)arg1 progress:(double)arg2;	// IMP=0x001000000000471f
- (void)updatePopoverWindowLocation:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000468b
- (void)presentPopoverAtWindowLocation:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000045c2
- (void)animateCardHiddenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000459d
- (void)updateCompactCardHeight:(double)arg1;	// IMP=0x00100000000044f9
- (void)requestStageSticker:(id)arg1;	// IMP=0x0010000000003b6b
- (void)dismiss;	// IMP=0x0010000000003b23
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000003a30
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000003849
- (void)viewDidLoad;	// IMP=0x0010000000003785

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool expandedAppShouldDismissOnDragSuccess;
@property(readonly, nonatomic) struct CGSize expandedAppViewControllerSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

