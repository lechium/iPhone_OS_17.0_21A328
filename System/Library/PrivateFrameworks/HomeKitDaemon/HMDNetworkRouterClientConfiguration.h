//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterCredential, HMDNetworkRouterLANFirewallConfiguration, HMDNetworkRouterWANFirewallConfiguration, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientConfiguration : NSObject
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_lanIdentifier;	// 16 = 0x10
    HMDNetworkRouterCredential *_credential;	// 24 = 0x18
    HMDNetworkRouterWANFirewallConfiguration *_wanFirewallConfiguration;	// 32 = 0x20
    HMDNetworkRouterLANFirewallConfiguration *_lanFirewallConfiguration;	// 40 = 0x28
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000005a332e
+ (id)configurationForFirewallConfiguration:(id)arg1 hapAccessory:(_Bool)arg2 airplayAccessory:(_Bool)arg3 withClientIdentifier:(id)arg4;	// IMP=0x001000000050f3fd
+ (id)configurationForOpenProtectionWithClientIdentifier:(id)arg1;	// IMP=0x001000000050f347
+ (id)configurationWithClientIdentifier:(id)arg1 lanIdentifier:(long long)arg2;	// IMP=0x001000000050f247
- (void).cxx_destruct;	// IMP=0x0000000000593e03
@property(retain, nonatomic) HMDNetworkRouterLANFirewallConfiguration *lanFirewallConfiguration; // @synthesize lanFirewallConfiguration=_lanFirewallConfiguration;
@property(retain, nonatomic) HMDNetworkRouterWANFirewallConfiguration *wanFirewallConfiguration; // @synthesize wanFirewallConfiguration=_wanFirewallConfiguration;
@property(retain, nonatomic) HMDNetworkRouterCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier; // @synthesize lanIdentifier=_lanIdentifier;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005937cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005936c7
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000593140
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000592be5
- (id)initWithClientIdentifier:(id)arg1 lanIdentifier:(id)arg2 credential:(id)arg3 wanFirewallConfiguration:(id)arg4 lanFirewallConfiguration:(id)arg5;	// IMP=0x0000000000592ade
- (id)init;	// IMP=0x0000000000592aaf
@property(readonly, nonatomic) NSUUID *fingerprint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

