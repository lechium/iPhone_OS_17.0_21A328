//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLWPDirtyRangeArray : NSObject
{
    struct vector<CRLWPDirtyRange, std::allocator<CRLWPDirtyRange>> _rangeVector;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x002000000009a3a5
- (void).cxx_destruct;	// IMP=0x001000000009a389
- (id)dirtyRangesIntersecting:(struct _NSRange)arg1;	// IMP=0x001000000009a277
- (unsigned long long)indexForRange:(struct _NSRange)arg1;	// IMP=0x001000000009a1f6
- (long long)delta;	// IMP=0x001000000009a1d7
- (struct _NSRange)superRange;	// IMP=0x001000000009a182
- (_Bool)isEqualToDirtyRangeArray:(id)arg1;	// IMP=0x001000000009a0f9
- (CDStruct_9ae92562)dirtyRangeAtIndex:(unsigned long long)arg1;	// IMP=0x001000000009a0d8
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009a075
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009a043
- (id)initWithRangeVector:(const void *)arg1;	// IMP=0x0010000000099fe1
- (id)initWithDirtyRange:(CDStruct_9ae92562)arg1;	// IMP=0x0010000000099e7a
- (id)init;	// IMP=0x0010000000099e4b

@end

