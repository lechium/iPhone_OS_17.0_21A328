//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect
{
    int mPresetShadowType;	// 36 = 0x24
}

- (id)description;	// IMP=0x00000000003186f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022bdae
- (unsigned long long)hash;	// IMP=0x000000000022b7ac
- (id)equivalentOuterShadowEffect;	// IMP=0x0000000000318409
- (void)setPresetShadowType:(int)arg1;	// IMP=0x0000000000219dd5
- (int)presetShadowType;	// IMP=0x0000000000219de5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031838b
- (id)init;	// IMP=0x0000000000219cec

@end
