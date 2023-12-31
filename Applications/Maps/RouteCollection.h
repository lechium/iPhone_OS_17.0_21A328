//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, Route;

@interface RouteCollection : NSObject
{
    NSArray *_alternateRoutes;	// 8 = 0x8
    unsigned long long _currentRouteIndex;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x001000000077a5ce
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(nonatomic) unsigned long long currentRouteIndex; // @synthesize currentRouteIndex=_currentRouteIndex;
- (unsigned long long)hash;	// IMP=0x001000000077a4f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000077a3e9
@property(readonly, nonatomic) NSArray *uniqueRouteIDs;
- (unsigned long long)indexOfComposedRoute:(id)arg1;	// IMP=0x001000000077a297
- (unsigned long long)indexOfRoute:(id)arg1;	// IMP=0x001000000077a229
- (unsigned long long)indexForUniqueRouteID:(id)arg1;	// IMP=0x001000000077a0a6
@property(readonly, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property(readonly, nonatomic) Route *currentRoute;
@property(readonly, nonatomic) unsigned long long count;
- (id)routeCollectionByReplacingAlternateComposedRoutes:(id)arg1 withTraffics:(id)arg2;	// IMP=0x0010000000779c9e
- (id)routeCollectionByReplacingAlternateRoutes:(id)arg1;	// IMP=0x0010000000779bc4
- (id)routeCollectionByChangingCurrentRouteIndex:(unsigned long long)arg1;	// IMP=0x0010000000779b55
@property(readonly) NSString *shortDescription;
- (id)description;	// IMP=0x0010000000779934
- (id)initWithComposedRoutes:(id)arg1 currentRouteIndex:(unsigned long long)arg2;	// IMP=0x00100000007796ff
- (id)initWithRoutes:(id)arg1 currentRouteIndex:(unsigned long long)arg2;	// IMP=0x00100000007792dd
@property(readonly) NSArray *composedRoutes;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x001000000077a81d
- (void)enumerateRoutesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000077a6cb
- (id);	// IMP=0x001000000077a6b9
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x001000000077a65a
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x001000000077a648
- (id)objectForKey:(id)arg1;	// IMP=0x001000000077a5f6

@end

