//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSMAAutoAssetSelector, MAAutoAsset, NSString;

@protocol DDSMAAutoAssetProvider <NSObject>
- (void)fetchLockReasonCountForAutoAsset:(MAAutoAsset *)arg1 callback:(void (^)(NSNumber *, NSError *))arg2;
- (void)lockAutoAsset:(MAAutoAsset *)arg1 callback:(void (^)(MAAutoAssetSelector *, _Bool, NSError *))arg2;
- (MAAutoAsset *)autoAssetForAssetSelector:(DDSMAAutoAssetSelector *)arg1 clientID:(NSString *)arg2;
@end
