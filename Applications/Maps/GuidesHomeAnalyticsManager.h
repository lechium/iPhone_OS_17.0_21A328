//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemIdentifier;
@protocol OS_dispatch_queue;

@interface GuidesHomeAnalyticsManager : NSObject
{
    struct GuidesHomeEvent event;	// 8 = 0x8
    GEOMapItemIdentifier *_guideLocationId;	// 104 = 0x68
    _Bool _isCuratedGuidesHome;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_utilityQueue;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000008d92bb
- (void)cleanUp;	// IMP=0x00100000008d9216
- (void)logEvent;	// IMP=0x00100000008d90c0
- (void)guidesHomeClosed;	// IMP=0x00100000008d8f62
- (void)guidesHomeScrolledDown;	// IMP=0x00100000008d8e04
- (void)guidesHomeScrolledUp;	// IMP=0x00100000008d8ca6
- (void)guidesHomeTappedFilteredGuide:(id)arg1 publisherId:(id)arg2 isCurrentlySaved:(_Bool)arg3 atIndex:(unsigned long long)arg4 carouselIndex:(unsigned long long)arg5 filterValue:(id)arg6;	// IMP=0x00100000008d898a
- (void)guidesHomeDisplayFilteredGuideList:(id)arg1;	// IMP=0x00100000008d8699
- (void)guideHomeTappedFilter:(id)arg1 atIndex:(unsigned long long)arg2 carouselIndex:(unsigned long long)arg3;	// IMP=0x00100000008d8484
- (void)guidesHomeTappedEditorPickedGuide:(id)arg1 publisherId:(id)arg2 isCurrentlySaved:(_Bool)arg3 atIndex:(unsigned long long)arg4 carouselIndex:(unsigned long long)arg5;	// IMP=0x00100000008d81a1
- (void)guidesHomeTappedTemporalGuide:(id)arg1 publisherId:(id)arg2 isCurrentlySaved:(_Bool)arg3 atIndex:(unsigned long long)arg4 carouselIndex:(unsigned long long)arg5;	// IMP=0x00100000008d7ebe
- (void)guidesHomeTappedLatestGuide:(id)arg1 publisherId:(id)arg2 isCurrentlySaved:(_Bool)arg3 atIndex:(unsigned long long)arg4 carouselIndex:(unsigned long long)arg5;	// IMP=0x00100000008d7bdb
- (void)guidesHomeTappedPublisher:(id)arg1 atIndex:(unsigned long long)arg2 carouselIndex:(unsigned long long)arg3;	// IMP=0x00100000008d7960
- (void)guidesHomeTappedCityGuide:(id)arg1 atIndex:(unsigned long long)arg2 carouselIndex:(unsigned long long)arg3;	// IMP=0x00100000008d76dc
- (void)guidesHomeRevealed;	// IMP=0x00100000008d74f6
- (void)guidesHomeCityGuidesMoreButtonTapped;	// IMP=0x00100000008d7398
- (void)guidesHomeCitySelectorTapped;	// IMP=0x00100000008d723a
- (void)guidesHomeTappedFeaturedGuide:(id)arg1 publisherId:(id)arg2 isCurrentlySaved:(_Bool)arg3;	// IMP=0x00100000008d6fb9
- (void)updateAnalyticsManagerWithGuideLocationId:(id)arg1 isCuratedGuidesHome:(_Bool)arg2;	// IMP=0x00100000008d6e9b
- (id)initWithGuideLocationId:(id)arg1 isCuratedGuidesHome:(_Bool)arg2;	// IMP=0x00100000008d6df9

@end

