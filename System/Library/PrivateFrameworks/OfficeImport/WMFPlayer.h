//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFGraphicsDevice;

__attribute__((visibility("hidden")))
@interface WMFPlayer : NSObject
{
    MFGraphicsDevice *m_gdi;	// 8 = 0x8
    int m_records;	// 16 = 0x10
    unsigned short m_windowsVersion;	// 20 = 0x14
    _Bool m_boundsSet;	// 22 = 0x16
    _Bool m_ignoreSetWindowOrg;	// 23 = 0x17
}

+ (struct CGRect)boundsInPoints:(id)arg1;	// IMP=0x006000000023f907
+ (struct CGRect)boundsInLogicalUnits:(id)arg1;	// IMP=0x006000000036ebc7
+ (struct CGRect)windowBounds:(id)arg1;	// IMP=0x006000000023fa94
+ (struct CGRect)placeableBounds:(const char *)arg1;	// IMP=0x0060000000213f40
- (void).cxx_destruct;	// IMP=0x000000000036ecde
- (id)parseRegion:(unsigned int)arg1 in_pData:(const char *)arg2;	// IMP=0x000000000036e980
- (int)playIntersectClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e8d9
- (int)playExcludeClipRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e832
- (int)playSelectClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e80c
- (int)playPaintRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e7e6
- (int)playInvertRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e7c0
- (int)playFrameRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e78a
- (int)playFillRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e760
- (int)playSetROP2:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e73a
- (int)playSetPolyFillMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e705
- (int)playCreateRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e67f
- (int)playCreateBrushIndirect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e5ae
- (int)playCreateFontIndirect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e315
- (int)playCreatePenIndirect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e267
- (int)playCreatePatternBrush:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e185
- (int)playResizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e15a
- (int)playSetPaletteEntries:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036e026
- (int)playCreatePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036defe
- (int)playRealizePalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dedc
- (int)playCreateDIBPatternBrush:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036de3e
- (int)playDeleteObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036de18
- (int)playSelectPalette:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036ddf2
- (int)playSelectObject:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036ddcc
- (int)playScaleViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dd64
- (int)playSetViewportOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dd22
- (int)playSetViewportExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dce0
- (int)playOffsetViewportOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dc9e
- (int)playOffsetWindowOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dc5c
- (int)playScaleWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dbf4
- (int)playSetWindowOrg:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036dbaa
- (int)playSetWindowExt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036da7a
- (int)playPolyPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d921
- (int)playRoundRect:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d890
- (int)playChord:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d7cf
- (int)playPie:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d712
- (int)playArc:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d655
- (int)playPolyline:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d58e
- (int)playPolygon:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d4c7
- (int)playLineTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d495
- (int)playMoveTo:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d463
- (int)playRestoreDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d431
- (int)playSaveDC:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d40f
- (int)playEllipse:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d3a9
- (int)playRectangle:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d343
- (int)playExtTextOut:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d10c
- (int)playTextOut:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036d038
- (int)playOffsetClipRegion:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036cff6
- (int)playSetTextCharExtra:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036cfd0
- (int)playSetTextJustification:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036cfa4
- (int)playSetTextColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036cf1b
- (int)playSetStretchBltMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036ceec
- (int)playSetBkMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036cebd
- (int)playSetMapMode:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036ce8e
- (int)playSetBkColour:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036ce05
- (int)playSetTextAlign:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036cdc3
- (int)playDibStretchBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036cbf4
- (int)playStretchDib:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036ca0f
- (int)playDibBitBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036c8dd
- (int)playBitBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036c772
- (int)playPatBlt:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036c6fc
- (int)playUnsupported:(unsigned int)arg1 in_recordName:(const char *)arg2 in_pRecord:(const char *)arg3;	// IMP=0x000000000036c6f4
- (int)playUnknown:(unsigned int)arg1 in_recordType:(unsigned int)arg2 in_pRecord:(const char *)arg3;	// IMP=0x000000000036c6ec
- (int)playHeader:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036c50b
- (void)done;	// IMP=0x00000000000f96e1
- (int)play:(unsigned int)arg1 in_pRecord:(const char *)arg2;	// IMP=0x000000000036bdb1
- (int)records;	// IMP=0x000000000036bda8
- (id)initWithGraphicsDevice:(id)arg1;	// IMP=0x00000000000f7790

@end

