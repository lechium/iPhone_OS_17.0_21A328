//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIMaterial : NSObject
{
    _Bool _vibrant;	// 8 = 0x8
    NSArray *_backgroundEffects;	// 16 = 0x10
    NSArray *_contentEffects;	// 24 = 0x18
}

+ (id)vibrancyEffectWithA:(double)arg1 B:(double)arg2 C:(double)arg3 D:(double)arg4 E:(double)arg5 F:(double)arg6;	// IMP=0x00600000009c4e50
+ (id)xrOSMaterialMapping;	// IMP=0x00600000009c4e37
+ (id)defaultMaterialMapping;	// IMP=0x00600000009c430f
+ (id)watchMaterialMapping;	// IMP=0x00600000009c37a2
+ (id)materialMapping;	// IMP=0x00600000009c36d2
+ (id)materialForSystemColorName:(id)arg1;	// IMP=0x00600000009c3658
- (void).cxx_destruct;	// IMP=0x00000000009c5247
@property(readonly, nonatomic) NSArray *contentEffects; // @synthesize contentEffects=_contentEffects;
@property(readonly, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(readonly, nonatomic, getter=isVibrant) _Bool vibrant; // @synthesize vibrant=_vibrant;
- (id)description;	// IMP=0x00000000009c515e
- (id)initWithVisualEffect:(id)arg1;	// IMP=0x00000000009c50b2
- (id)initWithVibrantVisualEffect:(id)arg1;	// IMP=0x00000000009c5096
- (id)initWithVibrancy:(long long)arg1 forBlurEffectStyle:(long long)arg2;	// IMP=0x00000000009c4fff
- (id)initWithVibrancy:(long long)arg1;	// IMP=0x00000000009c4fe8
- (id)initWithBlur:(long long)arg1;	// IMP=0x00000000009c4f8e

@end

