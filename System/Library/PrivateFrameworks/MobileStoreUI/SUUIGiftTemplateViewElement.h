//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSString, SUUIItem;

__attribute__((visibility("hidden")))
@interface SUUIGiftTemplateViewElement : SUUIViewElement
{
    long long _giftType;	// 8 = 0x8
    NSString *_productBuyParams;	// 16 = 0x10
    long long _productItemIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025dc03
@property(readonly, nonatomic) long long giftType; // @synthesize giftType=_giftType;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000025db1c
@property(readonly, nonatomic) SUUIItem *productItem;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000025cf5d

@end
