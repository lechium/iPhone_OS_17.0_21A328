//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14CalendarWidget21SpatialLayoutDelegate : NSObject
{
    MISSING_TYPE *displayedRect;	// 8 = 0x8
    MISSING_TYPE *startDate;	// 2147484680 = 0x80000408
    MISSING_TYPE *endDate;	// 6 = 0x6
    MISSING_TYPE *startHourToShow;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *endHourToShow;	// 1818784869 = 0x6c687465
    MISSING_TYPE *scale;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *calendar;	// 0 = 0x0
    MISSING_TYPE *topPadding;	// 965096 = 0xeb9e8
    MISSING_TYPE *originIsUpperLeft;	// 864 = 0x360
    MISSING_TYPE *hoursInDay;	// 965096 = 0xeb9e8
    MISSING_TYPE *secondsInDay;	// 0 = 0x0
    MISSING_TYPE *secondsInMinute;	// 0 = 0x0
    MISSING_TYPE *secondsInHour;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000007fdc0
- (id)init;	// IMP=0x000000000007fd70
- (double)RoundToScreenScale:(double)arg1;	// IMP=0x000000000007fd40
- (struct CGPoint)pointForDate:(double)arg1;	// IMP=0x000000000007fcf0
- (double)dateForPoint:(struct CGPoint)arg1;	// IMP=0x000000000007f990
@property(nonatomic) _Bool originIsUpperLeft; // @synthesize originIsUpperLeft;
@property(nonatomic, readonly) double timeWidth;
@property(nonatomic) double topPadding; // @synthesize topPadding;
@property(nonatomic, readonly) double hourHeight;
@property(nonatomic, readonly) struct CGRect displayedRect; // @synthesize displayedRect;

@end
