//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLInteractiveCanvasController;

@interface CRLFreehandDrawingTool : NSObject
{
    CRLInteractiveCanvasController *_icc;	// 8 = 0x8
    long long _firstInputType;	// 16 = 0x10
    _Bool _isPerformingActions;	// 24 = 0x18
    _Bool _isCurrentlyTracking;	// 25 = 0x19
    long long _currentInputType;	// 32 = 0x20
}

+ (id)closestDrawingLayout:(id)arg1 toPoint:(struct CGPoint)arg2 returningDistance:(double *)arg3;	// IMP=0x00200000002c2653
- (void).cxx_destruct;	// IMP=0x00100000002c262f
@property(readonly, nonatomic) long long currentInputType; // @synthesize currentInputType=_currentInputType;
@property(readonly, nonatomic, getter=isCurrentlyTracking) _Bool currentlyTracking; // @synthesize currentlyTracking=_isCurrentlyTracking;
@property(readonly, nonatomic, getter=isPerformingActions) _Bool performingActions; // @synthesize performingActions=_isPerformingActions;
- (void)updatePencilKitToolIfAppropriateFor:(id)arg1;	// IMP=0x00100000002c260d
- (_Bool)shouldCommandsEnqueueInRealTime;	// IMP=0x00100000002c2605
- (_Bool)wantsDragForTouchType:(long long)arg1 atUnscaledPoint:(struct CGPoint)arg2;	// IMP=0x00100000002c25fd
@property(readonly, nonatomic) unsigned long long type;
- (void)clearIsCurrentlyTracking;	// IMP=0x00100000002c2255
- (_Bool)finalizeAndReset;	// IMP=0x00100000002c21d7
- (void)doWorkBeforeCanvasLayout;	// IMP=0x00100000002c21d1
- (void)estimatedPropertiesUpdatedOnInputPoint:(id)arg1;	// IMP=0x00100000002c21cb
- (void)performActionWithInputPoint:(id)arg1 isInitialPoint:(_Bool)arg2 isFinalPoint:(_Bool)arg3;	// IMP=0x00100000002c1f9a
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x00100000002c1f36
- (_Bool)selectInsideClosestDrawing:(id)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00100000002c2a01
- (id)possibleFreehandDrawingLayoutsInParentContainerAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000002c2948
@property(readonly, nonatomic) CRLInteractiveCanvasController *icc;

@end

