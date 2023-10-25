//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvas, CRLCanvasLayout, CRLCanvasLayoutChangeObserver, CRLCanvasRootLayout, MISSING_TYPE, NSMapTable, NSMutableSet;
@protocol CRLBoardItemOwning;

@interface CRLCanvasLayoutController : NSObject
{
    CRLCanvas *_canvas;	// 8 = 0x8
    CRLCanvasRootLayout *_rootLayout;	// 16 = 0x10
    NSMapTable *_layoutsByInfo;	// 24 = 0x18
    NSMutableSet *_invalidLayouts;	// 32 = 0x20
    NSMutableSet *_layoutsNeedingRecreating;	// 40 = 0x28
    NSMutableSet *_invalidChildrenLayouts;	// 48 = 0x30
    CRLCanvasLayout *_validatingLayout;	// 56 = 0x38
    CRLCanvasLayoutChangeObserver *_layoutRegistrationObserver;	// 64 = 0x40
}

+ (Class)effectiveLayoutClassForInfo:(id)arg1;	// IMP=0x004000000033b138
+ (void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000033abb9
- (void).cxx_destruct;	// IMP=0x002000000033f49f
@property(retain, nonatomic) CRLCanvasLayoutChangeObserver *i_layoutRegistrationObserver; // @synthesize i_layoutRegistrationObserver=_layoutRegistrationObserver;
@property(readonly, nonatomic) CRLCanvasRootLayout *rootLayout; // @synthesize rootLayout=_rootLayout;
@property(readonly, nonatomic) __weak CRLCanvas *canvas; // @synthesize canvas=_canvas;
- (void)p_recreateLayoutsIfNeededToValidateLayouts:(id)arg1;	// IMP=0x001000000033ef83
- (void)i_enumerateLayoutsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000033edb3
- (void)i_removeAllLayouts;	// IMP=0x001000000033ed59
- (void)i_unregisterLayout:(id)arg1;	// IMP=0x001000000033ec0a
- (void)i_registerLayout:(id)arg1;	// IMP=0x001000000033eacb
- (void)notifyThatLayoutsChangedOutsideOfLayout;	// IMP=0x001000000033e99d
- (id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2;	// IMP=0x001000000033e7e4
- (id)validatedLayoutsForInfo:(id)arg1;	// IMP=0x001000000033e41a
- (id)validatedLayoutForInfo:(id)arg1;	// IMP=0x001000000033e3ca
- (void)validateLayoutWithDependencies:(id)arg1;	// IMP=0x001000000033e377
- (void)validateLayoutsWithDependencies:(id)arg1;	// IMP=0x001000000033dddb
- (void)p_validateLayouts:(id)arg1 shouldMarkValidLayoutsThatDoNotWantValidation:(_Bool)arg2;	// IMP=0x001000000033dbe2
- (id)sortLayoutsForDependencies:(id)arg1;	// IMP=0x001000000033cb24
- (void)validateLayouts;	// IMP=0x001000000033ba39
@property(readonly, nonatomic) struct CGRect rectOfTopLevelLayouts;
- (id)layoutsInRect:(struct CGRect)arg1 deep:(_Bool)arg2;	// IMP=0x001000000033b802
- (id)layoutsInRect:(struct CGRect)arg1;	// IMP=0x001000000033b7ee
- (MISSING_TYPE *)layoutForInfo:childOfLayout: /* Error: Ran out of types for this method. */;	// IMP=0x001000000033b635
- (id)layoutsForInfos:(id)arg1;	// IMP=0x001000000033b451
- (id)layoutsForInfo:(id)arg1;	// IMP=0x001000000033b405
- (id)layoutForInfo:(id)arg1;	// IMP=0x001000000033b26a
- (void)invalidateLayoutForRecreation:(id)arg1;	// IMP=0x001000000033b0f0
- (void)invalidateChildrenOfLayout:(id)arg1;	// IMP=0x001000000033b0a8
- (void)invalidateLayout:(id)arg1;	// IMP=0x001000000033b00e
- (void)setInfos:(id)arg1;	// IMP=0x001000000033acf8
@property(readonly, nonatomic) id <CRLBoardItemOwning> boardItemOwner;
- (void)dealloc;	// IMP=0x001000000033ab2d
- (id)initWithCanvas:(id)arg1;	// IMP=0x001000000033a9f5

@end
