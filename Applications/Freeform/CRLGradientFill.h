//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLColor, NSArray, NSMutableArray;

@interface CRLGradientFill
{
    NSMutableArray *mStops;	// 8 = 0x8
    struct CGShading *mShadingRef;	// 16 = 0x10
    unsigned long long mShadingColorSpace;	// 24 = 0x18
    _Bool mIsAdvancedGradient;	// 32 = 0x20
    unsigned long long mType;	// 40 = 0x28
    double mOpacity;	// 48 = 0x30
}

+ (id)radialGradientWithGradientStops:(id)arg1;	// IMP=0x00200000004dd125
+ (id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2;	// IMP=0x00100000004dd0e3
+ (id)linearGradientWithGradientStops:(id)arg1;	// IMP=0x00100000004dd0aa
+ (id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2;	// IMP=0x00100000004dd06b
+ (void)sortStopsArray:(id)arg1;	// IMP=0x00100000004dce6a
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
@property(readonly, nonatomic) unsigned long long gradientType; // @synthesize gradientType=mType;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;	// IMP=0x00100000004e004b
- (void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;	// IMP=0x00100000004dff90
- (void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;	// IMP=0x00100000004dfe75
- (void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;	// IMP=0x00100000004dfdbd
- (void)p_setGradientType:(unsigned long long)arg1;	// IMP=0x00100000004dfda0
- (void)p_evenlyDistributeStops;	// IMP=0x00100000004dfbfe
- (void)p_reverseStopOrder;	// IMP=0x00100000004df90a
- (id)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2;	// IMP=0x00100000004df8b7
- (id)p_insertStopAtFraction:(double)arg1;	// IMP=0x00100000004df86c
- (id)p_removeStopAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004df7b2
- (void)p_removeStop:(id)arg1;	// IMP=0x00100000004df72d
- (void)p_insertGradientStop:(id)arg1;	// IMP=0x00100000004df523
- (void)p_setGradientStops:(id)arg1;	// IMP=0x00100000004df301
- (void)p_endBitmapWrapperContext:(struct CGContext *)arg1 inContext:(struct CGContext *)arg2 withIntegralBounds:(struct CGRect)arg3;	// IMP=0x00100000004df282
- (struct CGContext *)p_beginBitmapWrapperContextInContext:(struct CGContext *)arg1 returningIntegralBounds:(struct CGRect *)arg2;	// IMP=0x00100000004df14b
- (void)p_setAlpha:(struct CGContext *)arg1;	// IMP=0x00100000004df127
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;	// IMP=0x00100000004defbe
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;	// IMP=0x00100000004dee55
- (long long)fillType;	// IMP=0x00100000004dee4a
- (_Bool)p_isAnyStopP3;	// IMP=0x00100000004ded08
@property(readonly, nonatomic) _Bool hasAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004dec6f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004debed
@property(readonly, nonatomic) _Bool isOpaque;
- (struct CGAffineTransform)centeredRadialTransformInRect:(struct CGRect)arg1;	// IMP=0x00100000004de946
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00100000004de934
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00100000004de699
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;	// IMP=0x00100000004de3fe
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00100000004de163
- (id)p_newColorAtFraction:(double)arg1;	// IMP=0x00100000004ddf94
- (id)stopAtIndex:(unsigned long long)arg1;	// IMP=0x00100000004ddf77
- (id)stopAfterFraction:(double)arg1;	// IMP=0x00100000004dddbf
- (id)stopBeforeFraction:(double)arg1;	// IMP=0x00100000004ddc35
@property(readonly, nonatomic) _Bool isAdvancedGradientFlag;
- (_Bool)isAdvancedGradientIgnoringFlag;	// IMP=0x00100000004ddb29
@property(nonatomic, setter=i_setAdvancedGradientFlag:) _Bool i_advancedGradientFlag;
@property(readonly, nonatomic) _Bool isAdvancedGradient; // @synthesize isAdvancedGradient=mIsAdvancedGradient;
- (id)p_newColorInShadingColorSpaceFromColor:(id)arg1;	// IMP=0x00100000004dd548
- (void)releaseShadingRef;	// IMP=0x00100000004dd512
- (unsigned long long)p_shadingColorSpace;	// IMP=0x00100000004dd4de
@property(readonly, nonatomic) struct CGShading *shadingRef;
- (id)referenceColor;	// IMP=0x00100000004dd1de
@property(readonly, nonatomic) CRLColor *lastColor;
@property(readonly, nonatomic) CRLColor *firstColor;
@property(readonly, retain, nonatomic) NSArray *gradientStops;
- (_Bool)isEqualIgnoringTransform:(id)arg1;	// IMP=0x00100000004dce58
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004dcd4f
- (unsigned long long)hash;	// IMP=0x00100000004dccde
- (id)description;	// IMP=0x00100000004dcc72
- (void)dealloc;	// IMP=0x00100000004dcc20
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x00100000004dcb68
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00100000004dcb4e
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3;	// IMP=0x00100000004dcaad
- (id)init;	// IMP=0x00100000004dca4b
- (void)p_setIsAdvancedGradient:(_Bool)arg1;	// IMP=0x00100000004dca3b
- (void)p_setOpacity:(double)arg1;	// IMP=0x00100000004dca29

@end

