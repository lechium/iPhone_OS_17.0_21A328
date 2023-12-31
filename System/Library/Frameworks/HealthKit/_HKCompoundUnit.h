//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKUnit.h"

@class _HKDimension, _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKCompoundUnit : HKUnit
{
    _HKFactorization *_baseUnits;	// 48 = 0x30
    _HKDimension *_dimension;	// 56 = 0x38
    struct os_unfair_lock_s _dimensionLock;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001d50a5
+ (id)unitWithBaseUnits:(id)arg1;	// IMP=0x006000000001acf3
- (void).cxx_destruct;	// IMP=0x00000000001d51c1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d50b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e0dd
- (unsigned long long)hash;	// IMP=0x00000000001d5088
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000dc98
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;	// IMP=0x000000000001af00
- (id)_baseUnits;	// IMP=0x000000000000dd3f
- (id)dimension;	// IMP=0x00000000001d4f06
- (id)unitString;	// IMP=0x000000000000dd75
- (id)_initWithBaseUnits:(id)arg1;	// IMP=0x000000000001ad3c

@end

