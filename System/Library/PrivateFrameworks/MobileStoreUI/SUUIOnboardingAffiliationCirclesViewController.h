//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMapTable, NSMutableArray, NSObject, NSString, SUUIClientContext, SUUIOnboardingInstructionsView, SUUIPhysicalCirclesView, UIView;
@protocol OS_dispatch_source, SUUIOnboardingAffiliationCirclesDelegate;

__attribute__((visibility("hidden")))
@interface SUUIOnboardingAffiliationCirclesViewController : UIViewController
{
    NSMutableArray *_affiliationItems;	// 8 = 0x8
    SUUIPhysicalCirclesView *_circlesView;	// 16 = 0x10
    SUUIClientContext *_clientContext;	// 24 = 0x18
    id <SUUIOnboardingAffiliationCirclesDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_deletionTimer;	// 40 = 0x28
    _Bool _didPerformFinishAnimation;	// 48 = 0x30
    UIView *_footerView;	// 56 = 0x38
    NSMapTable *_images;	// 64 = 0x40
    SUUIOnboardingInstructionsView *_instructionsView;	// 72 = 0x48
    _Bool _needsReloadOnDidAppear;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000012c46
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <SUUIOnboardingAffiliationCirclesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSArray *affiliationItems; // @synthesize affiliationItems=_affiliationItems;
- (double)_topLayoutMargin;	// IMP=0x0000000000012b35
- (long long)_titlePositionForAffinityCount:(long long)arg1;	// IMP=0x0000000000012b27
- (void)_sendAffilationItemsDidChange;	// IMP=0x0000000000012aca
- (void)_reloadRepellors;	// IMP=0x0000000000012807
- (void)_completeDeletionForCircleAtIndex:(long long)arg1;	// IMP=0x00000000000126c1
- (struct CGSize)_circleSizeForAffinityCount:(long long)arg1;	// IMP=0x0000000000012623
- (double)_circleImageAlphaForAffinityCount:(long long)arg1;	// IMP=0x00000000000125fc
- (void)_cancelDeletionTimer;	// IMP=0x00000000000125c2
- (void)circleView:(id)arg1 didTapCircleAtIndex:(long long)arg2;	// IMP=0x00000000000124a7
- (void)circleView:(id)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;	// IMP=0x0000000000012437
- (void)circleView:(id)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;	// IMP=0x000000000001201b
- (long long)numberOfCirclesInCircleView:(id)arg1;	// IMP=0x0000000000011ffe
- (id)circlesView:(id)arg1 circleForIndex:(long long)arg2;	// IMP=0x0000000000011d5a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000011ced
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000011c94
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000011a78
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000011a27
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001198f
- (void)loadView;	// IMP=0x00000000000116b4
- (void)setUserAffinityCount:(long long)arg1 forAffiliationItemAtIndex:(long long)arg2 animated:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000113a4
- (void)setImage:(id)arg1 forAffiliationItem:(id)arg2;	// IMP=0x0000000000011274
- (void)setFooterView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000111d0
- (void)resetWithAffiliationItems:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010ef8
- (void)removeAffiliationItemsInIndexSet:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010e6a
- (void)performFinishAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010938
@property(readonly, nonatomic) double maximumCircleDiameter;
@property(readonly, nonatomic) SUUIOnboardingInstructionsView *instructionsView;
- (void)addAffiliationItems:(id)arg1;	// IMP=0x000000000001073f
- (void)dealloc;	// IMP=0x00000000000106c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

