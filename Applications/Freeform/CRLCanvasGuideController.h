//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLInteractiveCanvasController, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CRLCanvasGuideController : NSObject
{
    NSObject<OS_dispatch_queue> *_guideGenerationAccessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_guideGenerationStateLock;	// 16 = 0x10
    unsigned long long _guideGenerationState;	// 24 = 0x18
    struct CGRect _lastIgnoredRectForDisplayingGuides;	// 32 = 0x20
    unsigned long long _lastIgnoredKnobTag;	// 64 = 0x40
    _Bool _lastIgnoredShouldShowSizeGuides;	// 72 = 0x48
    NSMutableDictionary *_verticalSpacings;	// 80 = 0x50
    NSMutableDictionary *_horizontalSpacings;	// 88 = 0x58
    NSMutableArray *_verticalSizingGuides;	// 96 = 0x60
    NSMutableArray *_horizontalSizingGuides;	// 104 = 0x68
    NSMutableArray *_guidesForSnappingY;	// 112 = 0x70
    NSMutableArray *_guidesForSnappingX;	// 120 = 0x78
    NSMutableArray *_spacingGuidesForSnappingX;	// 128 = 0x80
    NSMutableArray *_spacingGuidesForSnappingY;	// 136 = 0x88
    NSMutableArray *_spacingCenterGuidesForSnappingX;	// 144 = 0x90
    NSMutableArray *_spacingCenterGuidesForSnappingY;	// 152 = 0x98
    NSSet *_currentGuides;	// 160 = 0xa0
    NSSet *_currentSizingGuides;	// 168 = 0xa8
    NSMutableSet *_currentSizingGuideUIRenderables;	// 176 = 0xb0
    _Bool _shouldAlignEdges;	// 184 = 0xb8
    _Bool _shouldAlignCenters;	// 185 = 0xb9
    _Bool _shouldAlignToSpacingGuides;	// 186 = 0xba
    _Bool _shouldAlignToSizingGuides;	// 187 = 0xbb
    _Bool _shouldAlignEdgesToTemplateGuides;	// 188 = 0xbc
    NSMapTable *_alignmentFrameInRootByLayout;	// 192 = 0xc0
    _Bool _doNotRemoveExistingGuidesWhenDisplaying;	// 200 = 0xc8
    _Bool _didJustSnapInX;	// 201 = 0xc9
    _Bool _didJustSnapInY;	// 202 = 0xca
    CRLInteractiveCanvasController *_icc;	// 208 = 0xd0
    struct CGRect _currentGuidesRect;	// 216 = 0xd8
}

+ (_Bool)shouldUseHapticFeedbackWhenSnapping;	// IMP=0x002000000004c79a
+ (void)setShouldUseHapticFeedbackWhenSnapping:(_Bool)arg1;	// IMP=0x001000000004c73f
+ (id)guideColor;	// IMP=0x001000000004c72d
+ (_Bool)shouldAlignEdgesToTemplateGuides;	// IMP=0x001000000004c721
+ (void)setShouldAlignEdgesToTemplateGuides:(_Bool)arg1;	// IMP=0x001000000004c715
+ (_Bool)shouldAlignCenters;	// IMP=0x001000000004c6c0
+ (void)setShouldAlignCenters:(_Bool)arg1;	// IMP=0x001000000004c665
+ (_Bool)shouldAlignToSizingGuides;	// IMP=0x001000000004c610
+ (void)setGuideColor:(id)arg1;	// IMP=0x001000000004c457
+ (void)setShouldAlignToSizingGuides:(_Bool)arg1;	// IMP=0x001000000004c3fc
+ (_Bool)shouldAlignToSpacingGuides;	// IMP=0x001000000004c3a7
+ (void)setShouldAlignToSpacingGuides:(_Bool)arg1;	// IMP=0x001000000004c34c
+ (_Bool)shouldAlignEdges;	// IMP=0x001000000004c2f7
+ (void)setShouldAlignEdges:(_Bool)arg1;	// IMP=0x001000000004c29c
+ (id)defaultGuideColor;	// IMP=0x001000000004c268
+ (_Bool)shouldSnapToOffscreenContent;	// IMP=0x001000000004c260
- (void).cxx_destruct;	// IMP=0x0020000000056ad7
@property(readonly, nonatomic) struct CGRect i_currentGuidesRect; // @synthesize i_currentGuidesRect=_currentGuidesRect;
@property(nonatomic) _Bool didJustSnapInY; // @synthesize didJustSnapInY=_didJustSnapInY;
@property(nonatomic) _Bool didJustSnapInX; // @synthesize didJustSnapInX=_didJustSnapInX;
@property(nonatomic) _Bool doNotRemoveExistingGuidesWhenDisplaying; // @synthesize doNotRemoveExistingGuidesWhenDisplaying=_doNotRemoveExistingGuidesWhenDisplaying;
@property(readonly, nonatomic) __weak CRLInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=_icc;
- (id)p_predicateCanBeSnappedToByEdge:(int)arg1 ofFrame:(struct CGRect)arg2 inVisibleUnscaledRect:(struct CGRect)arg3;	// IMP=0x001000000005698d
- (id)p_predicateCanBeSnappedToInVisibleUnscaledRect:(struct CGRect)arg1;	// IMP=0x0010000000056878
- (float)p_spacingForCenterOrSpacingGuide:(id)arg1;	// IMP=0x0010000000056577
- (id)p_closestGuideForOffset:(double)arg1 predicate:(id)arg2 inArray:(id)arg3;	// IMP=0x0010000000056015
- (id)p_guideClosestToEdge:(int)arg1 ofFrame:(struct CGRect)arg2;	// IMP=0x0010000000055ebb
- (id)p_guidesForOffset:(double)arg1 predicate:(id)arg2 inArray:(id)arg3;	// IMP=0x0010000000055a3b
- (id)p_guidesForEdge:(int)arg1 ofFrame:(struct CGRect)arg2;	// IMP=0x00100000000558f8
- (void)p_getOffset:(double *)arg1 andGuidesArray:(id *)arg2 forEdge:(int)arg3 ofFrame:(struct CGRect)arg4;	// IMP=0x00100000000557d8
- (long long)p_indexToInsertGuide:(id)arg1 inSortedArray:(id)arg2;	// IMP=0x00100000000554b2
- (void)p_addCenterAlignmentGuide:(id)arg1 toSortedArray:(id)arg2;	// IMP=0x0010000000055432
- (void)p_addSizingGuide:(id)arg1 toSortedArray:(id)arg2;	// IMP=0x00100000000553b2
- (void)p_addSpacingGuide:(id)arg1 toSortedArray:(id)arg2;	// IMP=0x0010000000055332
- (void)p_addAlignmentGuide:(id)arg1 toSortedArray:(id)arg2;	// IMP=0x00100000000552b2
- (void)p_addSpacingGuidesForFrame:(struct CGRect)arg1 spacing:(id)arg2 isVerticalSpacing:(_Bool)arg3;	// IMP=0x00100000000550ca
- (void)p_addGuidesForLayout:(id)arg1;	// IMP=0x0010000000054aa7
- (struct CGRect)p_alignmentFrameInRootForLayout:(id)arg1;	// IMP=0x00100000000547f8
- (_Bool)p_guidesAreRelevantForEdge:(int)arg1 whileDraggingKnobTag:(unsigned long long)arg2;	// IMP=0x001000000005430d
- (_Bool)p_sizingGuidesAreRelevantForOrientation:(int)arg1 whileDraggingKnobTag:(unsigned long long)arg2;	// IMP=0x00100000000542dd
- (double)p_maxSnap;	// IMP=0x0010000000054275
@property(readonly, nonatomic) NSArray *decoratorOverlayRenderables;
- (void)endAlignmentOperation;	// IMP=0x001000000005334a
- (void)hideAlignmentGuides;	// IMP=0x00100000000532dd
- (void)hideSizingGuides;	// IMP=0x0010000000053286
- (void)showSizingGuideUIForRep:(id)arg1 matchingWidth:(_Bool)arg2 matchingHeight:(_Bool)arg3;	// IMP=0x001000000005318d
- (void)showSizingGuidesAlignedWithLayout:(id)arg1 forKnobTag:(unsigned long long)arg2;	// IMP=0x0010000000052b38
@property(readonly, nonatomic) NSSet *i_currentGuides; // @dynamic i_currentGuides;
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2 shouldRenderX:(_Bool)arg3 shouldRenderY:(_Bool)arg4 shouldRenderSizeGuides:(_Bool)arg5;	// IMP=0x0010000000050ff4
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2;	// IMP=0x0010000000050fd1
- (void)showGuidesAlignedWithRect:(struct CGRect)arg1 shouldRenderX:(_Bool)arg2 shouldRenderY:(_Bool)arg3;	// IMP=0x0010000000050fb2
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2 snapSize:(_Bool)arg3;	// IMP=0x001000000004fdb6
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1 forKnobTag:(unsigned long long)arg2;	// IMP=0x001000000004fd9f
- (struct CGPoint)snapRectToGuides:(struct CGRect)arg1;	// IMP=0x001000000004fd86
- (void)beginAlignmentOperationForReps:(id)arg1 preventCenterGuides:(_Bool)arg2 preventSpacingGuides:(_Bool)arg3 preventSizingGuides:(_Bool)arg4;	// IMP=0x001000000004ccc5
- (void)beginAlignmentOperationForReps:(id)arg1;	// IMP=0x001000000004ccab
- (void)beginAlignmentOperationForRep:(id)arg1;	// IMP=0x001000000004ca78
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x001000000004c7ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
