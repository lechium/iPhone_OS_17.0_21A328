//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (IMKeyValueCollectionUserDefaultsStorage)
+ (id)__im_dateFromEncodedString:(id)arg1;	// IMP=0x00500000000731a1
+ (id)__im_serialization_dateFormatter;	// IMP=0x0050000000073076
+ (id)__im_iMessageDateFromTimeStamp:(id)arg1;	// IMP=0x0050000000072ddb
+ (id)__im_clampDate:(id)arg1;	// IMP=0x0050000000072d84
+ (_Bool)useCourierTime;	// IMP=0x00500000000728bd
+ (id)__im_dateWithCurrentServerTime;	// IMP=0x0050000000072744
+ (id)__im_dateWithNanosecondTimeIntervalSinceReferenceDate:(long long)arg1;	// IMP=0x005000000007271c
- (_Bool)isArchivable_im;	// IMP=0x001000000003b553
- (id)__im_dateByAddingDays:(long long)arg1;	// IMP=0x0010000000073224
- (id)__im_encodeAsString;	// IMP=0x001000000007313a
- (_Bool)__im_isEqualToSeconds:(id)arg1;	// IMP=0x0010000000072f9e
- (long long)secondsDifferenceFromDate:(id)arg1;	// IMP=0x0010000000072cdd
- (long long)minutesDifferenceFromDate:(id)arg1;	// IMP=0x0010000000072c36
- (long long)hoursDifferenceFromDate:(id)arg1;	// IMP=0x0010000000072b8f
- (long long)differenceFromDate:(id)arg1;	// IMP=0x0010000000072ae8
- (_Bool)isToday;	// IMP=0x0010000000072993
- (_Bool)__im_isApproximatelyEqualToDate:(id)arg1;	// IMP=0x0010000000072905
- (long long)__im_nanosecondTimeIntervalSinceEpochTime;	// IMP=0x00100000000728e5
- (long long)__im_nanosecondTimeInterval;	// IMP=0x00100000000728c5
@end
