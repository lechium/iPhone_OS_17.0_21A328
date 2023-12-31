//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLShapeLayout, NSString, _TtC8Freeform12CRLShapeItem;

@interface CRLShapeLayoutHelperDefault : NSObject
{
    CRLShapeLayout *_shapeLayout;	// 8 = 0x8
    _TtC8Freeform12CRLShapeItem *_shapeInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002a6563
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;	// IMP=0x00100000002a60af
- (struct CGRect)boundsOfLineEndForHead:(_Bool)arg1 transform:(struct CGAffineTransform)arg2;	// IMP=0x00100000002a5ebc
- (struct CGRect)computeClippedPathBoundsWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x00100000002a5dbc
- (struct CGRect)computePathBounds;	// IMP=0x00100000002a5b71
@property(readonly, nonatomic) _Bool shouldComputeSeparateClippedPathBounds;
- (id)initWithShapeLayout:(id)arg1;	// IMP=0x00100000002a59d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

