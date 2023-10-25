//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexSet, VKTextPosition;

__attribute__((visibility("hidden")))
@interface VKTextRange
{
    NSArray *_nsRangeArray;	// 8 = 0x8
    NSArray *_rangeArray;	// 16 = 0x10
    NSIndexSet *_indexSet;	// 24 = 0x18
    long long _emptyIndex;	// 32 = 0x20
}

+ (id)defaultRange;	// IMP=0x001000000003b5c1
+ (id)emptyRange;	// IMP=0x001000000003b5a8
+ (id)rangeWithVKRanges:(id)arg1;	// IMP=0x001000000003b2ac
+ (id)rangeWithNSRanges:(id)arg1;	// IMP=0x001000000003b0f0
+ (id)rangeWithNSRange:(struct _NSRange)arg1;	// IMP=0x001000000003b0bc
+ (id)emptyRangeWithOffset:(unsigned long long)arg1;	// IMP=0x001000000003b08b
+ (id)emptyRangeWithPosition:(id)arg1;	// IMP=0x001000000003b03f
+ (id)rangeWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;	// IMP=0x001000000003b00b
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;	// IMP=0x001000000003af9d
- (void).cxx_destruct;	// IMP=0x000000000003bd69
@property(nonatomic) long long emptyIndex; // @synthesize emptyIndex=_emptyIndex;
@property(retain, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property(retain, nonatomic) NSArray *rangeArray; // @synthesize rangeArray=_rangeArray;
@property(retain, nonatomic) NSArray *nsRangeArray; // @synthesize nsRangeArray=_nsRangeArray;
- (id)description;	// IMP=0x000000000003bce8
- (id)summaryDescription;	// IMP=0x000000000003bc40
- (unsigned long long)hash;	// IMP=0x000000000003bbfc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003baf0
- (_Bool)intersectsNSRange:(struct _NSRange)arg1;	// IMP=0x000000000003ba9a
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) unsigned long long rangeCount;
@property(readonly, nonatomic) unsigned long long totalLength;
@property(readonly, nonatomic) unsigned long long endOffset;
@property(readonly, nonatomic) unsigned long long startOffset;
@property(readonly, nonatomic) _Bool isNSNotFound;
@property(readonly, nonatomic) VKTextPosition *end;
@property(readonly, nonatomic) VKTextPosition *start;
@property(readonly, nonatomic) struct _NSRange nsRange;
@property(readonly, nonatomic) _Bool containsMultipleRanges;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)containsTextPosition:(id)arg1;	// IMP=0x000000000003b515
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b50a
- (id)initWithIndexSet:(id)arg1;	// IMP=0x000000000003af23
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x000000000003ae8a
- (id)initWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;	// IMP=0x000000000003adb6
- (id)initWithStart:(id)arg1 end:(id)arg2;	// IMP=0x000000000003ad44

@end
