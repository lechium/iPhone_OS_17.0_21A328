//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationRunningFormBuffer : NSObject
{
    struct deque<CLRunning::FormMetrics, std::allocator<CLRunning::FormMetrics>> fRunningFormMetrics;	// 8 = 0x8
}

+ (_Bool)isAvailable;	// IMP=0x00400000007a9d64
- (id).cxx_construct;	// IMP=0x00200000007aa0a8
- (void).cxx_destruct;	// IMP=0x00100000007aa09a
- (struct CMCalibrationTrackRawStrideLength)strideLengthFromStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00100000007a9f3f
- (void)feedRunningFormMetrics:(const struct FormMetrics *)arg1;	// IMP=0x00100000007a9e1a
- (void)ageOutFormMetrics;	// IMP=0x00100000007a9d73

@end
