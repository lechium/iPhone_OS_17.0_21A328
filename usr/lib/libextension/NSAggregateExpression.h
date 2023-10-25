//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

__attribute__((visibility("hidden")))
@interface NSAggregateExpression : NSExpression
{
    id _collection;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000005e98d5
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x00000000005ea363
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000005ea1fa
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000005ea016
- (unsigned long long)hash;	// IMP=0x00000000005e9ff9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005e9fb2
- (id)collection;	// IMP=0x00000000005e9fa1
- (id)constantValue;	// IMP=0x00000000005e9f90
- (id)predicateFormat;	// IMP=0x00000000005e9f24
- (void)dealloc;	// IMP=0x00000000005e9ebf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005e9cd8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005e9ae4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005e9a20
- (void)allowEvaluation;	// IMP=0x00000000005e98e8
- (unsigned long long)expressionType;	// IMP=0x00000000005e98dd
- (id)initWithCollection:(id)arg1;	// IMP=0x00000000005e97d3

@end
