//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapFeatureMultiSegmentRoadFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureIntersectedRoadFinder
{
    GEOMapFeatureMultiSegmentRoadFinder *_multiSegmentRoadFinder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007c51ed
- (void)_tilesBorderingTile:(struct _GEOTileKey)arg1 atPoint:(struct GeoCodecsVectorTilePoint)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000007c4f32
- (id)_old_intersectedRoadsInAdjacentTile:(id)arg1 tileBorderPoint:(struct GeoCodecsVectorTilePoint)arg2 junction:(id)arg3 desiredRoadDirectionality:(unsigned long long)arg4 featuresToIgnore:(id)arg5;	// IMP=0x00000000007c497c
- (id)_intersectedRoadsInAdjacentTile:(id)arg1 tileBorderPoint:(struct GeoCodecsVectorTilePoint)arg2 junction:(id)arg3 desiredRoadDirectionality:(unsigned long long)arg4 muid:(unsigned long long)arg5 requireExactMuidMatch:(_Bool)arg6 featuresToIgnore:(id)arg7 shouldStop:(_Bool *)arg8;	// IMP=0x00000000007c4288
- (id)findUnjoinedRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 requireExactMuidMatch:(_Bool)arg4 featuresToIgnore:(id)arg5 handler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000007c2f32
- (id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 featuresToIgnore:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000007c283b
- (id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007c2806
- (id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007c25cb
- (id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000007c2390

@end

