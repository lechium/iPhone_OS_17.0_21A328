//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol AllCollectionsViewDataProvider <NSObject>
- (unsigned int)batchSize;
- (NSArray *)placeCollectionsFromLastBatch;
- (NSArray *)collectionResults;
- (NSArray *)allCollectionViewIdentifiers;
- (NSArray *)allCollectionViewFilters;
@end
