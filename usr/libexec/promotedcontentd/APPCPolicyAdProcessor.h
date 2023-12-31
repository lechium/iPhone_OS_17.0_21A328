//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APPCPolicySettings, NSMutableArray;

@interface APPCPolicyAdProcessor : NSObject
{
    APPCPolicySettings *_policySettings;	// 8 = 0x8
    NSMutableArray *_adPolicies;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000018c2f
@property(retain, nonatomic) NSMutableArray *adPolicies; // @synthesize adPolicies=_adPolicies;
@property(readonly, nonatomic) APPCPolicySettings *policySettings; // @synthesize policySettings=_policySettings;
- (id)aliasTransformedPolicies:(id)arg1 alias:(id)arg2;	// IMP=0x0010000000017ed6
- (id)buildFinalPolicies:(id)arg1 policyValue:(id)arg2 policyType:(long long)arg3 expression:(id)arg4;	// IMP=0x00100000000179a0
- (id)cartesianProduct:(id)arg1;	// IMP=0x001000000001745d
- (id)flattenPolicy:(id)arg1 policyType:(long long)arg2;	// IMP=0x0010000000016d2b
- (void)generatePolicyDataObjects:(id)arg1;	// IMP=0x001000000001669f
- (void)processAdPolicyData;	// IMP=0x0010000000015040
- (_Bool)isValidPolicy:(id)arg1;	// IMP=0x0010000000014d2d
- (id)init;	// IMP=0x0010000000014c0d

@end

