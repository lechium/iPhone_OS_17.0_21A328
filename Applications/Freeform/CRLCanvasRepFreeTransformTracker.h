//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasShapeRenderable, CRLInteractiveCanvasController, MISSING_TYPE, NSArray, NSMapTable, NSSet, NSString;

@interface CRLCanvasRepFreeTransformTracker : NSObject
{
    CRLInteractiveCanvasController *mICC;	// 8 = 0x8
    NSSet *mReps;	// 16 = 0x10
    struct CGPoint mUnscaledPivotPoint;	// 24 = 0x18
    NSMapTable *mLayoutToSelectedRepMap;	// 40 = 0x28
    NSMapTable *mLayoutToCenterForRotationMap;	// 48 = 0x30
    _Bool mStartedFreeTransform;	// 56 = 0x38
    _Bool mIgnoreDetents;	// 57 = 0x39
    _Bool mInRotateResizeMode;	// 58 = 0x3a
    _Bool mStartedDragging;	// 59 = 0x3b
    _Bool mIsDragging;	// 60 = 0x3c
    struct CGPoint mUnscaledDrag;	// 64 = 0x40
    struct CGPoint mUnscaledDragDelta;	// 80 = 0x50
    struct CGPoint mUnscaledDragDetent;	// 96 = 0x60
    struct CGPoint mLastUnscledDrag;	// 112 = 0x70
    _Bool mShouldShowAndSnapToAlignmentGuides;	// 128 = 0x80
    _Bool mSnappedInX;	// 129 = 0x81
    _Bool mSnappedInY;	// 130 = 0x82
    _Bool mShouldRenderGuideInX;	// 131 = 0x83
    _Bool mShouldRenderGuideInY;	// 132 = 0x84
    struct CGPoint mPreviousDragSnapDiff;	// 136 = 0x88
    struct CGPoint mSmoothedDragSpeed;	// 152 = 0x98
    struct CGRect mAlignmentRect;	// 168 = 0xa8
    double mLastUpdateGuidesTimestamp;	// 200 = 0xc8
    _Bool mSupportsRotation;	// 208 = 0xd0
    _Bool mStartedRotation;	// 209 = 0xd1
    _Bool mIsRotating;	// 210 = 0xd2
    _Bool mShouldShowRotationGuide;	// 211 = 0xd3
    MISSING_TYPE *mOriginalAngleInDegrees;	// 216 = 0xd8
    double mRotateDeltaInRadians;	// 224 = 0xe0
    double mCurrentAngleInDegrees;	// 232 = 0xe8
    double mLastAngleInDegrees;	// 240 = 0xf0
    _Bool mRotationSnapped;	// 248 = 0xf8
    double mRotationDetent;	// 256 = 0x100
    double mRotationInitialDetentThreshold;	// 264 = 0x108
    double mRotationDetentThreshold;	// 272 = 0x110
    double mRotationGuideLength;	// 280 = 0x118
    CRLCanvasShapeRenderable *mRotationGuideRenderable;	// 288 = 0x120
    _Bool mStartedMagnification;	// 296 = 0x128
    _Bool mIsResizing;	// 297 = 0x129
    _Bool mHasEverResized;	// 298 = 0x12a
    double mMagnificationStartOffset;	// 304 = 0x130
    double mMagnifyBy;	// 312 = 0x138
    double mLastMagnifyBy;	// 320 = 0x140
    double mMinimumMagnification;	// 328 = 0x148
    _Bool mIsEnqueueingCommandsInRealTime;	// 336 = 0x150
    _Bool _inRotateResizeMode;	// 337 = 0x151
}

- (void).cxx_destruct;	// IMP=0x00200000001e47c4
@property(nonatomic) _Bool inRotateResizeMode; // @synthesize inRotateResizeMode=_inRotateResizeMode;
@property(readonly, nonatomic) _Bool isEnqueueingCommandsInRealTime; // @synthesize isEnqueueingCommandsInRealTime=mIsEnqueueingCommandsInRealTime;
@property(readonly, nonatomic) _Bool hasEverResized; // @synthesize hasEverResized=mHasEverResized;
@property(readonly, nonatomic) _Bool isResizing; // @synthesize isResizing=mIsResizing;
@property(readonly, nonatomic) _Bool isRotating; // @synthesize isRotating=mIsRotating;
@property(readonly, nonatomic) _Bool isDragging; // @synthesize isDragging=mIsDragging;
@property(nonatomic) _Bool shouldShowRotationGuide; // @synthesize shouldShowRotationGuide=mShouldShowRotationGuide;
@property(nonatomic) _Bool shouldShowAndSnapToAlignmentGuides; // @synthesize shouldShowAndSnapToAlignmentGuides=mShouldShowAndSnapToAlignmentGuides;
@property(nonatomic) double rotationDetentThreshold; // @synthesize rotationDetentThreshold=mRotationDetentThreshold;
@property(nonatomic) double rotationInitialDetentThreshold; // @synthesize rotationInitialDetentThreshold=mRotationInitialDetentThreshold;
- (void)p_updateDragGuidesAndSnap:(struct CGPoint)arg1;	// IMP=0x00100000001e42e8
- (void)p_hideGuideRenderable;	// IMP=0x00100000001e41a7
- (void)p_updateGuideRenderableWithAngle:(double)arg1 didSnap:(_Bool)arg2;	// IMP=0x00100000001e3cf1
- (struct CGAffineTransform)p_translationTransformForLayout:(id)arg1;	// IMP=0x00100000001e3b9b
- (struct CGPoint)p_scaledCenterForRotation;	// IMP=0x00100000001e3b7b
- (struct CGPoint)pivotPointForLayout:(id)arg1;	// IMP=0x00100000001e38a4
- (void)p_updateCenterForRotationIfNecessary;	// IMP=0x00100000001e371f
- (struct CGPoint)p_centerForRotationForRep:(id)arg1 inUnscaledBoundingRect:(struct CGRect)arg2;	// IMP=0x00100000001e35fa
- (struct CGRect)p_unscaledBoundingRectForReps:(id)arg1;	// IMP=0x00100000001e33e4
- (void)p_begin;	// IMP=0x00100000001e31ff
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000001e31a6
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000001e318d
@property(readonly, nonatomic) NSArray *decoratorOverlayRenderables;
- (_Bool)shouldAllowScroll;	// IMP=0x00100000001e3106
- (_Bool)traceIfDesiredForEndOperation;	// IMP=0x00100000001e301c
- (_Bool)traceIfDesiredForBeginOperation;	// IMP=0x00100000001e2f79
- (_Bool)operationShouldBeDynamic;	// IMP=0x00100000001e2f71
- (_Bool)supportsAlignmentGuides;	// IMP=0x00100000001e2f69
- (void)commitChangesForReps:(id)arg1;	// IMP=0x00100000001e2b76
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;	// IMP=0x00100000001e2b6e
- (void)applyNewBoundsToRep:(id)arg1;	// IMP=0x00100000001e2738
- (struct CGAffineTransform)freeTransformForLayout:(id)arg1;	// IMP=0x00100000001e25ad
- (struct CGAffineTransform)resizeTransformForLayout:(id)arg1;	// IMP=0x00100000001e215b
- (struct CGAffineTransform)rotateTransformForLayout:(id)arg1;	// IMP=0x00100000001e1dab
- (void)changeDynamicLayoutsForReps:(id)arg1;	// IMP=0x00100000001e127a
- (void)willBeginDynamicOperationForReps:(id)arg1;	// IMP=0x00100000001e110d
- (id)currentGeometryForLayout:(id)arg1;	// IMP=0x00100000001e0ac7
- (id)selectedRepForLayout:(id)arg1;	// IMP=0x00100000001e065a
- (struct CGSize)currentSizeForLayout:(id)arg1;	// IMP=0x00100000001e05f8
- (void)setMagnification:(double)arg1;	// IMP=0x00100000001e0553
- (void)addRotateDelta:(double)arg1;	// IMP=0x00100000001e0539
- (void)addUnscaledDragDelta:(struct CGPoint)arg1;	// IMP=0x00100000001e042c
- (void)dealloc;	// IMP=0x00100000001e03e5
- (id)initWithReps:(id)arg1;	// IMP=0x00100000001dfc0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool disallowAllActionsWhileTracking;
@property(readonly, nonatomic) _Bool disallowCanvasGrowingWhileTracking;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

