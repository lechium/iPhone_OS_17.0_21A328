//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class PUValueFilter;

__attribute__((visibility("hidden")))
@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer
{
    struct CGPoint _initialTouchLocations[2];	// 8 = 0x8
    struct CGPoint _latestTouchLocations[2];	// 40 = 0x28
    _Bool _initialTouchLocationsSet;	// 72 = 0x48
    _Bool __touchesNeedUpdate;	// 73 = 0x49
    double _rotationHysteresisDegrees;	// 80 = 0x50
    PUValueFilter *__rotationFilter;	// 88 = 0x58
    struct CGRect _initialPinchRect;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000436388
@property(retain, nonatomic, setter=_setRotationFilter:) PUValueFilter *_rotationFilter; // @synthesize _rotationFilter=__rotationFilter;
@property(nonatomic, setter=_setTouchesNeedUpdate:) _Bool _touchesNeedUpdate; // @synthesize _touchesNeedUpdate=__touchesNeedUpdate;
@property(nonatomic) struct CGRect initialPinchRect; // @synthesize initialPinchRect=_initialPinchRect;
@property(nonatomic) double rotationHysteresisDegrees; // @synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees;
- (void)_updateIfNeeded;	// IMP=0x00000000004361b2
- (double)adjustedScaleVelocityInView:(id)arg1;	// IMP=0x00000000004361a0
- (double)adjustedRotationVelocityInView:(id)arg1;	// IMP=0x0000000000436197
- (struct CGPoint)adjustedTranslationVelocityInView:(id)arg1;	// IMP=0x0000000000436181
- (double)adjustedScaleInView:(id)arg1;	// IMP=0x0000000000436101
- (double)adjustedRotationInView:(id)arg1;	// IMP=0x0000000000435f13
- (struct CGPoint)adjustedTranslationInView:(id)arg1;	// IMP=0x0000000000435dde
- (struct CGPoint)adjustedInitialCenterInView:(id)arg1;	// IMP=0x0000000000435d26
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000435ba7
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000435b19
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000435a8b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000004359ec
- (void)reset;	// IMP=0x0000000000435983
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000043592f

@end

