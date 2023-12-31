//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCirclePeerData, AFHomeAccessoryInfo, NSNumber, NSString;

@interface _ADDeviceCirclePeerDataMutation : NSObject
{
    ADDeviceCirclePeerData *_base;	// 8 = 0x8
    NSString *_aceVersion;	// 16 = 0x10
    NSString *_assistantIdentifier;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_productType;	// 40 = 0x28
    NSString *_sharedUserIdentifier;	// 48 = 0x30
    NSString *_userAssignedDeviceName;	// 56 = 0x38
    NSString *_userInterfaceIdiom;	// 64 = 0x40
    NSNumber *_isLocationSharingDevice;	// 72 = 0x48
    AFHomeAccessoryInfo *_homeAccessoryInfo;	// 80 = 0x50
    NSNumber *_isSiriCloudSyncEnabled;	// 88 = 0x58
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAceVersion:1;
        unsigned int hasAssistantIdentifier:1;
        unsigned int hasBuildVersion:1;
        unsigned int hasProductType:1;
        unsigned int hasSharedUserIdentifier:1;
        unsigned int hasUserAssignedDeviceName:1;
        unsigned int hasUserInterfaceIdiom:1;
        unsigned int hasIsLocationSharingDevice:1;
        unsigned int hasHomeAccessoryInfo:1;
        unsigned int hasIsSiriCloudSyncEnabled:1;
    } _mutationFlags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000013c619
- (void)setIsSiriCloudSyncEnabled:(id)arg1;	// IMP=0x001000000013c5f7
- (id)getIsSiriCloudSyncEnabled;	// IMP=0x001000000013c5bf
- (void)setHomeAccessoryInfo:(id)arg1;	// IMP=0x001000000013c59d
- (id)getHomeAccessoryInfo;	// IMP=0x001000000013c565
- (void)setIsLocationSharingDevice:(id)arg1;	// IMP=0x001000000013c543
- (id)getIsLocationSharingDevice;	// IMP=0x001000000013c50b
- (void)setUserInterfaceIdiom:(id)arg1;	// IMP=0x001000000013c4eb
- (id)getUserInterfaceIdiom;	// IMP=0x001000000013c4b3
- (void)setUserAssignedDeviceName:(id)arg1;	// IMP=0x001000000013c493
- (id)getUserAssignedDeviceName;	// IMP=0x001000000013c45b
- (void)setSharedUserIdentifier:(id)arg1;	// IMP=0x001000000013c43b
- (id)getSharedUserIdentifier;	// IMP=0x001000000013c403
- (void)setProductType:(id)arg1;	// IMP=0x001000000013c3e3
- (id)getProductType;	// IMP=0x001000000013c3ab
- (void)setBuildVersion:(id)arg1;	// IMP=0x001000000013c38b
- (id)getBuildVersion;	// IMP=0x001000000013c353
- (void)setAssistantIdentifier:(id)arg1;	// IMP=0x001000000013c333
- (id)getAssistantIdentifier;	// IMP=0x001000000013c2fb
- (void)setAceVersion:(id)arg1;	// IMP=0x001000000013c2db
- (id)getAceVersion;	// IMP=0x001000000013c2a3
- (_Bool)isDirty;	// IMP=0x001000000013c298
- (id)initWithBase:(id)arg1;	// IMP=0x001000000013c22d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

