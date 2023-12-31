//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, NSString, UIInputViewSet, UIInputWindowControllerHosting, UIKBInputBackdropView, UILayoutGuide, UIPinchGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UIInputLayoutHostingItem
{
    _Bool _isOnScreen;	// 8 = 0x8
    _Bool _isFloating;	// 9 = 0x9
    UILayoutGuide *_belowInputLayoutGuide;	// 16 = 0x10
    UILayoutGuide *_inputViewLayoutGuide;	// 24 = 0x18
    UILayoutGuide *_assistantLayoutGuide;	// 32 = 0x20
    UILayoutGuide *_accessoryLayoutGuide;	// 40 = 0x28
    NSLayoutConstraint *_bottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_leftConstraint;	// 56 = 0x38
    NSLayoutConstraint *_rightConstraint;	// 64 = 0x40
    NSLayoutConstraint *_keyplaneWidthConstraint;	// 72 = 0x48
    NSArray *_onscreenConstraints;	// 80 = 0x50
    NSArray *_offscreenConstraints;	// 88 = 0x58
    UIView *_containerView;	// 96 = 0x60
    UIView *_inputLayoutView;	// 104 = 0x68
    UIView *_inputLayoutAssistantView;	// 112 = 0x70
    UIView *_inputLayoutAccessoryView;	// 120 = 0x78
    UIInputViewSet *_inputViewSet;	// 128 = 0x80
    NSArray *_guideConstraints;	// 136 = 0x88
    NSArray *_inputSetConstraints;	// 144 = 0x90
    UIInputWindowControllerHosting *_hosting;	// 152 = 0x98
    UIKBInputBackdropView *_standardBackgroundView;	// 160 = 0xa0
    UIView *_platterView;	// 168 = 0xa8
    UIView *_pillView;	// 176 = 0xb0
    UIPinchGestureRecognizer *_pinchGesture;	// 184 = 0xb8
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00100000015a0022
- (void).cxx_destruct;	// IMP=0x00000000015a4379
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain, nonatomic) UIView *pillView; // @synthesize pillView=_pillView;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) UIKBInputBackdropView *standardBackgroundView; // @synthesize standardBackgroundView=_standardBackgroundView;
@property(nonatomic) _Bool isFloating; // @synthesize isFloating=_isFloating;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
@property(nonatomic) __weak UIInputWindowControllerHosting *hosting; // @synthesize hosting=_hosting;
@property(retain, nonatomic) NSArray *inputSetConstraints; // @synthesize inputSetConstraints=_inputSetConstraints;
@property(retain, nonatomic) NSArray *guideConstraints; // @synthesize guideConstraints=_guideConstraints;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
@property(retain, nonatomic) UIView *inputLayoutAccessoryView; // @synthesize inputLayoutAccessoryView=_inputLayoutAccessoryView;
@property(retain, nonatomic) UIView *inputLayoutAssistantView; // @synthesize inputLayoutAssistantView=_inputLayoutAssistantView;
@property(retain, nonatomic) UIView *inputLayoutView; // @synthesize inputLayoutView=_inputLayoutView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *offscreenConstraints; // @synthesize offscreenConstraints=_offscreenConstraints;
@property(retain, nonatomic) NSArray *onscreenConstraints; // @synthesize onscreenConstraints=_onscreenConstraints;
@property(retain, nonatomic) NSLayoutConstraint *keyplaneWidthConstraint; // @synthesize keyplaneWidthConstraint=_keyplaneWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) UILayoutGuide *accessoryLayoutGuide; // @synthesize accessoryLayoutGuide=_accessoryLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *assistantLayoutGuide; // @synthesize assistantLayoutGuide=_assistantLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *inputViewLayoutGuide; // @synthesize inputViewLayoutGuide=_inputViewLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *belowInputLayoutGuide; // @synthesize belowInputLayoutGuide=_belowInputLayoutGuide;
- (id)constraintsForView:(id)arg1 embeddedInGuide:(id)arg2;	// IMP=0x00000000015a3da2
- (id)constraintsForView:(id)arg1 embeddedInView:(id)arg2 insets:(struct UIEdgeInsets)arg3;	// IMP=0x00000000015a3b2d
- (void)createPlatterBackdropView;	// IMP=0x00000000015a2b8c
- (void)createBackdropView;	// IMP=0x00000000015a265d
- (void)trackPinch:(id)arg1;	// IMP=0x00000000015a1bf0
- (void)constrainViewsToGuidesIfNeeded;	// IMP=0x00000000015a1665
- (void)constrainGuidesIfNeeded;	// IMP=0x00000000015a002a
- (void)clearInputAccessoryViewEdgeConstraints;	// IMP=0x00000000015a001c
- (void)clearInputAssistantViewEdgeConstraints;	// IMP=0x00000000015a0016
- (void)clearInputViewEdgeConstraints;	// IMP=0x00000000015a0010
- (void)clearVisibilityConstraints;	// IMP=0x00000000015a000a
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;	// IMP=0x00000000015a0004
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;	// IMP=0x000000000159feee
- (void)updateEmptyHeightConstraint;	// IMP=0x000000000159fee8
- (void)updateInputAssistantBackdropView;	// IMP=0x000000000159fee2
- (void)updateInputAccessoryBackdropView;	// IMP=0x000000000159fedc
- (void)updateInputBackdropViewVisibility;	// IMP=0x000000000159fed6
- (void)updateInputBackdropView;	// IMP=0x000000000159fed0
- (void)_updateBackdropViews;	// IMP=0x000000000159feca
- (void)refreshApplicator;	// IMP=0x000000000159fec4
- (void)updateViewSizingConstraints:(id)arg1;	// IMP=0x000000000159febe
- (void)updateViewSizingConstraints;	// IMP=0x000000000159feb8
- (void)updateViewConstraints;	// IMP=0x000000000159feb2
- (void)someViewDidLayoutSubviews;	// IMP=0x000000000159feac
- (void)resetPlacement;	// IMP=0x000000000159fea6
- (void)unloadForPlacement;	// IMP=0x000000000159fea0
- (void)reloadForPlacement;	// IMP=0x000000000159fe9a
- (void)setPlacement;	// IMP=0x000000000159fe94
- (void)updateConstraintInsets;	// IMP=0x000000000159fe8e
- (id)inputAccessoryView;	// IMP=0x000000000159fe79
- (void)setInputAccessoryView:(id)arg1;	// IMP=0x000000000159fe73
- (void)setInputAssistantView:(id)arg1;	// IMP=0x000000000159fe6d
- (id)inputAssistantView;	// IMP=0x000000000159fe58
- (void)setInputView:(id)arg1;	// IMP=0x000000000159fe52
- (id)inputView;	// IMP=0x000000000159fe3d
- (struct CGRect)visibleFrame;	// IMP=0x000000000159fdf8
- (void)changeOnScreen:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000159fa1a
- (void)hideBackdrop:(_Bool)arg1;	// IMP=0x000000000159f937
- (void)updateInputViewSet:(id)arg1;	// IMP=0x000000000159f351
- (id)initWithInputViewSet:(id)arg1 container:(id)arg2;	// IMP=0x000000000159f193
- (id)initWithContainer:(id)arg1;	// IMP=0x000000000159effb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

