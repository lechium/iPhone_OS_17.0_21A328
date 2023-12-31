//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFont.h"

@class NSNumber;

@interface UIFont (Variant_Private)
+ (id)layoutMetrics;	// IMP=0x00200000009d4395
+ (void)registerLayoutMetrics:(Class)arg1;	// IMP=0x00200000009d42b0
+ (double)systemMinimumFontSize;	// IMP=0x0020000000a06f4c
+ (double)defaultFontSize;	// IMP=0x0020000000a06f33
+ (void)_setDefaultFontSizesForUserInterfaceIdiom:(long long)arg1;	// IMP=0x0020000000a06f65
+ (id)preferredContentSizeCategory;	// IMP=0x002000000131c19a
+ (id)_preferredContentSizeCategory:(unsigned long long)arg1;	// IMP=0x002000000131c17e
+ (id)_normalizedContentSizeCategory:(id)arg1 default:(_Bool)arg2;	// IMP=0x002000000131bfdf
@property(retain, nonatomic, setter=_setCachedVariantWeight:) NSNumber *_cachedVariantWeight;
- (id)_fontWithVariantWeight:(unsigned long long)arg1;	// IMP=0x001000000068b2f7
- (unsigned long long)_variantWeight;	// IMP=0x001000000068afbf
- (unsigned short)_bulletGlyphWithOriginalFont:(id)arg1 fontForBulletRendering:(id *)arg2;	// IMP=0x001000000174ff1c
- (unsigned short)_bulletGlyph;	// IMP=0x001000000174ff06
- (id)_ui_bulletStringWithFont:(id *)arg1;	// IMP=0x001000000174fe02
@end

