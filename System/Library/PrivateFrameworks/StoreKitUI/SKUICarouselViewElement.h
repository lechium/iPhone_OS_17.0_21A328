//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class SKUIProgressIndicatorViewElement;

__attribute__((visibility("hidden")))
@interface SKUICarouselViewElement : SKUIViewElement
{
    double _displayInterval;	// 8 = 0x8
}

@property(readonly, nonatomic) double displayInterval; // @synthesize displayInterval=_displayInterval;
@property(readonly, nonatomic) SKUIProgressIndicatorViewElement *progressIndicatorElement;
- (long long)pageComponentType;	// IMP=0x00000000000739a2
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000073895
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000000737fc
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000000736a9

@end

