//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl
{
    long long _compositingMode;	// 8 = 0x8
    NSString *_filterType;	// 16 = 0x10
    UIColor *_compositingColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000190d61
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x0000000000190ce5
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x0000000000190c15
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000190b96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000190aab
- (unsigned long long)hash;	// IMP=0x0000000000190a9a
- (id)implementationReplacingTintColor:(id)arg1;	// IMP=0x00000000001909a3
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;	// IMP=0x000000000019084b

@end
