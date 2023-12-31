//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVRoute, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDAVRoutingDataSource : NSObject
{
    NSMutableDictionary *_authorizationCallbacks;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    unsigned int _discoveryMode;	// 24 = 0x18
    unsigned int _externalScreenType;	// 28 = 0x1c
    MRDAVRoute *_pickedRoute;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x004000000001a4e3
- (void).cxx_destruct;	// IMP=0x002000000001ab0b
@property(readonly, nonatomic) unsigned int externalScreenType; // @synthesize externalScreenType=_externalScreenType;
@property(readonly, nonatomic) MRDAVRoute *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(nonatomic) unsigned int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (CDUnknownBlockType)authorizationRequestCallbackForRouteID:(id)arg1;	// IMP=0x001000000001a974
- (void)removeAuthorizationCallbackForRouteID:(id)arg1;	// IMP=0x001000000001a8c6
- (void)addAuthorizationCallbackForRouteID:(id)arg1 requestCallback:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a733
- (_Bool)unpickAirPlayRoutes;	// IMP=0x001000000001a72b
- (void)userCancelledPickingRoute:(id)arg1;	// IMP=0x001000000001a725
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;	// IMP=0x001000000001a71d
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;	// IMP=0x001000000001a715
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x001000000001a70d
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x001000000001a705
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000001a6fd
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x001000000001a6f5
- (id)pickedRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x000000000001a661
- (id)pickedRouteForCategory:(id)arg1;	// IMP=0x001000000001a659
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x001000000001a651
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x001000000001a649
@property(readonly, nonatomic) NSArray *pickedRoutes;
- (id)init;	// IMP=0x001000000001a533

@end

