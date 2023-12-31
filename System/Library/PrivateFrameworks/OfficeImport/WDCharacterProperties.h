//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDCharacterPropertiesValues, WDDocument;

__attribute__((visibility("hidden")))
@interface WDCharacterProperties : NSObject
{
    _Bool mOriginal;	// 8 = 0x8
    _Bool mTracked;	// 9 = 0x9
    _Bool mResolved;	// 10 = 0xa
    WDCharacterPropertiesValues *mOriginalProperties;	// 16 = 0x10
    WDCharacterPropertiesValues *mTrackedProperties;	// 24 = 0x18
    WDDocument *mDocument;	// 32 = 0x20
}

+ (SEL)setFontSelectorForFontType:(int)arg1;	// IMP=0x00600000003e952c
+ (SEL)fontOverriddenSelectorForFontType:(int)arg1;	// IMP=0x00600000003e94d8
+ (SEL)fontSelectorForFontType:(int)arg1;	// IMP=0x00600000003e9484
- (void).cxx_destruct;	// IMP=0x00000000003ecdb0
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x00000000003ecd70
- (void)copyPropertiesInto:(id)arg1;	// IMP=0x000000000023b678
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023b587
- (_Bool)isBracketTwoLinesInOneOverridden;	// IMP=0x00000000003eccef
- (void)setBracketTwoLinesInOne:(int)arg1;	// IMP=0x00000000003ecc6d
- (int)bracketTwoLinesInOne;	// IMP=0x00000000003ecbe9
- (_Bool)isTwoLinesInOneOverridden;	// IMP=0x00000000003ecb69
- (void)setTwoLinesInOne:(_Bool)arg1;	// IMP=0x00000000003ecae7
- (_Bool)twoLinesInOne;	// IMP=0x00000000003eca69
- (_Bool)isCompressHorizontalInVerticalOverridden;	// IMP=0x00000000003ec9e9
- (void)setCompressHorizontalInVertical:(_Bool)arg1;	// IMP=0x00000000003ec967
- (_Bool)compressHorizontalInVertical;	// IMP=0x00000000003ec8e9
- (_Bool)isHorizontalInVerticalOverridden;	// IMP=0x00000000003ec869
- (void)setHorizontalInVertical:(_Bool)arg1;	// IMP=0x00000000003ec7e7
- (_Bool)horizontalInVertical;	// IMP=0x00000000003ec769
- (_Bool)isOffsetToPictureDataOverridden;	// IMP=0x00000000003ec6e9
- (void)setOffsetToPictureData:(int)arg1;	// IMP=0x00000000003ec659
- (int)offsetToPictureData;	// IMP=0x00000000003ec5db
- (_Bool)isObjectIDForOle2Overridden;	// IMP=0x00000000003ec55b
- (void)setObjectIDForOle2:(int)arg1;	// IMP=0x00000000003ec4cb
- (int)objectIDForOle2;	// IMP=0x00000000003ec44d
- (_Bool)isOle2Overridden;	// IMP=0x00000000003ec3cd
- (void)setOle2:(_Bool)arg1;	// IMP=0x00000000003ec34b
- (_Bool)ole2;	// IMP=0x00000000003ec2cd
- (_Bool)isEmbeddedObjectOverridden;	// IMP=0x00000000003ec24d
- (void)setEmbeddedObject:(_Bool)arg1;	// IMP=0x00000000003ec1cb
- (_Bool)embeddedObject;	// IMP=0x00000000003ec14d
- (_Bool)isFontSizeForBiTextOverridden;	// IMP=0x00000000003ec0cd
- (void)setFontSizeForBiText:(unsigned short)arg1;	// IMP=0x00000000000d1c57
- (unsigned short)fontSizeForBiText;	// IMP=0x00000000003ec04d
- (_Bool)isLanguageForBiTextOverridden;	// IMP=0x00000000003ebfcd
- (void)setLanguageForBiText:(int)arg1;	// IMP=0x00000000000bf04d
- (int)languageForBiText;	// IMP=0x00000000003ebf4f
- (_Bool)isLanguageForFarEastOverridden;	// IMP=0x00000000003ebecf
- (void)setLanguageForFarEast:(int)arg1;	// IMP=0x00000000000befbb
- (int)languageForFarEast;	// IMP=0x00000000003ebe4e
- (_Bool)isCharPositionOfPictureBulletInBookmarkOverridden;	// IMP=0x000000000016959e
- (void)setCharPositionOfPictureBulletInBookmark:(int)arg1;	// IMP=0x00000000001683be
- (int)charPositionOfPictureBulletInBookmark;	// IMP=0x0000000000169620
- (_Bool)isListCharacterPictureBulletOverridden;	// IMP=0x00000000000d3d24
- (void)setListCharacterPictureBullet:(_Bool)arg1;	// IMP=0x000000000016833a
- (_Bool)isListCharacterPictureBullet;	// IMP=0x0000000000168450
- (_Bool)isSpecialCharacterOverridden;	// IMP=0x00000000003ebdcc
- (void)setSpecialCharacter:(_Bool)arg1;	// IMP=0x00000000000dc4d2
- (_Bool)isSpecialCharacter;	// IMP=0x00000000003ebd4c
- (_Bool)formattingChangedDifferentFrom:(id)arg1;	// IMP=0x00000000003ebccb
- (_Bool)editDifferentFrom:(id)arg1;	// IMP=0x00000000003ebc4a
- (_Bool)deletionDifferentFrom:(id)arg1;	// IMP=0x00000000003ebbc9
- (_Bool)isEditDateOverridden;	// IMP=0x00000000003ebb49
- (void)setEditDate:(id)arg1;	// IMP=0x00000000001d67bb
- (id)editDate;	// IMP=0x00000000001d6916
- (_Bool)isDeletionDateOverridden;	// IMP=0x00000000003ebac6
- (void)setDeletionDate:(id)arg1;	// IMP=0x00000000001d6ae8
- (id)deletionDate;	// IMP=0x00000000001d6c43
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;	// IMP=0x00000000003eba43
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;	// IMP=0x000000000021e809
- (unsigned short)indexToAuthorIDOfFormattingChange;	// IMP=0x00000000003eb9c3
- (_Bool)isIndexToAuthorIDOfEditOverridden;	// IMP=0x00000000003eb943
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;	// IMP=0x00000000001d6891
- (unsigned short)indexToAuthorIDOfEdit;	// IMP=0x00000000001d699f
- (_Bool)isIndexToAuthorIDOfDeletionOverridden;	// IMP=0x00000000003eb8c3
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;	// IMP=0x00000000001d6bc1
- (unsigned short)indexToAuthorIDOfDeletion;	// IMP=0x00000000001d6ccf
- (_Bool)isFormattingChangedOverridden;	// IMP=0x000000000019d91f
- (void)setFormattingChanged:(int)arg1;	// IMP=0x00000000000bf1e1
- (int)formattingChanged;	// IMP=0x000000000019d9a1
- (_Bool)isEditedOverridden;	// IMP=0x00000000003eb841
- (void)setEdited:(int)arg1;	// IMP=0x00000000000bf15f
- (int)edited;	// IMP=0x00000000003eb7bb
- (_Bool)isDeletedOverridden;	// IMP=0x00000000000f0a43
- (void)setDeleted:(int)arg1;	// IMP=0x00000000000bf0dd
- (int)deleted;	// IMP=0x00000000001d6d4d
- (_Bool)isUseCsFontOverridden;	// IMP=0x00000000003eb739
- (void)setUseCsFont:(int)arg1;	// IMP=0x00000000003eb6b7
- (int)useCsFont;	// IMP=0x00000000003eb633
- (_Bool)isRightToLeftOverridden;	// IMP=0x00000000000f063f
- (void)setRightToLeft:(int)arg1;	// IMP=0x00000000001fd2f1
- (int)rightToLeft;	// IMP=0x00000000001fdc91
- (_Bool)isLanguageForDefaultTextOverridden;	// IMP=0x00000000003eb5b1
- (void)setLanguageForDefaultText:(int)arg1;	// IMP=0x00000000000bef29
- (int)languageForDefaultText;	// IMP=0x00000000003eb533
- (_Bool)isColorAutoOverridden;	// IMP=0x00000000003eb4b3
- (void)setColorAuto:(_Bool)arg1;	// IMP=0x00000000000d1cd9
- (_Bool)isColorAuto;	// IMP=0x00000000003eb433
- (_Bool)isColorOverridden;	// IMP=0x00000000000f22eb
- (void)setColor:(id)arg1;	// IMP=0x00000000000be311
- (id)color;	// IMP=0x00000000000f45fc
- (_Bool)isEmphasisMarkOverridden;	// IMP=0x00000000003eb3b0
- (void)setEmphasisMark:(int)arg1;	// IMP=0x00000000003eb320
- (int)emphasisMark;	// IMP=0x00000000003eb2a2
- (_Bool)isVerticalAlignOverridden;	// IMP=0x00000000000f2062
- (void)setVerticalAlign:(int)arg1;	// IMP=0x00000000000bea20
- (int)verticalAlign;	// IMP=0x0000000000100e70
- (_Bool)isShadow2010Overridden;	// IMP=0x00000000003eb220
- (void)setShadow2010:(id)arg1;	// IMP=0x00000000003eb14a
- (id)shadow2010;	// IMP=0x00000000003eb0c1
- (_Bool)isReflectionOverridden;	// IMP=0x00000000003eb041
- (void)setReflection:(id)arg1;	// IMP=0x00000000003eaf6b
- (id)reflection;	// IMP=0x00000000003eaee2
- (_Bool)isFontSizeOverridden;	// IMP=0x00000000000f1f5e
- (void)setFontSize:(unsigned short)arg1;	// IMP=0x00000000000beaa4
- (unsigned short)fontSize;	// IMP=0x00000000000f1fdf
- (_Bool)isPositionOverridden;	// IMP=0x00000000003eae5f
- (void)setPosition:(short)arg1;	// IMP=0x00000000000be99d
- (short)position;	// IMP=0x00000000003eaddf
- (_Bool)isSpacingOverridden;	// IMP=0x00000000003ead5f
- (void)setSpacing:(short)arg1;	// IMP=0x00000000000be919
- (short)spacing;	// IMP=0x00000000003eacdf
- (_Bool)isHiddenOverridden;	// IMP=0x00000000000f298b
- (void)setHidden:(int)arg1;	// IMP=0x00000000000be895
- (int)hidden;	// IMP=0x00000000001e04f1
- (_Bool)isLowerCaseOverridden;	// IMP=0x00000000003eac5d
- (void)setLowerCase:(_Bool)arg1;	// IMP=0x00000000003eabdb
- (_Bool)isLowerCase;	// IMP=0x00000000003eab5d
- (_Bool)isCapsOverridden;	// IMP=0x00000000000f2269
- (void)setCaps:(int)arg1;	// IMP=0x00000000000be813
- (int)caps;	// IMP=0x0000000000100deb
- (_Bool)isSmallCapsOverridden;	// IMP=0x00000000000f21e7
- (void)setSmallCaps:(int)arg1;	// IMP=0x00000000000be791
- (int)smallCaps;	// IMP=0x00000000001d21d5
- (_Bool)isLigatureOverridden;	// IMP=0x00000000003eaadd
- (void)setLigature:(int)arg1;	// IMP=0x00000000003eaa5b
- (int)ligature;	// IMP=0x00000000003ea9d7
- (_Bool)isHighlightColorOverridden;	// IMP=0x00000000003ea957
- (void)setHighlightColor:(int)arg1;	// IMP=0x00000000000be70d
- (int)highlightColor;	// IMP=0x00000000003ea8d1
- (_Bool)isHighlightOverridden;	// IMP=0x00000000003ea851
- (void)setHighlight:(_Bool)arg1;	// IMP=0x00000000001e0db7
- (_Bool)isHighlight;	// IMP=0x00000000003ea7d1
- (_Bool)isDoubleStrikeThroughOverridden;	// IMP=0x00000000000f1edd
- (void)setDoubleStrikeThrough:(int)arg1;	// IMP=0x00000000000be0b3
- (int)doubleStrikeThrough;	// IMP=0x00000000001ce243
- (_Bool)isStrikeThroughOverridden;	// IMP=0x00000000000f1e5b
- (void)setStrikeThrough:(int)arg1;	// IMP=0x00000000000be031
- (int)strikeThrough;	// IMP=0x0000000000212695
- (_Bool)isUnderlineOverridden;	// IMP=0x00000000000f2165
- (void)setUnderline:(int)arg1;	// IMP=0x00000000000bded7
- (int)underline;	// IMP=0x00000000000f23eb
- (_Bool)isTextScaleOverridden;	// IMP=0x00000000003ea74f
- (void)setTextScale:(unsigned short)arg1;	// IMP=0x00000000003ea6cd
- (unsigned short)textScale;	// IMP=0x00000000003ea64c
- (_Bool)isKerningOverridden;	// IMP=0x00000000003ea5cc
- (void)setKerning:(unsigned short)arg1;	// IMP=0x00000000000beb26
- (unsigned short)kerning;	// IMP=0x00000000003ea54c
- (_Bool)isUnderlineColorOverridden;	// IMP=0x00000000003ea4cc
- (void)setUnderlineColor:(id)arg1;	// IMP=0x00000000000bdf5a
- (id)underlineColor;	// IMP=0x00000000003ea441
- (_Bool)isShadow2010OpacityOverridden;	// IMP=0x00000000003ea3c1
- (void)setShadow2010Opacity:(float)arg1;	// IMP=0x00000000003ea330
- (float)shadow2010Opacity;	// IMP=0x00000000003ea2b1
- (_Bool)isShadowOverridden;	// IMP=0x00000000003ea231
- (void)setShadow:(int)arg1;	// IMP=0x00000000000bdd4f
- (int)shadow;	// IMP=0x00000000003ea1ab
- (_Bool)isImprintOverridden;	// IMP=0x00000000003ea12b
- (void)setImprint:(int)arg1;	// IMP=0x00000000000bde55
- (int)imprint;	// IMP=0x00000000003ea0a5
- (_Bool)isEmbossedOverridden;	// IMP=0x00000000003ea025
- (void)setEmbossed:(int)arg1;	// IMP=0x00000000000bddd3
- (int)embossed;	// IMP=0x00000000003e9f9f
- (_Bool)isOutline2010WidthOverridden;	// IMP=0x00000000003e9f1f
- (void)setOutline2010Width:(float)arg1;	// IMP=0x00000000003e9e8e
- (float)outline2010Width;	// IMP=0x00000000003e9e0f
- (_Bool)isOutlineColorOverridden;	// IMP=0x00000000003e9d8f
- (void)setOutlineColor:(id)arg1;	// IMP=0x00000000003e9cb9
- (id)outlineColor;	// IMP=0x00000000003e9c30
- (_Bool)isOutlineOverridden;	// IMP=0x00000000003e9bb0
- (void)setOutline:(int)arg1;	// IMP=0x00000000000bdcca
- (int)outline;	// IMP=0x00000000003e9b2a
- (_Bool)isItalicForBiTextOverridden;	// IMP=0x00000000003e9aaa
- (void)setItalicForBiText:(int)arg1;	// IMP=0x00000000003e9a28
- (int)italicForBiText;	// IMP=0x00000000003e99a4
- (_Bool)isItalicOverridden;	// IMP=0x00000000000f1dd8
- (void)setItalic:(int)arg1;	// IMP=0x00000000000bdc46
- (int)italic;	// IMP=0x00000000000f3e02
- (_Bool)isBoldForBiTextOverridden;	// IMP=0x00000000003e9922
- (void)setBoldForBiText:(int)arg1;	// IMP=0x00000000003e98a0
- (int)boldForBiText;	// IMP=0x00000000003e981c
- (_Bool)isBoldOverridden;	// IMP=0x00000000000f1d58
- (void)setBold:(int)arg1;	// IMP=0x00000000000bdbc2
- (int)bold;	// IMP=0x00000000000f37da
- (_Bool)isSymbolCharacterOverridden;	// IMP=0x00000000003e979a
- (void)setSymbolCharacter:(unsigned short)arg1;	// IMP=0x00000000001d1e00
- (unsigned short)symbolCharacter;	// IMP=0x00000000003e971a
- (_Bool)isFontHintOverridden;	// IMP=0x00000000003e969a
- (void)setFontHint:(int)arg1;	// IMP=0x00000000003e9601
- (int)fontHint;	// IMP=0x00000000003e9580
- (void)setFont:(id)arg1 forFontType:(int)arg2;	// IMP=0x00000000003e93cc
- (_Bool)isFontOverriddenForFontType:(int)arg1;	// IMP=0x00000000003e93a7
- (id)fontForFontType:(int)arg1;	// IMP=0x00000000003e936f
- (_Bool)isSymbolFontOverridden;	// IMP=0x00000000003e92ef
- (void)setSymbolFont:(id)arg1;	// IMP=0x00000000000bee48
- (id)symbolFont;	// IMP=0x00000000003e9263
- (_Bool)isFarEastFontOverridden;	// IMP=0x00000000003e91e3
- (void)setFarEastFont:(id)arg1;	// IMP=0x00000000000bec88
- (id)farEastFont;	// IMP=0x00000000003e9157
- (_Bool)isExtendedFontOverridden;	// IMP=0x00000000003e90d7
- (void)setExtendedFont:(id)arg1;	// IMP=0x00000000000bed68
- (id)extendedFont;	// IMP=0x00000000003e904b
- (_Bool)isFontOverridden;	// IMP=0x00000000000f20e3
- (void)setFont:(id)arg1;	// IMP=0x00000000000beba8
- (id)font;	// IMP=0x00000000000f57db
- (_Bool)isShadingOverridden;	// IMP=0x00000000000f236b
- (id)mutableShading;	// IMP=0x00000000000be3e8
- (id)shading;	// IMP=0x00000000001f6ecf
- (_Bool)isBorderOverridden;	// IMP=0x00000000003e8fcb
- (id)mutableBorder;	// IMP=0x00000000000be138
- (id)border;	// IMP=0x00000000003e8f3f
- (void)clearBaseStyle;	// IMP=0x00000000000d163c
- (_Bool)isBaseStyleOverridden;	// IMP=0x00000000000f13dc
- (void)setBaseStyle:(id)arg1;	// IMP=0x00000000000deb6f
- (id)baseStyle;	// IMP=0x00000000000f44f3
- (void)removeEmptyFormattingChanges:(id)arg1;	// IMP=0x00000000003e6c33
- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;	// IMP=0x00000000003e5daf
- (void)negateFormattingChangesWithDefaults:(id)arg1;	// IMP=0x000000000019c003
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000bdba5
- (int)resolveMode;	// IMP=0x00000000003e5d8e
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003e5d2c
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000bdaf8
- (int)reverseBooleanProperty:(int)arg1;	// IMP=0x00000000003eee74
- (_Bool)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2;	// IMP=0x00000000003ed963
- (_Bool)editDifferentFrom:(id)arg1 mode:(int)arg2;	// IMP=0x00000000003ed685
- (_Bool)deletionDifferentFrom:(id)arg1 mode:(int)arg2;	// IMP=0x00000000003ed3a7
- (_Bool)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2;	// IMP=0x00000000003ed37d
- (_Bool)isAnythingOverriddenIn:(id)arg1;	// IMP=0x00000000003ecde1

@end

