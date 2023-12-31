//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface STCoreDataObservationFilter : NSObject
{
    NSPredicate *_predicate;	// 8 = 0x8
    long long _primaryType;	// 16 = 0x10
    long long _secondaryType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002d227
@property(readonly) long long secondaryType; // @synthesize secondaryType=_secondaryType;
@property(readonly) long long primaryType; // @synthesize primaryType=_primaryType;
@property(readonly, copy) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (unsigned long long)hash;	// IMP=0x001000000002d181
- (_Bool)isEqualToCoreDataObservationFilter:(id)arg1;	// IMP=0x001000000002d091
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002d02e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002cfdd
- (id)initWithPredicate:(id)arg1 primaryType:(long long)arg2 secondaryType:(long long)arg3;	// IMP=0x001000000002cf4b

@end

