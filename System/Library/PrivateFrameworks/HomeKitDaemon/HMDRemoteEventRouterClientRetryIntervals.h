//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterClientRetryIntervals : NSObject
{
    NSArray *_intervals;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
}

+ (id)retryIntervalsForResidentClient;	// IMP=0x001000000003d9a5
- (void).cxx_destruct;	// IMP=0x000000000003d995
@property long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly) NSArray *intervals; // @synthesize intervals=_intervals;
- (void)reset;	// IMP=0x000000000003d959
- (double)nextInterval;	// IMP=0x000000000003d864
- (id)initWithIntervals:(id)arg1;	// IMP=0x000000000003d7f1
- (id)init;	// IMP=0x000000000003d7d8

@end

