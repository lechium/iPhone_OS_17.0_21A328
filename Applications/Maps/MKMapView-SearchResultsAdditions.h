//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMapView.h>

@interface MKMapView (SearchResultsAdditions)
+ (double)_animationDurationFromMapRect:(CDStruct_02837cd9)arg1 toMapRect:(CDStruct_02837cd9)arg2;	// IMP=0x0010000000a2870c
- (CDStruct_02837cd9)clampRect:(CDStruct_02837cd9)arg1 toMinZoom:(id)arg2 maxZoom:(id)arg3 withFixedPoint:(CDStruct_c3b9c2ee)arg4;	// IMP=0x001000000038313b
- (CDStruct_02837cd9)clampRect:(CDStruct_02837cd9)arg1 toMinZoom:(id)arg2 maxZoom:(id)arg3;	// IMP=0x00100000003830e8
- (CDStruct_02837cd9)displayMapRegionForSearchResult:(id)arg1;	// IMP=0x0010000000383046
- (CDStruct_02837cd9)regionForSearchResults:(id)arg1 suggestedRegion:(CDStruct_02837cd9)arg2 minZoom:(id)arg3 maxZoom:(id)arg4 disableAdditionalViewportPadding:(_Bool)arg5;	// IMP=0x00100000003827e1
- (_Bool)rectIsEmpty:(CDStruct_02837cd9)arg1;	// IMP=0x00100000003827bc
- (void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(_Bool)arg3 setCameraFromMapItemViewportFrame:(_Bool)arg4 animation:(long long)arg5 minZoom:(id)arg6 maxZoom:(id)arg7 disableAdditionalViewportPadding:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x0010000000381ed0
- (void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(_Bool)arg3 animation:(long long)arg4 minZoom:(id)arg5 maxZoom:(id)arg6 disableAdditionalViewportPadding:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000381e8f
- (_Bool)isCoordinateVisible:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000381dd3
- (CDStruct_02837cd9)mapRectContainingSearchResults:(id)arg1 edgePadding:(struct UIEdgeInsets)arg2;	// IMP=0x0010000000381d1a
- (CDStruct_02837cd9)mapRectContainingSearchResults:(id)arg1;	// IMP=0x0010000000381c9b
- (struct UIEdgeInsets)splitViewInsetsForPinAnnotations;	// IMP=0x0010000000381c5e
- (struct UIEdgeInsets)defaultInsetsForBalloonCallout;	// IMP=0x0010000000381c40
- (struct UIEdgeInsets)defaultInsetsForPinAnnotations;	// IMP=0x0010000000381b81
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 minMetersPerPoint:(double)arg2;	// IMP=0x0010000000381a2a
@property(readonly, nonatomic, getter=isShowingImagery) _Bool showingImagery;
- (id)snapshotOptions;	// IMP=0x0010000000a28a44
- (void)animateToVisibleMapRect:(CDStruct_02837cd9)arg1 usingDefaultAnimationDuration:(_Bool)arg2 resetHeading:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a287a5
- (void)animateToVisibleMapRect:(CDStruct_02837cd9)arg1 usingDefaultAnimationDuration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a2878e
- (id)snapshotImageWithScale:(double)arg1 allowSnapshotting:(_Bool)arg2;	// IMP=0x0010000000a284ee
- (id)snapshotImageWithScale:(double)arg1;	// IMP=0x0010000000a284d7
- (id)snapshotImage;	// IMP=0x0010000000a28467
- (void)getRapSnapshotImageDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ba284e
- (void)_performFlyoverAnnouncementAnimation:(id)arg1;	// IMP=0x0010000000d4f1ff
@end

