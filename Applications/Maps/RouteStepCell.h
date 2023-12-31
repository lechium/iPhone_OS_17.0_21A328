//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep, MKMapSnapshot, MKMapSnapshotter, NSString, Route, UIColor, UIImage;

@interface RouteStepCell : NSObject
{
    Route *_route;	// 8 = 0x8
    unsigned long long _stepIndex;	// 16 = 0x10
    struct CGRect _frame;	// 24 = 0x18
    long long _page;	// 56 = 0x38
    _Bool _hasSnapshot;	// 64 = 0x40
    MKMapSnapshot *_snapshot;	// 72 = 0x48
    MKMapSnapshotter *_snapshotter;	// 80 = 0x50
    UIColor *_routeCenterPrintColor;	// 88 = 0x58
    UIColor *_routeOutlinePrintColor;	// 96 = 0x60
    UIColor *_blueTextColor;	// 104 = 0x68
    unsigned long long _mapType;	// 112 = 0x70
}

+ (id)cellWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 mapType:(unsigned long long)arg3;	// IMP=0x00200000003ceba3
- (void).cxx_destruct;	// IMP=0x00200000003d115c
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(readonly, nonatomic) _Bool hasSnapshot; // @synthesize hasSnapshot=_hasSnapshot;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (void)dealloc;	// IMP=0x00100000003d10a6
- (void)releaseSnapshotCreator;	// IMP=0x00100000003d108c
@property(readonly, nonatomic) UIImage *snapshotImage; // @dynamic snapshotImage;
@property(readonly, copy, nonatomic) CDUnknownBlockType snapshotBlock;
- (void)drawInRect:(struct CGRect)arg1;	// IMP=0x00100000003d0336
- (id)instructionStringsArray;	// IMP=0x00100000003d02c4
- (unsigned long long)numberOfSteps;	// IMP=0x00100000003d0252
- (double)_textLayoutHeightForLines:(id)arg1;	// IMP=0x00100000003cffa8
- (void)drawRouteLineInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;	// IMP=0x00100000003cf318
- (struct CGPoint)_cgPointApplyAffineTransform:(struct CGPoint)arg1:(struct CGAffineTransform)arg2:(struct CGAffineTransform)arg3:(struct CGAffineTransform)arg4;	// IMP=0x00100000003cf28d
- (CDStruct_c3b9c2ee)_intersectLineWithPoint1:(CDStruct_c3b9c2ee)arg1 point2:(CDStruct_c3b9c2ee)arg2 withRect:(CDStruct_02837cd9)arg3;	// IMP=0x00100000003cf155
- (_Bool)_lineSegmentsIntersectLineAPoint1:(CDStruct_c3b9c2ee)arg1 lineAPoint2:(CDStruct_c3b9c2ee)arg2 lineBPoint1:(CDStruct_c3b9c2ee)arg3 lineBPoint2:(CDStruct_c3b9c2ee)arg4 outIntersectionPoint:(CDStruct_c3b9c2ee *)arg5;	// IMP=0x00100000003cf0a1
- (void)drawPinInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;	// IMP=0x00100000003cee1a
@property(readonly, nonatomic) GEOComposedRouteStep *routeStep; // @dynamic routeStep;
@property(nonatomic) double y; // @dynamic y;
- (id)initWithRoute:(id)arg1 stepIndex:(unsigned long long)arg2 mapType:(unsigned long long)arg3;	// IMP=0x00100000003cec00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

