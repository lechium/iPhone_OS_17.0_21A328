//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPresentationController.h>

@class CKPopoverViewLayout, CKSendMenuPopoverPresentationConfiguration, CKSendMenuPopoverPresentationControllerAnchorItem, CKSendMenuPopoverPresentationDimmingView, CKSendMenuPopoverViewController, CKSendMenuPresentationPopoverView, NSString, UITapGestureRecognizer, UIViewController;
@protocol CKSendMenuPopoverPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKSendMenuPopoverPresentationController : UIPresentationController
{
    CKPopoverViewLayout *_popoverLayout;	// 8 = 0x8
    CKSendMenuPopoverPresentationDimmingView *_dimmingView;	// 16 = 0x10
    UITapGestureRecognizer *_dismissGestureRecognizer;	// 24 = 0x18
    CKSendMenuPopoverPresentationConfiguration *_configuration;	// 32 = 0x20
    long long _presentationState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001baa86
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(retain, nonatomic) CKSendMenuPopoverPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property(retain, nonatomic) CKSendMenuPopoverPresentationDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) CKPopoverViewLayout *popoverLayout; // @synthesize popoverLayout=_popoverLayout;
- (id)newPopoverLayoutMetrics;	// IMP=0x00000000001ba975
- (struct CGPoint)_anchorViewCenterInContainer;	// IMP=0x00000000001ba86b
- (void)anchorViewDidMove;	// IMP=0x00000000001ba79b
- (void)presentCardWithContentViewController:(id)arg1 style:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b9ee7
- (void)sendMenuPopoverPresentationDimmingViewDidReceiveTap:(id)arg1;	// IMP=0x00000000001b9e9b
- (_Bool)shouldPresentInFullscreen;	// IMP=0x00000000001b9e93
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x00000000001b9974
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001b9881
- (void)containerViewWillLayoutSubviews;	// IMP=0x00000000001b9684
- (id)presentedView;	// IMP=0x00000000001b9646
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000001b9501
- (void)dismissalTransitionWillBegin;	// IMP=0x00000000001b9311
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000001b9254
- (void)presentationTransitionWillBegin;	// IMP=0x00000000001b8da9
- (void)_informDelegateAboutCurrentPopoverLayoutWithPreviousMetrics:(id)arg1;	// IMP=0x00000000001b8d1b
@property(readonly, nonatomic) CKSendMenuPopoverViewController *popoverViewController;
@property(readonly, nonatomic) CKSendMenuPresentationPopoverView *popoverView;
@property(nonatomic) __weak id <CKSendMenuPopoverPresentationControllerDelegate> delegate;
@property(retain, nonatomic) UIViewController *sendMenuViewController; // @dynamic sendMenuViewController;
@property(retain, nonatomic) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem; // @dynamic anchorItem;
@property(readonly, getter=isPresenting) _Bool presenting;
- (id)initWithConfiguration:(id)arg1 popoverViewController:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x00000000001b8a5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
