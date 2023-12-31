//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VKAnimation, VKAnnotationTrackingCameraController, VKCameraRegionRestriction, VKGestureCameraBehavior, VKTimedAnimation;
@protocol VKTrackableAnnotation;

__attribute__((visibility("hidden")))
@interface VKScreenCameraController
{
    VKAnimation *_zoomAnimation;	// 8 = 0x8
    VKTimedAnimation *_pitchAnimation;	// 16 = 0x10
    VKTimedAnimation *_rotationAnimation;	// 24 = 0x18
    VKTimedAnimation *_regionAnimation;	// 32 = 0x20
    VKAnnotationTrackingCameraController *_annotationTrackingCameraController;	// 40 = 0x28
    VKGestureCameraBehavior *_gestureCameraControllerBehavior;	// 48 = 0x30
    CDStruct_211b8904 _annotationTrackingBehavior;	// 56 = 0x38
    long long _annotationTrackingHeadingAnimationDisplayRate;	// 80 = 0x50
    _Bool _isPitchIncreasing;	// 88 = 0x58
    _Bool _userChangedZoomSinceLastProgrammaticRegionChange;	// 89 = 0x59
    _Bool _zoomAnimationCanBeInterrupted;	// 90 = 0x5a
    _Bool _hasVehicleHeading;	// 91 = 0x5b
    VKCameraRegionRestriction *_regionRestriction;	// 96 = 0x60
    CDStruct_fbb5cfe5 _centerCoordinateDistanceRange;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006ca51c
@property(retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property(nonatomic) _Bool userChangedZoomSinceLastProgrammaticRegionChange; // @synthesize userChangedZoomSinceLastProgrammaticRegionChange=_userChangedZoomSinceLastProgrammaticRegionChange;
@property(nonatomic) CDStruct_fbb5cfe5 centerCoordinateDistanceRange; // @synthesize centerCoordinateDistanceRange=_centerCoordinateDistanceRange;
@property(nonatomic) _Bool hasVehicleHeading; // @synthesize hasVehicleHeading=_hasVehicleHeading;
@property(nonatomic) CDStruct_211b8904 annotationTrackingBehavior; // @synthesize annotationTrackingBehavior=_annotationTrackingBehavior;
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000006ca43b
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000006ca38e
- (void)setVkCamera:(id)arg1;	// IMP=0x00000000006ca318
- (_Bool)canEnter3DMode;	// IMP=0x00000000006ca310
- (void)exit3DMode;	// IMP=0x00000000006ca30a
- (void)enter3DMode;	// IMP=0x00000000006ca304
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006ca2fe
- (long long)tileSize;	// IMP=0x00000000006ca2f6
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006ca2f0
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000006ca2ea
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000006ca2e4
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006ca2de
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x00000000006ca2d5
- (_Bool)tapAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006ca2cd
- (void)transferGestureState:(id)arg1;	// IMP=0x00000000006ca2b0
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006ca258
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 degrees:(double)arg2;	// IMP=0x00000000006ca23b
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x00000000006ca21e
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006ca1aa
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006ca15f
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;	// IMP=0x00000000006ca142
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006ca0ee
- (void)stopPanningAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006ca0a8
- (void)updatePanWithTranslation:(struct CGPoint)arg1;	// IMP=0x00000000006ca06f
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;	// IMP=0x00000000006ca013
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006c9fa1
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x00000000006c9f50
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x00000000006c9e9f
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006c9e02
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006c9d4e
- (void)setCenterCoordinateDistanceRange:(CDStruct_fbb5cfe5)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000006c9af3
- (void)updateState;	// IMP=0x00000000006c9ad6
- (void)clampZoomLevelIfNecessaryAnimated:(_Bool)arg1;	// IMP=0x00000000006c9ad0
- (void)clampZoomLevelIfNecessary;	// IMP=0x00000000006c9abc
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x00000000006c9ab4
- (_Bool)isAnimating;	// IMP=0x00000000006c9a60
- (void)stopAnimations;	// IMP=0x00000000006c9991
- (void)stopRegionAnimation;	// IMP=0x00000000006c9959
- (void)stopSnappingAnimations;	// IMP=0x00000000006c9909
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;	// IMP=0x00000000006c98ad
@property(readonly, nonatomic) _Bool isAnimatingToTrackAnnotation;
@property(readonly, nonatomic) _Bool isTrackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
- (void)stopTrackingAnnotation;	// IMP=0x00000000006c979a
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x00000000006c9794
- (void)dealloc;	// IMP=0x00000000006c964a
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;	// IMP=0x00000000006c954e

// Remaining properties
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) _Bool animatingToTrackAnnotation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTrackingHeading) _Bool trackingHeading;

@end

