//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface PDAnimateMotionBehavior
{
    OITSUBezierPath *mPath;	// 240 = 0xf0
    _Bool mHasAngle;	// 248 = 0xf8
    double mAngle;	// 256 = 0x100
    NSString *mPointsTypes;	// 264 = 0x108
    _Bool mHasOriginType;	// 272 = 0x110
    int mOriginType;	// 276 = 0x114
    _Bool mHasRotationCenter;	// 280 = 0x118
    struct CGPoint mRotationCenter;	// 288 = 0x120
    _Bool mHasPathEditMode;	// 304 = 0x130
    int mPathEditMode;	// 308 = 0x134
}

+ (id)NSStringForBezierPath:(id)arg1;	// IMP=0x006000000043c14a
+ (id)bezierPathFromNSString:(id)arg1;	// IMP=0x006000000043baf8
- (void).cxx_destruct;	// IMP=0x000000000043c906
- (unsigned long long)hash;	// IMP=0x000000000043c7d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043c3c0
- (void)setPathEditMode:(int)arg1;	// IMP=0x000000000043c3a5
- (int)pathEditMode;	// IMP=0x000000000043c395
- (_Bool)hasPathEditMode;	// IMP=0x000000000043c385
- (void)setRotationCenter:(struct CGPoint)arg1;	// IMP=0x00000000001d632a
- (struct CGPoint)rotationCenter;	// IMP=0x000000000043c36d
- (_Bool)hasRotationCenter;	// IMP=0x000000000043c35d
- (void)setOriginType:(int)arg1;	// IMP=0x000000000043c342
- (int)originType;	// IMP=0x000000000043c332
- (_Bool)hasOriginType;	// IMP=0x000000000043c322
- (void)setPointsTypes:(id)arg1;	// IMP=0x000000000043c30e
- (id)pointsTypes;	// IMP=0x000000000043c2f9
- (void)setAngle:(double)arg1;	// IMP=0x000000000043c2dc
- (double)angle;	// IMP=0x000000000043c2ca
- (_Bool)hasAngle;	// IMP=0x000000000043c2ba
- (void)setPath:(id)arg1;	// IMP=0x00000000001d6272
- (id)path;	// IMP=0x000000000043c2a5
- (_Bool)hasPath;	// IMP=0x000000000043c290

@end
