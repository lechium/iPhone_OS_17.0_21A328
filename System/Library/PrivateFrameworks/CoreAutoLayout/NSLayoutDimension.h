//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutDimension
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000031e1f
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x0000000000031e05
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031daa
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031d51
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031cfb
- (id)constraintLessThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000031cc7
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000031c95
- (id)constraintEqualToConstant:(double)arg1;	// IMP=0x0000000000031c66
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031c12
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031bc0
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031b71
- (id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005962
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005950
- (id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x000000000000593e
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x000000000000592a
- (id)ruleLessThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000005916
- (id)ruleEqualToConstant:(double)arg1;	// IMP=0x0000000000005902
- (id)minusDimension:(id)arg1;	// IMP=0x00000000000239ad
- (id)plusDimension:(id)arg1;	// IMP=0x000000000002399b
- (id)plus:(double)arg1;	// IMP=0x0000000000023989
- (id)times:(double)arg1;	// IMP=0x0000000000023977
- (id)anchorBySubtractingDimension:(id)arg1;	// IMP=0x0000000000023934
- (id)anchorByAddingDimension:(id)arg1;	// IMP=0x00000000000238f9
- (id)anchorByAddingConstant:(double)arg1;	// IMP=0x00000000000238b1
- (id)anchorByMultiplyingByConstant:(double)arg1;	// IMP=0x000000000002386e

@end
