//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/CALNNotificationResponseDelegate-Protocol.h>

@class CALNNotificationContent, CALNNotificationRecord, NSArray, NSSet, NSString;

@protocol CALNNotificationSource <CALNNotificationResponseDelegate>
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (CALNNotificationContent *)contentForNotificationWithSourceClientIdentifier:(NSString *)arg1;
- (void)refreshNotifications:(NSSet *)arg1;

@optional
- (void)willPostNotification:(CALNNotificationRecord *)arg1;
@end

