//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NotificationService
{
}

+ (id)_propertySettersForPaymentTransaction;	// IMP=0x004000000013b7a4
+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x001000000013b781
+ (id)_predicateForNoRegistrationURL;	// IMP=0x001000000013b761
+ (id)_predicateForRegistrationURL:(id)arg1;	// IMP=0x001000000013b706
+ (id)_predicateForServiceURL:(id)arg1;	// IMP=0x001000000013b6ab
+ (id)_predicateForServiceType:(unsigned long long)arg1;	// IMP=0x001000000013b63a
+ (id)_predicateForPushTopic:(id)arg1;	// IMP=0x001000000013b617
+ (id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x001000000013b418
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x001000000013ad8c
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x001000000013ad00
+ (id)notificationServicesInDatabase:(id)arg1;	// IMP=0x001000000013acec
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x001000000013aae4
+ (id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 registrationURL:(id)arg3;	// IMP=0x001000000013a97b
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x001000000013a8ef
+ (id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x001000000013a81e
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000013a7ef
+ (id)databaseTable;	// IMP=0x001000000013a7e2
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x004000000013b26c
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x001000000013b1a4
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x001000000013b114
- (void)updateWithAppLaunchToken:(id)arg1;	// IMP=0x001000000013b0fb
- (void)updateWithAuthenticationToken:(id)arg1;	// IMP=0x001000000013b0e2
- (void)updateWithPushToken:(id)arg1;	// IMP=0x001000000013b0c9
- (id)notificationService;	// IMP=0x001000000013af94
- (id)initWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x001000000013a64a

@end
