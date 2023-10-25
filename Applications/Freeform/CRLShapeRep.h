//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierPath, CRLEditableBezierPathSource, CRLShapeLayout, MISSING_TYPE, NSMutableDictionary, NSObject, NSString, NSUUID, _TtC8Freeform12CRLShapeItem;
@protocol CRLShapeRepFreehandDrawingDynamicFillErasingDelegate, CRLShapeRepHelperProtocol;

@interface CRLShapeRep
{
    NSObject<CRLShapeRepHelperProtocol> *mHelper;	// 8 = 0x8
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;	// 16 = 0x10
    _Bool mFrameInUnscaledCanvasIsValid;	// 48 = 0x30
    _Bool mDirectlyManagesLayerContentCacheValid;	// 49 = 0x31
    _Bool mDirectlyManagesLayerContent;	// 50 = 0x32
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;	// 56 = 0x38
    _Bool mShadowOnChildrenDisabled;	// 88 = 0x58
    struct _NSRange mCommittedPointRange;	// 96 = 0x60
    struct _NSRange mAvailableToCommitPointRange;	// 112 = 0x70
    unsigned int mOverrideState:2;	// 128 = 0x80
    double mOverriddenValue;	// 136 = 0x88
    struct CGRect mLastDynamicInvalidRect;	// 144 = 0x90
    _Bool mFillChanged;	// 176 = 0xb0
    _Bool mShouldForceRenderableGeometryUpdate;	// 177 = 0xb1
    _Bool mIsInvisibleCacheValid;	// 178 = 0xb2
    _Bool mIsInvisibleCache;	// 179 = 0xb3
    _Bool mNeedsDisplay;	// 180 = 0xb4
    NSMutableDictionary *mHitTestCache;	// 184 = 0xb8
    NSUUID *mDownloadObserverIdentifier;	// 192 = 0xc0
    CRLBezierPath *mCachedWrapPathInRoot;	// 200 = 0xc8
    _Bool _isCurrentlyBeingFreehandDrawn;	// 208 = 0xd0
    id <CRLShapeRepFreehandDrawingDynamicFillErasingDelegate> _freehandDrawingDynamicFillErasingDelegate;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x002000000010e5c2
@property(nonatomic, setter=i_setIsCurrentlyBeingFreehandDrawn:) _Bool i_isCurrentlyBeingFreehandDrawn; // @synthesize i_isCurrentlyBeingFreehandDrawn=_isCurrentlyBeingFreehandDrawn;
@property(nonatomic) _Bool shadowOnChildrenDisabled; // @synthesize shadowOnChildrenDisabled=mShadowOnChildrenDisabled;
@property(nonatomic) __weak id <CRLShapeRepFreehandDrawingDynamicFillErasingDelegate> freehandDrawingDynamicFillErasingDelegate; // @synthesize freehandDrawingDynamicFillErasingDelegate=_freehandDrawingDynamicFillErasingDelegate;
- (_Bool)wantsContextMenuWhenEditingDisabledAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000010e56d
- (void)documentModeDidChange;	// IMP=0x001000000010e52c
- (_Bool)i_editMenuOverlapsEndKnobs;	// IMP=0x001000000010e277
- (struct CGRect)boundsForCollaboratorCursorRenderable;	// IMP=0x001000000010df81
- (_Bool)p_canApplyFillToRenderable;	// IMP=0x001000000010ded8
- (_Bool)p_canApplyStrokeToRenderable;	// IMP=0x001000000010ddb6
- (_Bool)p_pathIsAxisAlignedRect;	// IMP=0x001000000010dbef
- (void)p_endDynamicallyResizingOrMovingLineEnd;	// IMP=0x001000000010db72
- (void)p_beginDynamicallyResizingOrMovingLineEnd;	// IMP=0x001000000010daf5
- (void)p_handleAssetPreparationCompletion;	// IMP=0x001000000010da7d
- (void)p_listenForAssetChangesIfAppropriate;	// IMP=0x001000000010d670
- (void)willBeRemoved;	// IMP=0x001000000010d3ea
- (struct CGRect)p_scaledCanvasScrollViewBounds;	// IMP=0x001000000010d2ba
@property(readonly, nonatomic) struct CGRect i_scaledFrameForFreehandCommittedPathImage;
@property(readonly, nonatomic) struct _NSRange i_uncommittedFreehandDrawingPointRange;
- (void)dynamicallySetBezierPathSource:(id)arg1 atUnscaledOrigin:(struct CGPoint)arg2 withCommittedPointRange:(struct _NSRange)arg3;	// IMP=0x001000000010cb08
- (void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1;	// IMP=0x001000000010ca83
- (void)p_enqueuePathSourceChanges;	// IMP=0x001000000010c66a
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;	// IMP=0x001000000010c557
- (id)dynamicMoveSmartShapeKnobDidBegin;	// IMP=0x001000000010c4ec
@property(readonly, nonatomic) struct CGPoint centerForGuideRenderablePlacement;
- (void)dynamicMoveLineSegmentDidEndWithTracker:(id)arg1;	// IMP=0x001000000010c351
- (void)dynamicallyMovingLineSegmentWithTracker:(id)arg1;	// IMP=0x001000000010c2a4
- (id)dynamicMoveLineSegmentDidBegin;	// IMP=0x001000000010c26e
- (void)dynamicMovePathKnobDidEndWithTracker:(id)arg1;	// IMP=0x001000000010c194
- (void)dynamicallyMovedPathKnobTo:(struct CGPoint)arg1 withTracker:(id)arg2;	// IMP=0x001000000010c0b8
- (void)dynamicMovePathKnobDidBegin;	// IMP=0x001000000010c063
- (_Bool)isEditingPath;	// IMP=0x001000000010c030
- (id)p_pathEditor;	// IMP=0x001000000010bf8b
@property(readonly, nonatomic) struct CGAffineTransform naturalToEditablePathSpaceTransform;
@property(readonly, nonatomic) CRLEditableBezierPathSource *editablePathSource;
- (_Bool)canMakePathEditable;	// IMP=0x001000000010bded
- (_Bool)isPathEditable;	// IMP=0x001000000010bd70
- (_Bool)canBeginEditing;	// IMP=0x001000000010bbec
- (void)beginEditing;	// IMP=0x001000000010b84e
- (void)beginEditingWithString:(id)arg1;	// IMP=0x001000000010b4a7
- (id)dataForUpdateUploadIndicator;	// IMP=0x001000000010b38b
- (void)dynamicallyResizingWithTracker:(id)arg1;	// IMP=0x001000000010b34a
- (void)dynamicallyRotatingWithTracker:(id)arg1;	// IMP=0x001000000010b2c4
- (_Bool)canDrawInParallel;	// IMP=0x001000000010b2bc
- (void)invalidateExteriorWrap;	// IMP=0x001000000010b29b
- (void)invalidateEffectLayersForChildren;	// IMP=0x001000000010b1f4
@property(readonly, nonatomic) _Bool allowsColorDrop;
- (void)dynamicFreeTransformDidEndWithTracker:(id)arg1;	// IMP=0x001000000010b188
- (MISSING_TYPE *)dynamicResizeDidEndWithTracker: /* Error: Ran out of types for this method. */;	// IMP=0x001000000010b147
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;	// IMP=0x001000000010a850
- (_Bool)shouldSetPathSourceWhenChangingInfoGeometry;	// IMP=0x001000000010a848
- (void)dynamicFreeTransformDidBeginWithTracker:(id)arg1;	// IMP=0x001000000010a807
- (id)dynamicResizeDidBegin;	// IMP=0x001000000010a7b0
- (id)overlayRenderables;	// IMP=0x001000000010a266
- (id)additionalRenderablesOverRenderable;	// IMP=0x0010000000109d5a
- (_Bool)selectionIsAppropriateToShowInvisiblePathHighlight;	// IMP=0x0010000000109cdf
- (_Bool)shouldShowInvisiblePathHighlight;	// IMP=0x0010000000109aa0
- (id)newTrackerForKnob:(id)arg1;	// IMP=0x001000000010976b
- (id)cursorAtPoint:(struct CGPoint)arg1 forKnob:(id)arg2 withCursorPlatformObject:(id)arg3;	// IMP=0x001000000010961b
- (void)updatePositionsOfKnobs:(id)arg1;	// IMP=0x0010000000108cf8
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;	// IMP=0x0010000000108c00
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;	// IMP=0x0010000000108b7b
- (_Bool)shouldShowSmartShapeKnobs;	// IMP=0x0010000000108adb
- (_Bool)shouldShowAdvancedGradientKnobs;	// IMP=0x001000000010881d
- (_Bool)shouldShowAdditionalKnobs;	// IMP=0x0010000000108743
- (void)addSelectionKnobsToArray:(id)arg1;	// IMP=0x001000000010826d
- (_Bool)p_parentFreehandDrawingIsSelected;	// IMP=0x00100000001080f2
- (unsigned long long)enabledKnobMask;	// IMP=0x001000000010803c
- (_Bool)shouldShowKnobs;	// IMP=0x0010000000107f25
- (_Bool)canBeUsedForImageMask;	// IMP=0x0010000000107ccb
- (void)p_forDragAndDropSetColor:(id)arg1;	// IMP=0x001000000010779d
- (_Bool)handleDragOperation:(unsigned long long)arg1 withDragInfo:(id)arg2 atUnscaledPoint:(struct CGPoint)arg3;	// IMP=0x001000000010743c
- (_Bool)i_targetsDropsToStroke;	// IMP=0x00100000001073ca
- (unsigned long long)dragOperationForDragInfo:(id)arg1 atUnscaledPoint:(struct CGPoint)arg2;	// IMP=0x0010000000107257
- (id)repToHighlightForDragInfo:(id)arg1 atUnscaledPoint:(struct CGPoint)arg2;	// IMP=0x0010000000107158
- (struct CGPath *)newHighlightPathInScaledSpace;	// IMP=0x0010000000106ee9
- (id)pathSourceForSelectionHighlightBehavior;	// IMP=0x0010000000106e99
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;	// IMP=0x0010000000106e0e
- (_Bool)shouldIgnoreICCSuppressSelectionKnobs;	// IMP=0x0010000000106d94
- (_Bool)shouldSuppressSelectionHighlightDuringMultiselection;	// IMP=0x0010000000106d1f
- (_Bool)shouldShowSelectionHighlight;	// IMP=0x0010000000106bff
- (struct CGRect)targetRectForEditMenu;	// IMP=0x0010000000106ac5
- (void)dynamicDragDidEnd;	// IMP=0x0010000000106923
- (void)dynamicDragDidBegin;	// IMP=0x0010000000106839
- (void)dynamicOperationDidEnd;	// IMP=0x00100000001067e2
- (struct CGRect)aliasedAlignmentFrameInLayerFrame;	// IMP=0x0010000000106654
- (void)processChangedProperty:(unsigned long long)arg1;	// IMP=0x0010000000106508
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;	// IMP=0x0010000000106323
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;	// IMP=0x0010000000106029
- (_Bool)shouldExpandHitRegionWhenSmall;	// IMP=0x0010000000105fb5
- (_Bool)containsPoint:(struct CGPoint)arg1 withPrecision:(_Bool)arg2;	// IMP=0x00100000001058ce
- (void)p_hitCacheSetCachedValue:(_Bool)arg1 forPoint:(struct CGPoint)arg2 withPrecision:(_Bool)arg3;	// IMP=0x00100000001057d9
- (_Bool)p_hitCacheGetCachedValue:(_Bool *)arg1 forPoint:(struct CGPoint)arg2 withPrecision:(_Bool)arg3;	// IMP=0x00100000001056de
- (void)p_invalidateHitTestCache;	// IMP=0x00100000001056c1
- (_Bool)shouldHitTestWithFill;	// IMP=0x00100000001054d3
- (void)didUpdateRenderable:(id)arg1;	// IMP=0x00100000001039f6
- (void)willUpdateRenderable:(id)arg1;	// IMP=0x00100000001037ca
- (void)updateRenderableGeometryFromLayout:(id)arg1;	// IMP=0x00100000001036cf
- (void)viewScaleDidChange;	// IMP=0x0010000000103693
- (struct CGSize)p_sizeForDirectlyManagedImageFromRenderableSize:(struct CGSize)arg1;	// IMP=0x0010000000103618
- (_Bool)p_currentlyDrawingSomeOtherShape;	// IMP=0x001000000010344e
- (_Bool)p_shouldSkipRenderableRecalculations;	// IMP=0x001000000010341b
- (void)i_forceInvalidateLayerFrame;	// IMP=0x00100000001033c4
- (Class)layerClass;	// IMP=0x001000000010334e
- (_Bool)isEditingChildRep;	// IMP=0x0010000000103346
- (_Bool)wantsRenderableToBeDescendedFromParentRepRenderable;	// IMP=0x0010000000103296
- (_Bool)directlyManagesLayerContent;	// IMP=0x00100000001030e1
- (unsigned long long)p_renderingDestination;	// IMP=0x0010000000102e92
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;	// IMP=0x0010000000102e31
- (_Bool)skipsRerenderForTranslation;	// IMP=0x0010000000102d6f
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;	// IMP=0x0010000000102ce8
- (struct CGRect)layerFrameInScaledCanvas;	// IMP=0x0010000000102cae
- (struct CGRect)p_layerFrameInScaledCanvasForDirectlyManagedLayer:(_Bool)arg1;	// IMP=0x0010000000102a90
- (void)p_forceSetNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x0010000000102a29
- (void)p_forceSetNeedsDisplay;	// IMP=0x00100000001029ed
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x00100000001029b6
- (void)setNeedsDisplay;	// IMP=0x001000000010293c
- (_Bool)p_isInsidePlayingFreehandDrawing;	// IMP=0x0010000000102928
- (id)i_strokeForRenderingIncludingPlaybackFromStroke:(id)arg1;	// IMP=0x00100000001028ab
- (_Bool)p_shouldUpgradeStrokeForPlayback:(id)arg1;	// IMP=0x00100000001027e7
- (_Bool)shouldShowShadow;	// IMP=0x0010000000102757
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;	// IMP=0x0010000000102648
- (id)i_brushStrokeFromStroke:(id)arg1;	// IMP=0x00100000001024d9
- (struct _NSRange)i_commitAvailableFreehandDrawingPointsIfPossible;	// IMP=0x0010000000102467
- (unsigned long long)i_bitmapContextOptionsForContextDestinedToDrawIntoCALayerContextForDrawingStroke:(id)arg1;	// IMP=0x0010000000102455
- (unsigned long long)p_bitmapContextOptionsForDrawingStroke:(id)arg1;	// IMP=0x0010000000102437
- (_Bool)p_shouldDrawStrokeWide:(id)arg1;	// IMP=0x00100000001023ac
- (void)i_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;	// IMP=0x00100000001021f5
@property(readonly, nonatomic) _Bool isPartiallyAnimated;
- (double)opacity;	// IMP=0x0010000000101ea0
@property(readonly, nonatomic) double strokeEnd;
- (_Bool)canDrawWithOtherShapeRep:(id)arg1;	// IMP=0x0010000000101b45
@property(readonly, nonatomic) _Bool isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
- (_Bool)isInvisible;	// IMP=0x001000000010193c
- (id)imageOfStroke:(struct CGRect *)arg1;	// IMP=0x001000000010175d
- (struct CGRect)strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(struct CGRect)arg2;	// IMP=0x00100000001016cf
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 usingPathOverride:(id)arg5 patternOffsetsBySubpathOverride:(id)arg6 transparencyLayersBySubpath:(id)arg7;	// IMP=0x00100000001016a7
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4;	// IMP=0x001000000010167c
- (void)drawInContext:(struct CGContext *)arg1 usingPathOverride:(id)arg2 patternOffsetsBySubpathOverride:(id)arg3 transparencyLayersBySubpath:(id)arg4;	// IMP=0x0010000000101642
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;	// IMP=0x001000000010155e
- (void)drawInLayerContext:(struct CGContext *)arg1;	// IMP=0x0010000000101515
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000001014e6
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x001000000010129c
- (id)colorBehindLayer:(id)arg1;	// IMP=0x00100000001011cd
- (void)i_endApplyOpacity:(struct CGContext *)arg1 appliedTransparencyLayer:(_Bool)arg2;	// IMP=0x00100000001011ba
- (_Bool)i_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;	// IMP=0x0010000000100f11
- (struct CGRect)clipRect;	// IMP=0x0010000000100e3e
- (struct CGRect)frameInUnscaledCanvas;	// IMP=0x0010000000100c9d
- (void)setParentRep:(id)arg1;	// IMP=0x00100000001009b8
@property(readonly, nonatomic) CRLShapeLayout *shapeLayout;
@property(readonly, nonatomic) _TtC8Freeform12CRLShapeItem *shapeInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;	// IMP=0x0010000000100740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
