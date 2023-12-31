//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDCTCallCapabilities, CTXPCContextInfo, NSArray, NSDictionary, NSSet, NSString, NSUUID;
@protocol CSDCoreTelephonyClientDelegate;

@protocol CSDCoreTelephonyClient <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *thumperDeviceInfo;
@property(readonly, copy, nonatomic) NSSet *telephonySubscriptions;
@property(readonly, copy, nonatomic) NSSet *subscriptions;
@property(readonly, copy, nonatomic) NSUUID *preferredVoiceSubscriptionUUID;
@property(readonly, nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled;
@property(nonatomic) __weak id <CSDCoreTelephonyClientDelegate> delegate;
- (NSArray *)spamIdentifiersForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isInHomeCountryForSubscriptionUUID:(NSUUID *)arg1;
- (NSString *)ISOCountryCodeForSubscriptionUUID:(NSUUID *)arg1;
- (NSString *)accountISOCountryCodeForSubscriptionUUID:(NSUUID *)arg1;
- (void)endEmergencyCallbackMode;
- (void)recheckAccountStatusForSubscription:(CTXPCContextInfo *)arg1 capability:(NSString *)arg2;
- (void)removeSecondaryThumperDeviceWithIDSDeviceIdentifier:(NSString *)arg1 fromSubscription:(CTXPCContextInfo *)arg2;
- (void)addSecondaryThumperDeviceWithIDSDeviceIdentifier:(NSString *)arg1 toSubscription:(CTXPCContextInfo *)arg2;
- (void)setSubscription:(CTXPCContextInfo *)arg1 capability:(NSString *)arg2 enabled:(_Bool)arg3 info:(NSDictionary *)arg4;
- (void)setCapability:(NSString *)arg1 enabled:(_Bool)arg2 info:(NSDictionary *)arg3;
- (NSDictionary *)systemCapabilitiesForSubscription:(CTXPCContextInfo *)arg1;
- (NSDictionary *)capabilityInfoForSubscription:(CTXPCContextInfo *)arg1 capability:(NSString *)arg2;
- (CSDCTCallCapabilities *)callCapabilitiesForSubscription:(CTXPCContextInfo *)arg1;
@end

