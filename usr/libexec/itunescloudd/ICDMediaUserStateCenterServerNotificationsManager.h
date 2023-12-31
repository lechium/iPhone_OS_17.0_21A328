//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICDMediaUserStateCenterServerNotificationsManagerDelegate;

@interface ICDMediaUserStateCenterServerNotificationsManager : NSObject
{
    id <ICDMediaUserStateCenterServerNotificationsManagerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000119a93
@property(readonly, nonatomic) __weak id <ICDMediaUserStateCenterServerNotificationsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMusicSettingsChangedNotification;	// IMP=0x00100000001199a6
- (void)_handleCloudAuthenticationDidChangeNotification;	// IMP=0x00100000001198cf
- (void)_handleActiveUserIdentityDidChangeNotification:(id)arg1;	// IMP=0x00100000001197e1
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x00100000001196f3
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000119605
- (void)_handleLocalStoreAccountPropertiesDidChangeNotification:(id)arg1;	// IMP=0x0010000000119517
- (void)_handleLibraryAuthServiceTokenDidChangeNotification:(id)arg1;	// IMP=0x0010000000119429
- (void)_handleHomeUserSettingsDidChangeNotification:(id)arg1;	// IMP=0x001000000011933b
- (void)_setupNotifications;	// IMP=0x0010000000118f76
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000118f02

@end

