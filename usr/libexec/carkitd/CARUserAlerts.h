//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UNUserNotificationCenter;

@interface CARUserAlerts : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
    NSMutableArray *_presentedBulletins;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003534
@property(retain, nonatomic) NSMutableArray *presentedBulletins; // @synthesize presentedBulletins=_presentedBulletins;
@property(readonly, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void)_injectAlert:(id)arg1;	// IMP=0x00100000000034a6
- (id)_alertsOfClass:(Class)arg1;	// IMP=0x0010000000003395
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002c4e
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002b86
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;	// IMP=0x0010000000002abd
- (void)showDNDNotDrivingAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000029e0
- (void)showDNDEndNotificationWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000028d6
- (void)showDNDExitGeofenceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002806
- (void)showDNDEnterGeofenceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002733
- (void)postBannerWithTitle:(id)arg1 message:(id)arg2 destinations:(unsigned long long)arg3;	// IMP=0x001000000000261b
- (void)dismissAlertsOfClass:(Class)arg1;	// IMP=0x00100000000024e1
- (void)dismissAlert:(id)arg1;	// IMP=0x001000000000226b
- (void)_showBulletin:(id)arg1;	// IMP=0x0010000000001fa3
- (void)dealloc;	// IMP=0x0010000000001f61
- (id)init;	// IMP=0x0010000000001f00
- (id)initWithNotificationCenter:(id)arg1;	// IMP=0x0010000000001c9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

