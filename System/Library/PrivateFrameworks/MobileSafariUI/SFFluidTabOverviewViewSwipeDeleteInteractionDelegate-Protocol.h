//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSIndexPath, SFFluidCollectionView, SFFluidTabOverviewSwipeDeleteInteraction;

@protocol SFFluidTabOverviewViewSwipeDeleteInteractionDelegate <NSObject>

@optional
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 interaction:(SFFluidTabOverviewSwipeDeleteInteraction *)arg2 didDeleteItemAtIndexPath:(NSIndexPath *)arg3;
- (_Bool)fluidCollectionView:(SFFluidCollectionView *)arg1 interaction:(SFFluidTabOverviewSwipeDeleteInteraction *)arg2 canDeleteItemAtIndexPath:(NSIndexPath *)arg3;
@end
