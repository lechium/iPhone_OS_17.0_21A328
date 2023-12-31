//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString, UIImage;

@interface PlaceholderWaypointRequest : NSObject
{
    NSString *_name;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000244cde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000244cd3
- (void)recordRAPInformation:(id)arg1;	// IMP=0x0010000000244ccd
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000244cc5
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x0010000000244bdb
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic) _Bool hasCachedResult;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x0010000000244b0f
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000244a88
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCLPlacemark:(id)arg1;	// IMP=0x00100000002444f9
- (id)initWithName:(id)arg1 icon:(id)arg2;	// IMP=0x0010000000244453

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

