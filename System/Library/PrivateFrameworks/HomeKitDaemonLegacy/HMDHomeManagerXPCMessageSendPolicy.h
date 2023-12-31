//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHomeManagerXPCMessageSendPolicy
{
    _Bool _active;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    unsigned long long _entitlements;	// 24 = 0x18
}

@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)attributeDescriptions;	// IMP=0x000000000098af5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000098af53
- (unsigned long long)hash;	// IMP=0x000000000098af17
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000098adc4
- (_Bool)canSendWithPolicyParameters:(id)arg1;	// IMP=0x000000000098aca9
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 active:(_Bool)arg3;	// IMP=0x000000000098ac15
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000098ac00

@end

