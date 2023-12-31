//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class ACHTemplate, NSDictionary, NSObject, NSString, NSURL;
@protocol ACHTemplateAssetSourceDelegate;

@protocol ACHTemplateAssetSource <NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (NSURL *)stickerBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)propertyListBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)resourceBundleURLForTemplate:(ACHTemplate *)arg1;
- (NSURL *)localizationBundleURLForTemplate:(ACHTemplate *)arg1;

@optional
@property(nonatomic) __weak NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;
- (long long)mobileAssetVersionForTemplate:(ACHTemplate *)arg1;
- (NSDictionary *)customPlaceholderValuesForTemplate:(ACHTemplate *)arg1 error:(id *)arg2;
@end

