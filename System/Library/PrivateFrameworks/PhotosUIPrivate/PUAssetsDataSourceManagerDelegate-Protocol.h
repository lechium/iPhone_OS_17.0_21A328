//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSArray, PUAssetsDataSource, PUAssetsDataSourceManager;

@protocol PUAssetsDataSourceManagerDelegate <NSObject>
- (NSArray *)assetsDataSourceManagerInterestingAssetReferences:(PUAssetsDataSourceManager *)arg1;
- (void)assetsDataSourceManager:(PUAssetsDataSourceManager *)arg1 didChangeAssetsDataSource:(PUAssetsDataSource *)arg2;
@end

