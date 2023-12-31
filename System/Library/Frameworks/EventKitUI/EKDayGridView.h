//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EKCurrentTimeMarkerView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIImageView, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface EKDayGridView : UIView
{
    double _timeInset;	// 8 = 0x8
    double _hourHeight;	// 16 = 0x10
    double _timeWidth;	// 24 = 0x18
    unsigned int _leftBorder:1;	// 32 = 0x20
    unsigned int _rightBorder:1;	// 32 = 0x20
    int _selected;	// 36 = 0x24
    double _fixedDayWidth;	// 40 = 0x28
    long long _orientation;	// 48 = 0x30
    struct CGRect _lastBounds;	// 56 = 0x38
    UIColor *_backgroundColor;	// 88 = 0x58
    UIView *_leftBorderView;	// 96 = 0x60
    NSMutableArray *_middleBorderViews;	// 104 = 0x68
    UIView *_rightBorderView;	// 112 = 0x70
    NSMutableArray *_gridPatternViews;	// 120 = 0x78
    unsigned long long _daysToDisplay;	// 128 = 0x80
    EKCurrentTimeMarkerView *_timeMarker;	// 136 = 0x88
    UIImageView *_timeDot;	// 144 = 0x90
    UIView *_highlightedDayBackground;	// 152 = 0x98
    UIView *_fadingHighlightedDayBackground;	// 160 = 0xa0
    UIView *_gridContainerView;	// 168 = 0xa8
    NSMutableDictionary *_gridParentViews;	// 176 = 0xb0
    double _cachedWidthForOffMainThreadWork;	// 184 = 0xb8
    long long _sizeClass;	// 192 = 0xc0
    _Bool _needsLayoutInWindow;	// 200 = 0xc8
    _Bool _rightBorderInsetsOccurrences;	// 201 = 0xc9
    _Bool _showsTimeLine;	// 202 = 0xca
    _Bool _showsTimeMarker;	// 203 = 0xcb
    _Bool _animatesTimeMarker;	// 204 = 0xcc
    _Bool _usesVibrantGridDrawing;	// 205 = 0xcd
    UIColor *_lineColor;	// 208 = 0xd0
    long long _timeMarkerDotDay;	// 216 = 0xd8
    double _eventHorizontalInset;	// 224 = 0xe0
    double _hoursToPadTop;	// 232 = 0xe8
    double _hoursToPadBottom;	// 240 = 0xf0
    long long _highlightedDayIndex;	// 248 = 0xf8
    UIVisualEffect *_gridVisualEffect;	// 256 = 0x100
    UIView *_occurrenceContainerView;	// 264 = 0x108
    double _gridHeightScale;	// 272 = 0x110
}

+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000014d5c0
+ (id)cachedBackgroundImageForKey:(id)arg1;	// IMP=0x001000000014d5a7
- (void).cxx_destruct;	// IMP=0x0000000000150fbb
@property(nonatomic) double gridHeightScale; // @synthesize gridHeightScale=_gridHeightScale;
@property(retain, nonatomic) UIView *occurrenceContainerView; // @synthesize occurrenceContainerView=_occurrenceContainerView;
@property(retain, nonatomic) UIVisualEffect *gridVisualEffect; // @synthesize gridVisualEffect=_gridVisualEffect;
@property(readonly, nonatomic) EKCurrentTimeMarkerView *timeMarker; // @synthesize timeMarker=_timeMarker;
@property(nonatomic) long long highlightedDayIndex; // @synthesize highlightedDayIndex=_highlightedDayIndex;
@property(nonatomic) _Bool usesVibrantGridDrawing; // @synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing;
@property(nonatomic) double hoursToPadBottom; // @synthesize hoursToPadBottom=_hoursToPadBottom;
@property(nonatomic) double hoursToPadTop; // @synthesize hoursToPadTop=_hoursToPadTop;
@property(nonatomic) double eventHorizontalInset; // @synthesize eventHorizontalInset=_eventHorizontalInset;
@property(nonatomic) long long timeMarkerDotDay; // @synthesize timeMarkerDotDay=_timeMarkerDotDay;
@property(nonatomic) _Bool animatesTimeMarker; // @synthesize animatesTimeMarker=_animatesTimeMarker;
@property(nonatomic) _Bool showsTimeMarker; // @synthesize showsTimeMarker=_showsTimeMarker;
@property(nonatomic) _Bool showsTimeLine; // @synthesize showsTimeLine=_showsTimeLine;
@property(nonatomic) _Bool rightBorderInsetsOccurrences; // @synthesize rightBorderInsetsOccurrences=_rightBorderInsetsOccurrences;
- (id)_generateGridImage;	// IMP=0x0000000000150868
- (void)layoutSubviews;	// IMP=0x000000000014fafb
- (void)_layoutHighlight;	// IMP=0x000000000014f793
- (double)_dayWidth;	// IMP=0x000000000014f722
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double fixedDayWidth;
@property(nonatomic, getter=isSelected) _Bool selected;
- (int)secondAtPosition:(double)arg1;	// IMP=0x000000000014f283
- (double)positionOfSecond:(long long)arg1;	// IMP=0x000000000014f223
@property(readonly, nonatomic) double timeWidth;
@property(readonly, nonatomic) double widthForOccurrences;
- (struct CGRect)rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2;	// IMP=0x000000000014effa
@property(nonatomic) _Bool showsRightBorder;
@property(nonatomic) _Bool showsLeftBorder;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;	// IMP=0x000000000014ecb8
- (void)tintColorDidChange;	// IMP=0x000000000014ec2e
- (void)_updateTimeMarker;	// IMP=0x000000000014e6c3
- (id)timeDotImage;	// IMP=0x000000000014e438
- (void)updateMarkerPosition;	// IMP=0x000000000014df33
- (void)updateHourHeight;	// IMP=0x000000000014de96
@property(readonly, nonatomic) double hourHeight;
@property(readonly, nonatomic) double timeInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000014ddb5
- (double)bottomPadding;	// IMP=0x000000000014dd75
@property(readonly, nonatomic) double topPadding;
- (void)setOrientation:(long long)arg1;	// IMP=0x000000000014dc34
- (void)didMoveToWindow;	// IMP=0x000000000014dbf5
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000014db87
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000014db19
- (long long)_sizeClass;	// IMP=0x000000000014dacd
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 backgroundColor:(id)arg3 opaque:(_Bool)arg4 numberOfDaysToDisplay:(unsigned long long)arg5;	// IMP=0x000000000014d6df
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000014d660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

