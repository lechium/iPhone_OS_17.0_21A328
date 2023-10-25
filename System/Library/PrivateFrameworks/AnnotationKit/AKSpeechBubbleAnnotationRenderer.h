//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AKAnnotationRenderer.h"

@interface AKSpeechBubbleAnnotationRenderer : AKAnnotationRenderer
{
}

+ (struct CGPath *)_newPathForAnnotation:(id)arg1;	// IMP=0x00800000000a3c4d
+ (void)basePointsOfPointyBit:(id)arg1 withUpdatedProperties:(id)arg2 firstPoint:(struct CGPoint *)arg3 secondPoint:(struct CGPoint *)arg4;	// IMP=0x00800000000a38f5
+ (double)pointyBitPointWidthAngleGivenControlBasePoint:(struct CGPoint)arg1 forAnnotation:(id)arg2;	// IMP=0x00800000000a373d
+ (_Bool)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;	// IMP=0x00800000000a3647
+ (_Bool)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;	// IMP=0x00800000000a3506
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(_Bool)arg3 pageControllerOrNil:(id)arg4;	// IMP=0x00800000000a3087
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;	// IMP=0x00800000000a2f89
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;	// IMP=0x00800000000a2edf
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;	// IMP=0x00800000000a2dd2
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;	// IMP=0x00800000000a2dbc
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;	// IMP=0x00800000000a2bf5

@end
