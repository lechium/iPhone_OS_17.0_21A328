//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasKnobAccessibility, CRLCanvasRepAccessibility, NSString;

@interface CRLCanvasKnobAccessibilityElement
{
    CRLCanvasRepAccessibility *_parentRep;	// 8 = 0x8
    unsigned long long _knobTag;	// 16 = 0x10
    unsigned long long _knobNodeIndex;	// 24 = 0x18
    NSString *_crlaxIdentifier;	// 32 = 0x20
}

+ (int)_crlaxCategoryRankForKnobElement:(id)arg1;	// IMP=0x00400000003866bb
+ (id)crlaxSortKnobElements:(id)arg1;	// IMP=0x0010000000386452
+ (id)actionNameForInsertConnectedDuplicateFromParentWithText:(_Bool)arg1;	// IMP=0x0010000000385f6a
- (void).cxx_destruct;	// IMP=0x000000000038682c
@property(retain, nonatomic) NSString *crlaxIdentifier; // @synthesize crlaxIdentifier=_crlaxIdentifier;
@property(nonatomic) unsigned long long knobNodeIndex; // @synthesize knobNodeIndex=_knobNodeIndex;
@property(nonatomic) unsigned long long knobTag; // @synthesize knobTag=_knobTag;
@property(nonatomic) __weak CRLCanvasRepAccessibility *parentRep; // @synthesize parentRep=_parentRep;
- (_Bool)isOnShapeWithText;	// IMP=0x0010000000386357
@property(readonly, nonatomic) CRLCanvasKnobAccessibility *knob;
- (_Bool)isEqualToKnob:(id)arg1;	// IMP=0x001000000038616e
- (id)accessibilityUserInputLabels;	// IMP=0x001000000038611e
- (id)initWithAccessibilityParent:(id)arg1;	// IMP=0x00100000003860a8
- (id)initWithKnobTag:(unsigned long long)arg1 nodeIndex:(unsigned long long)arg2 parentRep:(id)arg3 identifier:(id)arg4;	// IMP=0x0010000000385fe5
- (void)_performAccessibilityIncrementDecrementForShapeControlKnob:(_Bool)arg1;	// IMP=0x0010000000027441
- (void)accessibilityElementDidLoseFocus;	// IMP=0x0010000000027387
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x00100000000272ca
- (id)accessibilityCustomActions;	// IMP=0x0010000000025e10
- (void)accessibilityDecrement;	// IMP=0x0010000000025d21
- (void)accessibilityIncrement;	// IMP=0x0010000000025c28
- (_Bool)accessibilityActivate;	// IMP=0x0010000000025b97
- (_Bool)_accessibilitySupportsActivateAction;	// IMP=0x0010000000025b53
- (struct CGRect)accessibilityFrame;	// IMP=0x0010000000025af7
- (unsigned long long)accessibilityTraits;	// IMP=0x00100000000259ff
- (id)accessibilityValue;	// IMP=0x00100000000259af
- (id)accessibilityHint;	// IMP=0x001000000002595f
- (id)accessibilityLabel;	// IMP=0x001000000002590f
- (_Bool)isAccessibilityElement;	// IMP=0x0010000000025783

@end

