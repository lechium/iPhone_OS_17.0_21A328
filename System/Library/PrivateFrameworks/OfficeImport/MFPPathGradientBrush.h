//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, OITSUBezierPath, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPPathGradientBrush
{
    OITSUColor *mCenterColor;	// 104 = 0x68
    struct CGPoint mCenterPoint;	// 112 = 0x70
    NSArray *mSurroundColors;	// 128 = 0x80
    OITSUBezierPath *mPath;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000363d7c
- (id)endColor;	// IMP=0x0000000000363d5d
- (id)startColor;	// IMP=0x0000000000363d48
- (void)createShading;	// IMP=0x0000000000363c54
- (void)setPath:(id)arg1;	// IMP=0x0000000000363c40
- (void)setSurroundColors:(id)arg1;	// IMP=0x0000000000363c2c
- (void)setCenterPoint:(struct CGPoint)arg1;	// IMP=0x0000000000363c14
- (void)setCenterColor:(id)arg1;	// IMP=0x0000000000363c00

@end

