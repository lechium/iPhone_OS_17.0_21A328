//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol AppKitUGCPhotoAttributionPreferencesManagement;

@protocol AppKitPreferencesDelegate <NSObject>
- (id <AppKitUGCPhotoAttributionPreferencesManagement>)photoAttributionPreferencesManager;
- (void)appkitBundleSetUseLargeLabels:(_Bool)arg1;
- (_Bool)useLargeLabelsPreferenceForAppkitBundle;
- (void)notificationButtonPressedWithCompletionHandler:(void (^)(void))arg1;
- (void)fetchNotificationAuthUndetermined:(void (^)(_Bool))arg1;
- (void)presentRatingsAndPhotosPrivacyScreen;
@end
