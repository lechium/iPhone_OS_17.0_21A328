//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TSUAdditions)
+ (id)tc_dateWithWordDate:(const struct WrdDateTime *)arg1;	// IMP=0x00200000003e03ac
- (_Bool)tsu_isEqualToDate:(id)arg1;	// IMP=0x00100000002cc8d5
- (id)tsu_fullFormattedDateWithPeriod;	// IMP=0x00100000002cc868
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002cc7d4
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002cc740
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002cc6ac
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002cc59a
- (id)p_ruleForYesterdayShortAsPossible:(id)arg1;	// IMP=0x00100000002cc53e
- (id)p_rule1To23HoursAgo:(long long)arg1;	// IMP=0x00100000002cc499
- (id)p_rule1To59MinutesAgo:(long long)arg1;	// IMP=0x00100000002cc3f7
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;	// IMP=0x00100000002cc3e0
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;	// IMP=0x00100000002cc3cb
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(_Bool)arg3;	// IMP=0x00100000002cc04f
@property(readonly, nonatomic) CDStruct_d65e47c4 tsu_DOSTime;
- (id)tsu_initWithDOSTime:(CDStruct_d65e47c4)arg1;	// IMP=0x00100000002cbf06
- (void)tc_copyToWordDate:(struct WrdDateTime *)arg1;	// IMP=0x00100000003e04bd
@end

