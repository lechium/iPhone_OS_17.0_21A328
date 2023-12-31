//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSArray, NSString, SKUICarouselViewElement;

__attribute__((visibility("hidden")))
@interface SKUICarouselPageComponent : SKUIPageComponent
{
    NSArray *_carouselItems;	// 8 = 0x8
    double _cycleInterval;	// 16 = 0x10
    long long _missingItemCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003addfd
@property(readonly, nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(readonly, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
- (id)valueForMetricsField:(id)arg1;	// IMP=0x00000000003add54
- (id)metricsElementName;	// IMP=0x00000000003add47
- (_Bool)isMissingItemData;	// IMP=0x00000000003add32
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000003adb45
- (long long)componentType;	// IMP=0x00000000003adb3a
- (void)updateWithMissingItems:(id)arg1;	// IMP=0x00000000003ad8c7
- (id)initWithViewElement:(id)arg1;	// IMP=0x00000000003ad7eb
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;	// IMP=0x00000000003ad2e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SKUICarouselViewElement *viewElement; // @dynamic viewElement;

@end

