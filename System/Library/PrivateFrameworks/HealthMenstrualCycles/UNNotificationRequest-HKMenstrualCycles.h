//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/UNNotificationRequest.h>

@interface UNNotificationRequest (HKMenstrualCycles)
+ (id)_hkmc_notificationRequestWithContent:(id)arg1;	// IMP=0x008000000001c3d8
+ (id)_hkmc_notificationRequestWithCategory:(id)arg1 body:(id)arg2 title:(id)arg3 expirationDate:(id)arg4 fertileWindowEndDayIndex:(long long)arg5 daysShiftedFromCalendarMethod:(id)arg6;	// IMP=0x008000000001c367
+ (id)_hkmc_requestForCategoryIdentifier:(id)arg1 startDate:(id)arg2 fertileWindowEndDayIndex:(long long)arg3 daysShiftedFromCalendarMethod:(id)arg4;	// IMP=0x008000000001bae9
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1 fertileWindowEndDayIndex:(long long)arg2;	// IMP=0x008000000001ba56
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1 fertileWindowEndDayIndex:(long long)arg2 daysShiftedFromCalendarMethod:(id)arg3;	// IMP=0x008000000001b9af
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1;	// IMP=0x008000000001b998
@end

