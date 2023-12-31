//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudPairedMetadataDiagnostics, HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject
{
    HMDCloudPairedMetadataDiagnostics *_diagnostics;	// 8 = 0x8
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000842ba8
- (void).cxx_destruct;	// IMP=0x0000000000842b77
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) HMDCloudPairedMetadataDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;	// IMP=0x0000000000842970
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;	// IMP=0x000000000084254d
- (id)initWithAccessoryIdentifier:(id)arg1 diagnostics:(id)arg2;	// IMP=0x000000000084249c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

