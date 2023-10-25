//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFocusRegion.h"

__attribute__((visibility("hidden")))
@interface _UIFocusSpeedBumpRegion : _UIFocusRegion
{
    unsigned long long _speedBumpEdges;	// 8 = 0x8
}

@property(nonatomic) unsigned long long speedBumpEdges; // @synthesize speedBumpEdges=_speedBumpEdges;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;	// IMP=0x000000000080d6fe
- (_Bool)_shouldCropRegionToSearchArea;	// IMP=0x000000000080d6f6
- (_Bool)_canBeOccludedByRegionsAbove;	// IMP=0x000000000080d6ee
- (_Bool)_canOccludeRegionsBelow;	// IMP=0x000000000080d6e6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000080d67a
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x000000000080d61a
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2 speedBumpEdges:(unsigned long long)arg3;	// IMP=0x000000000080d5c5
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x000000000080d5ae
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000080d55a

@end
