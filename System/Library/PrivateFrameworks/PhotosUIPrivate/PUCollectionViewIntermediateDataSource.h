//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UICollectionViewDataSource;

__attribute__((visibility("hidden")))
@interface PUCollectionViewIntermediateDataSource : NSObject
{
    id <UICollectionViewDataSource> _realDataSource;	// 8 = 0x8
}

@property(nonatomic) id <UICollectionViewDataSource> realDataSource; // @synthesize realDataSource=_realDataSource;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001ba8d0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001ba8ba
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001ba8a4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001ba88e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

