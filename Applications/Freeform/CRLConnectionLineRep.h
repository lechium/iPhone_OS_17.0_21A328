//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLPathSource;

@interface CRLConnectionLineRep
{
    CRLPathSource *mLastPathSource;	// 8 = 0x8
}

+ (_Bool)canConnectToRep:(id)arg1;	// IMP=0x00400000002ba12e
+ (id)infosToConnectFromSelectionPath:(id)arg1 withInteractiveCanvasController:(id)arg2;	// IMP=0x00100000002b9ee3
- (void).cxx_destruct;	// IMP=0x00200000002bb7db
- (_Bool)crlaxIsStraightLine;	// IMP=0x00100000002bb797
- (_Bool)p_controlKnobVisible;	// IMP=0x00100000002bb672
- (_Bool)p_isConnected;	// IMP=0x00100000002bb5e4
- (_Bool)i_targetsDropsToStroke;	// IMP=0x00100000002bb5dc
- (_Bool)i_editMenuOverlapsEndKnobs;	// IMP=0x00100000002bb39d
- (struct CGPoint)i_dragOffset;	// IMP=0x00100000002bb297
- (_Bool)canBeUsedForImageMask;	// IMP=0x00100000002bb28f
- (_Bool)directlyManagesLayerContent;	// IMP=0x00100000002bb287
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;	// IMP=0x00100000002bb219
- (struct CGRect)targetRectForEditMenu;	// IMP=0x00100000002bb172
- (_Bool)canMakePathEditable;	// IMP=0x00100000002bb16a
- (id)additionalRepsForDragging;	// IMP=0x00100000002baf28
- (id)overlayRenderables;	// IMP=0x00100000002baaee
- (_Bool)shouldCreateSelectionKnobs;	// IMP=0x00100000002ba815
- (unsigned long long)enabledKnobMask;	// IMP=0x00100000002ba7ac
- (_Bool)shouldCreateKnobs;	// IMP=0x00100000002ba74f
- (_Bool)shouldShowSmartShapeKnobs;	// IMP=0x00100000002ba57a
- (id)newTrackerForKnob:(id)arg1;	// IMP=0x00100000002ba323
- (_Bool)canConnectToRep:(id)arg1;	// IMP=0x00100000002ba21c
- (_Bool)shouldSetPathSourceWhenChangingInfoGeometry;	// IMP=0x00100000002b9e3f
- (void)updateFromLayout;	// IMP=0x00100000002b9d26
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;	// IMP=0x00100000002b9c6e
- (_Bool)containsPoint:(struct CGPoint)arg1 withPrecision:(_Bool)arg2;	// IMP=0x00100000002b9bc1
- (id)connectionLineLayout;	// IMP=0x00100000002b9b62

@end
