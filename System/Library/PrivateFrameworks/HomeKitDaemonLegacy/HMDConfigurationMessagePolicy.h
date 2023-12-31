//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

__attribute__((visibility("hidden")))
@interface HMDConfigurationMessagePolicy : HMFMessagePolicy
{
    unsigned long long _operationTypes;	// 8 = 0x8
}

+ (id)policyWithOperationTypes:(unsigned long long)arg1;	// IMP=0x0060000000202233
@property(readonly) unsigned long long operationTypes; // @synthesize operationTypes=_operationTypes;
- (unsigned long long)hash;	// IMP=0x0000000000202210
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020216a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020215f
- (id)__initWithOperationTypes:(unsigned long long)arg1;	// IMP=0x000000000020211b
- (id)init;	// IMP=0x0000000000202073

@end

