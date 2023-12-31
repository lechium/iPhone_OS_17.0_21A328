//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UIDisplayP3Color : UIColor
{
    double redComponent;	// 8 = 0x8
    double greenComponent;	// 16 = 0x10
    double blueComponent;	// 24 = 0x18
    double alphaComponent;	// 32 = 0x20
    _Atomic struct CGColor *_cachedColor;	// 40 = 0x28
}

- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x00000000009b3cc6
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000009b3abc
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x00000000009b39dd
- (double)alphaComponent;	// IMP=0x00000000009b39cb
- (struct CGColor *)CGColor;	// IMP=0x00000000009b3975
- (unsigned long long)hash;	// IMP=0x00000000009b38ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009b36af
- (_Bool)_isDeepColor;	// IMP=0x00000000009b35f9
- (id)description;	// IMP=0x00000000009b355b
- (id)colorSpaceName;	// IMP=0x00000000009b354e
- (void)setStroke;	// IMP=0x00000000009b3503
- (void)setFill;	// IMP=0x00000000009b34b8
- (void)set;	// IMP=0x00000000009b345f
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;	// IMP=0x00000000009b3348
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x00000000009b32b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009b32a6
- (void)dealloc;	// IMP=0x00000000009b3265
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x00000000009b311b

@end

