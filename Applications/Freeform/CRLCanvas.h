//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvasLayoutController, CRLChangeNotifier, CRLColor, CRLInteractiveCanvasController, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSSet;
@protocol CRLBoardItemOwning, CRLCanvasDelegate;

@interface CRLCanvas : NSObject
{
    id <CRLCanvasDelegate> mDelegate;	// 8 = 0x8
    CRLInteractiveCanvasController *mCanvasController;	// 16 = 0x10
    NSArray *mInfos;	// 24 = 0x18
    NSArray *mTopLevelReps;	// 32 = 0x20
    NSSet *mAllReps;	// 40 = 0x28
    NSArray *mAllRepsOrdered;	// 48 = 0x30
    NSMapTable *mRepsByLayout;	// 56 = 0x38
    CRLCanvasLayoutController *mLayoutController;	// 64 = 0x40
    _Bool mIsTemporaryForLayout;	// 72 = 0x48
    struct CGSize mUnscaledSize;	// 80 = 0x50
    double mViewScale;	// 96 = 0x60
    double mContentsScale;	// 104 = 0x68
    _Bool mWideGamut;	// 112 = 0x70
    _Bool mIsAnchoredAtRight;	// 113 = 0x71
    struct {
        _Bool layout;
        _Bool reps;
        _Bool visibleBounds;
        _Bool layers;
        _Bool allContentAndOverlayLayers;
    } mInvalidFlags;	// 114 = 0x72
    NSMutableSet *mRepsWithInvalidContentLayers;	// 120 = 0x78
    NSMutableSet *mRepsWithInvalidOverlayLayers;	// 128 = 0x80
    _Bool mShouldUpdateLayersDuringLayout;	// 136 = 0x88
    _Bool mInLayout;	// 137 = 0x89
    NSArray *mPreviouslyVisibleLayouts;	// 144 = 0x90
    NSMutableArray *mBlocksToPerformAfterLayout;	// 152 = 0x98
    NSMutableArray *mBlocksToPerformAfterLayoutAndLayerUpdating;	// 160 = 0xa0
    struct os_unfair_lock_s mBlocksToPerformLock;	// 168 = 0xa8
    NSHashTable *mCanvasLayoutObservers;	// 176 = 0xb0
    _Bool mIgnoringClickThrough;	// 184 = 0xb8
    CRLColor *mBackgroundColor;	// 192 = 0xc0
    struct UIEdgeInsets mContentInset;	// 200 = 0xc8
    _Bool mAllowsFontSubpixelQuantization;	// 232 = 0xe8
    _Bool mSuppressesShadowsAndReflections;	// 233 = 0xe9
    NSSet *mPreviousRenderDatasNeedingDownload;	// 240 = 0xf0
    _Bool mEnableInstructionalText;	// 248 = 0xf8
    _Bool mSuppressesShapeText;	// 249 = 0xf9
    _Bool mShouldRenderInvisibleContentForNonInteractiveCanvas;	// 250 = 0xfa
    _Bool _i_inLayout;	// 251 = 0xfb
    double i_viewScaleForAudioObjectsInNonInteractiveCanvas;	// 256 = 0x100
}

+ (void)p_recursivelyAddOrderedChildrenOfRep:(id)arg1 toArray:(id)arg2;	// IMP=0x00400000005df89b
+ (struct CGPoint)p_transformedUnscaledPoint:(struct CGPoint)arg1 forTestingHitRep:(id)arg2 withTransformFromBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000005dced2
+ (id)p_hitRep:(struct CGPoint)arg1 withPrecision:(_Bool)arg2 inTopLevelReps:(id)arg3 smallRepOutset:(double)arg4 unscaledPointTransformForRep:(CDUnknownBlockType)arg5 passingTest:(CDUnknownBlockType)arg6;	// IMP=0x00100000005dc8f7
- (void).cxx_destruct;	// IMP=0x00100000005dfbb3
@property(readonly, nonatomic) _Bool i_inLayout; // @synthesize i_inLayout=_i_inLayout;
@property(readonly, nonatomic) _Bool isTemporaryForLayout; // @synthesize isTemporaryForLayout=mIsTemporaryForLayout;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) double i_viewScaleForAudioObjectsInNonInteractiveCanvas; // @synthesize i_viewScaleForAudioObjectsInNonInteractiveCanvas;
@property(nonatomic) _Bool shouldRenderInvisibleContentForNonInteractiveCanvas; // @synthesize shouldRenderInvisibleContentForNonInteractiveCanvas=mShouldRenderInvisibleContentForNonInteractiveCanvas;
@property(nonatomic) _Bool suppressesShapeText; // @synthesize suppressesShapeText=mSuppressesShapeText;
@property(nonatomic) _Bool suppressesShadowsAndReflections; // @synthesize suppressesShadowsAndReflections=mSuppressesShadowsAndReflections;
@property(nonatomic) _Bool allowsFontSubpixelQuantization; // @synthesize allowsFontSubpixelQuantization=mAllowsFontSubpixelQuantization;
@property(copy, nonatomic) CRLColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(nonatomic) _Bool isAnchoredAtRight; // @synthesize isAnchoredAtRight=mIsAnchoredAtRight;
@property(nonatomic) _Bool enableInstructionalText; // @synthesize enableInstructionalText=mEnableInstructionalText;
@property(readonly, nonatomic) CRLCanvasLayoutController *layoutController; // @synthesize layoutController=mLayoutController;
@property(readonly, nonatomic) NSSet *allReps; // @synthesize allReps=mAllReps;
@property(readonly, nonatomic) NSArray *topLevelReps; // @synthesize topLevelReps=mTopLevelReps;
@property(copy, nonatomic) NSArray *infosToDisplay; // @synthesize infosToDisplay=mInfos;
@property(nonatomic) __weak id <CRLCanvasDelegate> delegate; // @synthesize delegate=mDelegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(readonly, nonatomic) NSSet *i_previousRenderDatasNeedingDownload; // @synthesize i_previousRenderDatasNeedingDownload=mPreviousRenderDatasNeedingDownload;
- (_Bool)i_InLayout;	// IMP=0x00100000005dfa27
@property(readonly, nonatomic) struct CGRect unscaledRectOfLayouts;
@property(readonly, nonatomic) NSArray *allRepsOrdered;
- (void)p_removeAllReps;	// IMP=0x00100000005df4ec
- (void)orderRepsForLayout:(id)arg1;	// IMP=0x00100000005df1d1
- (_Bool)p_updateRepsFromLayouts;	// IMP=0x00100000005de343
- (void)p_layoutWithReadLock;	// IMP=0x00100000005ddce2
- (struct CGRect)p_bounds;	// IMP=0x00100000005ddc76
- (struct CGImage *)i_newImageInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 integralBounds:(struct CGRect)arg3 distortedToMatch:(_Bool)arg4 keepingChildrenPassingTest:(CDUnknownBlockType)arg5;	// IMP=0x00100000005ddb1d
- (struct CGContext *)i_createContextToDrawImageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 distortedToMatch:(_Bool)arg3 returningBounds:(struct CGRect *)arg4 integralBounds:(struct CGRect *)arg5;	// IMP=0x00100000005dd8e1
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 distortedToMatch:(_Bool)arg3 keepingChildrenPassingTest:(CDUnknownBlockType)arg4;	// IMP=0x00100000005dd7f9
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000005dd7d2
- (struct CGImage *)i_image;	// IMP=0x00100000005dd79e
- (void)i_drawRepsInContext:(struct CGContext *)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000005dd763
- (void)i_drawRepsInContext:(struct CGContext *)arg1 passingTest:(CDUnknownBlockType)arg2 distort:(struct CGAffineTransform)arg3;	// IMP=0x00100000005dd473
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00100000005dd2f7
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;	// IMP=0x00100000005dd278
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1;	// IMP=0x00100000005dd208
- (struct CGRect)i_clipRectForCreatingRepsFromLayouts;	// IMP=0x00100000005dd103
- (struct CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000005dd0d3
- (_Bool)i_areOverlayLayersInvalidForRep:(id)arg1;	// IMP=0x00100000005dd0b0
- (_Bool)i_areContentLayersInvalidForRep:(id)arg1;	// IMP=0x00100000005dd090
- (void)i_unregisterRep:(id)arg1;	// IMP=0x00100000005dcfef
- (void)i_registerRep:(id)arg1;	// IMP=0x00100000005dcf77
- (_Bool)i_shouldIgnoreClickThrough;	// IMP=0x00100000005dcf6b
- (void)i_performBlockWhileIgnoringClickThrough:(CDUnknownBlockType)arg1;	// IMP=0x00100000005dcf41
- (id)hitRep:(struct CGPoint)arg1 withPrecision:(_Bool)arg2 inTopLevelReps:(id)arg3 smallRepOutset:(double)arg4 unscaledPointTransformForRep:(CDUnknownBlockType)arg5 passingTest:(CDUnknownBlockType)arg6;	// IMP=0x00100000005dc8db
- (struct CGRect)visibleUnscaledRectForClippingReps;	// IMP=0x00100000005dc7cc
- (double)convertBoundsToUnscaledLength:(double)arg1;	// IMP=0x00100000005dc797
- (double)convertUnscaledToBoundsLength:(double)arg1;	// IMP=0x00100000005dc772
- (struct CGSize)convertBoundsToUnscaledSize:(struct CGSize)arg1;	// IMP=0x00100000005dc733
- (struct CGSize)convertUnscaledToBoundsSize:(struct CGSize)arg1;	// IMP=0x00100000005dc6fd
- (struct CGPoint)convertBoundsToUnscaledPoint:(struct CGPoint)arg1;	// IMP=0x00100000005dc6be
- (struct CGPoint)convertUnscaledToBoundsPoint:(struct CGPoint)arg1;	// IMP=0x00100000005dc688
- (struct CGRect)convertBoundsToUnscaledRect:(struct CGRect)arg1;	// IMP=0x00100000005dc636
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;	// IMP=0x00100000005dc5f4
@property(readonly, nonatomic) _Bool canvasIsWideGamut;
- (void)i_setCanvasIsWideGamut:(_Bool)arg1;	// IMP=0x00100000005dc176
@property(readonly, nonatomic) double contentsScale;
- (void)i_setContentsScale:(double)arg1;	// IMP=0x00100000005dc160
- (_Bool)textLayoutMustIncludeAdornments;	// IMP=0x00100000005dc0c8
- (_Bool)isDrawingIntoPDF;	// IMP=0x00100000005dc030
- (_Bool)shouldSuppressBackgrounds;	// IMP=0x00100000005dbf99
- (_Bool)shouldShowInstructionalTextForLayout:(id)arg1;	// IMP=0x00100000005dbea8
- (_Bool)shouldShowTextOverflowGlyphs;	// IMP=0x00100000005dbc2c
- (_Bool)isPrinting;	// IMP=0x00100000005dbb95
@property(readonly, nonatomic) _Bool isCanvasInteractive;
- (_Bool)spellCheckingSuppressed;	// IMP=0x00100000005dba68
- (_Bool)spellCheckingSupported;	// IMP=0x00100000005db9e0
- (void)i_unregisterCanvasLayoutObserver:(id)arg1;	// IMP=0x00100000005db9c7
- (void)i_registerCanvasLayoutObserver:(id)arg1;	// IMP=0x00100000005db9ae
- (_Bool)p_needsLayoutNotIncludingLayers;	// IMP=0x00100000005db993
- (_Bool)i_needsLayout;	// IMP=0x00100000005db977
- (_Bool)p_canvasShouldAlwaysUpdateLayers;	// IMP=0x00100000005db946
- (void)i_layoutIfNeededUpdatingLayerTree;	// IMP=0x00100000005db882
- (void)i_layoutIfNeeded;	// IMP=0x00100000005db870
- (void)nonInteractiveLayoutIfNeeded;	// IMP=0x00100000005db687
- (void)i_setLayersInvalidWithoutInvalidatingAnySpecificLayers;	// IMP=0x00100000005db5ff
- (void)invalidateOverlayLayersForRep:(id)arg1;	// IMP=0x00100000005db5ca
- (void)invalidateContentLayersForRep:(id)arg1;	// IMP=0x00100000005db598
- (void)invalidateAllLayers;	// IMP=0x00100000005db50f
- (void)invalidateVisibleBounds;	// IMP=0x00100000005db487
- (void)invalidateReps;	// IMP=0x00100000005db3ff
- (void)p_setInvalidLayoutFlagAndCallDelegate;	// IMP=0x00100000005db377
- (void)canvasInvalidatedForLayout:(id)arg1;	// IMP=0x00100000005db31e
- (void)canvasInvalidatedForRep:(id)arg1;	// IMP=0x00100000005db2bc
- (void)layoutInvalidated;	// IMP=0x00100000005db2aa
- (void)recreateAllLayoutsAndReps;	// IMP=0x00100000005db19d
- (id)repForLayout:(id)arg1;	// IMP=0x00100000005db16b
- (void)i_updateInfosInLayoutController;	// IMP=0x00100000005db11e
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(_Bool)arg2;	// IMP=0x00100000005db0a9
@property(readonly, nonatomic) CRLInteractiveCanvasController *canvasController;
- (void)i_setCanvasController:(id)arg1;	// IMP=0x00100000005dac9a
@property(readonly, nonatomic) CRLChangeNotifier *changeNotifier;
@property(readonly, nonatomic) id <CRLBoardItemOwning> boardItemOwner;
- (void)afterLayoutIncludingLayers:(_Bool)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000005daa9c
- (void)performBlockAfterLayoutIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x00100000005daa85
- (_Bool)p_isLayoutCompleteIncludingLayers:(_Bool)arg1;	// IMP=0x00100000005daa53
@property(readonly, nonatomic) _Bool isLayoutComplete;
- (Class)rootLayoutClass;	// IMP=0x00100000005da9b0
- (void)dealloc;	// IMP=0x00100000005da428
- (void)teardown;	// IMP=0x00100000005da310
- (id)initForTemporaryLayout;	// IMP=0x00100000005da2f4
- (id)initWithLayoutControllerClass:(Class)arg1 delegate:(id)arg2;	// IMP=0x00100000005da0ec
- (id)init;	// IMP=0x00100000005da0bc
- (id)textRendererForLayer:(id)arg1 context:(struct CGContext *)arg2;	// IMP=0x00100000009fd520

@end

