//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKPotrace : NSObject
{
    struct CGPath *_cachedPath;	// 8 = 0x8
    struct potrace_bitmap_s *_potraceBitmap;	// 16 = 0x10
    struct potrace_param_s *_potraceParameters;	// 24 = 0x18
}

+ (struct CGPath *)newCGPathFromPotracePath:(struct potrace_path_s *)arg1;	// IMP=0x0060000000002d0f
- (void)_generatePath;	// IMP=0x0000000000002c7f
- (void)_clearPathIfNecessary;	// IMP=0x0000000000002c59
@property double opttolerance;
@property int opticurve;
@property double alphamax;
@property int turnpolicy;
@property int turdsize;
- (struct CGPath *)CGPath;	// IMP=0x0000000000002b1d
- (void)dealloc;	// IMP=0x0000000000002a95
- (id)initWithCGImage:(struct CGImage *)arg1 flipped:(_Bool)arg2 whiteIsInside:(_Bool)arg3;	// IMP=0x0000000000002720

@end

