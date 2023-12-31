//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTransitRouteUpdate, NSUUID;

@interface RouteUpdatingTaskResult : NSObject
{
    NSUUID *_routeID;	// 8 = 0x8
    GEOTransitRouteUpdate *_transitUpdate;	// 16 = 0x10
}

+ (id)resultWithRouteID:(id)arg1 transitUpdate:(id)arg2;	// IMP=0x004000000030d8b8
- (void).cxx_destruct;	// IMP=0x002000000030d976
@property(retain, nonatomic) GEOTransitRouteUpdate *transitUpdate; // @synthesize transitUpdate=_transitUpdate;
@property(retain, nonatomic) NSUUID *routeID; // @synthesize routeID=_routeID;

@end

