//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSIndexPath, NSString, SFFluidCollectionReuseableView, SFFluidCollectionView;

@protocol SFFluidCollectionViewDataSource <NSObject>
- (SFFluidCollectionReuseableView *)fluidCollectionView:(SFFluidCollectionView *)arg1 viewForItemAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)fluidCollectionView:(SFFluidCollectionView *)arg1 numberOfItemsInSection:(unsigned long long)arg2;

@optional
- (SFFluidCollectionReuseableView *)fluidCollectionView:(SFFluidCollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (unsigned long long)numberOfSectionsForFluidCollectionView:(SFFluidCollectionView *)arg1;
@end

