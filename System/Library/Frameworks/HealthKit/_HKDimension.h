//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKDimension : NSObject
{
    _HKFactorization *_reduction;	// 8 = 0x8
    struct os_unfair_lock_s _reductionLock;	// 16 = 0x10
}

+ (id)dimensionFromString:(id)arg1;	// IMP=0x0060000000101ab0
- (void).cxx_destruct;	// IMP=0x0000000000101e26
- (id)_baseDimensions;	// IMP=0x00000000002a23ba
- (id)description;	// IMP=0x0000000000101dd6
- (id)reduction;	// IMP=0x0000000000101bd1
- (id)init;	// IMP=0x000000000001ab84

@end

