//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPad
{
}

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x0000000000b8d3fc
- (void)setupLayoutSegments;	// IMP=0x0000000000b8cd33
- (double)_row4ControlSegmentWidthRight;	// IMP=0x0000000000b8ccbf
- (double)_row4ControlSegmentWidthLeft;	// IMP=0x0000000000b8ccb1
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000b8c5f0
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;	// IMP=0x0000000000b8c2b4
- (long long)rowLimitForKey:(id)arg1;	// IMP=0x0000000000b8c20d
- (double)defaultVariantSizeThreshold;	// IMP=0x0000000000b8c1fb
- (struct CGSize)defaultVariantGeometrySize;	// IMP=0x0000000000b8c1e5
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;	// IMP=0x0000000000b8b7a8
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;	// IMP=0x0000000000b8b7a0
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000b8a876
- (id)lowQualityLayeredBackgroundColorName;	// IMP=0x0000000000b8a816
- (struct CGPoint)dismissKeyOffset;	// IMP=0x0000000000b8a805
- (struct CGPoint)dualStringKeyOffset;	// IMP=0x0000000000b8a7ef
- (struct CGPoint)tinyPunctuationGlyphOffset;	// IMP=0x0000000000b8a7de
- (double)tinyPunctuationGlyphFontSize;	// IMP=0x0000000000b8a7d0
- (double)messagesTypeKeyplanSwitchKeyFontSize;	// IMP=0x0000000000b8a7c2
- (double)fallbackFontSize;	// IMP=0x0000000000b8a7b4
- (double)symbolImageControlKeyFontSize;	// IMP=0x0000000000b8a7a6
- (double)zhuyinFirstToneKeyFontSize;	// IMP=0x0000000000b8a798
- (double)facemarkKeyFontSize;	// IMP=0x0000000000b8a78a
- (double)emailDotKeyFontSize;	// IMP=0x0000000000b8a77c
- (double)smallKanaKeyFontSize;	// IMP=0x0000000000b8a76e
- (double)dismissKeyFontSize;	// IMP=0x0000000000b8a760
- (double)spaceKeyFontSize;	// IMP=0x0000000000b8a752
- (double)dictationKeyFontSize;	// IMP=0x0000000000b8a744
- (double)internationalKeyFontSize;	// IMP=0x0000000000b8a736
- (double)moreKeyFontSize;	// IMP=0x0000000000b8a728
- (double)deleteKeyFontSize;	// IMP=0x0000000000b8a71a
- (double)shiftKeyFontSize;	// IMP=0x0000000000b8a70c
- (double)defaultPathWeight;	// IMP=0x0000000000b8a6fe
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;	// IMP=0x0000000000b8a6f0
- (double)bottomRowDefaultFontSize;	// IMP=0x0000000000b8a6e2
- (double)dualStringKeyFontSizeAdjustment;	// IMP=0x0000000000b8a6d4
- (struct CGPoint)stringKeyOffset;	// IMP=0x0000000000b8a672
- (double)stringKeyFontSize;	// IMP=0x0000000000b8a664
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000b8a0f6
- (id)displayContentsForKey:(id)arg1;	// IMP=0x0000000000b89bbe
- (struct CGRect)insetFrame:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x0000000000b89b26
- (double)cornerRadiusForKey:(id)arg1;	// IMP=0x0000000000b89a5b
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;	// IMP=0x0000000000b89953
- (_Bool)_onLeftSide:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000b8984e
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x0000000000b8983d
- (struct UIEdgeInsets)variantSymbolFrameInsets;	// IMP=0x0000000000b8982a
- (struct UIEdgeInsets)variantDisplayFrameInsets;	// IMP=0x0000000000b89813
- (struct UIEdgeInsets)variantPaddedFrameInsets;	// IMP=0x0000000000b89800
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x0000000000b897df
- (_Bool)iPadSansHomeButtonLayout;	// IMP=0x0000000000b897d7
- (_Bool)iPadFudgeLayout;	// IMP=0x0000000000b897cf
- (double)predictiveKeyCornerRadius;	// IMP=0x0000000000b897c1
- (double)skinnyKeyThreshold;	// IMP=0x0000000000b897b3
- (id)returnKeyImageName;	// IMP=0x0000000000b897a6
- (id)tabKeyImageName;	// IMP=0x0000000000b89799
- (id)capslockKeyImageName;	// IMP=0x0000000000b8978c
- (id)ZWNJKeyImageName;	// IMP=0x0000000000b8977f
- (id)messagesWriteboardKeyImageName;	// IMP=0x0000000000b89772
- (id)muttitapReverseKeyImageName;	// IMP=0x0000000000b89739
- (id)multitapCompleteKeyImageName;	// IMP=0x0000000000b89700
- (struct CGPoint)ZWNJKeyOffset;	// IMP=0x0000000000b896ef
- (struct CGPoint)secondaryShiftKeyOffset;	// IMP=0x0000000000b896dd
- (struct CGPoint)symbolImageControlKeyOffset;	// IMP=0x0000000000b896cc
- (struct CGPoint)returnKeyOffset;	// IMP=0x0000000000b8966a
- (struct CGPoint)shiftKeyOffset;	// IMP=0x0000000000b89659
- (struct CGPoint)deleteKeyOffset;	// IMP=0x0000000000b89648
- (struct CGPoint)dictationKeyOffset;	// IMP=0x0000000000b89637
- (struct CGPoint)internationalKeyOffset;	// IMP=0x0000000000b89626
- (double)keyInsetBottom;	// IMP=0x0000000000b89618
- (double)returnKeySymbolFrameInset;	// IMP=0x0000000000b8960a
- (double)symbolFrameInset;	// IMP=0x0000000000b895fc
- (struct CGRect)dismissKeySymbolFrame;	// IMP=0x0000000000b895e2
- (struct CGRect)shiftKeySymbolFrame;	// IMP=0x0000000000b895c8
- (double)keyCornerRadius;	// IMP=0x0000000000b895ba
- (id)thinKeycapsFontName;	// IMP=0x0000000000b895a8
- (id)lightKeycapsFontName;	// IMP=0x0000000000b89596
- (void)setAllowsPaddles:(_Bool)arg1;	// IMP=0x0000000000b89562
- (long long)assetIdiom;	// IMP=0x0000000000b89557

@end

