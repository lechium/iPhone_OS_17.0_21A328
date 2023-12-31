//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (PhotosUICore)
+ (id)px_indexPathForItem:(long long)arg1 inSection:(long long)arg2 withKind:(long long)arg3;	// IMP=0x00200000002eb4c9
+ (id)px_indexPathForItem:(long long)arg1 inSection:(long long)arg2;	// IMP=0x00200000002eb45f
+ (id)px_indexPathsForItems:(id)arg1 inSection:(long long)arg2;	// IMP=0x00200000002eb37f
- (id)px_indexPathAfterDeletingItemAtIndexPath:(id)arg1;	// IMP=0x00100000002eb1d2
- (id)px_indexPathAfterInsertingItemAtIndexPath:(id)arg1;	// IMP=0x00100000002eb00e
- (id)px_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00100000002eaf16
- (id)px_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;	// IMP=0x00100000002ead9a
- (id)px_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;	// IMP=0x00100000002eac75
- (id)px_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;	// IMP=0x00100000002eab0b
- (id)px_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;	// IMP=0x00100000002eaa2e
- (id)px_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00100000002ea971
@property(readonly, nonatomic) long long px_kind;
@property(readonly, nonatomic) long long px_section;
@property(readonly, nonatomic) long long px_item;
@end

