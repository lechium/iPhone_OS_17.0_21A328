//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryViewElement : SKUIViewElement
{
    NSString *_targetIndexBarEntryID;	// 8 = 0x8
    long long _visibilityPriority;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000210b1f
@property(readonly, nonatomic) long long visibilityPriority; // @synthesize visibilityPriority=_visibilityPriority;
@property(readonly, copy, nonatomic) NSString *targetIndexBarEntryID; // @synthesize targetIndexBarEntryID=_targetIndexBarEntryID;
@property(readonly, nonatomic) SKUIViewElement *childElement;
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x0000000000210917
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000210733

@end

