//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface FPItemCollectionIndexPathBasedDiffs
{
    NSMutableArray *_movedSourceIndexPaths;	// 8 = 0x8
    NSMutableArray *_movedDestinationIndexPaths;	// 16 = 0x10
    NSMutableIndexSet *_deletedIndexes;	// 24 = 0x18
    NSMutableIndexSet *_insertedIndexes;	// 32 = 0x20
    NSMutableIndexSet *_updatedIndexes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000526c6
@property(retain) NSMutableIndexSet *updatedIndexes; // @synthesize updatedIndexes=_updatedIndexes;
@property(retain) NSMutableIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property(retain) NSMutableIndexSet *deletedIndexes; // @synthesize deletedIndexes=_deletedIndexes;
@property(retain) NSMutableArray *movedDestinationIndexPaths; // @synthesize movedDestinationIndexPaths=_movedDestinationIndexPaths;
@property(retain) NSMutableArray *movedSourceIndexPaths; // @synthesize movedSourceIndexPaths=_movedSourceIndexPaths;
- (_Bool)containsChanges;	// IMP=0x00000000000524de

@end

