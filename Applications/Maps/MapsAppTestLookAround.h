//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsAppTestLookAround
{
    unsigned long long _waitingTests;	// 8 = 0x8
    _Bool _savedDebugDrawContinuously;	// 16 = 0x10
}

@property(nonatomic) _Bool savedDebugDrawContinuously; // @synthesize savedDebugDrawContinuously=_savedDebugDrawContinuously;
- (void)runExitTest;	// IMP=0x00100000003efefb
- (void)runPanTest;	// IMP=0x00100000003efef5
- (void)zoom:(struct CGPoint)arg1 countdown:(int)arg2 oldFactor:(double)arg3 mapView:(id)arg4;	// IMP=0x00100000003ef920
- (void)runZoomTest;	// IMP=0x00100000003ef312
- (void)tap:(struct CGPoint)arg1 countdown:(int)arg2 mapView:(id)arg3 totalTimeInMS:(double)arg4 firstTap:(_Bool)arg5;	// IMP=0x00100000003eeb75
- (void)panLookAroundView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003eea67
- (void)runNavTestWithMapItem:(id)arg1 showsFullScreen:(_Bool)arg2;	// IMP=0x00100000003ee10e
- (void)runFullScreenNavTestWithMapItem:(id)arg1;	// IMP=0x00100000003edb67
- (void)runNavTest;	// IMP=0x00100000003edab4
- (void)runEnterExploreNavExitTest;	// IMP=0x00100000003ed9ca
- (void)runExploreTest;	// IMP=0x00100000003ed78d
- (void)runEnterTestWithContinuationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000003ed49a
- (void)runEnterTest;	// IMP=0x00100000003ed486
- (void)runBrowseTestWithContinuationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000003ecdea
- (void)runBrowseTest;	// IMP=0x00100000003ecdd6
- (void)expandLookAroundToFullscreen:(_Bool)arg1 withLookAroundView:(id)arg2 mapItem:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000003ecb8c
- (void)enterLookAroundWithLookAroundView:(id)arg1 mapItem:(id)arg2 showsFullScreen:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000003ec8a4
- (void)storefrontWillMoveBlock:(CDUnknownBlockType)arg1 didMoveBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ec669
- (void)selectSearchResult:(id)arg1;	// IMP=0x00100000003ec505
- (void)displayPlacecardPhotosWithSearchString:(id)arg1 resultShortAddress:(id)arg2 didShowPreviewBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000003ebfa6
- (void)addObserverWithSearchString:(id)arg1 forDidShowPreviewBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ebc99
- (void)onLookAroundView:(id)arg1 didCompletionPostTransitionAnimation:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ebbeb
- (void)onLookAroundView:(id)arg1 didBecomeAdequatelyDrawnCallback:(CDUnknownBlockType)arg2;	// IMP=0x00100000003eb9e3
- (void)jumpToOptionsCoord:(CDUnknownBlockType)arg1;	// IMP=0x00100000003eb712
- (_Bool)runTest;	// IMP=0x00100000003eb24f
- (void)cleanup:(_Bool)arg1;	// IMP=0x00100000003eb0c2

@end

