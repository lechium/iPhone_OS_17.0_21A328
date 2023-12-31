//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@interface NCNotificationRequest (AlertSuppression)
+ (id)_notificationSoundFromSound:(id)arg1;	// IMP=0x008000000079f762
+ (long long)_soundTypeForSBSoundType:(long long)arg1;	// IMP=0x008000000079f743
+ (id)_notificationOptionsForAlertController:(id)arg1 item:(id)arg2;	// IMP=0x008000000079f59f
+ (id)_notificationRequestForDestinations:(id)arg1 withAlertItem:(id)arg2 identifier:(id)arg3;	// IMP=0x008000000079ed4c
+ (id)notificationRequestForLockScreenWithAlertItem:(id)arg1;	// IMP=0x008000000079ebed
+ (id)notificationRequestForCarPlayWithAlertItem:(id)arg1;	// IMP=0x008000000079eaf5
+ (id)notificationRequestWithCardItem:(id)arg1;	// IMP=0x008000000096fa3f
- (_Bool)sb_shouldSuppressAlert;	// IMP=0x0010000000098da8
@end

