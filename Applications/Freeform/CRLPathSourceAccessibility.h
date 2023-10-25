//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CRLPathSourceAccessibility
{
}

+ (id)pathSourceForShapeType:(long long)arg1 naturalSize:(struct CGSize)arg2;	// IMP=0x002000000029d71a
+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x001000000029d68d
+ (id)crlaxTargetClassName;	// IMP=0x001000000029d680
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x001000000029d6a7
- (void)_crlaxUpdatePathSourceLabelForType:(long long)arg1;	// IMP=0x001000000029dab5
- (id)_crlaxInferredLabel;	// IMP=0x001000000029da4b
@property(readonly, nonatomic) struct CGSize crlaxNaturalSize;
@property(readonly, nonatomic) _Bool crlaxIsRectangular;
@property(readonly, nonatomic) _Bool crlaxIsCircular;
@property(readonly, nonatomic) NSString *crlaxHint;
@property(readonly, nonatomic) NSString *crlaxLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000029d7c5
@property(copy, nonatomic, setter=_crlaxSetStoredLabel:) NSString *_crlaxStoredLabel;
- (id)crlaxTarget;	// IMP=0x001000000029d69e

@end
