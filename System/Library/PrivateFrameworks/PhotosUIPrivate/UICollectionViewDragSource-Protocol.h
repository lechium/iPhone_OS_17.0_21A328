//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSArray, NSIndexPath, UICollectionView, UIDragPreviewParameters;
@protocol UIDragSession;

@protocol UICollectionViewDragSource <NSObject>

@optional
- (void)_collectionView:(UICollectionView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)_collectionView:(UICollectionView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (UIDragPreviewParameters *)_collectionView:(UICollectionView *)arg1 liftingPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)_collectionView:(UICollectionView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint)arg4;
- (NSArray *)_collectionView:(UICollectionView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

