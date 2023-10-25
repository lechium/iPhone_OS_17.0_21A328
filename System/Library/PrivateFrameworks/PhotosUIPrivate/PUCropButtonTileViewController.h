//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, NSTimer, PUAssetViewModel, PUBrowsingViewModel, PUOneUpCropButton, UIView;
@protocol PUCropButtonTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCropButtonTileViewController : PUTileViewController
{
    _Bool _presentingTip;	// 8 = 0x8
    _Bool _showingButton;	// 9 = 0x9
    _Bool _preventDismissal;	// 10 = 0xa
    _Bool _hasShownButtonForCurrentAsset;	// 11 = 0xb
    _Bool _presentMenuForTip;	// 12 = 0xc
    id <PUCropButtonTileViewControllerDelegate> _delegate;	// 16 = 0x10
    PUAssetViewModel *_assetViewModel;	// 24 = 0x18
    PUBrowsingViewModel *_browsingViewModel;	// 32 = 0x20
    PUOneUpCropButton *_button;	// 40 = 0x28
    NSTimer *_invisibilityTimer;	// 48 = 0x30
    unsigned long long _preventDismissalReasons;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000023dc61
@property(nonatomic) _Bool presentMenuForTip; // @synthesize presentMenuForTip=_presentMenuForTip;
@property(nonatomic) _Bool hasShownButtonForCurrentAsset; // @synthesize hasShownButtonForCurrentAsset=_hasShownButtonForCurrentAsset;
@property(nonatomic) _Bool preventDismissal; // @synthesize preventDismissal=_preventDismissal;
@property(nonatomic) unsigned long long preventDismissalReasons; // @synthesize preventDismissalReasons=_preventDismissalReasons;
@property(retain, nonatomic) NSTimer *invisibilityTimer; // @synthesize invisibilityTimer=_invisibilityTimer;
@property(nonatomic, getter=isShowingButton) _Bool showingButton; // @synthesize showingButton=_showingButton;
@property(retain, nonatomic) PUOneUpCropButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool presentingTip; // @synthesize presentingTip=_presentingTip;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(nonatomic) __weak id <PUCropButtonTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)oneUpCropButton:(id)arg1 pointerTargetDidChange:(_Bool)arg2;	// IMP=0x000000000023db25
- (void)oneUpCropButton:(id)arg1 menuPresentedDidChange:(_Bool)arg2;	// IMP=0x000000000023db13
- (struct CGSize)oneUpCropButtonOriginalAspectRatio:(id)arg1;	// IMP=0x000000000023d9b9
- (struct CGSize)oneUpCropButtonCurrentAspectRatio:(id)arg1;	// IMP=0x000000000023d8f8
- (struct CGSize)oneUpCropButtonBoundingSize:(id)arg1;	// IMP=0x000000000023d86b
- (void)oneUpCropButton:(id)arg1 didSelectAspectRatio:(struct CGSize)arg2;	// IMP=0x000000000023d6a3
- (void)_updatePreventDismissalReason:(unsigned long long)arg1 activate:(_Bool)arg2;	// IMP=0x000000000023d650
- (void)_updatePreventDismissalReasons;	// IMP=0x000000000023d584
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000023d31d
- (void)_didChangeCurrentAsset;	// IMP=0x000000000023d2d7
- (void)_didChangeChromeVisible:(_Bool)arg1;	// IMP=0x000000000023d29b
- (void)_dismissButtonAfterDelay;	// IMP=0x000000000023d145
- (void)_didChangeModelTileTransform:(id)arg1;	// IMP=0x000000000023d087
- (_Bool)_hasUserZoomedIn;	// IMP=0x000000000023cfba
- (_Bool)_canShowButton;	// IMP=0x000000000023cf51
- (void)_invalidateTimers;	// IMP=0x000000000023cef7
- (void)_showButton:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000023cc43
- (void)_createButtonIfNeeded;	// IMP=0x000000000023cb4f
- (void)dealloc;	// IMP=0x000000000023cae0
- (void)_layoutSubviews;	// IMP=0x000000000023c9c3
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x000000000023c982
- (void)becomeReusable;	// IMP=0x000000000023c8fb
@property(readonly, nonatomic) UIView *cropButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
