//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasInfoGeometry, CRLCanvasLayoutGeometry, CRLMaskLayout, CRLPathSource, _TtC8Freeform12CRLImageItem;
@protocol CRLSmartPathSource;

@interface CRLImageLayout
{
    CRLCanvasLayoutGeometry *mImageGeometry;	// 8 = 0x8
    CRLMaskLayout *mMaskLayout;	// 16 = 0x10
    struct CGPath *mPathToStroke;	// 24 = 0x18
    struct CGAffineTransform mLayoutToImageTransform;	// 32 = 0x20
    struct CGAffineTransform mLayoutToMaskTransform;	// 80 = 0x50
    _Bool mMaskIntersectsImage;	// 128 = 0x80
    struct CGSize mLastParentLimitedSize;	// 136 = 0x88
    unsigned long long mHasAlpha;	// 152 = 0x98
    CRLCanvasLayoutGeometry *mBaseImageLayoutGeometry;	// 160 = 0xa0
    CRLCanvasInfoGeometry *mDynamicInfoGeometry;	// 168 = 0xa8
    CRLCanvasInfoGeometry *mBaseInfoGeometry;	// 176 = 0xb0
    long long mMaskEditMode;	// 184 = 0xb8
    _Bool mScalingInMaskMode;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00200000003051d1
@property(readonly, nonatomic, getter=isInMaskScaleMode) _Bool inMaskScaleMode; // @synthesize inMaskScaleMode=mScalingInMaskMode;
@property(readonly, nonatomic) long long maskEditMode; // @synthesize maskEditMode=mMaskEditMode;
- (void)p_destroyDynamicCopiesIfNeeded;	// IMP=0x0010000000304dca
- (void)p_setDynamicInfoGeometry:(id)arg1;	// IMP=0x0010000000304b8d
- (_Bool)p_shouldUseDynamicInfoGeometryForOperation;	// IMP=0x0010000000304763
- (void)p_createDynamicCopiesIfNeeded;	// IMP=0x00100000003044cc
- (_Bool)supportsRotation;	// IMP=0x00100000003044c4
- (id)computeWrapPath;	// IMP=0x0010000000303d46
@property(readonly, nonatomic) CRLMaskLayout *maskLayout;
@property(readonly, nonatomic) struct CGAffineTransform layoutToMaskTransform;
@property(readonly, nonatomic) struct CGAffineTransform layoutToImageTransform;
- (struct CGSize)sizeOfFrameRectIncludingCoverage;	// IMP=0x0010000000303bd4
@property(readonly, nonatomic) struct CGPath *pathToStroke;
@property(readonly, nonatomic) _Bool hasMaskingPath;
- (id)p_inspectorGeometryForUnmaskedImage;	// IMP=0x0010000000303803
- (id)inspectorGeometry;	// IMP=0x00100000003036fd
@property(readonly, nonatomic) CRLCanvasLayoutGeometry *imageGeometryInRoot;
@property(readonly, nonatomic) CRLCanvasLayoutGeometry *originalImageGeometry;
@property(readonly, nonatomic) CRLCanvasLayoutGeometry *imageGeometry;
@property(readonly, nonatomic) _TtC8Freeform12CRLImageItem *imageInfo;
- (void)maskModeScaleDidEnd;	// IMP=0x001000000030352d
- (void)maskModeScaleDidBegin;	// IMP=0x0010000000303505
@property(readonly, nonatomic) long long maskEditModeForLayoutState;
@property(readonly, nonatomic) long long maskEditModeForFreeTransforming;
@property(readonly, nonatomic) long long maskEditModeForResizing;
@property(readonly, nonatomic) long long maskEditModeForRotating;
@property(readonly, nonatomic) long long maskEditModeForDragging;
@property(readonly, nonatomic) _Bool isResizingInMaskEditMode;
@property(readonly, nonatomic) _Bool isRotatingInMaskEditMode;
@property(readonly, nonatomic) _Bool isDraggingInMaskEditMode;
@property(readonly, nonatomic, getter=isInMaskEditMode) _Bool inMaskEditMode;
- (void)endMaskEditMode;	// IMP=0x001000000030306c
- (void)beginEditingMaskInMaskEditMode:(long long)arg1;	// IMP=0x0010000000302c81
- (void)maskWasApplied;	// IMP=0x0010000000302a99
- (void)maskWasReset;	// IMP=0x00100000003028b1
@property(readonly, nonatomic) struct CGRect pathBoundsWithoutStroke;
@property(readonly, nonatomic) CRLPathSource<CRLSmartPathSource> *smartPathSource;
- (void)p_calculateClampModelValuesWithAdditionalTransform:(struct CGAffineTransform)arg1 andPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000030253c
- (id)commandToClampModelToLayoutSizeWithAdditionalTransform:(struct CGAffineTransform)arg1;	// IMP=0x00100000003021bf
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(_Bool)arg3;	// IMP=0x001000000030204d
- (void)takeFreeTransformFromTracker:(id)arg1;	// IMP=0x0010000000301fca
- (void)endFreeTransform;	// IMP=0x0010000000301f8c
- (void)beginFreeTransformWithTracker:(id)arg1;	// IMP=0x0010000000301f4b
- (void)takeScaledImageGeometry:(id)arg1 maskGeometry:(id)arg2;	// IMP=0x0010000000301ce1
- (void)takeSizeFromTracker:(id)arg1;	// IMP=0x0010000000301ca0
- (void)resizeWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0010000000301879
- (_Bool)shouldSnapWhileResizing;	// IMP=0x001000000030181d
- (_Bool)resizeMayChangeAspectRatio;	// IMP=0x0010000000301701
- (_Bool)canAspectRatioLockBeChangedByUser;	// IMP=0x00100000003015e7
- (struct CGPoint)centerForConnecting;	// IMP=0x0010000000301447
- (struct CGPoint)centerForRotationInMaskMode;	// IMP=0x0010000000301109
- (struct CGPoint)centerForRotation;	// IMP=0x00100000003010b1
- (void)takeRotationFromTracker:(id)arg1;	// IMP=0x0010000000300fd2
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;	// IMP=0x0010000000300de6
- (void)endRotate;	// IMP=0x0010000000300da8
- (void)beginRotate;	// IMP=0x0010000000300d67
- (void)endDrag;	// IMP=0x0010000000300cfb
- (void)dragBy:(struct CGPoint)arg1;	// IMP=0x0010000000300959
- (void)beginDrag;	// IMP=0x00100000003008ce
- (id);	// IMP=0x0010000000300719
- (void)endResize;	// IMP=0x00100000003006db
- (void)beginResize;	// IMP=0x00100000003005cd
- (void)endDynamicOperation;	// IMP=0x001000000030053e
- (void)beginDynamicOperationWithRealTimeCommands:(_Bool)arg1;	// IMP=0x0010000000300482
- (_Bool)maskIntersectsImage;	// IMP=0x0010000000300472
- (_Bool)shouldDisplayGuides;	// IMP=0x00100000003003fd
- (_Bool)isInvisible;	// IMP=0x0010000000300367
- (_Bool)hasAlpha;	// IMP=0x0010000000300241
- (void)offsetGeometryBy:(struct CGPoint)arg1;	// IMP=0x00100000003001a5
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;	// IMP=0x00100000002fff21
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;	// IMP=0x00100000002ffb29
- (void)updateChildrenFromInfo;	// IMP=0x00100000002ff67d
- (id)childInfosForChildLayouts;	// IMP=0x00100000002ff5b6
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x00100000002ff44e
- (id)computeLayoutGeometry;	// IMP=0x00100000002fe74f
- (id)layoutGeometryFromInfo;	// IMP=0x00100000002fe685
@property(readonly, nonatomic) CRLCanvasInfoGeometry *currentInfoGeometry;
- (id)visibleGeometries;	// IMP=0x00100000002fe566
- (id)geometryForTransforming;	// IMP=0x00100000002fe518
- (void)dealloc;	// IMP=0x00100000002fe4d7
- (id)initWithInfo:(id)arg1;	// IMP=0x00100000002fe42b

@end

