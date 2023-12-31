//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKStroke.h>

@interface PKStroke (CRLAdditions)
+ (id)crl_strokePathsExcludingNonMaskedPathRangesForPKStroke:(id)arg1;	// IMP=0x00200000000e3068
- (id)crl_strokeByAppendingTransform:(struct CGAffineTransform)arg1;	// IMP=0x00100000000e2e59
- (id)crl_strokeForTracingWithOutset:(double)arg1 shouldIgnoreMask:(_Bool)arg2;	// IMP=0x00100000000e26c9
@property(readonly, nonatomic) double crl_maximumActualWidth;
@property(readonly, nonatomic) struct CGPoint crl_anchorPointForTexture;
- (id)crl_copyWithNewAnchorPointForTexture:(struct CGPoint)arg1;	// IMP=0x001000000013f0c9
@end

