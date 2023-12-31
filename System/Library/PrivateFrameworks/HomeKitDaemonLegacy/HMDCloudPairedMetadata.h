//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCloudPairedMetadata : HMFObject
{
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_baseAccessoryIdentifier;	// 8 = 0x8
    NSArray *_versionConfigurations;	// 16 = 0x10
}

+ (id)_decodeVersionConfigurationsFromJSONDictionary:(id)arg1 baseAccessoryIdentifier:(id)arg2 allowUnzippedData:(_Bool)arg3;	// IMP=0x00100000007c517a
+ (id)__decodeVersionConfigurationWithVersionString:(id)arg1 versionConfigurationValue:(id)arg2 baseAccessoryIdentifier:(id)arg3;	// IMP=0x00100000007c4e47
+ (id)logCategory;	// IMP=0x00100000007c4e17
- (void).cxx_destruct;	// IMP=0x00000000007c4de6
@property(readonly, nonatomic) NSArray *versionConfigurations; // @synthesize versionConfigurations=_versionConfigurations;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier; // @synthesize baseAccessoryIdentifier=_baseAccessoryIdentifier;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;	// IMP=0x00000000007c4a27
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 allowUnzippedData:(_Bool)arg3;	// IMP=0x00000000007c476c
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2;	// IMP=0x00000000007c4757
- (id)initWithBaseAccessoryIdentifier:(id)arg1 versionConfigurations:(id)arg2;	// IMP=0x00000000007c46a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

