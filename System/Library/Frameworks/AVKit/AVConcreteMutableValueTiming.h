//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMutableValueTiming.h"

__attribute__((visibility("hidden")))
@interface AVConcreteMutableValueTiming : AVMutableValueTiming
{
    double _value;	// 8 = 0x8
    double _timeStamp;	// 16 = 0x10
    double _rate;	// 24 = 0x18
}

- (CDStruct_c3b9c2ee)_timing;	// IMP=0x0000000000099588
- (void)setRate:(double)arg1;	// IMP=0x0000000000099576
- (void)setAnchorTimeStamp:(double)arg1;	// IMP=0x0000000000099564
- (void)setAnchorValue:(double)arg1;	// IMP=0x0000000000099552
- (double)rate;	// IMP=0x0000000000099540
- (double)anchorTimeStamp;	// IMP=0x000000000009952e
- (double)anchorValue;	// IMP=0x000000000009951c
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;	// IMP=0x00000000000994ef

@end

