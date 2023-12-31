//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class ICViewControllerManager, UILayoutGuide, UINavigationController, UIWindowScene;

@interface UIViewController (IC)
+ (void)ic_enableUIViewAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000038288
- (void)ic_performBlockAfterActiveTransition:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038ebd
- (void)ic_replacePresentedViewControllerWithViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038dd7
- (void)ic_dismissPresentedViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038d5e
- (void)ic_dismissViewControllerOfClass:(Class)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038c6e
@property(readonly, nonatomic) _Bool ic_isBeingRevealedFromPoppingViewController;
@property(readonly, nonatomic) _Bool ic_hasFullScreenModalPresentationStyle;
@property(readonly, nonatomic) UIWindowScene *ic_windowScene;
@property(readonly, nonatomic) UINavigationController *ic_rootNavigationController;
- (id)ic_embedInNavigationControllerForModalPresentation;	// IMP=0x00100000000388b3
- (id)ic_topViewController;	// IMP=0x0010000000038807
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003864f
- (void)ic_showSingleButtonAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x001000000003863a
@property(readonly, nonatomic) UILayoutGuide *ic_safeAreaLayoutGuide;
@property(readonly, nonatomic) double ic_safeAreaDistanceFromBottom;
@property(readonly, nonatomic) double ic_safeAreaDistanceFromTop;
- (_Bool)ic_isViewVisible;	// IMP=0x00100000000383fa
- (void)ic_showViewController:(id)arg1 animated:(_Bool)arg2 sender:(id)arg3;	// IMP=0x001000000003830d
@property(readonly, nonatomic) _Bool ic_isRTL;
@property(readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@end

