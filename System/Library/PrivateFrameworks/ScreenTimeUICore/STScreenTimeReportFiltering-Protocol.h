//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeUICore/NSObject-Protocol.h>

@class NSDateInterval, NSString;

@protocol STScreenTimeReportFiltering <NSObject>
- (void)filterForWebDomain:(NSString *)arg1;
- (void)filterForCategoryIdentifier:(NSString *)arg1;
- (void)filterForBundleIdentifier:(NSString *)arg1;
- (void)filterForDateMode:(long long)arg1 withinDateInterval:(NSDateInterval *)arg2;
- (void)filterForUserAltDSID:(NSString *)arg1 deviceIdentifier:(NSString *)arg2;
@end

