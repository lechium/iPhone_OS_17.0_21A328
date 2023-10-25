//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLCalloutPathSource
{
    _Bool _isTailAtCenter;	// 8 = 0x8
    double _tailSize;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    struct CGPoint _tailPosition;	// 32 = 0x20
    struct CGSize _naturalSize;	// 48 = 0x30
}

+ (id)quoteBubbleWithTailPosition:(struct CGPoint)arg1 tailSize:(double)arg2 naturalSize:(struct CGSize)arg3;	// IMP=0x00200000002bcdd6
+ (id)calloutWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4;	// IMP=0x00100000002bcd6e
@property(readonly, nonatomic) _Bool isTailAtCenter; // @synthesize isTailAtCenter=_isTailAtCenter;
- (struct CGSize)naturalSize;	// IMP=0x00100000002bf6b7
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double tailSize; // @synthesize tailSize=_tailSize;
@property(nonatomic) struct CGPoint rawTailPosition; // @synthesize rawTailPosition=_tailPosition;
- (id)crlaxCommandForAccessibilityIncrementDecrement:(_Bool)arg1 forKnobTag:(unsigned long long)arg2 usingLayout:(id)arg3 andCanvasController:(id)arg4;	// IMP=0x00100000002bf4f5
- (_Bool)crlaxOffersMoveActionsForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002bf4e8
- (_Bool)crlaxIsAdjustableForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002bf4d7
- (id)crlaxUserInputLabelForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002bf4c5
- (id)crlaxValueForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002bf325
- (id)crlaxLabelComponentForKnobTag:(unsigned long long)arg1;	// IMP=0x00100000002bf241
- (id)inferredLocalizedAccessibilityDescriptionPlaceholder;	// IMP=0x00100000002bf1bc
- (id)inferredAccessibilityDescription;	// IMP=0x00100000002bf137
- (id)inferredAccessibilityDescriptionNoShapeNames;	// IMP=0x00100000002bf0c3
- (struct CGPoint)p_getControlKnobPointForRoundedRect;	// IMP=0x00100000002bf07c
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;	// IMP=0x00100000002bf031
- (id)p_buildPath;	// IMP=0x00100000002bee81
- (id)p_basePath;	// IMP=0x00100000002beb31
- (void)p_getTailPath:(id)arg1 center:(struct CGPoint *)arg2 tailSize:(double *)arg3 intersections:(struct CGPoint [2])arg4;	// IMP=0x00100000002be4d1
- (struct CGPoint)p_adjustedCenterForPath:(id)arg1;	// IMP=0x00100000002be3a8
- (void)p_setTailAtCenter:(_Bool)arg1;	// IMP=0x00100000002be398
- (void)p_setNaturalSize:(struct CGSize)arg1;	// IMP=0x00100000002be380
- (void)p_setTailSize:(double)arg1;	// IMP=0x00100000002be36e
- (struct CGPoint)p_tailPosition;	// IMP=0x00100000002be356
- (void)p_setTailPosition:(struct CGPoint)arg1;	// IMP=0x00100000002be33e
- (void)p_setCornerRadius:(double)arg1;	// IMP=0x00100000002be32c
- (id)name;	// IMP=0x00100000002be2a7
- (_Bool)isCircular;	// IMP=0x00100000002be29f
- (_Bool)isRectangular;	// IMP=0x00100000002be297
- (id)interiorWrapPath;	// IMP=0x00100000002be285
- (id)bezierPathWithoutFlips;	// IMP=0x00100000002be273
- (struct CGPoint)p_tailCenter;	// IMP=0x00100000002be157
- (void)scaleToNaturalSize:(struct CGSize)arg1;	// IMP=0x00100000002bdf44
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x00100000002bdf32
@property(nonatomic) struct CGPoint tailKnobPosition;
@property(nonatomic) struct CGPoint tailSizeKnobPosition;
@property(readonly, nonatomic) double clampedCalloutTailSize;
@property(readonly, nonatomic) double maxTailSize;
@property(readonly, nonatomic) double minTailSize;
@property(readonly, nonatomic) double minCornerRadius;
@property(readonly, nonatomic) double maxCornerRadius;
@property(readonly, nonatomic) double clampedCornerRadius;
- (_Bool)isOval;	// IMP=0x00100000002bd47d
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;	// IMP=0x00100000002bd3fc
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;	// IMP=0x00100000002bd2cb
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x00100000002bd2a5
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x00100000002bd25c
@property(readonly) unsigned long long numberOfControlKnobs;
- (id)description;	// IMP=0x00100000002bd111
- (unsigned long long)hash;	// IMP=0x00100000002bd0ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002bcf11
- (id)copy;	// IMP=0x00100000002bce43
- (id)init;	// IMP=0x00100000002bcd31
- (id)initWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint)arg2 tailSize:(double)arg3 naturalSize:(struct CGSize)arg4 tailAtCenter:(_Bool)arg5;	// IMP=0x00100000002bcc64

// Remaining properties
@property(readonly, nonatomic) struct CGPoint fixedPointForControlKnobChange;

@end
