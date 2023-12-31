//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString;
@protocol GEOCompletionItem;

@interface SearchStringWaypointRequest : NSObject
{
    NSString *_searchString;	// 8 = 0x8
    id <GEOCompletionItem> _completionItem;	// 16 = 0x10
    MKMapItem *_mapItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000003e8c63
- (void)recordRAPInformation:(id)arg1;	// IMP=0x00100000003e8bc9
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000003e8af1
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x00100000003e88ec
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x00100000003e8802
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic) _Bool hasCachedResult;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e86ed
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003e8208
- (id)init;	// IMP=0x00100000003e816c
- (id)initWithSearchString:(id)arg1;	// IMP=0x00100000003e8158
- (id)initWithSearchString:(id)arg1 completionItem:(id)arg2;	// IMP=0x00100000003e8016

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

