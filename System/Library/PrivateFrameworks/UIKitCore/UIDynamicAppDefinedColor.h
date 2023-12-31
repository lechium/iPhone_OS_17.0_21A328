//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDynamicAppDefinedColor
{
    NSDictionary *_colorsByThemeKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000009c5e4a
- (void).cxx_destruct;	// IMP=0x00000000009c63c8
- (id)description;	// IMP=0x00000000009c6326
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x00000000009c60ad
- (unsigned long long)hash;	// IMP=0x00000000009c6090
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009c6024
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009c6019
- (id)_generateColorsByTraitCollection;	// IMP=0x00000000009c5eea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009c5e52
- (id)_initWithColorsByThemeKey:(id)arg1;	// IMP=0x00000000009c5d51
- (id)initWithColorsByTraitCollection:(id)arg1;	// IMP=0x00000000009c5b01

@end

