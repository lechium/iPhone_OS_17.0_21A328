//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSDictionary, NSSet;

@protocol RTMetricProtocol <NSObject>
+ (NSSet *)supportedMetricKeys;
+ (CDStruct_b8464340)event;
- (_Bool)setAllMetrics:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)submitMetricsWithError:(id *)arg1;
@end
