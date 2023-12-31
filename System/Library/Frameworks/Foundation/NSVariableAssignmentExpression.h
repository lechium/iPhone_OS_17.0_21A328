//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSVariableExpression;

__attribute__((visibility("hidden")))
@interface NSVariableAssignmentExpression : NSExpression
{
    NSVariableExpression *_assignmentVariable;	// 24 = 0x18
    NSExpression *_subexpression;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000075583d
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x0000000000756043
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000755f59
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000755e8d
- (unsigned long long)hash;	// IMP=0x0000000000755e39
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000755d88
- (id)predicateFormat;	// IMP=0x0000000000755cce
- (id)subexpression;	// IMP=0x0000000000755cbd
- (id)variable;	// IMP=0x0000000000755ca0
- (id)assignmentVariable;	// IMP=0x0000000000755c8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000755c06
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007559cc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007558cd
- (void)allowEvaluation;	// IMP=0x0000000000755845
- (unsigned long long)expressionType;	// IMP=0x0000000000755832
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;	// IMP=0x0000000000755798
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;	// IMP=0x0000000000755715
- (void)dealloc;	// IMP=0x000000000075569a

@end

