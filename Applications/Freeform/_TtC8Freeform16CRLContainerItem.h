//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSDictionary;

@interface _TtC8Freeform16CRLContainerItem
{
    MISSING_TYPE *items;	// 0 = 0x0
    MISSING_TYPE *timeStamp;	// 22010312 = 0x14fd9c8
    MISSING_TYPE *_cachedOrderedItems;	// 0 = 0x0
    MISSING_TYPE *_cachedOrderedItemUUIDs;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000008ac670
- (id)childEnumeratorForUserFlags:(unsigned long long)arg1;	// IMP=0x00100000008ac5d0
- (id)childEnumerator;	// IMP=0x00100000008ac590
- (id)getReferencedAssetIDsWithIncludeChildren:(_Bool)arg1;	// IMP=0x00100000008ac510
- (_Bool)beforeInsertionAddNewItems:(id)arg1 atIndex:(long long)arg2 board:(id)arg3 error:(id *)arg4;	// IMP=0x00100000008ac090
- (MISSING_TYPE *)beforeInsertionAddNewItems:board:error: /* Error: Ran out of types for this method. */;	// IMP=0x00100000008abfd0
- (void)fixUpWithRemovedChild:(id)arg1;	// IMP=0x00100000008abf50
- (_Bool)containsChild:(id)arg1;	// IMP=0x00100000008abe60
- (void)fixUpWithInsertedChild:(id)arg1;	// IMP=0x00100000008abe10
- (void)_willAddNewItemWithItem:(id)arg1;	// IMP=0x00100000008abe00
- (id)infoForSelectionPath:(id)arg1;	// IMP=0x00100000008abd40
@property(nonatomic, readonly) NSArray *childInfos;
- (void)clearOrderedItemsCache;	// IMP=0x00100000008abc80
@property(nonatomic, readonly) NSArray *orderedItemUUIDs;
@property(nonatomic, readonly) NSArray *childItems;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(nonatomic, copy) NSDictionary *items;
- (void)_setParentItemUUIDWithItem:(id)arg1 parent:(id)arg2;	// IMP=0x00100000008d6000
- (void)_setParentItemReferenceWithItem:(id)arg1 parent:(id)arg2;	// IMP=0x00100000008d5fe0

@end
