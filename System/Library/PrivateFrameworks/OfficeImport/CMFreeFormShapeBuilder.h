//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADPath;

__attribute__((visibility("hidden")))
@interface CMFreeFormShapeBuilder
{
    OADPath *_path;	// 48 = 0x30
    struct CGSize _space;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000004655a2
- (struct CGPoint)_renderPathElement:(id)arg1 withTransform:(struct CGAffineTransform)arg2 inPath:(struct CGPath *)arg3;	// IMP=0x0000000000158f87
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000158e3d
- (struct CGAffineTransform)affineTransform;	// IMP=0x00000000001589c6
- (void)setSpace:(struct CGSize)arg1;	// IMP=0x0000000000158966
- (void)setPath:(id)arg1;	// IMP=0x0000000000158952

@end

