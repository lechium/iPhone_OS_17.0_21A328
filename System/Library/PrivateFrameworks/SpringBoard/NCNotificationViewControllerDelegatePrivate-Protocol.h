//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NCNotificationViewControllerDelegate-Protocol.h>

@class NCNotificationRequest, NCNotificationViewController;
@protocol NCAuxiliaryOptionsProviding;

@protocol NCNotificationViewControllerDelegatePrivate <NCNotificationViewControllerDelegate>

@optional
- (id <NCAuxiliaryOptionsProviding>)notificationViewController:(NCNotificationViewController *)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 withLongLook:(_Bool)arg3;
@end
