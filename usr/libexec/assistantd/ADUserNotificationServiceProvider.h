//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSString, NSXPCConnection, UNUserNotificationCenter;
@protocol AFUserNotificationServiceDelegate, OS_dispatch_queue;

@interface ADUserNotificationServiceProvider : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
    NSMutableDictionary *_responseHandlersByNotificationID;	// 16 = 0x10
    id <AFUserNotificationServiceDelegate> _delegate;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSMutableDictionary *_notificationsToBeSnoozed;	// 40 = 0x28
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)personalDomainNotificationProvider;	// IMP=0x00000000002f863b
- (void).cxx_destruct;	// IMP=0x002000000028aa1f
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000028a8c9
- (void)postNotificationRequest:(id)arg1 options:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000028a806
- (void)setDelegate:(id)arg1;	// IMP=0x001000000028a779
- (void)_clearNotificationWithIdentifier:(id)arg1;	// IMP=0x001000000028a6e8
- (void)_snoozeNotifications;	// IMP=0x001000000028a448
- (void)_stopMonitoringUnlockActivity;	// IMP=0x001000000028a416
- (void)_startMonitoringUnlockActivity;	// IMP=0x001000000028a356
- (_Bool)_isMonitoringUnlockActivity;	// IMP=0x001000000028a348
- (void)withdrawNotificationRequestWithIdentifier:(id)arg1;	// IMP=0x001000000028a2bb
- (void)postNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000028a2a5
- (id)initWithConnection:(id)arg1 bundleIdentifier:(id)arg2 notificationCategories:(id)arg3;	// IMP=0x001000000028a0b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
