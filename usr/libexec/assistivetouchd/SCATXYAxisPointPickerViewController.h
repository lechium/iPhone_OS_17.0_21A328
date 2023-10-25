//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXDispatchTimer, NSString, SCATXYAxisRangeLayer, UIView;

@interface SCATXYAxisPointPickerViewController
{
    unsigned long long _pickerPhase;	// 8 = 0x8
    AXDispatchTimer *_elementFinderTimer;	// 16 = 0x10
    UIView *_axisContainerView;	// 24 = 0x18
    SCATXYAxisRangeLayer *_xAxis;	// 32 = 0x20
    SCATXYAxisRangeLayer *_yAxis;	// 40 = 0x28
    long long _sweepCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000092e2
@property(nonatomic) long long sweepCount; // @synthesize sweepCount=_sweepCount;
@property(retain, nonatomic) SCATXYAxisRangeLayer *yAxis; // @synthesize yAxis=_yAxis;
@property(retain, nonatomic) SCATXYAxisRangeLayer *xAxis; // @synthesize xAxis=_xAxis;
@property(retain, nonatomic) UIView *axisContainerView; // @synthesize axisContainerView=_axisContainerView;
@property(retain, nonatomic) AXDispatchTimer *elementFinderTimer; // @synthesize elementFinderTimer=_elementFinderTimer;
@property(nonatomic) unsigned long long pickerPhase; // @synthesize pickerPhase=_pickerPhase;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0010000000009022
- (id)_sweepAnimationStartingInPlaceForLayer:(id)arg1 parentBounds:(struct CGRect)arg2 slowdownMultiplier:(unsigned long long)arg3 direction:(_Bool)arg4 animationKey:(id)arg5;	// IMP=0x0010000000008d84
- (id)_sweepAnimationForLayer:(id)arg1 parentBounds:(struct CGRect)arg2 slowdownMultiplier:(unsigned long long)arg3 direction:(_Bool)arg4 animationKey:(id)arg5;	// IMP=0x0010000000008a4e
- (double)_rangeAnimationVelocityWithSlowdownMultiplier:(unsigned long long)arg1;	// IMP=0x00100000000089ae
- (void)_endHighlightingTargedElements;	// IMP=0x0010000000008971
- (void)_beginHighlightingTargetedElements;	// IMP=0x001000000000870e
- (void)orientationDidChange:(id)arg1;	// IMP=0x00100000000084f9
- (struct CGPoint)_currentFocusedPointInScreenCoordinates:(_Bool)arg1;	// IMP=0x00100000000080dc
- (void)updateWithPhase:(unsigned long long)arg1 withPicker:(id)arg2;	// IMP=0x00100000000070f4
- (id)axisPointPicker;	// IMP=0x00100000000070e2
@property(readonly, nonatomic) unsigned long long numberOfCycles;
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000070c4
- (void)loadView;	// IMP=0x0010000000006f2e
- (void)dealloc;	// IMP=0x0010000000006eb9
- (id)initWithElementManager:(id)arg1 menu:(id)arg2;	// IMP=0x0010000000006d4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
