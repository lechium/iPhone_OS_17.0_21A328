//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, VKARCameraController, VKGlobeCameraController;
@protocol VKInteractiveMapDelegate;

__attribute__((visibility("hidden")))
@interface VKClassicGlobeCanvas
{
    VKGlobeCameraController *_globeCameraController;	// 160 = 0xa0
    int _mapType;	// 168 = 0xa8
    double _contentScale;	// 176 = 0xb0
    _Bool _disableRoads;	// 184 = 0xb8
    _Bool _disableLabels;	// 185 = 0xb9
    struct AltitudeDebugSettings _debugSettings;	// 188 = 0xbc
    struct unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> _globeAdapter;	// 224 = 0xe0
    void *_globe;	// 232 = 0xe8
    void *_engine;	// 240 = 0xf0
    struct shared_ptr<md::GlobeOverlayContainer> _overlayContainer;	// 248 = 0xf8
    struct shared_ptr<ggl::FlyoverLibrary> _flyoverLibrary;	// 264 = 0x108
    _Bool _initialized;	// 280 = 0x118
    _Bool _canShowFlyover;	// 281 = 0x119
    struct shared_ptr<bool> _isDead;	// 288 = 0x120
    _Bool _isLoading;	// 304 = 0x130
    _Bool _isDownloading;	// 305 = 0x131
    _Bool _coarseLoading;	// 306 = 0x132
    _Bool _tourIsDownloading;	// 307 = 0x133
    void *_loadingStatusTracker;	// 312 = 0x138
    double _currentZoomLevel;	// 320 = 0x140
    CDUnknownBlockType _sceneDidLoadCallback;	// 328 = 0x148
    VKARCameraController *_arCameraController;	// 336 = 0x150
    _Bool _arRoadDisabledState;	// 344 = 0x158
    struct CGSize _lastCanvasSize;	// 352 = 0x160
    _Bool _trafficEnabled;	// 368 = 0x170
    int _flyoverMode;	// 372 = 0x174
    id <VKInteractiveMapDelegate> _delegate;	// 376 = 0x178
}

+ (_Bool)supportsMapType:(int)arg1 scale:(int)arg2;	// IMP=0x00100000005dcb18
- (id).cxx_construct;	// IMP=0x00000000005e1f4f
- (void).cxx_destruct;	// IMP=0x00000000005e1ec0
@property(readonly, nonatomic) int flyoverMode; // @synthesize flyoverMode=_flyoverMode;
@property(nonatomic) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) _Bool disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) _Bool disableRoads; // @synthesize disableRoads=_disableRoads;
@property(readonly, nonatomic) VKGlobeCameraController *globeCameraController; // @synthesize globeCameraController=_globeCameraController;
@property(copy, nonatomic) CDUnknownBlockType sceneDidLoadCallback; // @synthesize sceneDidLoadCallback=_sceneDidLoadCallback;
@property(readonly, nonatomic) _Bool flyoverAvailable; // @synthesize flyoverAvailable=_canShowFlyover;
@property(nonatomic) __weak id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didBecomeInActive;	// IMP=0x00000000005e1d85
- (void)didBecomeActive;	// IMP=0x00000000005e1d03
- (void)transitionToTracking:(_Bool)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_2c43369c)arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000005e1a5c
- (struct GlobeOverlayContainer *)overlayContainer;	// IMP=0x00000000005e1a4b
- (void)_setDefaultFov:(float)arg1;	// IMP=0x00000000005e19f3
- (void)disableTileAnalytics;	// IMP=0x00000000005e18f9
- (void)enableTileAnalytics;	// IMP=0x00000000005e17f3
- (id)flyoverStatistics;	// IMP=0x00000000005e1453
- (void)resetFlyoverStatistics;	// IMP=0x00000000005e1419
- (void)disableFlyoverStatistics;	// IMP=0x00000000005e13e5
- (void)enableFlyoverStatistics;	// IMP=0x00000000005e13b0
- (void)setupMapScene;	// IMP=0x00000000005e1365
- (void)waitForLoading;	// IMP=0x00000000005e0f77
- (void)_updateDebugSettings;	// IMP=0x00000000005e0503
- (void)didReceiveMemoryWarning:(_Bool)arg1 beAggressive:(_Bool)arg2;	// IMP=0x00000000005e04b0
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;	// IMP=0x00000000005e03b1
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;	// IMP=0x00000000005e02c7
- (void)removeOverlay:(id)arg1;	// IMP=0x00000000005e025d
- (void)addOverlay:(id)arg1;	// IMP=0x00000000005e019e
- (_Bool)shouldHideOffscreenSelectedAnnotation;	// IMP=0x00000000005e00e4
- (CDUnknownBlockType)annotationCoordinateTest;	// IMP=0x00000000005dffbd
- (CDUnknownBlockType)annotationRectTest;	// IMP=0x00000000005dff91
- (id)attributionsForCurrentRegion;	// IMP=0x00000000005dff89
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;	// IMP=0x00000000005dfaf0
- (void)didPresent;	// IMP=0x00000000005df8fd
- (void)updateCameraForFrameResize;	// IMP=0x00000000005df6f7
- (void)_update;	// IMP=0x00000000005df432
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000005df387
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_2c43369c)arg1;	// IMP=0x00000000005df29d
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_2c43369c)arg1;	// IMP=0x00000000005df1f1
- (CDStruct_2c43369c)convertPointToCoordinateOnSphere:(struct CGPoint)arg1;	// IMP=0x00000000005df0e2
- (CDStruct_2c43369c)convertPointToCoordinate:(struct CGPoint)arg1;	// IMP=0x00000000005df00f
- (struct CGPoint)convertMapPointToPoint:(CDStruct_2c43369c)arg1;	// IMP=0x00000000005defeb
- (CDStruct_2c43369c)convertPointToMapPoint:(struct CGPoint)arg1;	// IMP=0x00000000005defd4
- (void)stopAnimations;	// IMP=0x00000000005defb7
- (void)resumeFlyoverTourAnimation;	// IMP=0x00000000005def77
- (void)pauseFlyoverTourAnimation;	// IMP=0x00000000005def5a
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;	// IMP=0x00000000005dec8f
- (void)stopFlyoverAnimation;	// IMP=0x00000000005dec72
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;	// IMP=0x00000000005dec55
- (void)prepareFlyoverAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005deaab
- (id)createFlyoverPreTourAnimation:(id)arg1 duration:(double)arg2;	// IMP=0x00000000005de7c2
- (void)transferStateFromCanvas:(id)arg1;	// IMP=0x00000000005de6a9
- (struct CGPoint)_centerScreenPoint;	// IMP=0x00000000005de57c
- (void)stopSnappingAnimations;	// IMP=0x00000000005de576
- (id)detailedDescription;	// IMP=0x00000000005de4f0
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000005de4b2
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000005de4ac
- (void)setContentsScale:(double)arg1;	// IMP=0x00000000005de3a1
- (void)setCamera:(shared_ptr_46708168)arg1;	// IMP=0x00000000005de29b
- (const void *)_clientStyleState;	// IMP=0x00000000005de242
- (const void *)_styleManager;	// IMP=0x00000000005de1ea
- (void)_reloadStylesheet;	// IMP=0x00000000005de170
- (id)consoleString:(_Bool)arg1;	// IMP=0x00000000005ddc52
- (void)dealloc;	// IMP=0x00000000005ddb47
- (void)willDealloc;	// IMP=0x00000000005dda8f
- (id)initWithMapEngine:(void *)arg1 inBackground:(_Bool)arg2;	// IMP=0x00000000005dd05f
- (void)stopLoading;	// IMP=0x00000000005dd031
- (void)setMapType:(int)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005dced5
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;	// IMP=0x00000000005dceb6
@property(readonly, nonatomic) VKARCameraController *arCameraController; // @synthesize arCameraController=_arCameraController;
- (_Bool)useNewRenderPath;	// IMP=0x00000000005dccef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

