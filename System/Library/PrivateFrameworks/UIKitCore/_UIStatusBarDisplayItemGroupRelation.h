//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemGroupRelation
{
    _Bool _requiresAll;	// 8 = 0x8
    NSArray *_relations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011ab2f6
@property(nonatomic) _Bool requiresAll; // @synthesize requiresAll=_requiresAll;
@property(retain, nonatomic) NSArray *relations; // @synthesize relations=_relations;
- (id)_ui_descriptionBuilder;	// IMP=0x00000000011ab1c1
- (id)type;	// IMP=0x00000000011ab19a
- (id)itemStates;	// IMP=0x00000000011aafeb
- (_Bool)isFulfilled;	// IMP=0x00000000011aae39

@end

