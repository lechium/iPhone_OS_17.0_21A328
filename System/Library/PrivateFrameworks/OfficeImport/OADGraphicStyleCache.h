//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, OADGraphicFeatureCache;

__attribute__((visibility("hidden")))
@interface OADGraphicStyleCache : NSObject
{
    OADGraphicFeatureCache *mFillCacheArray[4];	// 8 = 0x8
    OADGraphicFeatureCache *mStrokeCache;	// 40 = 0x28
    OADGraphicFeatureCache *mShadowCache;	// 48 = 0x30
    OADGraphicFeatureCache *mColorCache;	// 56 = 0x38
    OADGraphicFeatureCache *mFontFaceCache;	// 64 = 0x40
    OADGraphicFeatureCache *mTextStyleCache;	// 72 = 0x48
    OADGraphicFeatureCache *mTableIdCache;	// 80 = 0x50
    NSMutableDictionary *mTableStyleCache;	// 88 = 0x58
    OADGraphicFeatureCache *mChartIdCache;	// 96 = 0x60
    OADGraphicFeatureCache *mDrawableStyleCacheArray[4];	// 104 = 0x68
}

+ (int)fillCatagory:(id)arg1;	// IMP=0x00600000000b02ea
- (void).cxx_destruct;	// IMP=0x00000000003478e9
- (void)applyCachedDrawableStyle:(id)arg1 toTextBodyProperties:(id)arg2;	// IMP=0x00000000003477f3
- (void)applyCachedDrawableStyle:(id)arg1 toParagraphProperties:(id)arg2;	// IMP=0x00000000003476fd
- (void)applyCachedDrawableStyle:(id)arg1 toGraphicProperties:(id)arg2;	// IMP=0x0000000000347348
- (id)cachedDrawableStylesOfCategory:(int)arg1;	// IMP=0x000000000034732e
- (id)chartStyleIds;	// IMP=0x0000000000347318
- (id)tableStyleIds;	// IMP=0x0000000000347302
- (id)fillsOfCategory:(int)arg1;	// IMP=0x00000000003472e9
- (id)shadows;	// IMP=0x00000000003472d3
- (id)strokes;	// IMP=0x00000000003472bd
- (id)countedDrawableStyleOfCategory:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000003472a0
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withGraphicProperties:(id)arg2 textBodyProperties:(id)arg3 paragraphProperties:(id)arg4 characterProperties:(id)arg5 colorContext:(id)arg6;	// IMP=0x0000000000346d7c
- (unsigned long long)cacheDrawablePropertiesOfCategory:(int)arg1 withFillCategory:(int)arg2 fillIndex:(unsigned long long)arg3 strokeIndex:(unsigned long long)arg4 shadowIndex:(unsigned long long)arg5 reflectionOpacity:(float)arg6 textStyleIndex:(unsigned long long)arg7;	// IMP=0x0000000000346cba
- (void)cacheChartStyleId:(int)arg1;	// IMP=0x00000000002123db
- (id)tableStyleForId:(id)arg1;	// IMP=0x0000000000346c94
- (void)cacheTableStyle:(id)arg1;	// IMP=0x00000000001fa0f5
- (unsigned long long)cacheShadow:(id)arg1;	// IMP=0x00000000000b087d
- (unsigned long long)cacheStroke:(id)arg1;	// IMP=0x00000000000b0236
- (unsigned long long)cacheFill:(id)arg1 returnCategory:(int *)arg2;	// IMP=0x0000000000103839
- (id)fontFaceCache;	// IMP=0x000000000010523f
- (id)colorCache;	// IMP=0x0000000000105270
- (void)dealloc;	// IMP=0x00000000000b36fa
- (id)init;	// IMP=0x000000000000b7f7

@end
