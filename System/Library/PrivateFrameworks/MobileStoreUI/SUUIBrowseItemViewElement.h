//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SUUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SUUIBrowseItemViewElement
{
    _Bool _expands;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool expands; // @synthesize expands=_expands;
- (long long)pageComponentType;	// IMP=0x000000000024d749
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000024d6b2
@property(readonly, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) SUUIImageViewElement *decorationImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000024d4fc

@end

