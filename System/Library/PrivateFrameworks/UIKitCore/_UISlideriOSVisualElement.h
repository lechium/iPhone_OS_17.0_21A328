//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UIImageView, UISlider, UISliderDataModel;

__attribute__((visibility("hidden")))
@interface _UISlideriOSVisualElement : UIView
{
    UIImageView *_innerThumbView;	// 128 = 0x80
    UIImageView *_minValueImageView;	// 136 = 0x88
    UIImageView *_maxValueImageView;	// 144 = 0x90
    UIImageView *_thumbView;	// 152 = 0x98
    UIImageView *_minTrackView;	// 160 = 0xa0
    UIImageView *_maxTrackView;	// 168 = 0xa8
    UIView *_minTrackClipView;	// 176 = 0xb0
    UIView *_maxTrackClipView;	// 184 = 0xb8
    struct {
        unsigned int animating:1;
        unsigned int preparingToAnimate:1;
        unsigned int overridesModifiedTrackRect:1;
    } _sliderFlags;	// 192 = 0xc0
    double _hitOffset;	// 200 = 0xc8
    UIView *_thumbViewNeue;	// 208 = 0xd0
    NSArray *_trackColors;	// 216 = 0xd8
    _Bool _trackIsArtworkBased;	// 224 = 0xe0
    _Bool _thumbIsArtworkBased;	// 225 = 0xe1
    _Bool _maxColorIsValid;	// 226 = 0xe2
    UISliderDataModel *_data;	// 232 = 0xe8
    UISlider *_slider;	// 240 = 0xf0
}

+ (CDStruct_6024001e)drawingMetricsForPlatform;	// IMP=0x0010000000e62931
+ (id)_modernThumbImageWithTraitCollection:(id)arg1 tintColor:(id)arg2;	// IMP=0x0010000000e60993
- (void).cxx_destruct;	// IMP=0x0000000000e6711d
@property(nonatomic) __weak UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UISliderDataModel *data; // @synthesize data=_data;
- (id)thumbViewNeue;	// IMP=0x0000000000e670ca
- (id)thumbView;	// IMP=0x0000000000e670b5
- (id)minValueImageView;	// IMP=0x0000000000e670a0
- (id)maxValueImageView;	// IMP=0x0000000000e6708b
- (void)didSetValues;	// IMP=0x0000000000e67079
- (void)didSetShowValue;	// IMP=0x0000000000e67067
- (void)didSetContinuous;	// IMP=0x0000000000e67061
- (void)didSetSelected;	// IMP=0x0000000000e6704f
- (void)didSetHighlighted;	// IMP=0x0000000000e6703d
- (void)didSetEnabled;	// IMP=0x0000000000e66f9c
- (id)_maxTrackClipView;	// IMP=0x0000000000e66f87
- (id)_minTrackClipView;	// IMP=0x0000000000e66f72
- (id)maxTrackView;	// IMP=0x0000000000e66f5d
- (id)minTrackView;	// IMP=0x0000000000e66f48
- (struct UIEdgeInsets)thumbHitEdgeInsets;	// IMP=0x0000000000e66eb7
- (void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;	// IMP=0x0000000000e66d44
- (void)didSetThumbEnabled;	// IMP=0x0000000000e66c28
- (void)didSetMaximumTrackImageForStates;	// IMP=0x0000000000e66bfa
- (void)didSetMinimumTrackImageForStates;	// IMP=0x0000000000e66bcc
- (void)didSetThumbImageForStates;	// IMP=0x0000000000e66b9e
- (id)createThumbView;	// IMP=0x0000000000e669dd
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000e6690c
- (void)showValueDidChange;	// IMP=0x0000000000e668de
- (_Bool)isAnimatingValueChange;	// IMP=0x0000000000e668cc
- (_Bool)cancelTouchTracking;	// IMP=0x0000000000e667c9
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e667c3
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e667bd
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e666e8
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e66581
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e66278
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e65c9e
- (_Bool)_shouldBeginTrackingAtPoint:(struct CGPoint)arg1 pointInKnob:(struct CGPoint *)arg2 inKnob:(_Bool *)arg3;	// IMP=0x0000000000e65b52
- (_Bool)cancelMouseTracking;	// IMP=0x0000000000e65a95
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e65a23
- (void)_sliderAnimationDidStop:(_Bool)arg1;	// IMP=0x0000000000e659fe
- (void)_sliderAnimationWillStart;	// IMP=0x0000000000e659e5
- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;	// IMP=0x0000000000e65729
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000e65342
- (void)_updateAppearanceForEnabled:(_Bool)arg1;	// IMP=0x0000000000e6531a
- (void)_layoutSubviewsForBoundsChange:(_Bool)arg1;	// IMP=0x0000000000e6422f
- (struct CGRect)_modifiedTrackRect:(struct CGRect)arg1;	// IMP=0x0000000000e64217
- (void)_updateMaxTrackColorForInitialization:(_Bool)arg1;	// IMP=0x0000000000e63d85
- (void)_traitCollectionDidChangeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;	// IMP=0x0000000000e63b1a
- (void)_setSliderNeedsLayout;	// IMP=0x0000000000e63ae6
- (void)didPerformLayout;	// IMP=0x0000000000e63a8c
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000e639e9
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000e63946
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000e63753
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e63741
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000e632e6
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;	// IMP=0x0000000000e632de
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x0000000000e630ed
- (double)thumbDimensionNeue;	// IMP=0x0000000000e630be
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000e62c98
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000e62b8e
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000e62a84
- (void)didUpdateExpansionFactor;	// IMP=0x0000000000e62a7e
- (void)didUpdateTraitCollection;	// IMP=0x0000000000e62a78
- (unsigned long long)state;	// IMP=0x0000000000e628ae
- (id)currentMaximumTrackImage;	// IMP=0x0000000000e62842
- (id)currentMinimumTrackImage;	// IMP=0x0000000000e627d6
- (id)currentThumbImage;	// IMP=0x0000000000e6276a
- (void)tintColorDidChange;	// IMP=0x0000000000e62727
- (id)maximumValueImage;	// IMP=0x0000000000e6270a
- (void)didSetMaximumValueImage;	// IMP=0x0000000000e6260b
- (void)didSetMinimumValueImage;	// IMP=0x0000000000e6250c
- (void)didSetMaximumTrackTintColor;	// IMP=0x0000000000e624d1
- (void)didSetMaximumTrackImageForState:(unsigned long long)arg1;	// IMP=0x0000000000e623b8
- (void)didSetMinimumTrackTintColor;	// IMP=0x0000000000e6238a
- (void)_updateMinimumTrackTintColor;	// IMP=0x0000000000e6214d
- (void)didSetMinimumTrackImageForState:(unsigned long long)arg1;	// IMP=0x0000000000e62032
- (void)didSetThumbTintColor;	// IMP=0x0000000000e61ffd
- (id)thumbTintColor;	// IMP=0x0000000000e61fe0
- (void)didSetThumbImageForState:(unsigned long long)arg1;	// IMP=0x0000000000e61f08
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000e61c54
- (void)dealloc;	// IMP=0x0000000000e61bd2
- (void)_rebuildControlThumb:(_Bool)arg1 track:(_Bool)arg2;	// IMP=0x0000000000e61a17
- (void)_buildTrackArtwork;	// IMP=0x0000000000e616a5
- (double)_cornerRadiusForRect:(struct CGRect)arg1;	// IMP=0x0000000000e6168d
- (void)_initSubviews;	// IMP=0x0000000000e615ed
- (void)_initImages;	// IMP=0x0000000000e612c5
- (id)createThumbViewNeue;	// IMP=0x0000000000e60f4b
- (void)_bounceMinMaxValueImageViewsIfNeeded;	// IMP=0x0000000000e607ad
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000e6049e
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000e60360
- (void)_setupFeedback;	// IMP=0x0000000000e6025c
- (void)_contentSizeCategoryChanged:(id)arg1;	// IMP=0x0000000000e6024a
- (void)_listenForContentSizeCategoryChangesIfNecessary;	// IMP=0x0000000000e601c5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e5ff79
- (id)init;	// IMP=0x0000000000e5ff01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

