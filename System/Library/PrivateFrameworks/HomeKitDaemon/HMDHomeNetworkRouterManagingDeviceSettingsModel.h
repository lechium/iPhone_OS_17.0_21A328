//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeNetworkRouterManagingDeviceSettingsModel
{
}

+ (id)properties;	// IMP=0x0010000000665d2c
+ (id)defaultModelForHomeUUID:(id)arg1;	// IMP=0x0010000000665ca0
+ (id)modelIDForHomeUUID:(id)arg1;	// IMP=0x0010000000665bbc
+ (id)modelNamespace;	// IMP=0x0010000000665b8c
+ (Class)cd_entityClass;	// IMP=0x00100000009a267e
- (id)dependentUUIDs;	// IMP=0x0000000000665a46
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x00000000009a255e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *primaryNetworkRouterManagingDeviceUUID; // @dynamic primaryNetworkRouterManagingDeviceUUID;
@property(readonly) Class superclass;

@end

