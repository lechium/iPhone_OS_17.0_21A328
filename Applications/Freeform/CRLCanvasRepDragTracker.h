//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasAutoscroll, CRLCanvasHUDController, CRLCanvasRep, CRLCanvasShapeRenderable, NSArray, NSMapTable, NSMutableSet, NSString, UIImpactFeedbackGenerator;

@interface CRLCanvasRepDragTracker : NSObject
{
    CRLCanvasRep *mRep;	// 8 = 0x8
    _Bool mDidBeginDrag;	// 16 = 0x10
    _Bool mHaveShownHUD;	// 17 = 0x11
    _Bool mHaveShownSecondHUD;	// 18 = 0x12
    _Bool mDidDuplicateWhenDragBegan;	// 19 = 0x13
    _Bool mIsInspectorDrivenTracking;	// 20 = 0x14
    _Bool mIsDragInsertDrivenTracking;	// 21 = 0x15
    _Bool mIsArrowkeyDrivenTracking;	// 22 = 0x16
    struct CGPoint mInitialDragPoint;	// 24 = 0x18
    struct CGPoint mActualDragPoint;	// 40 = 0x28
    _Bool mHaveSetPreviousActualDragPoint;	// 56 = 0x38
    struct CGPoint mPreviousActualDragPoint;	// 64 = 0x40
    struct CGPoint mLogicalDragPoint;	// 80 = 0x50
    CRLCanvasHUDController *mSecondHUDController;	// 96 = 0x60
    struct CGPoint mUnscaledDragDelta;	// 104 = 0x68
    _Bool mRoundDragDelta;	// 120 = 0x78
    CRLCanvasAutoscroll *mAutoscroll;	// 128 = 0x80
    struct CGPoint mAutoscrollPoint;	// 136 = 0x88
    NSMapTable *mMapRepsToSnapOffsets;	// 152 = 0x98
    _Bool mShouldConstrain;	// 160 = 0xa0
    double mSnapLevel;	// 168 = 0xa8
    double mConstraintAngle;	// 176 = 0xb0
    struct CGPoint mConstrainingPoint;	// 184 = 0xb8
    _Bool mConstraintGuidesShowing;	// 200 = 0xc8
    CRLCanvasShapeRenderable *mGuideRenderable;	// 208 = 0xd0
    _Bool mShouldShowGuides;	// 216 = 0xd8
    _Bool mShouldSnapToGuides;	// 217 = 0xd9
    _Bool mPreventOpeningCommandGroupWhenCommittingChangesForReps;	// 218 = 0xda
    NSMutableSet *mConnectedLineLayouts;	// 224 = 0xe0
    NSMutableSet *mParentLayoutsForInvalidatingForAncestorCollabCursors;	// 232 = 0xe8
    _Bool mShowDragHUD;	// 240 = 0xf0
    _Bool mTrackerDidBeginDragging;	// 241 = 0xf1
    UIImpactFeedbackGenerator *mImpactFeedbackGenerator;	// 248 = 0xf8
    _Bool mIsEnqueueingCommandsInRealTime;	// 256 = 0x100
    _Bool mShouldSuppressConstrainingHUD;	// 257 = 0x101
}

- (void).cxx_destruct;	// IMP=0x00200000005e7a07
@property(nonatomic) _Bool isArrowkeyDrivenTracking; // @synthesize isArrowkeyDrivenTracking=mIsArrowkeyDrivenTracking;
@property(retain, nonatomic) CRLCanvasRep *rep; // @synthesize rep=mRep;
@property(nonatomic) _Bool isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mIsInspectorDrivenTracking;
@property(nonatomic) _Bool shouldSnapToGuides; // @synthesize shouldSnapToGuides=mShouldSnapToGuides;
@property(nonatomic) _Bool shouldShowGuides; // @synthesize shouldShowGuides=mShouldShowGuides;
@property(nonatomic) _Bool showDragHUD; // @synthesize showDragHUD=mShowDragHUD;
@property(nonatomic) _Bool isDragInsertDrivenTracking; // @synthesize isDragInsertDrivenTracking=mIsDragInsertDrivenTracking;
@property(readonly, nonatomic) _Bool didBeginDrag; // @synthesize didBeginDrag=mDidBeginDrag;
@property(nonatomic) _Bool shouldSuppressConstrainingHUD; // @synthesize shouldSuppressConstrainingHUD=mShouldSuppressConstrainingHUD;
@property(readonly, nonatomic) _Bool isEnqueueingCommandsInRealTime; // @synthesize isEnqueueingCommandsInRealTime=mIsEnqueueingCommandsInRealTime;
- (id)p_repsForInfos:(id)arg1 fromReps:(id)arg2;	// IMP=0x00100000005e7724
- (id)p_infosFromReps:(id)arg1;	// IMP=0x00100000005e7555
- (_Bool)p_delegateIsHandlingDrag;	// IMP=0x00100000005e754d
- (void)p_hideGuideRenderable;	// IMP=0x00100000005e751f
- (void)p_showGuideRenderable;	// IMP=0x00100000005e7519
- (struct CGRect)p_selectedInfosRect;	// IMP=0x00100000005e72a0
- (void)p_updateGuides;	// IMP=0x00100000005e71f1
- (void)p_hideHUD;	// IMP=0x00100000005e716b
- (void)p_updateHUDAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000005e6b13
- (void)p_updateHUDFromTimer;	// IMP=0x00100000005e6af7
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000005e6ade
- (_Bool)allowsDelegateToDisplayUIForDragOperation;	// IMP=0x00100000005e6ad6
@property(readonly, nonatomic) NSArray *decoratorOverlayRenderables;
- (_Bool)traceIfDesiredForEndOperation;	// IMP=0x00100000005e68ac
- (_Bool)traceIfDesiredForBeginOperation;	// IMP=0x00100000005e680e
- (_Bool)allowPopoverToRemainOpenDuringDynamicOperation;	// IMP=0x00100000005e67fc
- (void)didChangeCurrentlyTransformingReps;	// IMP=0x00100000005e5e46
- (_Bool)operationShouldBeDynamic;	// IMP=0x00100000005e5e3e
- (_Bool)supportsAlignmentGuides;	// IMP=0x00100000005e5e07
- (id)repsForGuidesWhenManipulatingReps:(id)arg1;	// IMP=0x00100000005e5dea
- (void)didEndDynamicOperationForReps:(id)arg1;	// IMP=0x00100000005e5dd8
- (void)commitChangesForReps:(id)arg1;	// IMP=0x00100000005e5a86
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;	// IMP=0x00100000005e5a5d
- (void)changeDynamicLayoutsForReps:(id)arg1;	// IMP=0x00100000005e3830
- (void)willBeginDynamicOperationForReps:(id)arg1;	// IMP=0x00100000005e373e
@property(readonly, nonatomic) _Bool objectsWillBeCopiedAtDropTimeIfAppropriate;
- (void)p_didBeginDrag;	// IMP=0x00100000005e362a
- (void)preventOpeningCommandGroupWhenCommittingChangesForReps;	// IMP=0x00100000005e361d
- (void)setConstrainingPoint:(struct CGPoint)arg1;	// IMP=0x00100000005e3607
- (void)setSnapLevel:(double)arg1;	// IMP=0x00100000005e3401
- (void)setShouldConstrain:(_Bool)arg1;	// IMP=0x00100000005e33bb
- (void)setLogicalDragPoint:(struct CGPoint)arg1;	// IMP=0x00100000005e33ab
- (void)setActualDragPoint:(struct CGPoint)arg1;	// IMP=0x00100000005e332f
- (void)addUnscaledDragDelta:(struct CGPoint)arg1 roundDeltaToViewScale:(_Bool)arg2;	// IMP=0x00100000005e32fd
- (_Bool)insertInfosAndUpdateDragForDuplicatingDragIfAppropriate;	// IMP=0x00100000005e27c4
- (void)endPossibleRepDragGesture;	// IMP=0x00100000005e270c
- (void)willEndPossibleRepDragGesture;	// IMP=0x00100000005e2706
- (void)beginShowingDragUIForInitialDragPoint:(struct CGPoint)arg1;	// IMP=0x00100000005e23e2
- (void)activateUIFeedback;	// IMP=0x00100000005e23c9
- (void)dealloc;	// IMP=0x00100000005e234a
- (id)initWithRep:(id)arg1;	// IMP=0x00100000005e207a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool disallowAllActionsWhileTracking;
@property(readonly, nonatomic) _Bool disallowCanvasGrowingWhileTracking;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

