//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDView3D : NSObject
{
    int mRotationX;	// 8 = 0x8
    int mRotationY;	// 12 = 0xc
    int mDepthPercent;	// 16 = 0x10
    int mGapDepthPercent;	// 20 = 0x14
    int mHeightPercent;	// 24 = 0x18
    int mPerspective;	// 28 = 0x1c
    _Bool mRightAngleAxes;	// 32 = 0x20
    _Bool mCluster;	// 33 = 0x21
    _Bool mAutoscale;	// 34 = 0x22
}

- (id)description;	// IMP=0x0000000000390291
- (void)setAutoscale:(_Bool)arg1;	// IMP=0x00000000001e2372
- (_Bool)isAutoscale;	// IMP=0x0000000000390288
- (void)setCluster:(_Bool)arg1;	// IMP=0x00000000001e238a
- (_Bool)isCluster;	// IMP=0x000000000039027f
- (void)setRightAngleAxes:(_Bool)arg1;	// IMP=0x00000000001e2340
- (_Bool)isRightAngleAxes;	// IMP=0x0000000000390276
- (void)setPerspective:(int)arg1;	// IMP=0x00000000001e232b
- (int)perspective;	// IMP=0x000000000039026d
- (void)setHeightPercent:(int)arg1;	// IMP=0x00000000001e235b
- (int)heightPercent;	// IMP=0x0000000000390264
- (void)setGapDepthPercent:(int)arg1;	// IMP=0x00000000001e2352
- (int)gapDepthPercent;	// IMP=0x000000000039025b
- (void)setDepthPercent:(int)arg1;	// IMP=0x00000000001e2349
- (int)depthPercent;	// IMP=0x0000000000390252
- (void)setRotationX:(int)arg1;	// IMP=0x00000000001e2319
- (int)rotationX;	// IMP=0x0000000000390249
- (void)setRotationY:(int)arg1;	// IMP=0x00000000001e2322
- (int)rotationY;	// IMP=0x0000000000390240
- (id)init;	// IMP=0x00000000001e22c2

@end

