//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/WBSCloudHistoryConfiguration.h>

@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration
{
    NSArray *_assetsSortedByVersionNumber;	// 8 = 0x8
    NSDictionary *_remoteConfigurationDictionary;	// 16 = 0x10
    _Bool _fetchedAssetData;	// 24 = 0x18
}

+ (id)sharedConfiguration;	// IMP=0x0040000000001345
- (void).cxx_destruct;	// IMP=0x0020000000001e61
- (_Bool)shouldUseLongLivedOperationsToSaveRecords;	// IMP=0x0010000000001e40
- (void)_reloadConfigurationDataIfNecessary;	// IMP=0x0010000000001bd1
- (id)_cloudConfigurationAssetsSortedByVersionNumber;	// IMP=0x001000000000195d
- (id)remoteConfiguration;	// IMP=0x00100000000014d3
- (id)platformBuiltInConfiguration;	// IMP=0x0010000000001416
- (id)init;	// IMP=0x001000000000139a

@end
