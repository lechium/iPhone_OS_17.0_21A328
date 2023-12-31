//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableSet, NSString, UIBarButtonItem, UIBlurEffect, UIColor, UIEvent, UIImageView, UITapGestureRecognizer;
@protocol UIDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView
{
    UIBarButtonItem *_highlightedBarButtonItem;	// 128 = 0x80
    UIImageView *_highlightedImageView;	// 136 = 0x88
    UIImageView *_backgroundGlow;	// 144 = 0x90
    NSArray *_passthroughViews;	// 152 = 0x98
    _Bool _ignoresTouches;	// 160 = 0xa0
    _Bool _inPassthroughHitTest;	// 161 = 0xa1
    UIColor *_dimmingColor;	// 168 = 0xa8
    UITapGestureRecognizer *_singleFingerTapRecognizer;	// 176 = 0xb0
    UIEvent *_observedEventForAdditionalGestures;	// 184 = 0xb8
    NSMutableSet *_additionalEventGestureRecognizers;	// 192 = 0xc0
    _Bool _suppressesBackdrops;	// 200 = 0xc8
    id <UIDimmingViewDelegate> _delegate;	// 208 = 0xd0
    double _percentDisplayed;	// 216 = 0xd8
    double _percentLightened;	// 224 = 0xe0
    UIBlurEffect *_blurEffect;	// 232 = 0xe8
    NSArray *_lowerWindowDismissalGestureViews;	// 240 = 0xf0
}

+ (id)defaultDimmingColor;	// IMP=0x001000000163d400
- (void).cxx_destruct;	// IMP=0x000000000163f794
@property(copy, nonatomic) NSArray *lowerWindowDismissalGestureViews; // @synthesize lowerWindowDismissalGestureViews=_lowerWindowDismissalGestureViews;
@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property(nonatomic) double percentLightened; // @synthesize percentLightened=_percentLightened;
@property(nonatomic) double percentDisplayed; // @synthesize percentDisplayed=_percentDisplayed;
@property(nonatomic) _Bool suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) _Bool ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <UIDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isTransparentFocusItem;	// IMP=0x000000000163f5e8
- (id)_gestureRecognizersForEvent:(id)arg1;	// IMP=0x000000000163f587
- (void)_clearAdditionalEventGestures;	// IMP=0x000000000163f537
- (void)_queueAdditionalEventGesturesFromView:(id)arg1;	// IMP=0x000000000163f3eb
- (void)_sendDelegateDimmingViewWasTapped;	// IMP=0x000000000163f361
- (void)_simulateTap;	// IMP=0x000000000163f340
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000163f307
- (void)handleSingleTap:(id)arg1;	// IMP=0x000000000163f2cb
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000163f236
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x000000000163ee67
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000163e646
- (void)mouseUp:(struct __GSEvent *)arg1;	// IMP=0x000000000163e634
- (void)updateBackgroundColor;	// IMP=0x000000000163e2ea
- (void)updateBackground;	// IMP=0x000000000163e2d8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000163e241
- (void)display:(_Bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;	// IMP=0x000000000163dfd2
- (void)display:(_Bool)arg1;	// IMP=0x000000000163dde2
@property(nonatomic) _Bool hitTestsAsOpaque;
@property(readonly, nonatomic) _Bool displayed;
- (id)_backdropViewsToAnimate;	// IMP=0x000000000163da77
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
- (void)dimmingRemovalAnimationDidStop;	// IMP=0x000000000163d628
- (int)textEffectsVisibilityLevel;	// IMP=0x000000000163d61d
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000163d5dc
- (void)dealloc;	// IMP=0x000000000163d591
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000163d419

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

