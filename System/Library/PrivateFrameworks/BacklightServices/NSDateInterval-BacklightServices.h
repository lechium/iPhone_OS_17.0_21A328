//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (BacklightServices)
- (id)bls_shortLoggingString;	// IMP=0x0030000000009fbe
- (id)bls_loggingString;	// IMP=0x0030000000009f18
- (_Bool)bls_containsDate:(id)arg1 withEpsilon:(double)arg2 outDelta:(double *)arg3;	// IMP=0x0030000000009e06
- (_Bool)bls_containsDate:(id)arg1 withEpsilon:(double)arg2;	// IMP=0x0030000000009df2
- (id)bls_initWithStartMachContinuousTime:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2;	// IMP=0x0030000000009d53
@property(readonly, nonatomic) unsigned long long bls_machDuration;
@property(readonly, nonatomic) unsigned long long bls_machContinuousEndTime;
@property(readonly, nonatomic) unsigned long long bls_machContinuousStartTime;
@end

