//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10ChronoCore37_LocationSignificantChangeMonitorImpl : NSObject
{
    MISSING_TYPE *_significantLocationDidChangePublisher;	// 8 = 0x8
    MISSING_TYPE *significantLocationDidChangePublisher;	// 16 = 0x10
    MISSING_TYPE *_didChangeHandler;	// 24 = 0x18
    MISSING_TYPE *manager;	// 40 = 0x28
    MISSING_TYPE *lock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007bde0
- (id)init;	// IMP=0x000000000007c050
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000000007c000
- (void)dealloc;	// IMP=0x000000000007bd90

@end

