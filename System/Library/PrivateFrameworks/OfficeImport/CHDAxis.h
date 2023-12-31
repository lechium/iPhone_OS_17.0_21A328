//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDTitle, EDResources, NSArray, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDAxis : NSObject
{
    _Bool mReverseOrder;	// 8 = 0x8
    _Bool mReverseOrderOverridden;	// 9 = 0x9
    _Bool mSecondary;	// 10 = 0xa
    _Bool mDateTimeFormattingFlag;	// 11 = 0xb
    _Bool mLineVisible;	// 12 = 0xc
    _Bool mDeleted;	// 13 = 0xd
    _Bool mAutoMinimumValue;	// 14 = 0xe
    _Bool mAutoMaximumValue;	// 15 = 0xf
    _Bool mAutoCrossValue;	// 16 = 0x10
    _Bool mContentFormatDerived;	// 17 = 0x11
    int mAxisId;	// 20 = 0x14
    unsigned long long mContentFormatId;	// 24 = 0x18
    unsigned long long mFontIndex;	// 32 = 0x20
    double mScalingMaximum;	// 40 = 0x28
    double mScalingMinimum;	// 48 = 0x30
    int mOrientation;	// 56 = 0x38
    double mCrossAxisId;	// 64 = 0x40
    double mCrossesAt;	// 72 = 0x48
    int mMajorTickMark;	// 80 = 0x50
    int mMinorTickMark;	// 84 = 0x54
    int mAxisPosition;	// 88 = 0x58
    int mAxisType;	// 92 = 0x5c
    int mTickLabelPosition;	// 96 = 0x60
    CHDTitle *mTitle;	// 104 = 0x68
    OADGraphicProperties *mMinorGridLinesGraphicProperties;	// 112 = 0x70
    OADGraphicProperties *mMajorGridLinesGraphicProperties;	// 120 = 0x78
    OADGraphicProperties *mAxisGraphicProperties;	// 128 = 0x80
    int mCrossBetween;	// 136 = 0x88
    int mCrosses;	// 140 = 0x8c
    double mTickLabelRotation;	// 144 = 0x90
    _Bool mIsAutoRotation;	// 152 = 0x98
    unsigned long long mTickLabelColorIndex;	// 160 = 0xa0
    EDResources *mResources;	// 168 = 0xa8
    NSArray *mLabelEffects;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000038af11
@property(readonly, copy) NSString *description;
- (void)setLabelEffects:(id)arg1;	// IMP=0x000000000038ae89
- (id)labelEffects;	// IMP=0x000000000038ae78
- (void)adjustAxisPositionForHorizontalChart;	// IMP=0x000000000038ae72
- (void)setTickLabelAutoRotation:(_Bool)arg1;	// IMP=0x0000000000178b58
- (_Bool)isTickLabelAutoRotation;	// IMP=0x000000000038ae66
- (void)setTickLabelRotationAngle:(double)arg1;	// IMP=0x0000000000178b64
- (double)tickLabelRotationAngle;	// IMP=0x000000000038ae58
- (void)setDateTimeFormattingFlag:(_Bool)arg1;	// IMP=0x000000000038ae4f
- (_Bool)isDateTimeFormattingFlag;	// IMP=0x000000000038ae46
- (_Bool)isDate;	// IMP=0x000000000038ae3e
- (long long)key;	// IMP=0x00000000001791ec
- (void)setCrosses:(int)arg1;	// IMP=0x00000000002101ff
- (int)crosses;	// IMP=0x000000000038ae32
- (void)setCrossBetween:(int)arg1;	// IMP=0x00000000001787e4
- (int)crossBetween;	// IMP=0x000000000038ae26
- (void)setAxisGraphicProperties:(id)arg1;	// IMP=0x0000000000178ae8
- (id)axisGraphicProperties;	// IMP=0x000000000038ae15
- (void)setMajorGridLinesGraphicProperties:(id)arg1;	// IMP=0x0000000000178d0b
- (id)majorGridLinesGraphicProperties;	// IMP=0x000000000018abcf
- (void)setMinorGridLinesGraphicProperties:(id)arg1;	// IMP=0x0000000000178c23
- (id)minorGridLinesGraphicProperties;	// IMP=0x000000000038ae07
- (void)setTitle:(id)arg1;	// IMP=0x000000000017a2fa
- (id)title;	// IMP=0x000000000038adf9
- (_Bool)isTickLabelVisible;	// IMP=0x000000000038adec
- (void)setTickLabelPosition:(int)arg1;	// IMP=0x0000000000178b41
- (int)tickLabelPosition;	// IMP=0x000000000038ade3
- (void)setAxisType:(int)arg1;	// IMP=0x000000000017888a
- (int)axisType;	// IMP=0x000000000038adda
- (void)setAxisPosition:(int)arg1;	// IMP=0x00000000001788b0
- (int)axisPosition;	// IMP=0x000000000018665f
- (void)setMinorTickMark:(int)arg1;	// IMP=0x0000000000178b38
- (int)minorTickMark;	// IMP=0x000000000038add1
- (void)setMajorTickMark:(int)arg1;	// IMP=0x0000000000178b2f
- (int)majorTickMark;	// IMP=0x000000000038adc8
- (void)setCrossesAt:(double)arg1;	// IMP=0x00000000001787c8
- (double)crossesAt;	// IMP=0x000000000038adbd
- (void)setCrossAxisId:(double)arg1;	// IMP=0x000000000038adb2
- (double)crossAxisIdForXml;	// IMP=0x000000000038ad9f
- (double)crossAxisId;	// IMP=0x000000000038ad94
- (void)setOrientation:(int)arg1;	// IMP=0x000000000038ad8b
- (int)orientation;	// IMP=0x000000000038ad82
- (void)setScalingMinimum:(double)arg1;	// IMP=0x000000000018b1d4
- (double)scalingMinimum;	// IMP=0x000000000018abdd
- (void)setScalingMaximum:(double)arg1;	// IMP=0x00000000001798a6
- (double)scalingMaximum;	// IMP=0x000000000018abe8
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;	// IMP=0x0000000000184754
- (_Bool)isContentFormatDerivedFromDataPoints;	// IMP=0x000000000038ad79
- (void)setContentFormat:(id)arg1;	// IMP=0x000000000018463f
- (id)defaultDateTimeContentFormat;	// IMP=0x000000000038acdf
- (id)contentFormat;	// IMP=0x0000000000184318
- (void)setFont:(id)arg1;	// IMP=0x0000000000226707
- (id)font;	// IMP=0x0000000000188198
- (_Bool)isHorizontalPosition;	// IMP=0x00000000002105a0
- (_Bool)isAutoCrossValue;	// IMP=0x000000000038acd6
- (_Bool)isAutoMaximumValue;	// IMP=0x000000000038accd
- (_Bool)isAutoMinimumValue;	// IMP=0x000000000038acc4
- (void)setDeleted:(_Bool)arg1;	// IMP=0x000000000018cc1f
- (_Bool)isDeleted;	// IMP=0x000000000038acbb
- (void)setLineVisible:(_Bool)arg1;	// IMP=0x000000000018cc16
- (_Bool)isLineVisible;	// IMP=0x000000000038acb2
- (void)setSecondary:(_Bool)arg1;	// IMP=0x000000000021daaa
- (_Bool)isSecondary;	// IMP=0x0000000000186668
- (void)setReverseOrderOverridden:(_Bool)arg1;	// IMP=0x000000000038aca9
- (_Bool)isReverseOrderOverridden;	// IMP=0x000000000038aca0
- (void)setReverseOrder:(_Bool)arg1;	// IMP=0x00000000001787bc
- (_Bool)isReverseOrder;	// IMP=0x000000000018180c
- (void)setAxisId:(int)arg1;	// IMP=0x0000000000178881
- (int)axisIdForXml;	// IMP=0x000000000038ac92
- (int)axisId;	// IMP=0x000000000038ac89
- (id)initWithResources:(id)arg1;	// IMP=0x00000000001786ad
- (id)tickLabelColor;	// IMP=0x000000000038af8d
- (void)setTickLabelColorIndex:(unsigned long long)arg1;	// IMP=0x0000000000178b72
- (unsigned long long)tickLabelColorIndex;	// IMP=0x000000000038af80
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x000000000018d2b4
- (unsigned long long)fontIndex;	// IMP=0x000000000038af76
- (void)setContentFormatId:(unsigned long long)arg1;	// IMP=0x00000000001d0122
- (unsigned long long)contentFormatId;	// IMP=0x000000000038af6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

