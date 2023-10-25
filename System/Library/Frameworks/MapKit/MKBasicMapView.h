//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VKMapView;

__attribute__((visibility("hidden")))
@interface MKBasicMapView : UIView
{
    UIView *_hostView;	// 8 = 0x8
    VKMapView *_mapView;	// 16 = 0x10
    double _mapModeStartTime;	// 24 = 0x18
    double _trafficStartTime;	// 32 = 0x20
    long long _changingViewSizeCount;	// 40 = 0x28
    _Bool _inactive;	// 48 = 0x30
    _Bool _hasRenderedSomething;	// 49 = 0x31
    _Bool _inBackground;	// 50 = 0x32
}

- (void).cxx_destruct;	// IMP=0x00000000000e6f2f
@property(readonly, nonatomic, getter=isInBackground) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool inactive; // @synthesize inactive=_inactive;
@property(nonatomic) _Bool hasRenderedSomething; // @synthesize hasRenderedSomething=_hasRenderedSomething;
@property(nonatomic) double trafficStartTime; // @synthesize trafficStartTime=_trafficStartTime;
@property(nonatomic) double mapModeStartTime; // @synthesize mapModeStartTime=_mapModeStartTime;
@property(readonly, nonatomic) VKMapView *mapView; // @synthesize mapView=_mapView;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000000e6e84
- (void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1 ignoreIfViewInWindow:(_Bool)arg2;	// IMP=0x00000000000e6ca4
- (void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(_Bool)arg1;	// IMP=0x00000000000e6c90
- (void)updateStatsForSwitchingToMapType:(int)arg1;	// IMP=0x00000000000e6c6d
- (void)updateStatsForTrafficEnabledTime;	// IMP=0x00000000000e6c59
- (void)_updateStatsForTrafficEnabledTime:(_Bool)arg1;	// IMP=0x00000000000e6b8a
- (void)updateStatsForEnablingTraffic:(_Bool)arg1;	// IMP=0x00000000000e6b67
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000000e6b26
- (void)didMoveToWindow;	// IMP=0x00000000000e693b
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000000e6839
- (void)_unregisterSceneNotifications;	// IMP=0x00000000000e6704
- (void)_sceneDidEnterBackground:(id)arg1;	// IMP=0x00000000000e66ed
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x00000000000e66d6
- (void)_registerSceneNotifications;	// IMP=0x00000000000e658c
- (void)_updateForCurrentScreen;	// IMP=0x00000000000e62c5
- (void)_updateMapViewHidden;	// IMP=0x00000000000e622b
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;	// IMP=0x00000000000e620e
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toCameraModelPointToView:(id)arg2;	// IMP=0x00000000000e618b
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;	// IMP=0x00000000000e6108
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;	// IMP=0x00000000000e6085
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000e5f2b
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000e5de4
- (void)_animateCanvasForBounds:(struct CGRect)arg1;	// IMP=0x00000000000e5a50
- (void)_updateForCurrentLocale;	// IMP=0x00000000000e59e8
@property(nonatomic) _Bool rendersInBackground;
- (double)calloutContainerCanvasScale;	// IMP=0x00000000000e578a
- (struct CGSize)calloutContainerCanvasSize;	// IMP=0x00000000000e5745
- (void)addCalloutSubview:(id)arg1;	// IMP=0x00000000000e5728
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
- (void)dealloc;	// IMP=0x00000000000e5641
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3 allowsAntialiasing:(_Bool)arg4 carDisplayType:(long long)arg5;	// IMP=0x00000000000e5136
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3 allowsAntialiasing:(_Bool)arg4;	// IMP=0x00000000000e5121
- (id)initWithFrame:(struct CGRect)arg1 andGlobe:(_Bool)arg2 shouldRasterize:(_Bool)arg3;	// IMP=0x00000000000e510c
- (void)_finishedSnapshot:(id)arg1;	// IMP=0x00000000000e50ef
- (void)_didEnterBackground;	// IMP=0x00000000000e5038
- (void)_updateBackgroundState:(long long)arg1;	// IMP=0x00000000000e4e53
- (void)_updateBackgroundState;	// IMP=0x00000000000e4cef
- (void)_finishChangingViewSize;	// IMP=0x00000000000e4cd2
- (void)_beginChangingViewSize;	// IMP=0x00000000000e4cc1
@property(readonly, nonatomic, getter=isChangingViewSize) _Bool changingViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
