//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKAnalyticsDataSource, NSDictionary, NSString;

@protocol HKAnalyticsEvent
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool isEventSubmissionIHAGated;
- (NSDictionary *)makeIHAGatedEventPayloadWithDataSource:(HKAnalyticsDataSource *)arg1 error:(id *)arg2;
- (NSDictionary *)makeUnrestrictedEventPayloadWithDataSource:(HKAnalyticsDataSource *)arg1 error:(id *)arg2;
@end
