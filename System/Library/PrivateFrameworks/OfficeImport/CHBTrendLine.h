//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBTrendLine : NSObject
{
}

+ (void)readFrom:(void *)arg1 toSeries:(id)arg2 state:(id)arg3;	// IMP=0x008000000021a318
+ (id)readTrendlineGraphicProperties:(const struct XlChartSeriesFormat *)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;	// IMP=0x008000000021ac8e
+ (int)xlTrendLineRegressionTypeFrom:(int)arg1;	// IMP=0x008000000038a354
+ (int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2;	// IMP=0x008000000021a71c

@end

