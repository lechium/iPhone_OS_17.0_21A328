//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AnchoredValuePair, NSMutableArray;

@interface AnchoredValueGenerator : NSObject
{
    NSMutableArray *_pairs;	// 8 = 0x8
    _Bool _needsSorting;	// 16 = 0x10
    AnchoredValuePair *_cachedLastResult;	// 24 = 0x18
    int _calculationType;	// 32 = 0x20
    int _roundingType;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0020000000030150
@property(nonatomic) int roundingType; // @synthesize roundingType=_roundingType;
@property(nonatomic) int calculationType; // @synthesize calculationType=_calculationType;
- (void)_sort;	// IMP=0x0010000000030044
- (double)_roundValue:(double)arg1;	// IMP=0x001000000002ffa5
- (double)_nearestValueForSize:(double)arg1;	// IMP=0x001000000002fdb3
- (double)_interpolatedValueForSize:(double)arg1;	// IMP=0x001000000002fb04
- (void)_findBoundsForSize:(double)arg1 outLowerBound:(id *)arg2 outUpperBound:(id *)arg3 outExactMatchValue:(double *)arg4 outFoundExactMatch:(_Bool *)arg5;	// IMP=0x001000000002f77d
- (double)valueForWindowSizeHeight:(unsigned long long)arg1;	// IMP=0x001000000002f756
- (double)valueForWindowSizeWidth:(unsigned long long)arg1;	// IMP=0x001000000002f72f
- (double)valueForSize:(double)arg1;	// IMP=0x001000000002f53c
- (void)addAnchoredValue:(double)arg1 forWindowSizeHeight:(unsigned long long)arg2 layoutShift:(_Bool)arg3;	// IMP=0x001000000002f4fd
- (void)addAnchoredValue:(double)arg1 forWindowSizeWidth:(unsigned long long)arg2 layoutShift:(_Bool)arg3;	// IMP=0x001000000002f4be
- (void)addAnchoredValue:(double)arg1 forSize:(double)arg2 layoutShift:(_Bool)arg3;	// IMP=0x001000000002f412
- (void)addAnchoredValue:(double)arg1 forWindowSizeHeight:(unsigned long long)arg2;	// IMP=0x001000000002f3fe
- (void)addAnchoredValue:(double)arg1 forWindowSizeWidth:(unsigned long long)arg2;	// IMP=0x001000000002f3ea
- (void)addAnchoredValue:(double)arg1 forSize:(double)arg2;	// IMP=0x001000000002f3d6
- (id)description;	// IMP=0x001000000002f395
- (id)init;	// IMP=0x001000000002f359

@end

