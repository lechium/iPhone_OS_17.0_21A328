//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedRouteTransitTripSection.h>

@interface GEOComposedRouteTransitTripSection (RenderRegion)
- (id)unsnappedPathsInOverlay:(id)arg1;	// IMP=0x00700000005ff506
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(_Bool)arg3 verifySnapping:(_Bool)arg4;	// IMP=0x00700000005fe6ed
- (_Bool)_validateSnappedPaths:(id)arg1 snappedTileBounds:(const void *)arg2 overlay:(id)arg3;	// IMP=0x00700000005fdb67
- (_Bool)_getEndPoints:(id)arg1 rect:(const void *)arg2 result:(void *)arg3;	// IMP=0x00700000005fd9cf
@end
