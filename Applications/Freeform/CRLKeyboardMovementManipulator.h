//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasRepDragTracker, CRLInteractiveCanvasController;
@protocol CRLCanvasLayoutManipulatingTracker;

@interface CRLKeyboardMovementManipulator : NSObject
{
    CRLInteractiveCanvasController *mICC;	// 8 = 0x8
    CRLCanvasRepDragTracker *mTracker;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000038b5ab
@property(readonly, nonatomic) CRLInteractiveCanvasController *i_ICC;
- (void)operationDidEnd;	// IMP=0x001000000038b587
- (_Bool)readyToEndOperation;	// IMP=0x001000000038b57f
- (_Bool)allowTrackerManipulatorToTakeControl:(id)arg1;	// IMP=0x001000000038b577
@property(readonly, nonatomic) NSObject<CRLCanvasLayoutManipulatingTracker> *tracker;
- (void)duplicateSelectionMovingByDelta:(struct CGPoint)arg1;	// IMP=0x001000000038ad02
- (void)moveSelectionByDelta:(struct CGPoint)arg1;	// IMP=0x001000000038a4e7
- (double)p_movementFactorInPixelSpace:(long long)arg1;	// IMP=0x001000000038a4b1
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x001000000038a446

// Remaining properties
@property(readonly, nonatomic) _Bool allowUndoRedoOperations;

@end

