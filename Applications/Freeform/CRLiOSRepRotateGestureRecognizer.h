//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class CRLCanvasRep, CRLInteractiveCanvasController, NSObject, UITouch;
@protocol CRLCanvasLayoutManipulatingTracker, CRLCanvasRepRotateTracking;

@interface CRLiOSRepRotateGestureRecognizer : UIGestureRecognizer
{
    CRLInteractiveCanvasController *mICC;	// 8 = 0x8
    UITouch *mTouch1;	// 16 = 0x10
    UITouch *mTouch2;	// 24 = 0x18
    struct CGPoint mOriginalUnscaledPoint1;	// 32 = 0x20
    struct CGPoint mOriginalUnscaledPoint2;	// 48 = 0x30
    struct CGPoint mLastProcessedTouchUnscaledPoint1;	// 64 = 0x40
    struct CGPoint mLastProcessedTouchUnscaledPoint2;	// 80 = 0x50
    unsigned long long mMovingTouchIndex;	// 96 = 0x60
    double mOriginalBoundsDistance;	// 104 = 0x68
    struct CGPoint mUnscaledRotationCenter;	// 112 = 0x70
    double mAdditionalRotateInRadians;	// 128 = 0x80
    double mLastAngle;	// 136 = 0x88
    _Bool mPinningTouchIsPresent;	// 144 = 0x90
    _Bool mRecognitionIsBeingDelayed;	// 145 = 0x91
    CRLCanvasRep *mRep;	// 152 = 0x98
    id <CRLCanvasRepRotateTracking> mTracker;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000005249c6
- (void)p_updateTracker;	// IMP=0x0010000000524816
- (void)p_cancelDelayedRecognition;	// IMP=0x00100000005247da
- (void)p_recognizeAfterDelay:(double)arg1;	// IMP=0x00100000005247ac
- (void)p_beginTracking;	// IMP=0x00100000005242f7
- (double)p_angleForUnscaledTouchPoint:(struct CGPoint)arg1;	// IMP=0x00100000005242ce
- (_Bool)p_touchIsInRep:(id)arg1;	// IMP=0x00100000005241d4
- (void)operationDidEnd;	// IMP=0x001000000052412c
- (_Bool)readyToEndOperation;	// IMP=0x0010000000524112
@property(readonly, nonatomic) NSObject<CRLCanvasLayoutManipulatingTracker> *tracker;
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;	// IMP=0x00100000005240f5
- (_Bool)touchesAreInRep;	// IMP=0x00100000005240b2
- (double)rotation;	// IMP=0x0010000000523eb0
- (void)cancelBecauseOfRotation;	// IMP=0x0010000000523e89
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000523c9e
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000052387e
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00100000005229a4
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000521f43
- (void)reset;	// IMP=0x0010000000521e84
- (void)setState:(long long)arg1;	// IMP=0x0010000000521e3c
- (void)dealloc;	// IMP=0x0010000000521dfe
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x0010000000521bb9

// Remaining properties
@property(readonly, nonatomic) _Bool allowUndoRedoOperations;

@end

