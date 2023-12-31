//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLPKStrokePathCompactData, NSArray, PKStroke, _TtC8Freeform35CRLiOSPencilKitCanvasViewController;

@interface CRLFreehandDrawingToolStroke
{
    _TtC8Freeform35CRLiOSPencilKitCanvasViewController *_pencilKitCanvasViewController;	// 8 = 0x8
    unsigned long long _toolType;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    double _unscaledWidth;	// 32 = 0x20
    _Bool _isEnqueueingCommandsInRealTime;	// 40 = 0x28
    PKStroke *_lastPKStrokeSetInRealTime;	// 48 = 0x30
    PKStroke *_finalPKStroke;	// 56 = 0x38
    NSArray *_finalPKShapeStrokes;	// 64 = 0x40
    CRLPKStrokePathCompactData *_currentStrokePathData;	// 72 = 0x48
}

+ (_Bool)p_isStrokeToolType:(unsigned long long)arg1;	// IMP=0x004000000048d8b8
- (void).cxx_destruct;	// IMP=0x0020000000490384
@property(nonatomic) double unscaledWidth; // @synthesize unscaledWidth=_unscaledWidth;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (id)p_currentPKInkType;	// IMP=0x00100000004900e6
- (void)updatePencilKitToolIfAppropriateFor:(id)arg1;	// IMP=0x001000000048fff1
- (_Bool)finalizeAndReset;	// IMP=0x001000000048f306
- (void)p_endDrawingAndCaptureFinalStroke;	// IMP=0x001000000048f025
- (void)estimatedPropertiesUpdatedOnInputPoint:(id)arg1;	// IMP=0x001000000048eeaa
- (void)p_enqueueRealTimeCommandsForPathUpdateIfNeeded;	// IMP=0x001000000048e0a5
- (void)performActionWithInputPoint:(id)arg1 isInitialPoint:(_Bool)arg2 isFinalPoint:(_Bool)arg3;	// IMP=0x001000000048dbd0
- (_Bool)shouldCommandsEnqueueInRealTime;	// IMP=0x001000000048db77
- (unsigned long long)type;	// IMP=0x001000000048db66
- (id)p_currentColorWithOpacity;	// IMP=0x001000000048dab5
- (id)initWithInteractiveCanvasController:(id)arg1 pencilKitCanvasViewController:(id)arg2 strokeToolType:(unsigned long long)arg3 opacity:(double)arg4 unscaledWidth:(double)arg5;	// IMP=0x001000000048d624

@end

