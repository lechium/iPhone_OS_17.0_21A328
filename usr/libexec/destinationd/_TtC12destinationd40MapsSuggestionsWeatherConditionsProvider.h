//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12destinationd40MapsSuggestionsWeatherConditionsProvider : NSObject
{
    MISSING_TYPE *_observers;	// 8 = 0x8
    MISSING_TYPE *_weatherDataModel;	// 2162821 = 0x210085
    MISSING_TYPE *_queue;	// 0 = 0x0
    MISSING_TYPE *_locationRange;	// 25 = 0x19
    MISSING_TYPE *_isRequesting;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x0040000000009970
- (id)init;	// IMP=0x00100000000098f0
- (void)didUpdateLocation;	// IMP=0x00100000000070e0
- (void)stopProvidingForObserver:(id)arg1;	// IMP=0x0010000000006f60
- (void)startProvidingForObserver:(id)arg1;	// IMP=0x0010000000006f10
- (id)initWithQueue:(id)arg1 locationRange:(double)arg2;	// IMP=0x0010000000006e90

@end

