//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EVRoutingFeatureDiscoverySource, GEOObserverHashTable, NSArray, NSString, NearbyTransitFeatureDiscoverySource, OfflineMapsDownloadFeatureTipSource, OfflineMapsFeatureDiscoverySource, PreferredNetworksFeatureDiscoverySource, TransitPayFeatureDiscoverySource;
@protocol OfflineMapsFeatureDiscoveryActionDelegate, TransitPayActionDelegate, UGCPOIEnrichmentActionDelegate;

@interface FeatureDiscoveryDataProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    NearbyTransitFeatureDiscoverySource *_nearbyTransitDiscoverySource;	// 16 = 0x10
    TransitPayFeatureDiscoverySource *_transitPayDiscoverySource;	// 24 = 0x18
    OfflineMapsFeatureDiscoverySource *_offlineMapsFeatureDiscoverySource;	// 32 = 0x20
    EVRoutingFeatureDiscoverySource *_evRoutingFeatureDiscoverySource;	// 40 = 0x28
    PreferredNetworksFeatureDiscoverySource *_preferredNetworkFeatureDiscoverySource;	// 48 = 0x30
    OfflineMapsDownloadFeatureTipSource *_offlineMapsDownloadFeatureTipSource;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    _Bool _showRatingsAndPhotosBanner;	// 65 = 0x41
    _Bool _showNearbyTransitBanner;	// 66 = 0x42
    _Bool _showTransitPayBanner;	// 67 = 0x43
    _Bool _showOfflineMapsBanner;	// 68 = 0x44
    _Bool _showEVOnboardingBanner;	// 69 = 0x45
    _Bool _showPreferredNetworksBanner;	// 70 = 0x46
    _Bool _showOfflineDownloadingTip;	// 71 = 0x47
    _Bool _hasInitialData;	// 72 = 0x48
    NSArray *_features;	// 80 = 0x50
    id <UGCPOIEnrichmentActionDelegate> _poiEnrichmentActionDelegate;	// 88 = 0x58
    id <TransitPayActionDelegate> _transitPayActionDelegate;	// 96 = 0x60
    id <OfflineMapsFeatureDiscoveryActionDelegate> _offlineMapsDiscoveryActionDelegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000004012a3
@property(nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool showOfflineDownloadingTip; // @synthesize showOfflineDownloadingTip=_showOfflineDownloadingTip;
@property(nonatomic) _Bool showPreferredNetworksBanner; // @synthesize showPreferredNetworksBanner=_showPreferredNetworksBanner;
@property(nonatomic) _Bool showEVOnboardingBanner; // @synthesize showEVOnboardingBanner=_showEVOnboardingBanner;
@property(nonatomic) _Bool showOfflineMapsBanner; // @synthesize showOfflineMapsBanner=_showOfflineMapsBanner;
@property(nonatomic) _Bool showTransitPayBanner; // @synthesize showTransitPayBanner=_showTransitPayBanner;
@property(nonatomic) _Bool showNearbyTransitBanner; // @synthesize showNearbyTransitBanner=_showNearbyTransitBanner;
@property(nonatomic) __weak id <OfflineMapsFeatureDiscoveryActionDelegate> offlineMapsDiscoveryActionDelegate; // @synthesize offlineMapsDiscoveryActionDelegate=_offlineMapsDiscoveryActionDelegate;
@property(nonatomic) __weak id <TransitPayActionDelegate> transitPayActionDelegate; // @synthesize transitPayActionDelegate=_transitPayActionDelegate;
@property(nonatomic) __weak id <UGCPOIEnrichmentActionDelegate> poiEnrichmentActionDelegate; // @synthesize poiEnrichmentActionDelegate=_poiEnrichmentActionDelegate;
@property(readonly, nonatomic) NSArray *features; // @synthesize features=_features;
@property(nonatomic) _Bool showRatingsAndPhotosBanner; // @synthesize showRatingsAndPhotosBanner=_showRatingsAndPhotosBanner;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (id)_modelForPreferredNetworks;	// IMP=0x0010000000401080
- (id)_modelForEVRouting;	// IMP=0x001000000040106a
- (id)_modelForTransitPay;	// IMP=0x0010000000401054
- (id)_modelForOfflineMapsTip;	// IMP=0x001000000040103e
- (id)_modelForNearbyTransit;	// IMP=0x0010000000400e4a
- (id)_modelForRatingAndPhotos;	// IMP=0x0010000000400c73
- (void)_updateFeatures;	// IMP=0x0010000000400bb1
- (id)_featureDiscoveryModelWithPrecedence;	// IMP=0x0010000000400ad6
- (id)_featureTipModelWithPrecedence;	// IMP=0x0010000000400a91
- (void)_addNearbyTransitToFavorites;	// IMP=0x00100000004008f5
- (void)updateFeaturesWithSuggestions:(id)arg1;	// IMP=0x00100000004006d9
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x00100000004006c2
- (void)_updateAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000400680
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)dealloc;	// IMP=0x00100000004005f6
- (void)source:(id)arg1 didUpdateAvailability:(_Bool)arg2;	// IMP=0x00100000004003cb
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x00100000004002af
- (id)init;	// IMP=0x00100000003fff4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

