//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorLocalZoneID : HMFObject
{
    NSData *_token;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0010000000789ba9
- (void).cxx_destruct;	// IMP=0x0000000000789b96
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *name;
- (id)labels;	// IMP=0x0000000000789ae2
- (id)attributeDescriptions;	// IMP=0x00000000007899c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007899b9
- (id)initWithToken:(id)arg1;	// IMP=0x0000000000789938

@end
