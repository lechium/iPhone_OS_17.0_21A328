//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierPath, MISSING_TYPE;

@interface _TtC8Freeform13CRLUSDZLayout
{
    MISSING_TYPE *orientationSource;	// 16 = 0x10
    MISSING_TYPE *cachedWrapPath;	// 40 = 0x28
    MISSING_TYPE *cachedImageNaturalSize;	// 48 = 0x30
    MISSING_TYPE *cachedPosterImageDataHashForWrapPath;	// 72 = 0x48
    MISSING_TYPE *cachedHitTestManager;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0040000000830b60
- (id)initWithInfo:(id)arg1;	// IMP=0x0010000000830b00
@property(nonatomic, readonly) _Bool supportsRotation;
@property(nonatomic, readonly) CRLBezierPath *pathForClippingConnectionLines;
- (id)computeWrapPath;	// IMP=0x0010000000830860
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;	// IMP=0x001000000082ff00
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;	// IMP=0x001000000082fea0
- (id)computeLayoutGeometry;	// IMP=0x001000000082f9c0
@property(nonatomic, readonly) struct CGRect boundsForStandardKnobs;
- (struct CGRect)rectInRootForSelectionPath:(id)arg1;	// IMP=0x001000000082f660
@property(nonatomic, readonly) struct CGRect alignmentFrame;
- (struct CGRect)boundsInRoot;	// IMP=0x001000000082f470

@end

