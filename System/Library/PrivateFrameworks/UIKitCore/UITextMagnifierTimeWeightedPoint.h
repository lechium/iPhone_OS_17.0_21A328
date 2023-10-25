//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierTimeWeightedPoint : NSObject
{
    int m_index;	// 8 = 0x8
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];	// 16 = 0x10
}

- (struct CGPoint)diffFromLastPoint;	// IMP=0x00000000013a6415
- (_Bool)isPlacedCarefully;	// IMP=0x00000000013a63bb
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;	// IMP=0x00000000013a62f7
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;	// IMP=0x00000000013a620b
- (struct CGSize)displacementInInterval:(double)arg1;	// IMP=0x00000000013a61da
- (float)distanceCoveredInInterval:(double)arg1;	// IMP=0x00000000013a61a9
- (_Bool)historyCovers:(double)arg1;	// IMP=0x00000000013a6110
@property(readonly, nonatomic) struct CGPoint weightedPoint;
- (void)addPoint:(struct CGPoint)arg1;	// IMP=0x00000000013a5fdd
- (void)clearHistory;	// IMP=0x00000000013a5fa9

@end
