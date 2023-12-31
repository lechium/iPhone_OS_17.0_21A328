//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSURangeList : NSObject
{
    struct vector<_NSRange, std::allocator<_NSRange>> mRangeList;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000027f50c
- (void).cxx_destruct;	// IMP=0x000000000027f4f0
- (id)stringValue;	// IMP=0x000000000027f423
- (void)consolidate;	// IMP=0x000000000027f2bf
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000027f223
- (void)reverse;	// IMP=0x000000000027f1dd
- (void)replaceWithRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000027f160
- (void)removeRangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000027f126
- (void)insertRange:(struct _NSRange)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000027ee82
- (void)addRange:(struct _NSRange)arg1;	// IMP=0x000000000027ed74
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithString:(id)arg1;	// IMP=0x000000000027eb3e
- (id)initWithRangeList:(id)arg1;	// IMP=0x000000000027ea8f
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x000000000027ea10

@end

