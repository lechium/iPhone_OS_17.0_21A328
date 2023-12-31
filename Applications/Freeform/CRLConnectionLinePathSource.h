//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLConnectionLinePathSource
{
    long long mType;	// 48 = 0x30
    double mOutsetFrom;	// 56 = 0x38
    double mOutsetTo;	// 64 = 0x40
}

+ (id)pathSourceAtAngleOfSize:(struct CGSize)arg1 forType:(long long)arg2;	// IMP=0x0020000000305724
+ (id)pathSourceOfLength:(double)arg1;	// IMP=0x0010000000305674
@property(nonatomic) double outsetTo; // @synthesize outsetTo=mOutsetTo;
@property(nonatomic) double outsetFrom; // @synthesize outsetFrom=mOutsetFrom;
@property(nonatomic) long long type; // @synthesize type=mType;
- (id)crlaxCommandForAccessibilityIncrementDecrement:(_Bool)arg1 forKnobTag:(unsigned long long)arg2 usingLayout:(id)arg3 andCanvasController:(id)arg4;	// IMP=0x00100000003061f4
- (_Bool)crlaxOffersMoveActionsForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000003061ec
- (_Bool)crlaxIsAdjustableForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000003061e4
- (id)crlaxUserInputLabelForKnobTag:(unsigned long long)arg1;	// IMP=0x001000000030615c
- (id)crlaxValueForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000306154
- (id)crlaxLabelComponentForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000003060cc
- (_Bool)canUseToChangeShape;	// IMP=0x00100000003060c4
- (id)description;	// IMP=0x0010000000305fec
- (void)p_setBezierPath:(id)arg1;	// IMP=0x0010000000305ca5
- (_Bool)isLineSegment;	// IMP=0x0010000000305c9d
- (_Bool)isCircular;	// IMP=0x0010000000305c95
- (_Bool)isRectangular;	// IMP=0x0010000000305c8d
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;	// IMP=0x0010000000305c85
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;	// IMP=0x0010000000305c78
@property(readonly, nonatomic) struct CGPoint fixedPointForControlKnobChange;
- (id)bezierPath;	// IMP=0x0010000000305c1d
- (void)scaleToNaturalSize:(struct CGSize)arg1;	// IMP=0x0010000000305b1c
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x0010000000305acb
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x0010000000305a6c
- (long long)pathElementIndexForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000305a49
@property(readonly) unsigned long long numberOfControlKnobs;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003059a7
- (void)bend;	// IMP=0x001000000030585e
- (id)initWithBezierPath:(id)arg1;	// IMP=0x0010000000305235

@end

