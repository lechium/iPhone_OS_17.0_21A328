//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISlider.h>

@class AVLayoutItemAttributes, NSArray, NSMutableArray, NSString, NSTimer, UIImageView, UIScrollView, UISelectionFeedbackGenerator, UIView;
@protocol AVScrubberDelegate;

__attribute__((visibility("hidden")))
@interface AVScrubber : UISlider
{
    double _trackingStartTime;	// 8 = 0x8
    float _previousValue;	// 16 = 0x10
    double _previousValueChangeTime;	// 24 = 0x18
    double _currentValueChangedTime;	// 32 = 0x20
    _Bool _didHaveLessThanFullScrubbingSpeedSinceTrackingBegin;	// 40 = 0x28
    _Bool _collapsed;	// 41 = 0x29
    _Bool _included;	// 42 = 0x2a
    _Bool _removed;	// 43 = 0x2b
    _Bool _hasAlternateAppearance;	// 44 = 0x2c
    _Bool _hasFullScreenAppearance;	// 45 = 0x2d
    _Bool _showsTimelineMarkers;	// 46 = 0x2e
    _Bool _scrollScrubbing;	// 47 = 0x2f
    _Bool _slowKnobMovementDetected;	// 48 = 0x30
    _Bool _shouldRecoverFromPrecisionScrubbingIfNeeded;	// 49 = 0x31
    _Bool _scrubsWhenTappedAnywhere;	// 50 = 0x32
    _Bool _canChangeScrubbingSpeed;	// 51 = 0x33
    _Bool _hasChangedLocationAtLeastOnce;	// 52 = 0x34
    _Bool _scrubberEnabledStatus;	// 53 = 0x35
    float _estimatedFrameRate;	// 56 = 0x38
    float _rate;	// 60 = 0x3c
    UISelectionFeedbackGenerator *_feedbackGenerator;	// 64 = 0x40
    UIView *_loadedTrackOverlayView;	// 72 = 0x48
    NSMutableArray *_previousScrubberVelocities;	// 80 = 0x50
    AVLayoutItemAttributes *_layoutAttributes;	// 88 = 0x58
    id <AVScrubberDelegate> _delegate;	// 96 = 0x60
    NSArray *_loadedTimeRanges;	// 104 = 0x68
    NSArray *_interstitialDisplayTimes;	// 112 = 0x70
    NSArray *_photosensitiveDisplayTimes;	// 120 = 0x78
    long long _scrubbingSpeed;	// 128 = 0x80
    double _resolution;	// 136 = 0x88
    double _scrubberParentHeight;	// 144 = 0x90
    UIScrollView *_scrollView;	// 152 = 0x98
    UIImageView *_currentThumbView;	// 160 = 0xa0
    NSTimer *_updateSlowKnobMovementDetectedTimer;	// 168 = 0xa8
    double _timestampWhenTrackingEnded;	// 176 = 0xb0
    NSMutableArray *_interstitialOverlayViews;	// 184 = 0xb8
    NSMutableArray *_photosensitiveOverlayViews;	// 192 = 0xc0
    double _currentScrubberParentHeight;	// 200 = 0xc8
    double _newScrubberParentHeight;	// 208 = 0xd0
    struct CGSize _extrinsicContentSize;	// 216 = 0xd8
    struct NSDirectionalEdgeInsets _hitRectInsets;	// 232 = 0xe8
}

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;	// IMP=0x0010000000032380
- (void).cxx_destruct;	// IMP=0x0000000000032149
@property(nonatomic) double newScrubberParentHeight; // @synthesize newScrubberParentHeight=_newScrubberParentHeight;
@property(nonatomic) double currentScrubberParentHeight; // @synthesize currentScrubberParentHeight=_currentScrubberParentHeight;
@property(retain, nonatomic) NSMutableArray *photosensitiveOverlayViews; // @synthesize photosensitiveOverlayViews=_photosensitiveOverlayViews;
@property(retain, nonatomic) NSMutableArray *interstitialOverlayViews; // @synthesize interstitialOverlayViews=_interstitialOverlayViews;
@property(nonatomic) _Bool scrubberEnabledStatus; // @synthesize scrubberEnabledStatus=_scrubberEnabledStatus;
@property(nonatomic) _Bool hasChangedLocationAtLeastOnce; // @synthesize hasChangedLocationAtLeastOnce=_hasChangedLocationAtLeastOnce;
@property(nonatomic) _Bool canChangeScrubbingSpeed; // @synthesize canChangeScrubbingSpeed=_canChangeScrubbingSpeed;
@property(nonatomic) _Bool scrubsWhenTappedAnywhere; // @synthesize scrubsWhenTappedAnywhere=_scrubsWhenTappedAnywhere;
@property(nonatomic) double timestampWhenTrackingEnded; // @synthesize timestampWhenTrackingEnded=_timestampWhenTrackingEnded;
@property(retain, nonatomic) NSTimer *updateSlowKnobMovementDetectedTimer; // @synthesize updateSlowKnobMovementDetectedTimer=_updateSlowKnobMovementDetectedTimer;
@property(nonatomic) __weak UIImageView *currentThumbView; // @synthesize currentThumbView=_currentThumbView;
@property(nonatomic) _Bool shouldRecoverFromPrecisionScrubbingIfNeeded; // @synthesize shouldRecoverFromPrecisionScrubbingIfNeeded=_shouldRecoverFromPrecisionScrubbingIfNeeded;
@property(nonatomic) _Bool slowKnobMovementDetected; // @synthesize slowKnobMovementDetected=_slowKnobMovementDetected;
@property(nonatomic, getter=isScrollScrubbing) _Bool scrollScrubbing; // @synthesize scrollScrubbing=_scrollScrubbing;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic, setter=setScrubberParentHeight:) double scrubberParentHeight; // @synthesize scrubberParentHeight=_scrubberParentHeight;
@property(nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(nonatomic) double resolution; // @synthesize resolution=_resolution;
@property(nonatomic) float estimatedFrameRate; // @synthesize estimatedFrameRate=_estimatedFrameRate;
@property(nonatomic) long long scrubbingSpeed; // @synthesize scrubbingSpeed=_scrubbingSpeed;
@property(nonatomic) _Bool showsTimelineMarkers; // @synthesize showsTimelineMarkers=_showsTimelineMarkers;
@property(copy, nonatomic) NSArray *photosensitiveDisplayTimes; // @synthesize photosensitiveDisplayTimes=_photosensitiveDisplayTimes;
@property(copy, nonatomic) NSArray *interstitialDisplayTimes; // @synthesize interstitialDisplayTimes=_interstitialDisplayTimes;
@property(copy, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(nonatomic) __weak id <AVScrubberDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
@property(nonatomic, getter=isRemoved) _Bool removed; // @synthesize removed=_removed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) NSMutableArray *previousScrubberVelocities; // @synthesize previousScrubberVelocities=_previousScrubberVelocities;
- (void)_layoutTimeLineMarkerViews:(float)arg1;	// IMP=0x0000000000031706
- (void)_layoutPhotosensitiveRegions:(float)arg1;	// IMP=0x0000000000030f48
- (float)_normalizeSliderValue:(float)arg1;	// IMP=0x0000000000030ed2
- (void)_updateLayoutItem;	// IMP=0x0000000000030de0
- (void)_updateSlowKnobMovementDetectedForTargetValue:(float)arg1;	// IMP=0x00000000000304bb
- (void)_updateSlowKnobMovementDetected;	// IMP=0x000000000003048d
- (_Bool)_shouldTrackTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000030247
- (struct CGPoint)contentOffsetFromValue;	// IMP=0x000000000003016f
- (float)valueFromScrollView;	// IMP=0x0000000000030106
- (double)normalizedScrollOffset;	// IMP=0x000000000002ffed
- (float)normalizedPosition;	// IMP=0x000000000002ff68
- (float)duration;	// IMP=0x000000000002ff22
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000002fed3
- (struct CGRect)hitRect;	// IMP=0x000000000002fdd2
- (void)layoutSubviews;	// IMP=0x000000000002f5c5
- (void)updateScrollViewContentSizeAndOffsetIfNeeded;	// IMP=0x000000000002f5bf
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000002f5a1
- (void)endOrCancelTracking;	// IMP=0x000000000002f4ae
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000002f46d
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002f42e
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002ed08
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002e944
- (_Bool)isTracking;	// IMP=0x000000000002e8fb
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000002e863
- (id)createThumbView;	// IMP=0x000000000002e815
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000002e7a8
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x000000000002e549
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000002e52b
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000002e50d
- (void)setValue:(float)arg1;	// IMP=0x000000000002e471
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002e42a
- (_Bool)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000002e3da
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (void)layoutAttributesDidChange;	// IMP=0x000000000002e202
@property(readonly, nonatomic) double timeIntervalSinceTrackingEnded;
@property(readonly, nonatomic) NSString *localizedScrubbingSpeedName;
- (float)clampedEstimatedFrameRate;	// IMP=0x000000000002db20
@property(readonly, nonatomic) UIView *loadedTrackOverlayView; // @synthesize loadedTrackOverlayView=_loadedTrackOverlayView;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002d680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

