//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLSelectIntermediate
{
    NSSQLEntity *_entity;	// 16 = 0x10
    NSString *_entityAlias;	// 24 = 0x18
    NSString *_correlationTarget;	// 32 = 0x20
    NSArray *_fetchColumns;	// 40 = 0x28
    _Bool _useDistinct;	// 48 = 0x30
    NSString *_columnAlias;	// 56 = 0x38
    _Bool _isCount;	// 64 = 0x40
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000020c1a7
- (_Bool)onlyFetchesAggregates;	// IMP=0x000000000020c10d
- (_Bool)isTargetColumnsScoped;	// IMP=0x000000000020c105
- (id)resolveVariableExpression:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000020c0fd
- (void)dealloc;	// IMP=0x000000000020c089
- (id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;	// IMP=0x000000000020bfe8
- (id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4;	// IMP=0x000000000020bf3c

@end
