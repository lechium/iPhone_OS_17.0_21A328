//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIRenditionMetrics, CUIRenditionSliceInformation, NSMutableArray, _CSIRenditionBlockData;

__attribute__((visibility("hidden")))
@interface _CUIThemePixelRendition : CUIThemeRendition
{
    unsigned int _nimages;	// 216 = 0xd8
    struct CGImage *_image[16];	// 224 = 0xe0
    struct CGImage *_unslicedImage;	// 352 = 0x160
    CUIRenditionMetrics *_renditionMetrics;	// 360 = 0x168
    CUIRenditionSliceInformation *_sliceInformation;	// 368 = 0x170
    _CSIRenditionBlockData *_cachedBlockDataBGRX;	// 376 = 0x178
    _CSIRenditionBlockData *_cachedBlockDataRGBX;	// 384 = 0x180
    _CSIRenditionBlockData *_cachedBlockDataGray;	// 392 = 0x188
    unsigned long long _sourceRowbytes;	// 400 = 0x190
    NSMutableArray *_layers;	// 408 = 0x198
    struct CGSize _unslicedSize;	// 416 = 0x1a0
}

- (_Bool)edgesOnly;	// IMP=0x0000000000075626
- (_Bool)isScaled;	// IMP=0x00000000000755b5
- (_Bool)isTiled;	// IMP=0x00000000000754f6
- (id)sliceInformation;	// IMP=0x00000000000754e5
- (id)metrics;	// IMP=0x00000000000754c7
- (id)layerReferences;	// IMP=0x00000000000754b6
- (id)maskForSliceIndex:(long long)arg1;	// IMP=0x0000000000075390
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x0000000000075341
- (struct CGImage *)unslicedImage;	// IMP=0x000000000007530c
- (void)dealloc;	// IMP=0x000000000007520d
- (unsigned long long)sourceRowbytes;	// IMP=0x00000000000751fc
- (void)setSharedBlockData:(id)arg1;	// IMP=0x0000000000074ee0
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;	// IMP=0x0000000000074eb7
- (struct CGSize)unslicedSize;	// IMP=0x0000000000074e74
- (int)pixelFormat;	// IMP=0x0000000000074e48
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1 version:(unsigned int)arg2;	// IMP=0x0000000000073702
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 version:(unsigned int)arg3;	// IMP=0x0000000000072f2b

@end
