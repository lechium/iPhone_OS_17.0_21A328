//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKArrowShapePointOfInterestHelper
{
}

+ (struct CGPoint)_arrowHeadOuterControlPoint:(id)arg1;	// IMP=0x0080000000060e6f
+ (struct CGPoint)_arrowHeadInnerControlPoint:(id)arg1;	// IMP=0x0080000000060d3a
+ (struct CGPoint)_centeredBaseControlPoint:(id)arg1;	// IMP=0x0080000000060c7b
+ (struct CGPoint)_normalizedDirectionVector:(id)arg1;	// IMP=0x0080000000060bd3
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;	// IMP=0x008000000006055b
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x0080000000060483
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;	// IMP=0x008000000005fff0

@end

