//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UNNotification, UNNotificationResponse, UNUserNotificationCenter;

@interface _TtC13voicebankingd35VoiceBankingUserNotificationManager : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_userNotificationCenter;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_voicebankingUserNotificationBundle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0040000000003f80
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;	// IMP=0x0010000000003ef0
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 willPresentNotification:(UNNotification *)arg2 withCompletionHandler:(void (^)(unsigned long long))arg3;	// IMP=0x0010000000003c00
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didReceiveNotificationResponse:(UNNotificationResponse *)arg2 withCompletionHandler:(void (^)(void))arg3;	// IMP=0x0010000000003910
- (id)init;	// IMP=0x00100000000026b0

@end

