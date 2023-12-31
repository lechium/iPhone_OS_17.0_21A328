//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CPAnalyticsMetricEventRoute : NSObject
{
    NSString *_destination;	// 8 = 0x8
    NSString *_destinationEventKey;	// 16 = 0x10
    NSArray *_propertiesToInclude;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000f19a
@property(readonly, nonatomic) NSArray *propertiesToInclude; // @synthesize propertiesToInclude=_propertiesToInclude;
@property(readonly, nonatomic) NSString *destinationEventKey; // @synthesize destinationEventKey=_destinationEventKey;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000000f05b

@end

