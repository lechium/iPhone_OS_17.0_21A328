//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNRegionOfInterestTilingOptions : NSObject
{
    double _tileOverlapPercentage;	// 8 = 0x8
    double _regionOfInterestAspectRatioThreshold;	// 16 = 0x10
    long long _tileOverflowCount;	// 24 = 0x18
}

@property long long tileOverflowCount; // @synthesize tileOverflowCount=_tileOverflowCount;
@property double regionOfInterestAspectRatioThreshold; // @synthesize regionOfInterestAspectRatioThreshold=_regionOfInterestAspectRatioThreshold;
@property double tileOverlapPercentage; // @synthesize tileOverlapPercentage=_tileOverlapPercentage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f411a
- (id)init;	// IMP=0x00000000001f40d3

@end

