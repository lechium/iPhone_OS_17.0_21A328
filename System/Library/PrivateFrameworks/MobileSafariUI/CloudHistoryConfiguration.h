//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSCloudHistoryConfiguration.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration
{
    NSArray *_assetsSortedByVersionNumber;	// 8 = 0x8
    NSDictionary *_remoteConfigurationDictionary;	// 16 = 0x10
    _Bool _fetchedAssetData;	// 24 = 0x18
}

+ (id)sharedConfiguration;	// IMP=0x0060000000098596
- (void).cxx_destruct;	// IMP=0x000000000009904a
- (_Bool)shouldUseLongLivedOperationsToSaveRecords;	// IMP=0x0000000000099029
- (void)_reloadConfigurationDataIfNecessary;	// IMP=0x0000000000098dba
- (id)_cloudConfigurationAssetsSortedByVersionNumber;	// IMP=0x0000000000098b46
- (id)remoteConfiguration;	// IMP=0x0000000000098724
- (id)platformBuiltInConfiguration;	// IMP=0x0000000000098667
- (id)init;	// IMP=0x00000000000985eb

@end

