//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBRenderFactory.h"

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPhone : UIKBRenderFactory
{
}

- (void)setupLayoutSegments;	// IMP=0x0000000000b8771f
- (id)shiftDeleteGlyphTraits;	// IMP=0x0000000000b875ee
- (id)shiftLockControlKeyTraits;	// IMP=0x0000000000b874b4
- (id)shiftedControlKeyTraits;	// IMP=0x0000000000b87355
- (id)activeControlKeyTraits;	// IMP=0x0000000000b871a6
- (id)controlKeyTraits;	// IMP=0x0000000000b86fff
- (double)_row4ControlSegmentWidthRight;	// IMP=0x0000000000b86fed
- (double)_row4ControlSegmentWidthLeft;	// IMP=0x0000000000b86fdf
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000b840b8
- (void)_configureTraitsForPopupStyle:(id)arg1 withKey:(id)arg2 onKeyplane:(id)arg3;	// IMP=0x0000000000b82b11
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;	// IMP=0x0000000000b82a24
- (long long)rowLimitForKey:(id)arg1;	// IMP=0x0000000000b82a14
- (_Bool)_popupMenuStyleForKey:(id)arg1;	// IMP=0x0000000000b82979
- (_Bool)_popupStyleForKey:(id)arg1;	// IMP=0x0000000000b828a8
- (void)_customizeTraits:(id)arg1 forPredictionCellKey:(id)arg2;	// IMP=0x0000000000b82638
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;	// IMP=0x0000000000b81882
- (double)dualStringBottomAdditionalOffsetForDisplayContents:(id)arg1;	// IMP=0x0000000000b81812
- (_Bool)isTallPopup;	// IMP=0x0000000000b8180a
- (double)popupFontSize;	// IMP=0x0000000000b817fc
- (struct CGPoint)popupSymbolTextOffset;	// IMP=0x0000000000b817eb
- (double)variantAnnotationTextFontSize;	// IMP=0x0000000000b817dd
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x0000000000b817cc
- (struct CGPoint)variantSymbolTextOffset;	// IMP=0x0000000000b817bb
- (double)variantWideShadowWeight;	// IMP=0x0000000000b817ad
- (struct UIEdgeInsets)variantSymbolFrameInsets;	// IMP=0x0000000000b8179a
- (struct UIEdgeInsets)variantDisplayFrameInsets;	// IMP=0x0000000000b8177a
- (struct UIEdgeInsets)variantPaddedFrameInsets;	// IMP=0x0000000000b81767
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;	// IMP=0x0000000000b81748
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x0000000000b8172a
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000b8099c
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000b804bc
- (_Bool)needsSmallerFontSizeForKey:(id)arg1;	// IMP=0x0000000000b803c4
- (double)dynamicBottomRowMultiplier;	// IMP=0x0000000000b803b6
- (struct UIEdgeInsets)dynamicInsets;	// IMP=0x0000000000b8039c
- (_Bool)iPadSansHomeButtonLayout;	// IMP=0x0000000000b80394
- (_Bool)iPadFudgeLayout;	// IMP=0x0000000000b8038c
- (double)skinnyKeyThreshold;	// IMP=0x0000000000b8037e
- (id)muttitapReverseKeyImageName;	// IMP=0x0000000000b80371
- (id)multitapCompleteKeyImageName;	// IMP=0x0000000000b80364
- (struct CGPoint)symbolImageControlKeyOffset;	// IMP=0x0000000000b8034e
- (struct CGPoint)ZWNJKeyOffset;	// IMP=0x0000000000b80342
- (struct CGPoint)secondaryShiftKeyOffset;	// IMP=0x0000000000b80331
- (struct CGPoint)shiftKeyOffset;	// IMP=0x0000000000b80325
- (struct CGPoint)deleteKeyOffset;	// IMP=0x0000000000b80319
- (struct CGPoint)moreABCKeyWideCellOffset;	// IMP=0x0000000000b80308
- (struct CGPoint)moreABCKeyOffset;	// IMP=0x0000000000b802f7
- (struct CGPoint)more123KeyOffset;	// IMP=0x0000000000b802e6
- (struct CGPoint)dictationKeyOffset;	// IMP=0x0000000000b802d5
- (struct CGPoint)realEmojiKeyOffset;	// IMP=0x0000000000b802bf
- (struct CGPoint)internationalKeyOffset;	// IMP=0x0000000000b802ae
- (struct CGPoint)zhuyinFirstToneKeyOffset;	// IMP=0x0000000000b80298
- (struct CGPoint)dismissKeyOffset;	// IMP=0x0000000000b80282
- (struct CGPoint)undoKeyOffset;	// IMP=0x0000000000b8026c
- (struct CGPoint)boldKeyOffset;	// IMP=0x0000000000b80256
- (struct CGPoint)pasteKeyOffset;	// IMP=0x0000000000b80240
- (struct CGPoint)copyKeyOffset;	// IMP=0x0000000000b8022a
- (struct CGPoint)cutKeyOffset;	// IMP=0x0000000000b80214
- (struct CGPoint)rightArrowKeyOffset;	// IMP=0x0000000000b801fe
- (struct CGPoint)leftArrowKeyOffset;	// IMP=0x0000000000b801e8
- (struct CGPoint)returnKeyOffset;	// IMP=0x0000000000b801d7
- (struct CGPoint)stringKeyOffset;	// IMP=0x0000000000b801c6
- (double)smallSymbolImageFontSize;	// IMP=0x0000000000b801b8
- (double)symbolImageControlKeyFontSize;	// IMP=0x0000000000b801aa
- (double)zhuyinFirstToneKeyFontSize;	// IMP=0x0000000000b8019c
- (double)moreABCKeyWideCellFontSize;	// IMP=0x0000000000b8018e
- (double)moreABCKeyFontSize;	// IMP=0x0000000000b80180
- (double)moreKeyFontSize;	// IMP=0x0000000000b80172
- (double)assistKeyFontSize;	// IMP=0x0000000000b80164
- (double)returnKeyFontSize;	// IMP=0x0000000000b80156
- (double)hintNoneKeyFontSize;	// IMP=0x0000000000b80148
- (double)shiftKeyFontSize;	// IMP=0x0000000000b8013a
- (double)deleteKeyFontSize;	// IMP=0x0000000000b8012c
- (double)stringKeyFontSize;	// IMP=0x0000000000b8011e
- (long long)assetIdiom;	// IMP=0x0000000000b80116
- (long long)lightHighQualityEnabledBlendForm;	// IMP=0x0000000000b8010b

@end

