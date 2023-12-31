//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasRepAccessibility, NSString;

@interface CRLRepContainerAccessibilityElement
{
    CRLCanvasRepAccessibility *_rep;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001338ee
@property(nonatomic) __weak CRLCanvasRepAccessibility *rep; // @synthesize rep=_rep;
@property(readonly, nonatomic) CRLCanvasRepAccessibility *_selectableRep;
- (struct CGRect)accessibilityFrame;	// IMP=0x0010000000133800
- (id)accessibilityElements;	// IMP=0x00100000001337ee
- (_Bool)isAccessibilityElement;	// IMP=0x00100000001337e6
- (_Bool)crlaxShouldSortChildrenUsingStandardAlgorithm;	// IMP=0x00100000001337de
- (void)crlaxDidInvalidateChildren;	// IMP=0x00100000001337d2
- (void)crlaxChildWillBeRemoved:(id)arg1;	// IMP=0x00100000001337bb
- (void)crlaxLoadChildrenIntoCollection:(id)arg1;	// IMP=0x00100000001334d3
- (_Bool)crlaxIsReadyToLoadChildren;	// IMP=0x00100000001333da
- (_Bool)crlaxShouldCacheChildren;	// IMP=0x00100000001333d2
- (void)dealloc;	// IMP=0x0010000000133263
- (id)initWithRep:(id)arg1 accessibilityParent:(id)arg2;	// IMP=0x00100000001331a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

