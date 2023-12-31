//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CardView, ContainerViewController, UIColor, UIViewController;
@protocol ContaineeProtocol;

@interface CardPresentationController : NSObject
{
    _Bool _firstCard;	// 8 = 0x8
    _Bool _alwaysUseDefaultContaineeLayout;	// 9 = 0x9
    _Bool _hideContentInSmallLayout;	// 10 = 0xa
    _Bool _hidden;	// 11 = 0xb
    _Bool _blurInCardView;	// 12 = 0xc
    _Bool _allowsSwipeToDismiss;	// 13 = 0xd
    _Bool _presentedModally;	// 14 = 0xe
    _Bool _hideGrabber;	// 15 = 0xf
    _Bool _takesAvailableHeight;	// 16 = 0x10
    _Bool _takesAvailableWidth;	// 17 = 0x11
    _Bool _allowResizeInFloatingStyle;	// 18 = 0x12
    _Bool _shouldHidePreviousCards;	// 19 = 0x13
    _Bool _wantsFullscreen;	// 20 = 0x14
    _Bool _useDefaultLayoutWhenCalculatingBottomInsetForFloatingControls;	// 21 = 0x15
    _Bool _usingSheetPresentation;	// 22 = 0x16
    double _contentAlpha;	// 24 = 0x18
    unsigned long long _edgeAttachedRegularHeightDimmingBehavior;	// 32 = 0x20
    unsigned long long _defaultContaineeLayout;	// 40 = 0x28
    double _headerTransitionHeight;	// 48 = 0x30
    UIColor *_cardColor;	// 56 = 0x38
    double _cardHeight;	// 64 = 0x40
    UIViewController<ContaineeProtocol> *_viewController;	// 72 = 0x48
    CardView *_cardView;	// 80 = 0x50
    ContainerViewController *_containerViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000958b95
@property(readonly, nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak CardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak UIViewController<ContaineeProtocol> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) double cardHeight; // @synthesize cardHeight=_cardHeight;
@property(nonatomic) _Bool usingSheetPresentation; // @synthesize usingSheetPresentation=_usingSheetPresentation;
@property(nonatomic) _Bool useDefaultLayoutWhenCalculatingBottomInsetForFloatingControls; // @synthesize useDefaultLayoutWhenCalculatingBottomInsetForFloatingControls=_useDefaultLayoutWhenCalculatingBottomInsetForFloatingControls;
@property(nonatomic) _Bool wantsFullscreen; // @synthesize wantsFullscreen=_wantsFullscreen;
@property(nonatomic) _Bool shouldHidePreviousCards; // @synthesize shouldHidePreviousCards=_shouldHidePreviousCards;
@property(nonatomic) _Bool allowResizeInFloatingStyle; // @synthesize allowResizeInFloatingStyle=_allowResizeInFloatingStyle;
@property(nonatomic) _Bool takesAvailableWidth; // @synthesize takesAvailableWidth=_takesAvailableWidth;
@property(nonatomic) _Bool takesAvailableHeight; // @synthesize takesAvailableHeight=_takesAvailableHeight;
@property(nonatomic) _Bool hideGrabber; // @synthesize hideGrabber=_hideGrabber;
@property(nonatomic) _Bool presentedModally; // @synthesize presentedModally=_presentedModally;
@property(nonatomic) _Bool allowsSwipeToDismiss; // @synthesize allowsSwipeToDismiss=_allowsSwipeToDismiss;
@property(copy, nonatomic) UIColor *cardColor; // @synthesize cardColor=_cardColor;
@property(nonatomic) _Bool blurInCardView; // @synthesize blurInCardView=_blurInCardView;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double headerTransitionHeight; // @synthesize headerTransitionHeight=_headerTransitionHeight;
@property(nonatomic, getter=hidesContentInSmallLayout) _Bool hideContentInSmallLayout; // @synthesize hideContentInSmallLayout=_hideContentInSmallLayout;
@property(nonatomic) _Bool alwaysUseDefaultContaineeLayout; // @synthesize alwaysUseDefaultContaineeLayout=_alwaysUseDefaultContaineeLayout;
@property(nonatomic) unsigned long long defaultContaineeLayout; // @synthesize defaultContaineeLayout=_defaultContaineeLayout;
@property(nonatomic, getter=isFirstCard) _Bool firstCard; // @synthesize firstCard=_firstCard;
@property(nonatomic) unsigned long long edgeAttachedRegularHeightDimmingBehavior; // @synthesize edgeAttachedRegularHeightDimmingBehavior=_edgeAttachedRegularHeightDimmingBehavior;
- (double)transitionProgressToAscendingLayoutFromLayout:(unsigned long long)arg1;	// IMP=0x00100000009589bd
- (double)transitionProgressFromLayout:(unsigned long long)arg1 toLayout:(unsigned long long)arg2;	// IMP=0x001000000095859e
- (long long)_detentIndexForContaineeLayout:(unsigned long long)arg1;	// IMP=0x001000000095854f
@property(readonly, nonatomic) long long modalDismissStyle;
@property(readonly, nonatomic) long long modalPresentStyle;
- (long long)_modalPresentationStyleIsDismissing:(_Bool)arg1;	// IMP=0x001000000095847c
@property(readonly, nonatomic) struct CGSize sheetContentSize;
- (void)updateAdditionalTopMargin;	// IMP=0x0010000000958072
- (void)updateDimmingBehavior;	// IMP=0x0010000000957eae
- (void)updateGrabber;	// IMP=0x0010000000957dbe
- (void)configureForSheetPresentationWithContainer:(id)arg1 layout:(unsigned long long)arg2;	// IMP=0x00100000009578de
- (id)detents;	// IMP=0x0010000000957379
@property(readonly, nonatomic) double grabberSafeAreaHeight;
@property(readonly, nonatomic) _Bool isFloating;
- (_Bool)_fullHeightFixed;	// IMP=0x0010000000957299
- (unsigned long long)_layoutforDetentIdentifier:(id)arg1;	// IMP=0x00100000009571f3
- (id)_detentIdentifierForContaineeLayout:(unsigned long long)arg1;	// IMP=0x00100000009570c5
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
- (_Bool)updateHeightConstraintWithValue:(double)arg1 transitionHeight:(double)arg2;	// IMP=0x00100000009567fd
- (_Bool)updateHeightConstraintWithValue:(double)arg1;	// IMP=0x00100000009567ba
- (void)updateHeightForLayout:(unsigned long long)arg1;	// IMP=0x001000000095660b
- (void)updateHeightForCurrentLayoutAnimated:(_Bool)arg1;	// IMP=0x0010000000956388
- (void)updateHeightForCurrentLayout;	// IMP=0x0010000000956374
- (_Bool)_supportDragMultiLayout;	// IMP=0x001000000095633d
- (void)setCardView:(id)arg1 fromContainer:(id)arg2;	// IMP=0x0010000000955f31
- (void)_updateStyle;	// IMP=0x0010000000955afa
- (_Bool)_wantsSheetGrabber;	// IMP=0x0010000000955a99
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009559b9
- (void)dismiss:(_Bool)arg1;	// IMP=0x00100000009558e5
- (void)applyWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000955824
- (void)wantsMinimizeLayout;	// IMP=0x001000000095576d
- (void)wantsExpandLayout;	// IMP=0x00100000009556b6
- (void)_animateToDesiredDetentIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000955319
- (void)wantsLayout:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000954145
- (void)wantsLayout:(unsigned long long)arg1;	// IMP=0x001000000095412e
@property(readonly, nonatomic) double availableHeight;
@property(readonly, nonatomic) double bottomSafeOffset;
@property(readonly, nonatomic) unsigned long long containerStyle;
@property(readonly, nonatomic) unsigned long long containeeLayout;
- (id)initWithViewController:(id)arg1;	// IMP=0x0010000000953a95

@end

