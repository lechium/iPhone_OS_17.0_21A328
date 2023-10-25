//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasInfoGeometry, _TtC8Freeform12CRLMovieItem;

@interface CRLMovieLayout
{
    CRLCanvasInfoGeometry *_dynamicInfoGeometry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002e6d86
- (void)p_destroyDynamicCopies;	// IMP=0x00100000002e6b8c
- (void)p_createDynamicCopies;	// IMP=0x00100000002e6947
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;	// IMP=0x00100000002e678b
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withTransform:(struct CGAffineTransform)arg2;	// IMP=0x00100000002e66fc
- (id)computeLayoutGeometry;	// IMP=0x00100000002e6317
- (void)endDynamicOperation;	// IMP=0x00100000002e62d6
- (void)beginDynamicOperationWithRealTimeCommands:(_Bool)arg1;	// IMP=0x00100000002e6295
- (void)takeFreeTransformFromTracker:(id)arg1;	// IMP=0x00100000002e60c9
- (void)takeSizeFromTracker:(id)arg1;	// IMP=0x00100000002e5fe7
- (void)takeRotationFromTracker:(id)arg1;	// IMP=0x00100000002e5e4e
- (void)dragBy:(struct CGPoint)arg1;	// IMP=0x00100000002e5bce
@property(readonly, nonatomic) _TtC8Freeform12CRLMovieItem *movieInfo;
- (id)layoutGeometryFromInfo;	// IMP=0x00100000002e5afb
- (_Bool)supportsRotation;	// IMP=0x00100000002e5af3
- (id)initWithInfo:(id)arg1;	// IMP=0x00100000002e5aa7

@end
