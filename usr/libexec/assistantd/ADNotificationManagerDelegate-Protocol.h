//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADNotificationManager, AFBulletin;

@protocol ADNotificationManagerDelegate <NSObject>
- (void)notificationManagerDidChangeBulletins:(ADNotificationManager *)arg1;

@optional
- (void)notificationManager:(ADNotificationManager *)arg1 didRemoveBulletin:(AFBulletin *)arg2;
- (void)notificationManager:(ADNotificationManager *)arg1 didAddBulletin:(AFBulletin *)arg2;
@end

