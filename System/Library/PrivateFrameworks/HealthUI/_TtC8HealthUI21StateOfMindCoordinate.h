//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol HKGraphSeriesBlockCoordinateInfo;

__attribute__((visibility("hidden")))
@interface _TtC8HealthUI21StateOfMindCoordinate : NSObject
{
    MISSING_TYPE *xValue;	// 8 = 0x8
    MISSING_TYPE *maxYValue;	// 16 = 0x10
    MISSING_TYPE *minYValue;	// 24 = 0x18
    MISSING_TYPE *dailyYValueRanges;	// 32 = 0x20
    MISSING_TYPE *momentaryYValueRanges;	// 40 = 0x28
    MISSING_TYPE *userInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000356d00
- (id)init;	// IMP=0x0000000000356ca0
@property(nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo;

@end
