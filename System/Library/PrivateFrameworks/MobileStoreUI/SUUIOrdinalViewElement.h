//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUIViewElementText;

__attribute__((visibility("hidden")))
@interface SUUIOrdinalViewElement : SUUIViewElement
{
    SUUIViewElementText *_text;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ea0cf
@property(readonly, nonatomic) SUUIViewElementText *text; // @synthesize text=_text;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000001ea014
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000001e9f72

@end

