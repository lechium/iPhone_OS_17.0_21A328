//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionViewUpdateItem;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject
{
    UICollectionViewUpdateItem *_collectionViewUpdateItem;	// 8 = 0x8
    struct {
        unsigned int isSectionOperation:1;
        unsigned int headerFooterOnly:1;
    } _updateItemFlags;	// 16 = 0x10
    int _action;	// 20 = 0x14
    NSIndexPath *_indexPath;	// 24 = 0x18
    long long _animation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000012fd351
@property(readonly, nonatomic) _Bool isDecomposedFromReload;
- (long long)compareIndexPathsForMoves:(id)arg1;	// IMP=0x00000000012fd142
- (long long)inverseCompareIndexPaths:(id)arg1;	// IMP=0x00000000012fd11c
- (long long)compareIndexPaths:(id)arg1;	// IMP=0x00000000012fd0f9
- (id)description;	// IMP=0x00000000012fcdda
- (id)_moveDestinationDescription;	// IMP=0x00000000012fcdcd
@property(readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;

@end

