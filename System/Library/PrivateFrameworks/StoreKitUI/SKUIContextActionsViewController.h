//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSString, SKUIContextActionsConfiguration, SKUIContextActionsPresentationController, UIGestureRecognizer, UIInterfaceActionGroupView, UIStackView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsViewController : UIViewController
{
    _Bool _orbPresentation;	// 8 = 0x8
    _Bool _appliedSystemRecognizer;	// 9 = 0x9
    UIGestureRecognizer *_systemProvidedGestureRecognzier;	// 16 = 0x10
    SKUIContextActionsPresentationController *_transitionPresentationController;	// 24 = 0x18
    SKUIContextActionsConfiguration *_configuration;	// 32 = 0x20
    NSMutableArray *_constraints;	// 40 = 0x28
    UIInterfaceActionGroupView *_contextActionView;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
    UIVisualEffectView *_backgroundView;	// 64 = 0x40
    UIInterfaceActionGroupView *_scrollableActionGroupView;	// 72 = 0x48
    struct CGPoint _gestureRecognizerInitialLocation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000ff862
@property(nonatomic, getter=hasAppliedSystemRecognizer) _Bool appliedSystemRecognizer; // @synthesize appliedSystemRecognizer=_appliedSystemRecognizer;
@property(nonatomic) struct CGPoint gestureRecognizerInitialLocation; // @synthesize gestureRecognizerInitialLocation=_gestureRecognizerInitialLocation;
@property(retain, nonatomic) UIInterfaceActionGroupView *scrollableActionGroupView; // @synthesize scrollableActionGroupView=_scrollableActionGroupView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIInterfaceActionGroupView *contextActionView; // @synthesize contextActionView=_contextActionView;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) SKUIContextActionsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SKUIContextActionsPresentationController *transitionPresentationController; // @synthesize transitionPresentationController=_transitionPresentationController;
@property(retain, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognzier; // @synthesize systemProvidedGestureRecognzier=_systemProvidedGestureRecognzier;
@property(nonatomic, getter=isOrbPresentation) _Bool orbPresentation; // @synthesize orbPresentation=_orbPresentation;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000ff550
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000ff542
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000000ff530
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000ff4fb
- (id)_transitionPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000000000ff41e
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ff328
- (void)_reloadViewsConfiguration;	// IMP=0x00000000000fd8cb
- (void)_applySystemRecognizer;	// IMP=0x00000000000fd7e6
- (void)systemProvidedGestureRecognzierTriggered:(id)arg1;	// IMP=0x00000000000fd69f
- (void)viewTapped:(id)arg1;	// IMP=0x00000000000fd686
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000fd195
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000fcfce
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000fcedf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000fce9e
- (void)viewDidLoad;	// IMP=0x00000000000fcc6a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000fcb6d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fcafe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

