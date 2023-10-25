//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUUIImageAutoreleasePoolGuard, UIImage;

__attribute__((visibility("hidden")))
@interface OITSUUIImage
{
    UIImage *mUIImage;	// 8 = 0x8
    OITSUUIImageAutoreleasePoolGuard *mGuard;	// 16 = 0x10
}

+ (id)imageNamed:(id)arg1;	// IMP=0x0060000000284b1b
+ (void)i_performBlockWithUIImageLock:(CDUnknownBlockType)arg1;	// IMP=0x0060000000284ab1
- (long long)imageOrientation;	// IMP=0x000000000028504c
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x0000000000285007
- (struct CGImage *)CGImage;	// IMP=0x0000000000284fc2
- (double)scale;	// IMP=0x0000000000284f7d
- (struct CGSize)size;	// IMP=0x0000000000284f38
- (id)UIImage;	// IMP=0x0000000000284eff
- (void)dealloc;	// IMP=0x0000000000284ea6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000284e6f
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000284e18
- (id)initWithUIImage:(id)arg1;	// IMP=0x0000000000284e04
- (id)p_initWithUIImage:(id)arg1 needsGuard:(_Bool)arg2;	// IMP=0x0000000000284d4e

@end
