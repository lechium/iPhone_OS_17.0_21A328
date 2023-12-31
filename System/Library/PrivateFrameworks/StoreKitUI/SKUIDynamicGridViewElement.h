//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIDynamicGridViewElement
{
    _Bool _hasValidTemplateDefinitionMap;	// 8 = 0x8
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;	// 16 = 0x10
    long long _minimumEntityCountForSections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b849f
@property(readonly, nonatomic) long long minimumEntityCountForSections; // @synthesize minimumEntityCountForSections=_minimumEntityCountForSections;
- (void)_unfilteredEnumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b842c
- (id)_templateDefinitionTypeToModeValueMap;	// IMP=0x00000000001b821b
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;	// IMP=0x00000000001b8133
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;	// IMP=0x00000000001b7f03
@property(readonly, nonatomic, getter=isMalformed) _Bool malformed;
@property(readonly, nonatomic) _Bool hasSectionHeaders;
- (_Bool)allowsMultipleSelectionDuringEditing;	// IMP=0x00000000001b7c75
- (long long)pageComponentType;	// IMP=0x00000000001b7c6a
- (_Bool)isDynamicContainer;	// IMP=0x00000000001b7c62
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000001b7ba6
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000001b7a7b

@end

