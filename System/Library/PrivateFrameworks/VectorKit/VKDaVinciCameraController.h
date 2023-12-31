//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VKDaVinciCameraController
{
    void *_mapEngine;	// 96 = 0x60
    void *_cameraManager;	// 104 = 0x68
    double _currentDoublePanPitch;	// 112 = 0x70
    _Bool _isPitching;	// 120 = 0x78
    _Bool _isRotating;	// 121 = 0x79
    _Bool _wasPitched;	// 122 = 0x7a
    _Bool _couldEnter3DMode;	// 123 = 0x7b
    double _lastRotation;	// 128 = 0x80
    struct CGPoint _panStartScreenPoint;	// 136 = 0x88
    struct CGPoint _panLastScreenPoint;	// 152 = 0x98
    double _beganDoublePanPitch;	// 168 = 0xa8
    _Bool _updateHeight;	// 176 = 0xb0
}

- (float)maxPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000064b5fb
- (float)idealPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000064b5ca
- (float)minPitchForNormalizedZoomLevel:(float)arg1;	// IMP=0x000000000064b599
- (double)topDownMinimumZoomLevel;	// IMP=0x000000000064b435
- (double)currentZoomLevel;	// IMP=0x000000000064b2fa
- (double)maximumZoomLevel;	// IMP=0x000000000064b196
- (double)minimumZoomLevel;	// IMP=0x000000000064b032
- (void)updateCameraLimits;	// IMP=0x000000000064a3bb
- (long long)tileSize;	// IMP=0x000000000064a38d
- (float)minimumNormalizedZoomLevel;	// IMP=0x000000000064a2f8
- (float)maximumNormalizedZoomLevel;	// IMP=0x000000000064a2c9
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x0000000000649f2d
- (_Bool)usesVKCamera;	// IMP=0x0000000000649f25
- (void)animateToRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000649516
- (void)setRegionRestriction:(id)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x000000000064911d
- (void)animateRegionWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 stepHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000648e88
- (void)setCenterCoordinateDistanceRange:(CDStruct_fbb5cfe5)arg1 duration:(double)arg2 timingFunction:(CDUnknownBlockType)arg3;	// IMP=0x0000000000648623
- (double)pitch;	// IMP=0x00000000006485b7
- (double)heading;	// IMP=0x0000000000648526
- (double)altitude;	// IMP=0x000000000064844d
- (double)distanceFromCenterCoordinate;	// IMP=0x00000000006483e9
- (CDStruct_2c43369c)centerCoordinate;	// IMP=0x00000000006483af
- (Coordinate2D_cb341d5f)centerCoordinateRad;	// IMP=0x0000000000648295
- (Coordinate2D_cb341d5f)_centerCoordinateForMapRegion:(id)arg1;	// IMP=0x0000000000648228
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000006480a9
- (double)durationToAnimateToMapRegion:(id)arg1;	// IMP=0x000000000064809b
- (double)zoomForMapRegion:(id)arg1;	// IMP=0x0000000000647913
- (Unit_5669e52e)widestLatitudeForMapRegion:(id)arg1;	// IMP=0x0000000000647866
- (Unit_5669e52e)greatCircleMidPointLatitude:(Unit_5669e52e)arg1 fromLongitude:(Unit_5669e52e)arg2 toLongitude:(Unit_5669e52e)arg3;	// IMP=0x00000000006477ea
- (double)earthRadiusAt:(Unit_5669e52e)arg1;	// IMP=0x00000000006477a7
- (double)geocAngleBetween:(Coordinate2D_cb341d5f)arg1 andCoordinate:(Coordinate2D_cb341d5f)arg2;	// IMP=0x000000000064765e
- (id)mapRegionIgnoringEdgeInsets;	// IMP=0x000000000064764c
- (id)mapRegion;	// IMP=0x0000000000647392
- (vector_6baf6815)_getVisibleArea;	// IMP=0x0000000000646977
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000646906
- (double)presentationYaw;	// IMP=0x00000000006468f4
- (void)updateCameraManager;	// IMP=0x0000000000646886
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3 duration:(double)arg4 timingFunction:(CDUnknownBlockType)arg5;	// IMP=0x0000000000646568
- (void)setGesturing:(_Bool)arg1;	// IMP=0x0000000000646514
- (void)updateState;	// IMP=0x00000000006464e6
- (void)_updateCanEnter3DMode;	// IMP=0x0000000000646458
- (void)_updateIsPitched;	// IMP=0x00000000006463ca
- (double)maxPitch;	// IMP=0x000000000064638d
- (double)minPitch;	// IMP=0x0000000000646350
- (_Bool)isFullyPitched;	// IMP=0x0000000000646287
- (_Bool)isPitched;	// IMP=0x0000000000646218
- (_Bool)canEnter3DMode;	// IMP=0x00000000006461bc
- (void)exit3DMode;	// IMP=0x000000000064619d
- (void)enter3DMode;	// IMP=0x0000000000646150
- (void)stopGlobeAnimations;	// IMP=0x0000000000646081
- (void)moveToZoomOutZoomInTransition:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000000644ddd
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(CameraFrame_b765d6d7)arg1 toLatLon:(CameraFrame_b765d6d7)arg2;	// IMP=0x0000000000643f99
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 height:(double)arg2 useHeight:(_Bool)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0000000000642e23
- (void)moveTo:(Coordinate2D_cb341d5f)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000642de7
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006429d3
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;	// IMP=0x00000000006429bc
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000006424dd
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000641f93
- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;	// IMP=0x0000000000641980
- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000064139f
- (_Bool)snapMapIfNecessary:(_Bool)arg1;	// IMP=0x000000000064116d
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000641029
- (void)setCenterCoordinate:(CDStruct_2c43369c)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000640eb8
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000640de0
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;	// IMP=0x0000000000640c4c
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;	// IMP=0x0000000000640b60
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000640a2c
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;	// IMP=0x0000000000640848
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;	// IMP=0x000000000064076e
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000006405a8
- (void)dealloc;	// IMP=0x0000000000640548
- (id)initWithMapDataAccess:(void *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4 mapEngine:(void *)arg5;	// IMP=0x00000000006403d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

