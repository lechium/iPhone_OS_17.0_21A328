//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsAppTestCirclePan;

@interface MapsAppTestStepZoom
{
    MapsAppTestCirclePan *_currentCirclePan;	// 8 = 0x8
    _Bool _clearCacheOnZoom;	// 16 = 0x10
    long long _zoomStart;	// 24 = 0x18
    long long _zoomEnd;	// 32 = 0x20
    double _stepAnimationDuration;	// 40 = 0x28
    CDStruct_2c43369c _focusPoint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000a53871
@property(nonatomic) _Bool clearCacheOnZoom; // @synthesize clearCacheOnZoom=_clearCacheOnZoom;
@property(nonatomic) double stepAnimationDuration; // @synthesize stepAnimationDuration=_stepAnimationDuration;
- (double);	// IMP=0x0010000000a5382d
@property(nonatomic) long long zoomEnd; // @synthesize zoomEnd=_zoomEnd;
@property(nonatomic) long long zoomStart; // @synthesize zoomStart=_zoomStart;
@property(nonatomic) CDStruct_c3b9c2ee focusPoint; // @synthesize focusPoint=_focusPoint;
- (void)onFullyDrawn:(id)arg1;	// IMP=0x0010000000a534ee
- (void)addFullyDrawnCallback:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a5338f
- (void)stepZoomCompleted;	// IMP=0x0010000000a5337d
- (void)stepLoadCompleted:(id)arg1;	// IMP=0x0010000000a530db
- (void)runStepZoomTest:(double)arg1;	// IMP=0x0010000000a52bd6
- (_Bool)runTest;	// IMP=0x0010000000a52941
- (long long)_zoomAmount;	// IMP=0x0010000000a52919
- (double)_regionSizeForZoom:(double)arg1;	// IMP=0x0010000000a528f6
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x0010000000a5277c

@end
