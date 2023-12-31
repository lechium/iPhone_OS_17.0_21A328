//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AKBitmapFIFO, AKController, CHBoxcarFilterPointFIFO, CHPointStrokeFIFO, CHQuadCurvePointFIFO, MISSING_TYPE, NSString, UIColor;
@protocol AKSmoothPathViewDelegate;

@interface AKSmoothPathView : UIView
{
    double _cachedEffectiveStrokeWidthInModel;	// 8 = 0x8
    double _cachedModelToViewScale;	// 16 = 0x10
    _Bool _prestrokedOutputMode;	// 24 = 0x18
    _Bool _hasShadow;	// 25 = 0x19
    _Bool _applyModelBaseScaleFactorToStroke;	// 26 = 0x1a
    _Bool _startedTouchDrawing;	// 27 = 0x1b
    _Bool _isAddingPointWithoutSmoothing;	// 28 = 0x1c
    _Bool _disableSingleDotSpecialCase;	// 29 = 0x1d
    AKController *_controller;	// 32 = 0x20
    id <AKSmoothPathViewDelegate> _delegate;	// 40 = 0x28
    UIColor *_strokeColor;	// 48 = 0x30
    double _strokeWidth;	// 56 = 0x38
    double _shadowRadiusInModel;	// 64 = 0x40
    double _shadowRadiusInView;	// 72 = 0x48
    double _minPressure;	// 80 = 0x50
    double _maxPressure;	// 88 = 0x58
    double _minThickness;	// 96 = 0x60
    double _maxThickness;	// 104 = 0x68
    CHPointStrokeFIFO *_strokeFIFO;	// 112 = 0x70
    CHBoxcarFilterPointFIFO *_smoothingFIFO;	// 120 = 0x78
    CHQuadCurvePointFIFO *_interpolatingFIFO;	// 128 = 0x80
    AKBitmapFIFO *_bitmapFifo;	// 136 = 0x88
    double _currentWeight;	// 144 = 0x90
    double _singleDotCurrentSize;	// 152 = 0x98
    struct CGRect _singleDotRect;	// 160 = 0xa0
}

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)arg1;	// IMP=0x00100000000ad2b8
- (void).cxx_destruct;	// IMP=0x00000000000b03b6
@property double singleDotCurrentSize; // @synthesize singleDotCurrentSize=_singleDotCurrentSize;
@property _Bool disableSingleDotSpecialCase; // @synthesize disableSingleDotSpecialCase=_disableSingleDotSpecialCase;
@property double currentWeight; // @synthesize currentWeight=_currentWeight;
@property(retain, nonatomic) AKBitmapFIFO *bitmapFifo; // @synthesize bitmapFifo=_bitmapFifo;
@property(retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) CHBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) CHPointStrokeFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(nonatomic) double maxThickness; // @synthesize maxThickness=_maxThickness;
@property(nonatomic) double minThickness; // @synthesize minThickness=_minThickness;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property double cachedModelToViewScale; // @synthesize cachedModelToViewScale=_cachedModelToViewScale;
@property double shadowRadiusInView; // @synthesize shadowRadiusInView=_shadowRadiusInView;
@property double shadowRadiusInModel; // @synthesize shadowRadiusInModel=_shadowRadiusInModel;
@property struct CGRect singleDotRect; // @synthesize singleDotRect=_singleDotRect;
@property _Bool isAddingPointWithoutSmoothing; // @synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing;
@property(nonatomic) _Bool startedTouchDrawing; // @synthesize startedTouchDrawing=_startedTouchDrawing;
@property _Bool applyModelBaseScaleFactorToStroke; // @synthesize applyModelBaseScaleFactorToStroke=_applyModelBaseScaleFactorToStroke;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) _Bool prestrokedOutputMode; // @synthesize prestrokedOutputMode=_prestrokedOutputMode;
@property(retain) id <AKSmoothPathViewDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void)_updateInterpolatingFifoLineWidth;	// IMP=0x00000000000affa0
- (double)_windowBackingScaleFactor;	// IMP=0x00000000000afe82
- (MISSING_TYPE *)_pointForRecognizer:(id)arg1;	// IMP=0x00000000000afcda
- (MISSING_TYPE *)_pointForTouch:(id)arg1;	// IMP=0x00000000000afbcf
- (double)_convertValueFromModelToSelf:(double)arg1;	// IMP=0x00000000000af98f
- (double)_effectiveStrokeWidthInModel;	// IMP=0x00000000000af897
- (void)_updateShadowRadiusInView;	// IMP=0x00000000000af76c
- (void)_setupShadowInContext:(struct CGContext *)arg1;	// IMP=0x00000000000af5d8
- (struct CGContext *)_getPlatformCGContext;	// IMP=0x00000000000af5ce
- (void)_clear;	// IMP=0x00000000000af578
- (double)weightForValue:(double)arg1;	// IMP=0x00000000000af454
- (void)handleDragAction:(id)arg1;	// IMP=0x00000000000af327
- (_Bool)_catchUpAccumulatedTouchesForRecognizer:(id)arg1;	// IMP=0x00000000000af11e
- (void)handleTapAction:(id)arg1;	// IMP=0x00000000000af08e
- (void)handleForwardedEvent:(id)arg1;	// IMP=0x00000000000af074
- (void)terminateStroke;	// IMP=0x00000000000aefa6
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000aef07
- (void)continueStroke: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000aeeea
- (void)startStroke;	// IMP=0x00000000000aebc2
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000ae385
- (id)drawing;	// IMP=0x00000000000ae321
- (_Bool)isOpaque;	// IMP=0x00000000000ae103
- (void)callDelegate;	// IMP=0x00000000000ade4d
- (void)updateInterpolatingFifoUnitScale;	// IMP=0x00000000000addca
- (void)_setupFilterChainWithBitmapFifo:(_Bool)arg1;	// IMP=0x00000000000ad652
- (void)teardown;	// IMP=0x00000000000ad5a6
- (void)commonInit;	// IMP=0x00000000000ad474
- (void)awakeFromNib;	// IMP=0x00000000000ad433
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ad3b9
- (id)initWithController:(id)arg1;	// IMP=0x00000000000ad31c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

