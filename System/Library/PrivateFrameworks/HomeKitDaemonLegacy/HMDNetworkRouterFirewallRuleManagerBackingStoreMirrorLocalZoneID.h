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

+ (id)sharedInstance;	// IMP=0x00100000006a4aed
- (void).cxx_destruct;	// IMP=0x00000000006a4ada
@property(readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *name;
- (id)labels;	// IMP=0x00000000006a4a26
- (id)attributeDescriptions;	// IMP=0x00000000006a4908
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a48fd
- (id)initWithToken:(id)arg1;	// IMP=0x00000000006a487c

@end
