//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedSettings/_TtP15ManagedSettings20ShieldExtensionProxy_-Protocol.h>
#import <ManagedSettings/_TtP15ManagedSettings21OverrideSettingsProxy_-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUUID;

@protocol _TtP15ManagedSettings20ManagedSettingsAgent_ <_TtP15ManagedSettings20ShieldExtensionProxy_, _TtP15ManagedSettings21OverrideSettingsProxy_>
- (void)updateStoreProperties:(NSDictionary *)arg1 recordIdentifier:(NSUUID *)arg2 storeContainer:(NSString *)arg3 storeName:(NSString *)arg4 replyHandler:(void (^)(NSUUID *, NSError *))arg5;
- (void)getStorePropertiesForRecordIdentifier:(NSUUID *)arg1 storeContainer:(NSString *)arg2 storeName:(NSString *)arg3 replyHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)clearAllSettingsForRecordIdentifier:(NSUUID *)arg1 storeContainer:(NSString *)arg2 storeName:(NSString *)arg3 replyHandler:(void (^)(NSUUID *, NSError *))arg4;
- (void)removeValuesForSettingNames:(NSSet *)arg1 recordIdentifier:(NSUUID *)arg2 storeContainer:(NSString *)arg3 storeName:(NSString *)arg4 replyHandler:(void (^)(NSUUID *, NSError *))arg5;
- (void)setValues:(NSDictionary *)arg1 recordIdentifier:(NSUUID *)arg2 storeContainer:(NSString *)arg3 storeName:(NSString *)arg4 replyHandler:(void (^)(NSUUID *, NSError *))arg5;
- (void)getValuesForSettingNames:(NSSet *)arg1 recordIdentifier:(NSUUID *)arg2 storeContainer:(NSString *)arg3 storeName:(NSString *)arg4 replyHandler:(void (^)(NSDictionary *, NSError *))arg5;
- (void)effectiveMediaSettings:(void (^)(NSNumber *, NSNumber *, NSError *))arg1;
- (void)updateEffectiveSettings:(void (^)(NSError *))arg1;
@end
