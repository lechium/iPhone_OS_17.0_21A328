//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSString, SUUIImageViewElement, SUUILabelViewElement;

__attribute__((visibility("hidden")))
@interface SUUIPhysicalCircleItemViewElement : SUUIViewElement
{
    long long _circleSize;	// 8 = 0x8
    NSString *_itemIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000124d26
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) long long circleSize; // @synthesize circleSize=_circleSize;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x0000000000124c4a
@property(readonly, nonatomic) SUUILabelViewElement *titleElement;
@property(readonly, nonatomic) SUUIImageViewElement *imageElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000124b30

@end
