//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKChartSummaryTrendModel, HKHealthChartFactory, HKOverlayRoomApplicationItems, NSDate, NSString, NSUserActivity, UIViewController;

@protocol HKHealthChartFactoryViewControllerProviderClass
+ (UIViewController *)createInteractiveChartViewControllerForTypeIdentifier:(NSString *)arg1 chartFactory:(HKHealthChartFactory *)arg2 applicationItems:(HKOverlayRoomApplicationItems *)arg3 displayDate:(NSDate *)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(NSUserActivity *)arg6 trendModel:(HKChartSummaryTrendModel *)arg7 additionalChartOptions:(unsigned long long)arg8;
@end

