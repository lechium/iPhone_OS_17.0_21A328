//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol MULayoutItem;

__attribute__((visibility("hidden")))
@interface MUSizeLayoutInternal
{
    MISSING_TYPE *builder;	// 24 = 0x18
}

+ (double)useIntrinsicContentSize;	// IMP=0x0040000000027510
- (void).cxx_destruct;	// IMP=0x0000000000028aa0
@property(nonatomic) float priority;
@property(nonatomic) struct CGSize size;
@property(nonatomic) __weak id <MULayoutItem> item;
- (id)initWithItem:(id)arg1 size:(struct CGSize)arg2 priority:(float)arg3;	// IMP=0x0000000000027760
- (id)initWithItem:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000027620

@end

