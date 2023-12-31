//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface QLPXInitialHysteresisNumberFilter
{
    _Bool _didReachThreshold;	// 8 = 0x8
    double _offset;	// 16 = 0x10
    double _hysteresis;	// 24 = 0x18
}

@property(nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property(readonly, nonatomic) double outputDerivative;
- (double)updatedOutput;	// IMP=0x0000000000046e62

@end

