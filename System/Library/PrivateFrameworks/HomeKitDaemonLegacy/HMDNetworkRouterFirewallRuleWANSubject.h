//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleWANAddressRange, NSArray;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject
{
    NSArray *_hostnames;	// 8 = 0x8
    NSArray *_addresses;	// 16 = 0x10
    HMDNetworkRouterFirewallRuleWANAddressRange *_addressRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000088f5ad
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange; // @synthesize addressRange=_addressRange;
@property(readonly, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) NSArray *hostnames; // @synthesize hostnames=_hostnames;
- (id)prettyJSONDictionary;	// IMP=0x000000000088f380
- (id)attributeDescriptions;	// IMP=0x000000000088f202
- (unsigned long long)hash;	// IMP=0x000000000088f141
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000088ef89
- (id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3;	// IMP=0x000000000088eeb3

@end
