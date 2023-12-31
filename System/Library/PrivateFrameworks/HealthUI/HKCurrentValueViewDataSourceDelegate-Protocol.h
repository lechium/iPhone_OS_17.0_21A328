//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKDisplayType, HKGraphViewPointSelectionContext, HKHealthStore, HKSelectedRangeData, HKValueRange, NSAttributedString, NSString, UIViewController;

@protocol HKCurrentValueViewDataSourceDelegate <NSObject>

@optional
- (UIViewController *)infographicViewControllerForDisplayType:(HKDisplayType *)arg1 healthStore:(HKHealthStore *)arg2;
- (_Bool)infographicSupportedForDisplayType:(HKDisplayType *)arg1 healthStore:(HKHealthStore *)arg2;
- (HKValueRange *)dateRangeFromSelectionContext:(HKGraphViewPointSelectionContext *)arg1 timeScope:(long long)arg2;
- (void)processSelectedRangeData:(HKSelectedRangeData *)arg1 displayType:(HKDisplayType *)arg2;
- (NSAttributedString *)valueForSelectedRangeData:(HKSelectedRangeData *)arg1;
- (NSAttributedString *)titleForSelectedRangeData:(HKSelectedRangeData *)arg1 displayType:(HKDisplayType *)arg2;
- (NSString *)stringForValueRange:(HKValueRange *)arg1 timeScope:(long long)arg2;
@end

