//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUILabel.h"

@class CALayer, NSArray, UIImage, __TVAnimatedImageView;

__attribute__((visibility("hidden")))
@interface VUIAnimatedLabel : VUILabel
{
    _Bool _crossfading;	// 8 = 0x8
    _Bool _marqueeNeeded;	// 9 = 0x9
    _Bool _marqueeing;	// 10 = 0xa
    _Bool _starting;	// 11 = 0xb
    _Bool _stopping;	// 12 = 0xc
    CALayer *_maskLayer;	// 16 = 0x10
    _Bool _animating;	// 24 = 0x18
    _Bool _paused;	// 25 = 0x19
    float _scrollRate;	// 28 = 0x1c
    double _marqueeDelay;	// 32 = 0x20
    double _replicationPadding;	// 40 = 0x28
    double _maskCapWidth;	// 48 = 0x30
    double _crossfadeDuration;	// 56 = 0x38
    NSArray *_attributedStrings;	// 64 = 0x40
    unsigned long long _currentAttributedStringIndex;	// 72 = 0x48
    double _underPosterOutset;	// 80 = 0x50
    __TVAnimatedImageView *_currentMarqueeView;	// 88 = 0x58
    __TVAnimatedImageView *_nextMarqueeView;	// 96 = 0x60
    UIImage *_marqueeContentImage;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000023009f
@property(retain, nonatomic) UIImage *marqueeContentImage; // @synthesize marqueeContentImage=_marqueeContentImage;
@property(readonly, nonatomic) __weak __TVAnimatedImageView *nextMarqueeView; // @synthesize nextMarqueeView=_nextMarqueeView;
@property(readonly, nonatomic) __weak __TVAnimatedImageView *currentMarqueeView; // @synthesize currentMarqueeView=_currentMarqueeView;
@property(nonatomic) double underPosterOutset; // @synthesize underPosterOutset=_underPosterOutset;
@property(readonly, nonatomic) unsigned long long currentAttributedStringIndex; // @synthesize currentAttributedStringIndex=_currentAttributedStringIndex;
@property(copy, nonatomic) NSArray *attributedStrings; // @synthesize attributedStrings=_attributedStrings;
@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) float scrollRate; // @synthesize scrollRate=_scrollRate;
@property(nonatomic) double maskCapWidth; // @synthesize maskCapWidth=_maskCapWidth;
@property(nonatomic) double replicationPadding; // @synthesize replicationPadding=_replicationPadding;
@property(nonatomic) double marqueeDelay; // @synthesize marqueeDelay=_marqueeDelay;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)setMarqueeRunning:(_Bool)arg1;	// IMP=0x000000000022ff1c
- (void)setMarqueeEnabled:(_Bool)arg1;	// IMP=0x000000000022ff16
- (void)_startMarqueeIfNeeded;	// IMP=0x000000000022eff2
@property(readonly, nonatomic) double animationDuration;
- (_Bool)_shouldCycle;	// IMP=0x000000000022eef5
- (void)_prepareNextMarqueeWithDelay:(double)arg1;	// IMP=0x000000000022e9b1
- (id)_rasterizedTextWithMarquee:(_Bool)arg1;	// IMP=0x000000000022e6aa
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x000000000022e329
- (_Bool)_isRTL;	// IMP=0x000000000022e2e5
- (void)didMoveToWindow;	// IMP=0x000000000022e277
- (void)stopAndResetScrollWithDuration:(double)arg1;	// IMP=0x000000000022da63
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;	// IMP=0x000000000022d7ab
- (void)stopAnimating;	// IMP=0x000000000022d770
- (void)_clearAnimations;	// IMP=0x000000000022d224
- (void)setNeedsDisplay;	// IMP=0x000000000022d1e8
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000022d120
- (void)_clearAttributedStrings;	// IMP=0x000000000022cbcf
- (void)setAttributedText:(id)arg1;	// IMP=0x000000000022cb2a
- (void)setText:(id)arg1;	// IMP=0x000000000022cab3
- (void)dealloc;	// IMP=0x000000000022ca34
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000022c86e

@end

