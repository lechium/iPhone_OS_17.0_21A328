//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, CAMediaTimingFunction, NSString, UIDelayedAction, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIView, UIViewFloatAnimatableProperty, _UIPageControlContentView, _UIPageControlIndicatorContentView, _UIPageControlInteractor, _UIPageIndicatorFeed, _UIPageIndicatorStore;

__attribute__((visibility("hidden")))
@interface _UIInteractivePageControlVisualProvider
{
    struct {
        unsigned int scrubbing:1;
        unsigned int platterExpanded:1;
        unsigned int didScrubPastInitialThreshold:1;
    } _state;	// 24 = 0x18
    long long _indicatorStartIndex;	// 32 = 0x20
    long long _numberOfVisibleIndicators;	// 40 = 0x28
    long long _targetPage;	// 48 = 0x30
    long long _currentTick;	// 56 = 0x38
    long long _tickThreshold;	// 64 = 0x40
    double _panDistance;	// 72 = 0x48
    double _indicatorPaddingOffset;	// 80 = 0x50
    double _continuousStartIndex;	// 88 = 0x58
    UIView *_backgroundView;	// 96 = 0x60
    _UIPageControlContentView *_contentView;	// 104 = 0x68
    _UIPageControlIndicatorContentView *_indicatorContentView;	// 112 = 0x70
    CADisplayLink *_displayLink;	// 120 = 0x78
    UITapGestureRecognizer *_tapGestureRecognizer;	// 128 = 0x80
    UILongPressGestureRecognizer *_scrubbingGestureRecognizer;	// 136 = 0x88
    UIDelayedAction *_successiveTapAction;	// 144 = 0x90
    long long _previousMoveDirection;	// 152 = 0x98
    _UIPageIndicatorFeed *_indicatorFeed;	// 160 = 0xa0
    _UIPageIndicatorStore *_indicatorStore;	// 168 = 0xa8
    _UIPageControlInteractor *_interactor;	// 176 = 0xb0
    UIViewFloatAnimatableProperty *_continuousDisplayedPage;	// 184 = 0xb8
    UIViewFloatAnimatableProperty *_scrubProgress;	// 192 = 0xc0
    CAMediaTimingFunction *_indicatorTransformCurve;	// 200 = 0xc8
    long long _resolvedDirection;	// 208 = 0xd0
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;	// 216 = 0xd8
    UIImpactFeedbackGenerator *_joggingFeedbackGenerator;	// 224 = 0xe0
    struct CGPoint _previousTouchLocation;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000139964d
@property(retain, nonatomic) UIImpactFeedbackGenerator *joggingFeedbackGenerator; // @synthesize joggingFeedbackGenerator=_joggingFeedbackGenerator;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property(readonly, nonatomic) long long resolvedDirection; // @synthesize resolvedDirection=_resolvedDirection;
@property(retain, nonatomic) CAMediaTimingFunction *indicatorTransformCurve; // @synthesize indicatorTransformCurve=_indicatorTransformCurve;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *scrubProgress; // @synthesize scrubProgress=_scrubProgress;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *continuousDisplayedPage; // @synthesize continuousDisplayedPage=_continuousDisplayedPage;
@property(retain, nonatomic) _UIPageControlInteractor *interactor; // @synthesize interactor=_interactor;
@property(retain, nonatomic) _UIPageIndicatorStore *indicatorStore; // @synthesize indicatorStore=_indicatorStore;
@property(retain, nonatomic) _UIPageIndicatorFeed *indicatorFeed; // @synthesize indicatorFeed=_indicatorFeed;
@property(nonatomic) struct CGPoint previousTouchLocation; // @synthesize previousTouchLocation=_previousTouchLocation;
@property(nonatomic) long long previousMoveDirection; // @synthesize previousMoveDirection=_previousMoveDirection;
@property(retain, nonatomic) UIDelayedAction *successiveTapAction; // @synthesize successiveTapAction=_successiveTapAction;
@property(retain, nonatomic) UILongPressGestureRecognizer *scrubbingGestureRecognizer; // @synthesize scrubbingGestureRecognizer=_scrubbingGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) _UIPageControlIndicatorContentView *indicatorContentView; // @synthesize indicatorContentView=_indicatorContentView;
@property(retain, nonatomic) _UIPageControlContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isPlatterExpanded) _Bool platterExpanded;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing;
- (void)displayLinkTicked:(id)arg1;	// IMP=0x00000000013982f0
- (void)didScrubPageControl:(id)arg1;	// IMP=0x0000000001397c1c
- (_Bool)supportsContinuousInteraction;	// IMP=0x0000000001397c14
- (void)didTapPageControl:(id)arg1;	// IMP=0x000000000139758e
- (void)resetSuccessiveTapInfo;	// IMP=0x0000000001397553
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000013974b7
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000013973ca
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;	// IMP=0x00000000013973ae
- (id)preferredActiveIndicatorImage;	// IMP=0x0000000001396d3e
- (void)setPreferredActiveIndicatorImage:(id)arg1;	// IMP=0x0000000001396c5b
- (void)setCustomActiveIndicatorImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x0000000001396adf
- (id)customActiveIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000001396a80
- (id)preferredIndicatorImage;	// IMP=0x0000000001396a30
- (void)setPreferredIndicatorImage:(id)arg1;	// IMP=0x000000000139694d
- (void)setCustomIndicatorImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x00000000013967d1
- (id)customIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000001396772
- (void)configureIndicator:(id)arg1 atPage:(long long)arg2;	// IMP=0x0000000001396590
- (void)configureIndicatorImagesForIndicator:(id)arg1 atPage:(long long)arg2;	// IMP=0x0000000001396498
- (unsigned long long)maxVisibleIndicators;	// IMP=0x0000000001396476
- (struct CGSize)indicatorSizeForImage:(id)arg1;	// IMP=0x00000000013963f2
- (struct CGRect)indicatorFrameForPage:(long long)arg1;	// IMP=0x000000000139631e
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;	// IMP=0x00000000013960a1
- (void)invalidateIndicators;	// IMP=0x0000000001395f0b
- (void)layoutSubviews;	// IMP=0x000000000139358b
- (id)backgroundView;	// IMP=0x0000000001393507
- (void)setBackgroundView:(id)arg1;	// IMP=0x00000000013933dd
- (void)setIndicatorOpacity:(double)arg1;	// IMP=0x00000000013933c0
- (double)indicatorOpacity;	// IMP=0x00000000013933a3
- (void)updateDisplayedPageToCurrentPage;	// IMP=0x0000000001392c2f
- (void)didUpdateCurrentPageIndicatorTintColor;	// IMP=0x000000000139290b
- (void)didUpdatePageIndicatorTintColor;	// IMP=0x000000000139267f
- (void)didUpdateInteractionTypeAvailability;	// IMP=0x000000000139259c
- (void)didUpdateCurrentPageProgress;	// IMP=0x00000000013924ea
- (void)didUpdatePageProgress;	// IMP=0x0000000001392164
- (void)didUpdateCustomLayoutValues;	// IMP=0x00000000013920eb
- (void)didUpdateBackgroundEffect;	// IMP=0x0000000001391fc8
- (void)didUpdateBackgroundStyle;	// IMP=0x0000000001391f28
- (void)didUpdateNumberOfPages;	// IMP=0x0000000001391d5c
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;	// IMP=0x0000000001391b1c
- (void)didUpdateLayoutDirection;	// IMP=0x0000000001391887
- (void)setPage:(long long)arg1 interactionState:(long long)arg2;	// IMP=0x0000000001391733
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000139139e
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000001391349
- (_Bool)shouldDisableTouchTracking;	// IMP=0x0000000001390e79
- (void)pruneArchivedSubviews:(id)arg1;	// IMP=0x0000000001390e10
- (void)prepare;	// IMP=0x00000000013903f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

