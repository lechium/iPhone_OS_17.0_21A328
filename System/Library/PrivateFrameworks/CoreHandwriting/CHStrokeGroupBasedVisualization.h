//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHRecognitionSessionResult, NSSet;
@protocol CHStrokeGroupBasedVisualizationDelegate;

@interface CHStrokeGroupBasedVisualization
{
    _Bool _newGroupsDefaultToActive;	// 8 = 0x8
    CHRecognitionSessionResult *_resultDrawn;	// 16 = 0x10
    NSSet *_activeStrokeGroupAncestorIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000147870
@property(readonly, nonatomic) _Bool newGroupsDefaultToActive; // @synthesize newGroupsDefaultToActive=_newGroupsDefaultToActive;
@property(readonly, copy, nonatomic) NSSet *activeStrokeGroupAncestorIdentifiers;
@property(readonly, nonatomic) CHRecognitionSessionResult *resultDrawn;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000001472d0
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;	// IMP=0x0000000000147190
- (void)recognitionSessionDidUpdateRecognitionResult;	// IMP=0x00000000001469d0
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;	// IMP=0x0000000000146990

// Remaining properties
@property(nonatomic) __weak id <CHStrokeGroupBasedVisualizationDelegate> delegate; // @dynamic delegate;

@end
