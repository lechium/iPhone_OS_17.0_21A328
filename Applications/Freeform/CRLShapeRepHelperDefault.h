//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLShapeLayout, CRLShapeRep, NSString, _TtC8Freeform12CRLShapeItem;

@interface CRLShapeRepHelperDefault : NSObject
{
    CRLShapeRep *_shapeRep;	// 8 = 0x8
    CRLShapeLayout *_shapeLayout;	// 16 = 0x10
    _TtC8Freeform12CRLShapeItem *_shapeInfo;	// 24 = 0x18
    struct CGContext *_committedPathContext;	// 32 = 0x20
    struct CGImage *_committedPathImage;	// 40 = 0x28
    struct CGRect _committedPathImageUnscaledRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000049642c
- (void)dynamicOperationDidEnd;	// IMP=0x00100000004963da
- (void)drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 usingPathOverride:(id)arg5 patternOffsetsBySubpathOverride:(id)arg6 transparencyLayersBySubpath:(id)arg7;	// IMP=0x00100000004943c9
@property(readonly, nonatomic) _Bool hasLegacyFreehandDrawingBrushStroke;
@property(readonly, nonatomic) _Bool drawsInOneStep;
- (void)dealloc;	// IMP=0x001000000049404a
- (id)initWithShapeRep:(id)arg1;	// IMP=0x0010000000493f5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

