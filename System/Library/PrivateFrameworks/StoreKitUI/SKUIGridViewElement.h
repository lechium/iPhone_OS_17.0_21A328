//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class SKUICollectionDOMFeature;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElement : SKUIViewElement
{
    id _persistenceKey;	// 8 = 0x8
    _Bool _showsEditMode;	// 16 = 0x10
}

+ (id)supportedFeatures;	// IMP=0x00600000002d99dd
- (void).cxx_destruct;	// IMP=0x00000000002da027
@property(readonly, nonatomic) _Bool showsEditMode; // @synthesize showsEditMode=_showsEditMode;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2;	// IMP=0x00000000002d9eaa
@property(readonly, nonatomic) SKUICollectionDOMFeature *collectionFeature;
@property(readonly, nonatomic) _Bool allowsMultipleSelectionDuringEditing;
- (id)persistenceKey;	// IMP=0x00000000002d9cfe
- (long long)pageComponentType;	// IMP=0x00000000002d9cf3
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d9bdc
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000002d9ac0
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000002d97f7

@end
