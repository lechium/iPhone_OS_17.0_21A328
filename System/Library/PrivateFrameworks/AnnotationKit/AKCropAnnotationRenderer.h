//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AKAnnotationRenderer.h"

@interface AKCropAnnotationRenderer : AKAnnotationRenderer
{
}

+ (void)_pixelAlignedBaseRect:(struct CGRect *)arg1 interiorRect:(struct CGRect *)arg2 scaleFactor:(double *)arg3 forAnnotation:(id)arg4 withPageController:(id)arg5;	// IMP=0x0080000000089983
+ (struct CGPath *)_newRectanglePathForAnnotation:(id)arg1 withPageController:(id)arg2 outLineWidth:(double *)arg3;	// IMP=0x00800000000898ac
+ (struct CGPath *)_newClipMaskEOPathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x00800000000897d2
+ (struct CGPath *)newBottomRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x00800000000895b2
+ (struct CGPath *)newBottomLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x0080000000089399
+ (struct CGPath *)newTopRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x008000000008913c
+ (struct CGPath *)newTopLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x0080000000088ee8
+ (struct CGPath *)newTopEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x0080000000088d0f
+ (struct CGPath *)newBottomEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x0080000000088b43
+ (struct CGPath *)newRightEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x0080000000088969
+ (struct CGPath *)newLeftEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2;	// IMP=0x0080000000088794
+ (struct CGPath *)cropHandle:(long long)arg1 forAnnotation:(id)arg2 withPageController:(id)arg3;	// IMP=0x00800000000881ab
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;	// IMP=0x00800000000881a3
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;	// IMP=0x008000000008819b
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;	// IMP=0x0080000000087c7c
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;	// IMP=0x0080000000087c66
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;	// IMP=0x0080000000087c48

@end

