//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDCharacterProperties, WDDocument, WDParagraphPropertiesValues;

__attribute__((visibility("hidden")))
@interface WDParagraphProperties : NSObject
{
    WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
    _Bool mCharacterPropertiesOverridden;	// 16 = 0x10
    unsigned int mOriginal:1;	// 17 = 0x11
    unsigned int mTracked:1;	// 17 = 0x11
    unsigned int mResolved:1;	// 17 = 0x11
    WDParagraphPropertiesValues *mOriginalProperties;	// 24 = 0x18
    WDParagraphPropertiesValues *mTrackedProperties;	// 32 = 0x20
    WDDocument *mDocument;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003fabab
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (void)copyPropertiesInto:(id)arg1;	// IMP=0x00000000003faaa7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fa9aa
- (_Bool)isContextualSpacingOverridden;	// IMP=0x00000000003fa928
- (void)setContextualSpacing:(_Bool)arg1;	// IMP=0x00000000003fa7a3
- (_Bool)contextualSpacing;	// IMP=0x00000000003fa72b
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;	// IMP=0x00000000003fa6ad
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;	// IMP=0x00000000003fa528
- (unsigned short)indexToAuthorIDOfFormattingChange;	// IMP=0x00000000003fa4b4
- (_Bool)isFormattingChangedOverridden;	// IMP=0x00000000003fa436
- (void)setFormattingChanged:(int)arg1;	// IMP=0x000000000021e8d0
- (int)formattingChanged;	// IMP=0x00000000003fa3c1
- (void)removeTabStopDeletedPosition:(short)arg1;	// IMP=0x00000000003fa233
- (void)addTabStopDeletedPosition:(short)arg1;	// IMP=0x00000000000e2fe8
- (short)tabStopDeletedPositionAt:(unsigned long long)arg1;	// IMP=0x00000000003fa133
- (void)setTabStopDeletedPositionCount:(unsigned long long)arg1;	// IMP=0x00000000000d2107
- (unsigned long long)tabStopDeletedPositionCount;	// IMP=0x00000000003fa059
- (void)removeTabStopAddedWithPosition:(short)arg1;	// IMP=0x00000000003f9ed2
- (void)addTabStopAdded:(CDStruct_bd9d81e1 *)arg1;	// IMP=0x00000000000d1d74
- (CDStruct_bd9d81e1 *)tabStopAddedAt:(unsigned long long)arg1;	// IMP=0x00000000003f9d92
- (_Bool)hasTabStopDeletedAtPosition:(short)arg1;	// IMP=0x00000000003f9d09
- (_Bool)hasTabStopAddedAtPosition:(short)arg1;	// IMP=0x00000000003f9c7f
- (void)setTabStopAddedCount:(unsigned long long)arg1;	// IMP=0x00000000000d1f83
- (unsigned long long)tabStopAddedCount;	// IMP=0x00000000003f9ba4
- (_Bool)isKinsokuOffOverridden;	// IMP=0x00000000003f9b26
- (void)setKinsokuOff:(_Bool)arg1;	// IMP=0x00000000003f99a1
- (_Bool)kinsokuOff;	// IMP=0x00000000003f992d
- (_Bool)isBiDiOverridden;	// IMP=0x00000000003f98af
- (void)setBiDi:(_Bool)arg1;	// IMP=0x00000000003f972a
- (_Bool)biDi;	// IMP=0x00000000003f96b6
- (_Bool)isWidowControlOverridden;	// IMP=0x00000000003f9638
- (void)setWidowControl:(_Bool)arg1;	// IMP=0x00000000000c2b38
- (_Bool)widowControl;	// IMP=0x00000000003f95c4
- (_Bool)isSuppressLineNumbersOverridden;	// IMP=0x00000000003f9546
- (void)setSuppressLineNumbers:(_Bool)arg1;	// IMP=0x00000000000c282e
- (_Bool)suppressLineNumbers;	// IMP=0x00000000003f94d2
- (_Bool)isSuppressAutoHyphensOverridden;	// IMP=0x00000000003f9454
- (void)setSuppressAutoHyphens:(_Bool)arg1;	// IMP=0x00000000000c29b3
- (_Bool)suppressAutoHyphens;	// IMP=0x00000000003f93e0
- (_Bool)isKeepLinesTogetherOverridden;	// IMP=0x00000000003f9362
- (void)setKeepLinesTogether:(_Bool)arg1;	// IMP=0x00000000001653aa
- (_Bool)keepLinesTogether;	// IMP=0x00000000003f92ee
- (_Bool)isKeepNextParagraphTogetherOverridden;	// IMP=0x00000000003f9270
- (void)setKeepNextParagraphTogether:(_Bool)arg1;	// IMP=0x00000000000d1ad2
- (_Bool)keepNextParagraphTogether;	// IMP=0x00000000003f91fc
- (_Bool)isOutlineLevelOverridden;	// IMP=0x00000000003f917e
- (void)setOutlineLevel:(unsigned short)arg1;	// IMP=0x00000000000d194d
- (unsigned short)outlineLevel;	// IMP=0x00000000003f910a
- (_Bool)isPhysicalJustificationOverridden;	// IMP=0x00000000003f908c
- (void)setPhysicalJustification:(int)arg1;	// IMP=0x00000000003f8f07
- (int)physicalJustification;	// IMP=0x00000000003f8e92
- (_Bool)isJustificationOverridden;	// IMP=0x00000000000f013a
- (void)setJustification:(int)arg1;	// IMP=0x00000000000c26a9
- (int)justification;	// IMP=0x00000000000f3762
- (_Bool)isFirstLineIndentCharsOverridden;	// IMP=0x00000000003f8e14
- (void)setFirstLineIndentChars:(short)arg1;	// IMP=0x00000000003f8c8f
- (short)firstLineIndentChars;	// IMP=0x00000000003f8c1b
- (_Bool)isRightIndentCharsOverridden;	// IMP=0x00000000003f8b9d
- (void)setRightIndentChars:(short)arg1;	// IMP=0x00000000003f8a18
- (short)rightIndentChars;	// IMP=0x00000000003f89a4
- (_Bool)isLeftIndentCharsOverridden;	// IMP=0x00000000003f8926
- (void)setLeftIndentChars:(short)arg1;	// IMP=0x00000000003f87a1
- (short)leftIndentChars;	// IMP=0x00000000003f872d
- (void)clearFirstLineIndent;	// IMP=0x00000000003f86cf
- (_Bool)isFirstLineIndentOverridden;	// IMP=0x00000000000f02b4
- (void)setFirstLineIndent:(short)arg1;	// IMP=0x00000000000c2524
- (short)firstLineIndent;	// IMP=0x00000000000f51ec
- (void)clearRightIndent;	// IMP=0x00000000003f8671
- (_Bool)isRightIndentOverridden;	// IMP=0x00000000000f0236
- (void)setRightIndent:(short)arg1;	// IMP=0x00000000000c239f
- (short)rightIndent;	// IMP=0x000000000015d2cf
- (void)clearFollowingIndent;	// IMP=0x00000000003f8613
- (_Bool)isFollowingIndentOverridden;	// IMP=0x00000000003f8595
- (void)setFollowingIndent:(short)arg1;	// IMP=0x00000000003f8410
- (short)followingIndent;	// IMP=0x00000000003f839c
- (void)clearLeadingIndent;	// IMP=0x00000000003f833e
- (_Bool)isLeadingIndentOverridden;	// IMP=0x00000000003f82c0
- (void)setLeadingIndent:(short)arg1;	// IMP=0x00000000003f813b
- (short)leadingIndent;	// IMP=0x00000000003f80c7
- (void)clearLeftIndent;	// IMP=0x00000000003f8069
- (_Bool)isLeftIndentOverridden;	// IMP=0x00000000000f01b8
- (void)setLeftIndent:(short)arg1;	// IMP=0x00000000000c221a
- (short)leftIndent;	// IMP=0x00000000000f5178
- (_Bool)isLineSpacingRuleOverridden;	// IMP=0x000000000019fb19
- (void)setLineSpacingRule:(int)arg1;	// IMP=0x00000000000c2095
- (int)lineSpacingRule;	// IMP=0x000000000019fb97
- (_Bool)isLineSpacingOverridden;	// IMP=0x00000000000f008c
- (void)setLineSpacing:(short)arg1;	// IMP=0x00000000000c1f10
- (short)lineSpacing;	// IMP=0x00000000000f978b
- (_Bool)isSpaceAfterAutoOverridden;	// IMP=0x00000000003f7feb
- (void)setSpaceAfterAuto:(_Bool)arg1;	// IMP=0x00000000000c1d8b
- (_Bool)spaceAfterAuto;	// IMP=0x00000000003f7f77
- (_Bool)isSpaceAfterOverridden;	// IMP=0x00000000000eff90
- (void)setSpaceAfter:(unsigned short)arg1;	// IMP=0x00000000000c1c06
- (unsigned short)spaceAfter;	// IMP=0x00000000000fd8c7
- (_Bool)isSpaceBeforeAutoOverridden;	// IMP=0x00000000003f7ef9
- (void)setSpaceBeforeAuto:(_Bool)arg1;	// IMP=0x00000000000c1a81
- (_Bool)spaceBeforeAuto;	// IMP=0x00000000003f7e85
- (_Bool)isSpaceBeforeOverridden;	// IMP=0x00000000000f000e
- (void)setSpaceBefore:(unsigned short)arg1;	// IMP=0x00000000000c18fc
- (unsigned short)spaceBefore;	// IMP=0x00000000000f5ba7
- (_Bool)isShadingOverridden;	// IMP=0x00000000000f05bf
- (id)mutableShading;	// IMP=0x00000000000c16c4
- (id)shading;	// IMP=0x000000000015d134
- (_Bool)isBarBorderOverridden;	// IMP=0x00000000003f7e07
- (id)mutableBarBorder;	// IMP=0x00000000000c14b8
- (id)barBorder;	// IMP=0x00000000003f7d88
- (_Bool)isBetweenBorderOverridden;	// IMP=0x00000000003f7d0a
- (id)mutableBetweenBorder;	// IMP=0x00000000000c1280
- (id)betweenBorder;	// IMP=0x00000000003f7c8b
- (_Bool)isRightBorderOverridden;	// IMP=0x00000000003f7c0d
- (id)mutableRightBorder;	// IMP=0x00000000000c1048
- (id)rightBorder;	// IMP=0x00000000003f7b56
- (_Bool)isBottomBorderOverridden;	// IMP=0x00000000000f0541
- (id)mutableBottomBorder;	// IMP=0x00000000000c0e3c
- (id)bottomBorder;	// IMP=0x000000000015d07d
- (_Bool)isLeftBorderOverridden;	// IMP=0x00000000003f7ad8
- (id)mutableLeftBorder;	// IMP=0x00000000000c0c30
- (id)leftBorder;	// IMP=0x00000000003f7a21
- (_Bool)isTopBorderOverridden;	// IMP=0x00000000003f79a3
- (id)mutableTopBorder;	// IMP=0x00000000000c0a24
- (id)topBorder;	// IMP=0x00000000003f78ec
- (_Bool)isAnchorLockOverridden;	// IMP=0x00000000003f786e
- (void)setAnchorLock:(_Bool)arg1;	// IMP=0x00000000000c089f
- (_Bool)anchorLock;	// IMP=0x00000000003f77fa
- (_Bool)isWrapCodeOverridden;	// IMP=0x00000000003f777c
- (void)setWrapCode:(BOOL)arg1;	// IMP=0x0000000000100c4e
- (BOOL)wrapCode;	// IMP=0x00000000003f7708
- (_Bool)isVerticalPositionOverridden;	// IMP=0x00000000000eedfc
- (void)setVerticalPosition:(long long)arg1;	// IMP=0x00000000000c071b
- (long long)verticalPosition;	// IMP=0x00000000001e0682
- (_Bool)isHorizontalPositionOverridden;	// IMP=0x00000000000eed7e
- (void)setHorizontalPosition:(long long)arg1;	// IMP=0x00000000000c0597
- (long long)horizontalPosition;	// IMP=0x00000000001cdf3c
- (_Bool)isVerticalAnchorOverridden;	// IMP=0x00000000000eed00
- (void)setVerticalAnchor:(int)arg1;	// IMP=0x00000000000c0412
- (int)verticalAnchor;	// IMP=0x00000000001cdec4
- (_Bool)isHorizontalAnchorOverridden;	// IMP=0x00000000000eec82
- (void)setHorizontalAnchor:(int)arg1;	// IMP=0x00000000000c028d
- (int)horizontalAnchor;	// IMP=0x0000000000100f9b
- (_Bool)isWrapOverridden;	// IMP=0x00000000003f768a
- (void)setWrap:(_Bool)arg1;	// IMP=0x00000000000c0108
- (_Bool)wrap;	// IMP=0x00000000003f7616
- (_Bool)isHorizontalSpaceOverridden;	// IMP=0x00000000003f7598
- (void)setHorizontalSpace:(long long)arg1;	// IMP=0x00000000000bff84
- (long long)horizontalSpace;	// IMP=0x00000000003f7524
- (_Bool)isVerticalSpaceOverridden;	// IMP=0x00000000003f74a6
- (void)setVerticalSpace:(long long)arg1;	// IMP=0x00000000000bfe00
- (long long)verticalSpace;	// IMP=0x00000000003f7432
- (_Bool)isHeightRuleOverridden;	// IMP=0x00000000003f73b4
- (void)setHeightRule:(int)arg1;	// IMP=0x00000000000bfc7b
- (int)heightRule;	// IMP=0x00000000003f733c
- (_Bool)isHeightOverridden;	// IMP=0x00000000003f72be
- (void)setHeight:(long long)arg1;	// IMP=0x00000000000bfaf6
- (long long)height;	// IMP=0x00000000003f724b
- (_Bool)isWidthOverridden;	// IMP=0x00000000001016f7
- (void)setWidth:(long long)arg1;	// IMP=0x00000000000bf972
- (long long)width;	// IMP=0x00000000001cdfb0
- (_Bool)isDropCapOverridden;	// IMP=0x00000000003f71cd
- (void)setDropCap:(CDStruct_8835774c)arg1;	// IMP=0x00000000000bf7ee
- (CDStruct_8835774c)dropCap;	// IMP=0x00000000003f7117
- (_Bool)isListIndexOverridden;	// IMP=0x00000000000f0332
- (void)setListIndex:(unsigned long long)arg1;	// IMP=0x00000000000bf66a
- (unsigned long long)listIndex;	// IMP=0x00000000000f5260
- (_Bool)isListLevelOverridden;	// IMP=0x00000000000f03b0
- (void)setListLevel:(unsigned char)arg1;	// IMP=0x00000000000bf4e5
- (unsigned char)listLevel;	// IMP=0x00000000000f52d4
- (_Bool)isPageBreakBeforeOverridden;	// IMP=0x00000000003f7099
- (void)setPageBreakBefore:(_Bool)arg1;	// IMP=0x00000000000bf360
- (_Bool)isPageBreakBefore;	// IMP=0x00000000003f7025
- (void)clearBaseStyle;	// IMP=0x00000000000d16df
- (_Bool)isBaseStyleOverridden;	// IMP=0x00000000000ef645
- (void)setBaseStyle:(id)arg1;	// IMP=0x00000000000d04de
- (id)baseStyle;	// IMP=0x00000000000ef6c3
- (void)negateFormattingChangesWithDefaults:(id)arg1;	// IMP=0x00000000003f5400
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000bf31e
- (int)resolveMode;	// IMP=0x000000000019fc0c
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003f537d
- (void)clearChararacterProperties;	// IMP=0x00000000003f5357
- (_Bool)isCharacterPropertiesOverridden;	// IMP=0x00000000000f57d1
- (void)setCharacterProperties:(id)arg1;	// IMP=0x00000000000dab46
- (id)mutableCharacterProperties;	// IMP=0x00000000001ad16f
- (id)characterProperties;	// IMP=0x00000000000eff82
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000bf267
- (id)description;	// IMP=0x00000000003fb0ab
- (_Bool)isAnythingOverriddenIn:(id)arg1;	// IMP=0x00000000003fabe7

@end
