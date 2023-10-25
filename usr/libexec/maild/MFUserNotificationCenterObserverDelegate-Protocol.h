//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MFUserNotificationCenterObserver, NSArray, NSDictionary, NSSet;

@protocol MFUserNotificationCenterObserverDelegate <NSObject>
@property(readonly, nonatomic) _Bool hasFavoriteMailboxes;
- (void)activeAccountsDidChangeForNotificationCenterObserver:(MFUserNotificationCenterObserver *)arg1;
- (void)notificationCenterObserver:(MFUserNotificationCenterObserver *)arg1 didStopListeningForChangesForAccountIDs:(NSArray *)arg2;
- (void)conversationFlagsDidChangeForNotificationCenterObserver:(MFUserNotificationCenterObserver *)arg1;
- (void)notificationCenterObserver:(MFUserNotificationCenterObserver *)arg1 removedVIPs:(NSSet *)arg2;
- (void)vipsChangedForNotificationCenterObserver:(MFUserNotificationCenterObserver *)arg1;
- (void)notificationCenterObserver:(MFUserNotificationCenterObserver *)arg1 messagesDeleted:(NSArray *)arg2;
- (void)notificationCenterObserver:(MFUserNotificationCenterObserver *)arg1 messagesUpdated:(NSArray *)arg2 flags:(NSDictionary *)arg3;
- (void)notificationCenterObserver:(MFUserNotificationCenterObserver *)arg1 messageAdded:(NSArray *)arg2;
@end
