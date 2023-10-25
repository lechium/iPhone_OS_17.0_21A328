//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NCNotificationSectionSettings.h>

@interface NCNotificationSectionSettings (Bulletin)
+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;	// IMP=0x0020000000053644
- (unsigned long long)_groupingSettingFromBBGroupingSetting:(long long)arg1;	// IMP=0x0010000000054a41
- (unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1;	// IMP=0x00100000000549ef
@property(readonly, nonatomic, getter=hasUserConfiguredDirectMessagesSetting) _Bool userConfiguredDirectMessagesSetting;
@property(readonly, nonatomic, getter=isDirectMessagesEnabled) _Bool directMessagesEnabled;
@property(readonly, nonatomic, getter=isScheduledDeliveryEnabled) _Bool scheduledDeliveryEnabled;
@property(readonly, nonatomic, getter=hasUserConfiguredTimeSensitiveSetting) _Bool userConfiguredTimeSensitiveSetting;
@property(readonly, nonatomic, getter=isTimeSensitiveEnabled) _Bool timeSensitiveEnabled;
- (unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1;	// IMP=0x0010000000054541
- (id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1;	// IMP=0x001000000005434f
@property(readonly, nonatomic) unsigned long long groupingSetting;
@property(readonly, nonatomic) unsigned long long contentPreviewSetting;
@property(readonly, nonatomic) long long subSectionPriority;
@property(readonly, nonatomic) _Bool showsInLockScreen;
@property(readonly, nonatomic) _Bool showsInNotificationCenter;
@property(readonly, nonatomic) _Bool criticalAlertsEnabled;
@property(readonly, nonatomic) _Bool notificationsEnabled;
@end
