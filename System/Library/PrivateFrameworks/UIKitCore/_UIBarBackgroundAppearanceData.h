//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIBlurEffect, UIColor, UIImage, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundAppearanceData
{
    struct {
        unsigned int backgroundEffectsAreSingular:1;
        unsigned int hasBackground:1;
        unsigned int hasShadow:1;
        unsigned int needsToCalculateVibrantEffect:1;
    } _flags;	// 8 = 0x8
    UIVibrancyEffect *_shadowViewEffect;	// 16 = 0x10
    UIVibrancyEffect *_tabBarVibrancyEffect;	// 24 = 0x18
    NSArray *_backgroundEffects;	// 32 = 0x20
    UIColor *_backgroundColor;	// 40 = 0x28
    UIImage *_backgroundImage;	// 48 = 0x30
    long long _backgroundImageContentMode;	// 56 = 0x38
    UIVibrancyEffect *_overrideTabBarVibrancyEffect;	// 64 = 0x40
    UIColor *_shadowColor;	// 72 = 0x48
    UIImage *_shadowImage;	// 80 = 0x50
    UIVibrancyEffect *_shadowEffect;	// 88 = 0x58
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x00600000001bb6f7
+ (id)transparentBackgroundData;	// IMP=0x00600000001bb607
+ (id)opaqueBackgroundData;	// IMP=0x00600000001bb4eb
+ (id)standardBackgroundData;	// IMP=0x00600000001bb381
- (void).cxx_destruct;	// IMP=0x00000000001bda5c
@property(copy, nonatomic) UIVibrancyEffect *shadowEffect; // @synthesize shadowEffect=_shadowEffect;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(copy, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIVibrancyEffect *overrideTabBarVibrancyEffect; // @synthesize overrideTabBarVibrancyEffect=_overrideTabBarVibrancyEffect;
@property(nonatomic) long long backgroundImageContentMode; // @synthesize backgroundImageContentMode=_backgroundImageContentMode;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(readonly, nonatomic) UIVibrancyEffect *tabBarVibrancyEffect; // @synthesize tabBarVibrancyEffect=_tabBarVibrancyEffect;
@property(readonly, nonatomic) UIColor *shadowViewTintColor;
@property(readonly, nonatomic) UIColor *shadowViewBackgroundColor;
@property(readonly, nonatomic) UIVibrancyEffect *shadowViewEffect; // @synthesize shadowViewEffect=_shadowViewEffect;
- (long long)behaviorForTransitioningTo:(id)arg1;	// IMP=0x00000000001bd6b4
@property(readonly, nonatomic) _Bool hasShadow;
@property(readonly, nonatomic) _Bool hasBackground;
- (void)configureWithoutShadow;	// IMP=0x00000000001bd600
- (void)configureWithDefaultShadow;	// IMP=0x00000000001bd55c
- (void)_updateShadowFlags;	// IMP=0x00000000001bd336
@property(copy, nonatomic) UIBlurEffect *backgroundEffect;
- (void)_updateBackgroundFlags;	// IMP=0x00000000001bcf28
- (id)replicate;	// IMP=0x00000000001bcdbc
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x00000000001bca6f
- (long long)hashInto:(long long)arg1;	// IMP=0x00000000001bc978
- (void)describeInto:(id)arg1;	// IMP=0x00000000001bc7a7
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x00000000001bbf0b

@end

