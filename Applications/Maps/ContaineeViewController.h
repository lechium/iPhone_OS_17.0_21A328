//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardPresentationController, MKViewWithHairline, MacMenuPresentationController, MacPopoverPresentationController, NSLayoutConstraint, NSString, UIColor, UIView, UIVisualEffectView;
@protocol ContaineeViewControllerDelegate;

@interface ContaineeViewController
{
    CardPresentationController *_cardPresentationController;	// 8 = 0x8
    MacMenuPresentationController *_menuPresentationController;	// 16 = 0x10
    MacPopoverPresentationController *_popoverPresentationController;	// 24 = 0x18
    UIVisualEffectView *_effectView;	// 32 = 0x20
    UIView *_defaultHeaderView;	// 40 = 0x28
    UIView *_defaultContentView;	// 48 = 0x30
    MKViewWithHairline *_homeIndicatorSafeAreaView;	// 56 = 0x38
    NSLayoutConstraint *_homeIndicatorSafeAreaHeightConstraint;	// 64 = 0x40
    _Bool _keepOriginalSafeInsets;	// 72 = 0x48
    unsigned long long _preferredPresentationStyle;	// 80 = 0x50
    unsigned long long _retainedLayout;	// 88 = 0x58
    id <ContaineeViewControllerDelegate> _containeeDelegate;	// 96 = 0x60
    UIColor *_cardColor;	// 104 = 0x68
}

+ (float)contentViewTopConstraintPriority;	// IMP=0x00200000009eaa97
+ (float)contentViewBottomConstraintPriority;	// IMP=0x00100000009eaa89
+ (_Bool)wantsDefaultHeaderContentViews;	// IMP=0x00100000009eaa81
- (void).cxx_destruct;	// IMP=0x00200000009ec0ae
@property(retain, nonatomic) UIColor *cardColor; // @synthesize cardColor=_cardColor;
@property(nonatomic) __weak id <ContaineeViewControllerDelegate> containeeDelegate; // @synthesize containeeDelegate=_containeeDelegate;
@property(nonatomic) _Bool keepOriginalSafeInsets; // @synthesize keepOriginalSafeInsets=_keepOriginalSafeInsets;
@property(readonly, nonatomic) unsigned long long retainedLayout; // @synthesize retainedLayout=_retainedLayout;
@property(nonatomic) unsigned long long preferredPresentationStyle; // @synthesize preferredPresentationStyle=_preferredPresentationStyle;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000009ebf1b
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00100000009ebf15
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00100000009ebf0f
- (id)keyCommands;	// IMP=0x00100000009ebe6c
- (void)didChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000009ebda2
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000009ebd48
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000009ebd42
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000009ebd3c
- (void)willDismissByGesture;	// IMP=0x00100000009ebd36
- (void)didDismissByGesture;	// IMP=0x00100000009ebd30
- (void)shouldDismissForHorizontalSwipe_nonUIKitCardsOnly;	// IMP=0x00100000009ebd2a
- (void)didResignCurrent;	// IMP=0x00100000009ebd24
- (void)willResignCurrent:(_Bool)arg1;	// IMP=0x00100000009ebd1e
- (void)didBecomeCurrent;	// IMP=0x00100000009ebd18
- (void)willBecomeCurrentByGesture;	// IMP=0x00100000009ebd12
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x00100000009ebd0c
- (void)shoulDismissForVerticalSwipe_nonUIKitCardsOnly;	// IMP=0x00100000009ebd06
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000009ebc9b
- (id)contentView;	// IMP=0x00100000009ebc86
- (id)headerView;	// IMP=0x00100000009ebc71
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) _Bool forceCurrentWidthForHeaderHeightCalculations;
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x00100000009eba89
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000009eb965
@property(readonly, nonatomic) double macContaineeWidth;
- (long long)preferredUserInterfaceStyle;	// IMP=0x00100000009eb86f
- (void)viewDidLayoutSubviews;	// IMP=0x00100000009eb711
- (void)viewDidLoad;	// IMP=0x00100000009eafe9
- (void)_updateBlurCornerRadius;	// IMP=0x00100000009eaf65
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000009eaeec
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000009ead34
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000009eaaa5

// Remaining properties
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

