//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADBevel, OADColor;

__attribute__((visibility("hidden")))
@interface OADShape3D : NSObject
{
    OADBevel *mTopBevel;	// 8 = 0x8
    OADBevel *mBottomBevel;	// 16 = 0x10
    OADColor *mExtrusionColor;	// 24 = 0x18
    float mExtrusionHeight;	// 32 = 0x20
    OADColor *mContourColor;	// 40 = 0x28
    float mContourWidth;	// 48 = 0x30
    float mShapeDepth;	// 52 = 0x34
    int mMaterial;	// 56 = 0x38
}

+ (id)nullShape3D;	// IMP=0x001000000001f534
- (void).cxx_destruct;	// IMP=0x000000000031aa42
- (id)description;	// IMP=0x000000000031aa04
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031a776
- (unsigned long long)hash;	// IMP=0x000000000031a695
- (void)setMaterial:(int)arg1;	// IMP=0x000000000001f616
- (int)material;	// IMP=0x000000000031a68c
- (void)setShapeDepth:(float)arg1;	// IMP=0x000000000021b087
- (float)shapeDepth;	// IMP=0x000000000031a681
- (void)setContourWidth:(float)arg1;	// IMP=0x00000000001dec6e
- (float)contourWidth;	// IMP=0x000000000031a676
- (void)setContourColor:(id)arg1;	// IMP=0x00000000001dec5d
- (id)contourColor;	// IMP=0x000000000031a668
- (void)setExtrusionHeight:(float)arg1;	// IMP=0x000000000021b055
- (float)extrusionHeight;	// IMP=0x000000000031a65d
- (void)setExtrusionColor:(id)arg1;	// IMP=0x0000000000224de2
- (id)extrusionColor;	// IMP=0x000000000031a64f
- (void)setBottomBevel:(id)arg1;	// IMP=0x000000000021b044
- (id)bottomBevel;	// IMP=0x000000000031a641
- (void)setTopBevel:(id)arg1;	// IMP=0x00000000001dec4c
- (id)topBevel;	// IMP=0x000000000031a633
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031a529
- (id)init;	// IMP=0x000000000001f587

@end
