//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, UIAccessibilityCustomRotor;
@protocol CRLWPTextGestureDelegate;

@interface CRLTextInteractiveCanvasControllerAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x002000000023c411
+ (id)crlaxTargetClassName;	// IMP=0x001000000023c404
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x001000000023c42b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000023cb23
- (void)dealloc;	// IMP=0x001000000023c90f
- (_Bool)crlaxEditHyperlinkIfPossible:(id)arg1 withRep:(id)arg2;	// IMP=0x001000000023c907
- (_Bool)crlaxOpenHyperlinkIfPossible:(id)arg1 withRep:(id)arg2;	// IMP=0x001000000023c890
- (void)crlaxUnregisterLinkedTextElement:(id)arg1;	// IMP=0x001000000023c7ee
- (void)crlaxRegisterLinkedTextElement:(id)arg1;	// IMP=0x001000000023c6f6
- (id)crlaxTextRepsForStorage:(id)arg1;	// IMP=0x001000000023c529
@property(readonly, nonatomic) id <CRLWPTextGestureDelegate> crlaxGestureDelegate;
@property(readonly, nonatomic) _Bool crlaxCurrentSelectionContainsVisibleTrackedChanges;
@property(retain, nonatomic, setter=_crlaxSetRegisteredLinkedTextContainerElements:) NSMutableDictionary *_crlaxRegisteredLinkedTextContainerElements;
- (id)crlaxTarget;	// IMP=0x001000000023c422
- (_Bool)crlaxHandleDoubleTapAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000316881
- (id)crlaxRepForSearchReference:(id)arg1;	// IMP=0x0010000000316647
@property(readonly, nonatomic) _Bool crlaxSupportsHeadingsRotor;
- (id)crlaxTextSearchReferenceFromRange:(struct _NSRange)arg1;	// IMP=0x00100000003164af
- (void)crlaxAnnounceSearchReference:(id)arg1 forRotor:(id)arg2;	// IMP=0x00100000003161ab
- (id)crlaxFocusTextRangeFromSearchReference:(id)arg1;	// IMP=0x0010000000315ff8
- (id)crlaxRotorSearchControllerForRotor:(id)arg1;	// IMP=0x0010000000315ed3
- (id)crlaxSearchReferenceForSelectionPath:(id)arg1;	// IMP=0x0010000000315d5f
@property(readonly, nonatomic) UIAccessibilityCustomRotor *crlaxHyperlinksRotor;
@property(readonly, nonatomic) UIAccessibilityCustomRotor *crlaxMisspelledWordsRotor;
@property(readonly, nonatomic) UIAccessibilityCustomRotor *_crlaxHeadingsRotor;
- (id)crlaxCustomRotors;	// IMP=0x00100000003154cb
- (void)_crlaxSetStoredHyperlinksRotorSearchController:(id)arg1;	// IMP=0x00100000003154ba
- (id)_crlaxStoredHyperlinksRotorSearchController;	// IMP=0x00100000003154a9
- (void)_crlaxSetStoredHyperlinksRotor:(id)arg1;	// IMP=0x0010000000315498
- (id)_crlaxStoredHyperlinksRotor;	// IMP=0x0010000000315487
- (void)_crlaxSetStoredMisspelledWordsRotorSearchController:(id)arg1;	// IMP=0x0010000000315476
- (id)_crlaxStoredMisspelledWordsRotorSearchController;	// IMP=0x0010000000315465
- (void)_crlaxSetStoredMisspelledWordsRotor:(id)arg1;	// IMP=0x0010000000315454
- (id)_crlaxStoredMisspelledWordsRotor;	// IMP=0x0010000000315443
- (void)_crlaxSetStoredHeadingsRotorSearchController:(id)arg1;	// IMP=0x0010000000315432
- (id)_crlaxStoredHeadingsRotorSearchController;	// IMP=0x0010000000315421
- (void)_crlaxSetStoredHeadingsRotor:(id)arg1;	// IMP=0x0010000000315410
- (id)_crlaxStoredHeadingsRotor;	// IMP=0x00100000003153ff

@end
