//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBPersonalizationProfile.h>

@class NSDictionary;

@interface NTPBPersonalizationProfile (FCAdditions)
- (unsigned long long)lastChangeNumberForInstanceIdentifier:(id)arg1;	// IMP=0x0030000000213993
- (id)historyForInstanceIdentifier:(id)arg1;	// IMP=0x00300000002137c0
@property(readonly, nonatomic) NSDictionary *historiesByInstanceIdentifier;
@property(readonly, nonatomic) NSDictionary *aggregatesByFeatureKey;
@end

