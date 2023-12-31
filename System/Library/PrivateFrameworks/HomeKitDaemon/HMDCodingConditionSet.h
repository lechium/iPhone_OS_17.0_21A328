//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDManagedObjectCodingModel;

__attribute__((visibility("hidden")))
@interface HMDCodingConditionSet : NSObject
{
    HMDManagedObjectCodingModel *_model;	// 8 = 0x8
    unsigned long long _bitmask;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000040add0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040ad97
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040ad48
- (unsigned long long)hash;	// IMP=0x000000000040ad23
- (id)description;	// IMP=0x000000000040ac34
- (void)removeCondition:(id)arg1;	// IMP=0x000000000040ac15
- (void)addCondition:(id)arg1;	// IMP=0x000000000040abf9
- (id)initWithModel:(id)arg1 conditions:(id)arg2;	// IMP=0x000000000040aaac
- (id)initWithModel:(id)arg1;	// IMP=0x000000000040aa5a

@end

