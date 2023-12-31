//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIKBHandwritingView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokeView : UIView
{
    UIKBHandwritingView *_keyView;	// 8 = 0x8
    struct CGContext *_bitmapContext;	// 16 = 0x10
    double _scaleFactor;	// 24 = 0x18
    struct CGRect _aggregateInvalidRect;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b5b197
@property(readonly, nonatomic) struct CGRect aggregateInvalidRect; // @synthesize aggregateInvalidRect=_aggregateInvalidRect;
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) struct CGContext *bitmapContext; // @synthesize bitmapContext=_bitmapContext;
@property(nonatomic) __weak UIKBHandwritingView *keyView; // @synthesize keyView=_keyView;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000b5a7b3
- (void)displayAggregateInvalidRect;	// IMP=0x0000000000b5a736
- (void)redrawStrokesInRect:(struct CGRect)arg1;	// IMP=0x0000000000b5a14e
- (struct)viewPointFromDataPoint:(struct)arg1;	// IMP=0x0000000000b5a0c6
- (void)clearRect:(struct CGRect)arg1;	// IMP=0x0000000000b59eb1
- (void)addTrapezoidFromFirstPoint:(struct)arg1 secondPoint:(struct)arg2;	// IMP=0x0000000000b59b60
- (void)addHandwritingPoint:(struct)arg1;	// IMP=0x0000000000b59a34
- (struct CGRect)convertRectToViewCoordinates:(struct CGRect)arg1;	// IMP=0x0000000000b59a04
- (struct CGRect)convertRectToBitmapCoordinates:(struct CGRect)arg1;	// IMP=0x0000000000b599d8
- (void)updateInkColor;	// IMP=0x0000000000b59968
- (void)createBitmapIfNeeded;	// IMP=0x0000000000b59665
- (struct CGRect)handwritingPointToRect:(struct)arg1;	// IMP=0x0000000000b59618
- (_Bool)_wantsDeepDrawing;	// IMP=0x0000000000b59610
- (void)dealloc;	// IMP=0x0000000000b5958d

@end

