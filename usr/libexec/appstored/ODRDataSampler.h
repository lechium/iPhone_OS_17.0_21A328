//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;

@interface ODRDataSampler : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    NSMutableArray *_samples;	// 16 = 0x10
    _Bool _isRunning;	// 24 = 0x18
    double _samplingInterval;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001b23df
- (id)currentStatsString;	// IMP=0x00100000001b2335
- (id)takeSample;	// IMP=0x00100000001b21ce

@end

