//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLBinaryIndex;

__attribute__((visibility("hidden")))
@interface NSSQLIndexIntermediate
{
    NSSQLBinaryIndex *_index;	// 16 = 0x10
    _Bool _isHandlingExpressions;	// 24 = 0x18
}

- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000027bbdd
- (id)governingEntity;	// IMP=0x000000000027bbc0
- (_Bool)isIndexExpressionScoped;	// IMP=0x000000000027bbb0
- (_Bool)isIndexScoped;	// IMP=0x000000000027bba8
- (void)dealloc;	// IMP=0x000000000027bb5a
- (id)initForIndex:(id)arg1 withScope:(id)arg2;	// IMP=0x000000000027bb00

@end

