//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, MISSING_TYPE, UGCGlyphButtonAppearance, UIImageView, UIImpactFeedbackGenerator, UITapGestureRecognizer;
@protocol UGCGlyphButtonViewDelegate;

@interface UGCGlyphButtonView : UIView
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _selected;	// 9 = 0x9
    MISSING_TYPE *_muted;	// 10 = 0xa
    id <UGCGlyphButtonViewDelegate> _delegate;	// 16 = 0x10
    UIImageView *_glyph;	// 24 = 0x18
    UGCGlyphButtonAppearance *_glyphAppearance;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
    UIImpactFeedbackGenerator *_feedbackGenerator;	// 48 = 0x30
    CALayer *_animationLayer;	// 56 = 0x38
    CALayer *_contentLayer;	// 64 = 0x40
    CALayer *_selectionLayer;	// 72 = 0x48
}

+ (id)dislikeButtonView;	// IMP=0x00400000009c1d4b
+ (id)likeButtonView;	// IMP=0x00100000009c1ce1
+ (id)_sharedThumbButtonConfig;	// IMP=0x00100000009c1be1
- (void).cxx_destruct;	// IMP=0x00200000009c27b4
@property(retain, nonatomic) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UGCGlyphButtonAppearance *glyphAppearance; // @synthesize glyphAppearance=_glyphAppearance;
@property(retain, nonatomic) UIImageView *glyph; // @synthesize glyph=_glyph;
@property(nonatomic) __weak id <UGCGlyphButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_handleGlyphTap;	// IMP=0x00100000009c260a
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000009c25f9
- (void)_updateGlyphAppearance;	// IMP=0x00100000009c2312
- (void)_updateAppearanceAnimated:(_Bool)arg1;	// IMP=0x00100000009c2202
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009c218a
- (void)_setupButton;	// IMP=0x00100000009c1e84
- (id)initWithAppearance:(id)arg1;	// IMP=0x00100000009c1db5
- (double)animationDuration;	// IMP=0x00100000009c1bd3
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009c1bcd

@end

