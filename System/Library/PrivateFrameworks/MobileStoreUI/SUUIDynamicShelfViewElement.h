//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIViewElement;
@protocol SUUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SUUIDynamicShelfViewElement
{
    SUUIViewElement *_cellTemplateViewElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013a5c8
- (void)setShelfItemViewElementValidator:(CDUnknownBlockType)arg1;	// IMP=0x000000000013a57e
- (_Bool)isDynamicContainer;	// IMP=0x000000000013a576
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000013a4d6
@property(readonly, nonatomic) SUUIViewElement *cellTemplateViewElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <SUUIEntityProviding> entityProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
