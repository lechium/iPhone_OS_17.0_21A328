//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADAdjustedColor
{
    OADColor *mBaseColor;	// 16 = 0x10
    int mAdjustmentType;	// 24 = 0x18
    unsigned char mAdjustmentParam;	// 28 = 0x1c
    _Bool mInvert;	// 29 = 0x1d
    _Bool mInvert128;	// 30 = 0x1e
    _Bool mGray;	// 31 = 0x1f
}

- (void).cxx_destruct;	// IMP=0x000000000030942b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015742b
- (unsigned long long)hash;	// IMP=0x00000000001575eb
- (_Bool)gray;	// IMP=0x000000000010c8eb
- (_Bool)invert128;	// IMP=0x000000000010c933
- (_Bool)invert;	// IMP=0x000000000010c923
- (unsigned char)adjustmentParam;	// IMP=0x000000000010c8fe
- (int)adjustmentType;	// IMP=0x000000000010c912
- (id)baseColor;	// IMP=0x000000000010c8d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003092d6
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(_Bool)arg4 invert128:(_Bool)arg5 gray:(_Bool)arg6;	// IMP=0x000000000010a9e9

@end
