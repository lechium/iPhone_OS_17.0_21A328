//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSApplicationProxiesWithFlagsQuery
{
    unsigned int _plistFlags;	// 12 = 0xc
    unsigned long long _bundleFlags;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000073387
+ (id)queryWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;	// IMP=0x00600000000730f5
@property(readonly, nonatomic) unsigned long long bundleFlags; // @synthesize bundleFlags=_bundleFlags;
@property(readonly, nonatomic) unsigned int plistFlags; // @synthesize plistFlags=_plistFlags;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073446
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007338f
- (unsigned long long)hash;	// IMP=0x0000000000073320
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000073214
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000007320c
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000007313e

@end

