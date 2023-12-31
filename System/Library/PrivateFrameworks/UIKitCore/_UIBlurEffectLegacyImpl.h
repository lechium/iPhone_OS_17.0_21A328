//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIBlurEffect, UIColor;

__attribute__((visibility("hidden")))
@interface _UIBlurEffectLegacyImpl
{
    long long _style;	// 8 = 0x8
    UIColor *_tintColor;	// 16 = 0x10
    _Bool _invertAutomaticStyle;	// 24 = 0x18
    UIBlurEffect *_effect;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000185ed2
@property(nonatomic) UIBlurEffect *effect; // @synthesize effect=_effect;
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x0000000000185de4
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x0000000000185cbf
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x0000000000185b8b
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000000185ae9
- (_Bool)canProvideVibrancyEffect;	// IMP=0x0000000000185ae1
- (_Bool)invertAutomaticStyle;	// IMP=0x0000000000185ad1
- (id)tintColor;	// IMP=0x0000000000185abc
- (long long)style;	// IMP=0x0000000000185aab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018597a
- (unsigned long long)hash;	// IMP=0x0000000000185969
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001858ce
- (id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(_Bool)arg3;	// IMP=0x0000000000185830

@end

