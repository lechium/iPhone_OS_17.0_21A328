//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLBezierPathAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x0020000000509921
+ (id)crlaxTargetClassName;	// IMP=0x0010000000509914
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x001000000050993b
- (long long)_crlaxElementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;	// IMP=0x001000000050a383
- (long long)_crlaxElementAtIndex:(long long)arg1;	// IMP=0x001000000050a2a5
- (_Bool)_crlaxLastElementIsClose;	// IMP=0x001000000050a26d
- (_Bool)_crlaxLastElementIsMove;	// IMP=0x001000000050a236
- (unsigned long long)_crlaxNumberOfArcs;	// IMP=0x001000000050a1bb
- (unsigned long long)_crlaxNumberOfLineSegmentsConsecutive:(_Bool)arg1;	// IMP=0x001000000050a12e
- (unsigned long long)_crlaxNumberOfLineSegments;	// IMP=0x001000000050a11a
- (unsigned long long)_crlaxNumberOfConsecutiveLineSegments;	// IMP=0x001000000050a103
@property(readonly, nonatomic) unsigned long long _crlaxNumberOfSides;
@property(readonly, nonatomic) _Bool _crlaxHasZeroArcs;
- (unsigned long long)_crlaxElementCount;	// IMP=0x0010000000509f81
@property(readonly, nonatomic) _Bool _crlaxIsLineSegment;
@property(readonly, nonatomic) _Bool _crlaxIsDiamond;
@property(readonly, nonatomic) _Bool _crlaxIsCircular;
@property(readonly, nonatomic) _Bool _crlaxIsTriangular;
@property(readonly, nonatomic) _Bool _crlaxIsRectangular;
- (id)crlaxInferredLabelForSize:(struct CGSize)arg1;	// IMP=0x001000000050998c
- (id)crlaxTarget;	// IMP=0x0010000000509932

@end
