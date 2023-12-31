//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HomeAnalyticsManager : NSObject
{
}

+ (void)captureStateWithShortcuts:(id)arg1;	// IMP=0x0040000000ce2cfd
+ (void)captureRAPAction;	// IMP=0x0010000000ce2cd7
+ (void)captureMarkMyLocationAction;	// IMP=0x0010000000ce2cb1
+ (void)captureShareMyLocationAction;	// IMP=0x0010000000ce2c8b
+ (void)captureExploreGuidesTapAction;	// IMP=0x0010000000ce2c65
+ (void)captureFeatureDiscoveryBannerDidAppear;	// IMP=0x0010000000ce2c3f
+ (void)captureRatingSuggestionTapAction;	// IMP=0x0010000000ce2c19
+ (void)captureRatingRequestDiscoveryAction:(int)arg1;	// IMP=0x0010000000ce2bf8
+ (void)captureTapActionWithEntry:(id)arg1;	// IMP=0x0010000000ce29dc
+ (void)captureCuratedCollectionCarouselScrollBackward;	// IMP=0x0010000000ce29c5
+ (void)captureCuratedCollectionCarouselScrollForward;	// IMP=0x0010000000ce29ae
+ (void)_captureCuratedCollectionCarouselScrollAction:(int)arg1;	// IMP=0x0010000000ce2966
+ (void)captureCuratedCollectionCarouselTapCollectionWithIdentifier:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x0010000000ce2864
+ (void)captureCuratedCollectionAction:(int)arg1 withCollectionHandler:(id)arg2 verticalIndex:(unsigned long long)arg3;	// IMP=0x0010000000ce26e0

@end

