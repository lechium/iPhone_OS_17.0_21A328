//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString, PersonalizedItemManager;
@protocol OS_dispatch_queue;

@interface PersonalizedItemAutocompleteFilter
{
    NSArray *_personalizedItems;	// 8 = 0x8
    NSArray *_matchingItems;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lock;	// 24 = 0x18
    _Bool _hasItemsWhenSearchStringIsEmpty;	// 32 = 0x20
    PersonalizedItemManager *_inputItems;	// 40 = 0x28
    NSString *_searchString;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000a29bff
@property(nonatomic) _Bool hasItemsWhenSearchStringIsEmpty; // @synthesize hasItemsWhenSearchStringIsEmpty=_hasItemsWhenSearchStringIsEmpty;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) PersonalizedItemManager *inputItems; // @synthesize inputItems=_inputItems;
- (void)personalizedItemManager:(id)arg1 didChangeItems:(id)arg2;	// IMP=0x0010000000a29b0f
- (void)personalizedItemManagerWillChangeItems:(id)arg1;	// IMP=0x0010000000a29b09
- (_Bool)itemIsAllowed:(id)arg1;	// IMP=0x0010000000a29a0d
- (id)allItems;	// IMP=0x0010000000a2904d
- (void)_invalidateResults;	// IMP=0x0010000000a28fbe
- (void)dealloc;	// IMP=0x0010000000a28db6
- (id)init;	// IMP=0x0010000000a28d2d

@end

