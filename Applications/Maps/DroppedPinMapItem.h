//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DroppedPinMapItemKey, GEOServerResultScoreMetadata, NSArray;

@interface DroppedPinMapItem
{
    NSArray *_autocompletionStrings;	// 56 = 0x38
    DroppedPinMapItemKey *_droppedPinKey;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000a66e15
- (id)leafPersonalizedAutocompleteItems;	// IMP=0x0010000000a66db5
@property(readonly, nonatomic) _Bool isCompoundPersonalizedAutocompleteItem;
@property(readonly, nonatomic) unsigned long long serverItemIndexInSection;
@property(readonly, nonatomic) unsigned long long serverSectionIndex;
@property(readonly, nonatomic) _Bool hasServerItemIndex;
@property(readonly, nonatomic) NSArray *autocompletionStrings;
@property(readonly, nonatomic) id autocompleteObject;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) long long priorityOverride;
@property(readonly, nonatomic) _Bool hasPriorityOverride;
@property(readonly, nonatomic) long long sourceSubtype;
@property(readonly, nonatomic) long long sourceType;
- (id)styleAttributes;	// IMP=0x0010000000a6698e
- (id)title;	// IMP=0x0010000000a66865
- (id)keys;	// IMP=0x0010000000a6683e
- (id)initWithSearchResult:(id)arg1;	// IMP=0x0010000000a66799

@end

