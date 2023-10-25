//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFBrush, MFFont, MFPalette, MFPath, MFPen, MFTransform, NSMutableArray, OITSUColor;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFDeviceContext : NSObject
{
    NSObject<MFDeviceDriver> *m_driver;	// 8 = 0x8
    _Bool m_textUpdateCP;	// 16 = 0x10
    double m_miterLimit;	// 24 = 0x18
    int m_textHorizontalAlign;	// 32 = 0x20
    int m_textVerticalAlign;	// 36 = 0x24
    int m_textDirection;	// 40 = 0x28
    MFFont *m_font;	// 48 = 0x30
    OITSUColor *m_textColour;	// 56 = 0x38
    int m_textBreakExtra;	// 64 = 0x40
    int m_textBreakCount;	// 68 = 0x44
    int m_textCharExtra;	// 72 = 0x48
    OITSUColor *m_bkColour;	// 80 = 0x50
    int m_bkMode;	// 88 = 0x58
    struct CGPoint m_brushOrg;	// 96 = 0x60
    struct CGPoint m_penPos;	// 112 = 0x70
    int m_arcDirection;	// 128 = 0x80
    int m_polyFillMode;	// 132 = 0x84
    MFTransform *m_transform;	// 136 = 0x88
    MFPen *m_pen;	// 144 = 0x90
    MFBrush *m_brush;	// 152 = 0x98
    MFPalette *m_selectedPalette;	// 160 = 0xa0
    int m_rop2;	// 168 = 0xa8
    int m_stretchMode;	// 172 = 0xac
    NSMutableArray *m_clippingPaths;	// 176 = 0xb0
    _Bool m_clippingIsRestarted;	// 184 = 0xb8
    MFPath *m_path;	// 192 = 0xc0
}

+ (id)deviceContextWithDriver:(id)arg1;	// IMP=0x001000000035d967
- (void).cxx_destruct;	// IMP=0x000000000035d9f5
@property(nonatomic) _Bool clippingIsRestarted; // @synthesize clippingIsRestarted=m_clippingIsRestarted;
@property(readonly, nonatomic) NSMutableArray *clippingPaths; // @synthesize clippingPaths=m_clippingPaths;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f89eb
- (void)setRop2:(int)arg1;	// IMP=0x00000000000f85e5
- (int)getRop2;	// IMP=0x00000000000f85d9
- (void)setBrush:(id)arg1;	// IMP=0x00000000000f8593
- (id)getBrush;	// IMP=0x00000000000f874f
- (void)setPen:(id)arg1;	// IMP=0x00000000000f85c5
- (id)getPen;	// IMP=0x00000000000f92ab
- (void)setSelectedPalette:(id)arg1;	// IMP=0x00000000000f9297
- (id)getSelectedPalette;	// IMP=0x00000000000f9286
- (void)setPath:(id)arg1;	// IMP=0x00000000000f93e1
- (id)getPath;	// IMP=0x00000000000f84c8
- (id)getCurrentTransform;	// IMP=0x00000000000f7a74
- (void)setCurrentTransform:(id)arg1;	// IMP=0x00000000000f9272
- (int)getStretchBltMode;	// IMP=0x00000000000f8f94
- (void)setStretchBltMode:(int)arg1;	// IMP=0x00000000000f8fa0
- (int)getPolyFillMode;	// IMP=0x00000000000f8760
- (void)setPolyFillMode:(int)arg1;	// IMP=0x00000000000f8f88
- (int)getArcDirection;	// IMP=0x00000000000f8f70
- (void)setArcDirection:(int)arg1;	// IMP=0x00000000000f8f7c
- (id)getFont;	// IMP=0x00000000000f8051
- (void)setFont:(id)arg1;	// IMP=0x00000000000f7ef9
- (struct CGPoint)getBrushOrg;	// IMP=0x00000000000f8f50
- (void)setBrushOrg:(struct CGPoint)arg1;	// IMP=0x00000000000f8f60
- (int)getBkMode;	// IMP=0x00000000000f8534
- (void)setBkMode:(int)arg1;	// IMP=0x00000000000f7f23
- (id)getBkColour;	// IMP=0x00000000000f8f31
- (void)setBkColour:(id)arg1;	// IMP=0x00000000000f8f3f
- (int)getTextCharExtra;	// IMP=0x00000000000f84e2
- (void)setTextCharExtra:(int)arg1;	// IMP=0x00000000000f8f28
- (int)getTextBreakCount;	// IMP=0x00000000000f8f1f
- (int)getTextBreakExtra;	// IMP=0x00000000000f8f16
- (void)setTextJustification:(int)arg1 in_breakCount:(int)arg2;	// IMP=0x000000000035d9c4
- (id)getTextColour;	// IMP=0x00000000000f8553
- (void)setTextColour:(id)arg1;	// IMP=0x00000000000f8040
- (int)getTextDirection;	// IMP=0x00000000000f8f04
- (void)setTextDirection:(int)arg1;	// IMP=0x00000000000f8f0d
- (int)getTextVerticalAlign;	// IMP=0x00000000000f84eb
- (void)setTextVerticalAlign:(int)arg1;	// IMP=0x00000000000f8efb
- (int)getTextHorizontalAlign;	// IMP=0x00000000000f84f4
- (void)setTextHorizontalAlign:(int)arg1;	// IMP=0x00000000000f8ef2
- (double)getMiterLimit;	// IMP=0x00000000000f8edc
- (void)setMiterLimit:(double)arg1;	// IMP=0x00000000000f8ee7
- (_Bool)getTextUpdateCP;	// IMP=0x00000000000f84d9
- (void)setTextUpdateCP:(_Bool)arg1;	// IMP=0x00000000000f8ed3
- (void)setPenPosition:(struct CGPoint)arg1;	// IMP=0x00000000000f8ec3
- (struct CGPoint)getPenPosition;	// IMP=0x00000000000f8eb3
- (id)initWithDriver:(id)arg1;	// IMP=0x00000000000f6a7e

@end
