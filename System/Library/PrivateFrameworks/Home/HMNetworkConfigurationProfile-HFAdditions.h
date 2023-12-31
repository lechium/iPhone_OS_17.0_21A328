//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMNetworkConfigurationProfile.h>

@class NSString;

@interface HMNetworkConfigurationProfile (HFAdditions)
+ (id)_localizedStringForPurpose;	// IMP=0x002000000025119c
+ (id)_validCurrentModesForTargetModes;	// IMP=0x00200000002510bd
+ (_Bool)hf_currentProtectionMode:(long long)arg1 isValidForTargetProtectionMode:(long long)arg2;	// IMP=0x0020000000250fe9
+ (_Bool)hf_targetProtectionModeIsValid:(long long)arg1;	// IMP=0x0020000000250f5c
+ (id)hf_localizedDescriptionForCredentialType:(long long)arg1;	// IMP=0x0020000000250f1b
+ (id)hf_localizedDescriptionForAllowedHostPurpose:(unsigned long long)arg1;	// IMP=0x0020000000250bce
+ (id)hf_detailedLocalizedDescriptionForTargetProtectionMode:(long long)arg1;	// IMP=0x0020000000250ae7
+ (id)hf_detailedLocalizedTitleForTargetProtectionMode:(long long)arg1;	// IMP=0x0020000000250a00
+ (id)hf_localizedTitleForTargetProtectionMode:(long long)arg1;	// IMP=0x0020000000250919
@property(readonly, nonatomic) _Bool hf_requiresManualWiFiReconfiguration;
@property(readonly, nonatomic) _Bool hf_requiresWiFiReconfiguration;
@property(readonly, nonatomic) _Bool hf_hasManagedNetworkCredential;
@property(readonly, nonatomic) _Bool hf_hasCurrentNetworkAccessViolation;
@property(readonly, nonatomic) _Bool hf_targetProtectionModeIsValid;
@property(readonly, nonatomic) _Bool hf_hasProtectionModeMismatch;
@property(readonly, copy, nonatomic) NSString *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;
@property(readonly, copy, nonatomic) NSString *hf_targetProtectionModeDetailedLocalizedDescription;
@property(readonly, copy, nonatomic) NSString *hf_targetProtectionModeDetailedLocalizedTitle;
@property(readonly, copy, nonatomic) NSString *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;
@end

