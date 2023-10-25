//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFDeviceContext, MFObjectTable, NSDictionary, NSMutableArray;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFGraphicsDevice : NSObject
{
    MFDeviceContext *m_currentDC;	// 8 = 0x8
    NSMutableArray *m_DCStack;	// 16 = 0x10
    int m_gStateStackHeight;	// 24 = 0x18
    MFDeviceContext *m_firstClipDC;	// 32 = 0x20
    NSObject<MFDeviceDriver> *m_deviceDriver;	// 40 = 0x28
    MFObjectTable *m_objectTable;	// 48 = 0x30
    MFObjectTable *m_stockObjects;	// 56 = 0x38
    NSDictionary *m_colorMap;	// 64 = 0x40
    NSDictionary *m_fillMap;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000361b75
- (void)setMaximumObjectTableSize:(unsigned int)arg1;	// IMP=0x0000000000361b5f
- (int)plgBlt:(struct CGPoint *)arg1 in_sourceImage:(id)arg2 in_xSrc:(int)arg3 in_ySrc:(int)arg4 in_widthSrc:(int)arg5 in_heightSrc:(int)arg6 in_maskImage:(id)arg7 in_xMask:(int)arg8 in_yMask:(int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11;	// IMP=0x0000000000361a6c
- (int)maskBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x0000000000361968
- (int)alphaBlend:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_sourceConstantOpacity:(unsigned char)arg10 in_useSourceAlphaChannel:(_Bool)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;	// IMP=0x0000000000361881
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12 usePaletteForBilevel:(_Bool)arg13;	// IMP=0x000000000036181c
- (int)stretchBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_widthSrc:(int)arg8 in_heightSrc:(int)arg9 in_rop:(unsigned int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12;	// IMP=0x0000000000361742
- (int)bitBlt:(int)arg1 in_yDest:(int)arg2 in_widthDest:(int)arg3 in_heightDest:(int)arg4 in_sourceImage:(id)arg5 in_xSrc:(int)arg6 in_ySrc:(int)arg7 in_rop:(unsigned int)arg8 in_xform:(struct CGAffineTransform *)arg9 in_colour:(unsigned int)arg10;	// IMP=0x000000000036167b
- (int)patBlt:(int)arg1 in_y:(int)arg2 in_width:(int)arg3 in_height:(int)arg4 in_rop:(unsigned int)arg5;	// IMP=0x000000000036164a
- (id)createBitmap:(unsigned int)arg1 in_height:(unsigned int)arg2 in_planes:(unsigned int)arg3 in_bitsPerPixel:(unsigned int)arg4 in_bitmap:(const char *)arg5 in_bitmapSize:(unsigned int)arg6;	// IMP=0x0000000000361612
- (id)createDIBitmap:(const char *)arg1 in_headerSize:(unsigned int)arg2 in_bitmap:(const char *)arg3 in_bitmapSize:(unsigned int)arg4 in_usage:(int)arg5;	// IMP=0x00000000003615e0
- (id)createDIBitmap:(const char *)arg1 in_dibSize:(unsigned int)arg2 in_usage:(int)arg3;	// IMP=0x00000000003615bd
- (int)frameRegion:(unsigned int)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x0000000000361500
- (int)frameRegionWithRects:(id)arg1 in_brushID:(unsigned int)arg2 in_width:(int)arg3 in_height:(int)arg4;	// IMP=0x0000000000361447
- (int)fillRgn:(unsigned int)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x0000000000361359
- (int)fillRgnWithRects:(id)arg1 in_brushID:(unsigned int)arg2;	// IMP=0x00000000003612a0
- (int)invertRgn:(unsigned int)arg1;	// IMP=0x0000000000361234
- (int)invertRgnWithRects:(id)arg1;	// IMP=0x00000000003611c1
- (int)paintRgn:(unsigned int)arg1;	// IMP=0x0000000000361115
- (int)paintRgnWithRects:(id)arg1;	// IMP=0x0000000000361062
- (int)setMetaRgn;	// IMP=0x00000000001dc165
- (int)intersectClipRect:(struct CGRect)arg1;	// IMP=0x00000000000f93f5
- (int)excludeClipRect:(struct CGRect)arg1;	// IMP=0x0000000000165d67
- (int)setClipRegion:(unsigned int)arg1;	// IMP=0x0000000000360fda
- (int)selectClipRegionWithRects:(id)arg1 in_mode:(int)arg2;	// IMP=0x0000000000360f02
- (int)selectClipPath:(int)arg1;	// IMP=0x00000000001dc24b
- (int)strokeAndFillPath:(_Bool)arg1 in_fill:(_Bool)arg2;	// IMP=0x0000000000360e60
- (int)endPath;	// IMP=0x000000000016ac7c
- (int)widenPath;	// IMP=0x0000000000360df4
- (int)beginPath;	// IMP=0x000000000016a949
- (int)abortPath;	// IMP=0x0000000000360d98
- (int)setRop2:(int)arg1;	// IMP=0x00000000001607b6
- (int)setMapMode:(int)arg1;	// IMP=0x00000000000f7a09
- (int)modifyWorldTransform:(const struct CGAffineTransform *)arg1 in_command:(int)arg2;	// IMP=0x0000000000360d28
- (int)setWorldTransform:(const struct CGAffineTransform *)arg1;	// IMP=0x00000000001dc183
- (int)scaleWindowExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x0000000000360ca1
- (int)scaleViewportExt:(int)arg1 in_xDenom:(int)arg2 in_yNum:(int)arg3 in_yDenom:(int)arg4;	// IMP=0x0000000000360c1a
- (int)setViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000360baa
- (int)offsetViewportOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000360b3a
- (int)offsetWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000360aca
- (int)setViewportExt:(int)arg1 in_y:(int)arg2;	// IMP=0x0000000000360a5a
- (int)setWindowOrg:(int)arg1 in_y:(int)arg2;	// IMP=0x00000000003609ea
- (int)setWindowExt:(int)arg1 in_y:(int)arg2;	// IMP=0x000000000036097a
- (void)createStockObjects;	// IMP=0x000000000015689e
- (int)createPatternBrush:(id)arg1 index:(unsigned int)arg2 usePaletteForBilevel:(_Bool)arg3;	// IMP=0x00000000003608f9
- (int)createPalette:(id)arg1 in_index:(unsigned int)arg2;	// IMP=0x0000000000360878
- (int)resizePalette:(unsigned int)arg1 in_index:(unsigned int)arg2;	// IMP=0x00000000003607ed
- (int)setPaletteEntries:(unsigned int)arg1 in_colours:(id)arg2 in_index:(unsigned int)arg3;	// IMP=0x0000000000360726
- (id)createColorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 flags:(unsigned char)arg4;	// IMP=0x000000000036067f
- (int)createPen:(int)arg1 width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double *)arg4 index:(unsigned int)arg5;	// IMP=0x00000000003605bb
- (int)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22 index:(unsigned int)arg23;	// IMP=0x000000000036048d
- (int)createFontIndirect:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;	// IMP=0x00000000003603a8
- (int)createBrush:(int)arg1 in_colour:(id)arg2 hatchstyle:(int)arg3 index:(unsigned int)arg4;	// IMP=0x000000000036021e
- (int)createRegion:(id)arg1;	// IMP=0x00000000001e015c
- (int)deleteObject:(int)arg1;	// IMP=0x00000000000f8822
- (int)getStockObject:(unsigned int)arg1;	// IMP=0x000000000015683c
- (int)selectObject:(int)arg1;	// IMP=0x00000000000f7e0a
- (int)setPolyFillMode:(int)arg1;	// IMP=0x00000000000f969a
- (int)realizePalette;	// IMP=0x0000000000165d5f
- (int)roundRect:(int)arg1 top:(int)arg2 right:(int)arg3 bottom:(int)arg4 rx:(double)arg5 ry:(double)arg6;	// IMP=0x00000000003601ec
- (int)closeCurrentPath:(_Bool)arg1;	// IMP=0x000000000016ab60
- (int)bezier:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6 x4:(int)arg7 y4:(int)arg8;	// IMP=0x00000000003601a1
- (int)bezierTo:(int)arg1 y:(int)arg2 x2:(int)arg3 y2:(int)arg4 x3:(int)arg5 y3:(int)arg6;	// IMP=0x0000000000360166
- (int)chord:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x000000000036011b
- (int)arcTo:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x00000000003600d0
- (int)angleArc:(int)arg1 y:(int)arg2 radius:(unsigned int)arg3 startAngle:(double)arg4 sweepAngle:(double)arg5;	// IMP=0x00000000003600ab
- (int)pie:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000360060
- (int)arc:(int)arg1 nTopRect:(int)arg2 nRightRect:(int)arg3 nBottomRect:(int)arg4 nXStartArc:(int)arg5 nYStartArc:(int)arg6 nXEndArc:(int)arg7 nYEndArc:(int)arg8;	// IMP=0x0000000000360015
- (int)polyPolyline:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x000000000035fff2
- (int)polyline:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x000000000035ffd2
- (int)setArcDirection:(int)arg1;	// IMP=0x000000000035ffb9
- (int)polyPolygon:(struct CGPoint *)arg1 in_polyCounts:(int *)arg2 in_count:(int)arg3;	// IMP=0x000000000035ff96
- (int)polygon:(struct CGPoint *)arg1 in_count:(int)arg2;	// IMP=0x000000000035ff76
- (int)lineTo:(double)arg1 y:(double)arg2;	// IMP=0x000000000035ff5c
- (int)moveTo:(double)arg1 y:(double)arg2;	// IMP=0x000000000035ff43
- (int)offsetClipRegionByX:(int)arg1 y:(int)arg2;	// IMP=0x000000000035fd02
- (int)selectClipRegion:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035fc8c
- (int)removeClip;	// IMP=0x000000000035fc73
- (int)selectClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035fa92
- (id)clippingPathByCombiningClippingPath:(id)arg1 withClippingPath:(id)arg2 combineMode:(int)arg3;	// IMP=0x000000000035f8d3
- (id)clippingPathByCombiningEmptyClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035f857
- (id)clippingPathByCombiningImplicitClippingPathWithClippingPath:(id)arg1 combineMode:(int)arg2;	// IMP=0x000000000035f765
- (id)currentCummulatedClippingPath;	// IMP=0x000000000035f42f
- (id)normalizedClippingPathWithClippingPath:(id)arg1;	// IMP=0x000000000035f376
- (int)restoreDC:(int)arg1;	// IMP=0x00000000000f9461
- (int)restoreDC;	// IMP=0x000000000035f1bc
- (int)saveDC;	// IMP=0x00000000000f8921
- (void)setClippingPath:(id)arg1;	// IMP=0x000000000035f047
- (void)addClippingPathToCurrentDCAndCurrentContext:(id)arg1;	// IMP=0x000000000035efaa
- (void)applyDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035ef6d
- (void)applyClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035edc6
- (void)addClippingPathToCurrentContext:(id)arg1 dc:(id)arg2;	// IMP=0x000000000035ec2e
- (id)clipEverythingClippingPath;	// IMP=0x000000000035eb78
- (id)implicitClippingPath;	// IMP=0x000000000035eb16
- (void)applyNonClippingOfDCAtIndexToCurrentContext:(unsigned long long)arg1;	// IMP=0x000000000035ea83
- (unsigned long long)clippingStartDCIndex;	// IMP=0x000000000035e88c
- (unsigned long long)firstClipDCIndex;	// IMP=0x000000000035e86f
- (unsigned long long)currentDCIndex;	// IMP=0x000000000035e855
- (void)restoreGState:(id)arg1;	// IMP=0x000000000035e835
- (void)saveGState:(id)arg1;	// IMP=0x000000000035e815
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;	// IMP=0x000000000035e7ff
- (int)ellipse:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035e7cd
- (int)fillRectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035e79b
- (int)rectangle:(int)arg1 y1:(int)arg2 x2:(int)arg3 y2:(int)arg4;	// IMP=0x000000000035e769
- (int)extTextOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x000000000035e460
- (int)extTextOut:(int)arg1 y:(int)arg2 in_text:(id)arg3 options:(int)arg4 left:(int)arg5 top:(int)arg6 right:(int)arg7 bottom:(int)arg8 spacingValues:(int *)arg9 numValues:(int)arg10;	// IMP=0x000000000035e379
- (int)textOutEncoded:(int)arg1 y:(int)arg2 in_data:(id)arg3;	// IMP=0x000000000035e26c
- (int)textOut:(int)arg1 y:(int)arg2 in_text:(id)arg3;	// IMP=0x000000000035e1bd
- (int)setTextAlign:(_Bool)arg1 textHorizontalAlign:(int)arg2 textVerticalAlign:(int)arg3 textDirection:(int)arg4;	// IMP=0x000000000035e148
- (int)setTextCharExtra:(int)arg1;	// IMP=0x00000000001e1086
- (int)setTextJustification:(int)arg1 in_breakCount:(int)arg2;	// IMP=0x000000000035e140
- (int)setTextColour:(id)arg1;	// IMP=0x00000000000f7f2c
- (int)setStretchBltMode:(int)arg1;	// IMP=0x000000000015768f
- (int)setBrushOrg:(double)arg1 y:(double)arg2;	// IMP=0x000000000035e127
- (int)setBkMode:(int)arg1;	// IMP=0x00000000000f7f0a
- (int)setBkColour:(id)arg1;	// IMP=0x000000000016074d
- (int)setMiterLimit:(double)arg1;	// IMP=0x00000000001d7fc6
- (int)description:(id)arg1;	// IMP=0x000000000016a941
- (int)comment:(id)arg1;	// IMP=0x000000000035e11f
- (void)done;	// IMP=0x00000000000f96f7
- (id)recolor:(unsigned char)arg1 in_green:(unsigned char)arg2 in_blue:(unsigned char)arg3 fill:(_Bool)arg4;	// IMP=0x000000000035e0a0
- (id)recolor:(id)arg1 fill:(_Bool)arg2;	// IMP=0x00000000000f7f92
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;	// IMP=0x00000000000f7643
- (id)getCurrentFont;	// IMP=0x00000000001d03ca
- (struct CGRect)getCanvas;	// IMP=0x0000000000156283
- (void)dealloc;	// IMP=0x00000000000f9748
- (id)initWithCanvas:(struct CGRect)arg1;	// IMP=0x00000000000f67d7

@end
