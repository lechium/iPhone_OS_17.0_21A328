//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCountryConfiguration, GEOMapServiceTraits, GEOResumeRouteHandle, MNNavigationServiceDirectionsRequestTicket, NSArray, NSSet, NSString, TraceRouteLoadingTask, TraceRouteRequestBuilderFactory;

@interface TraceRouteLoadingTaskFactory : NSObject
{
    _Bool _isResumingMultipointRoute;	// 8 = 0x8
    long long _traceTransportType;	// 16 = 0x10
    unsigned long long _initiator;	// 24 = 0x18
    GEOResumeRouteHandle *_resumeRouteHandle;	// 32 = 0x20
    GEOMapServiceTraits *_traits;	// 40 = 0x28
    GEOCountryConfiguration *_countryConfiguration;	// 48 = 0x30
    NSString *_tracePath;	// 56 = 0x38
    NSArray *_waypointRequests;	// 64 = 0x40
    TraceRouteRequestBuilderFactory *_routeRequestBuilderFactory;	// 72 = 0x48
    TraceRouteLoadingTask *_traceLoadingTask;	// 80 = 0x50
    MNNavigationServiceDirectionsRequestTicket *_ticket;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000697e93
@property(retain, nonatomic) MNNavigationServiceDirectionsRequestTicket *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) TraceRouteLoadingTask *traceLoadingTask; // @synthesize traceLoadingTask=_traceLoadingTask;
@property(retain, nonatomic) TraceRouteRequestBuilderFactory *routeRequestBuilderFactory; // @synthesize routeRequestBuilderFactory=_routeRequestBuilderFactory;
@property(retain, nonatomic) NSArray *waypointRequests; // @synthesize waypointRequests=_waypointRequests;
@property(readonly, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(retain, nonatomic) GEOResumeRouteHandle *resumeRouteHandle; // @synthesize resumeRouteHandle=_resumeRouteHandle;
@property(nonatomic) _Bool isResumingMultipointRoute; // @synthesize isResumingMultipointRoute=_isResumingMultipointRoute;
@property(nonatomic) unsigned long long initiator; // @synthesize initiator=_initiator;
@property(readonly, nonatomic) long long traceTransportType; // @synthesize traceTransportType=_traceTransportType;
- (id)taskForRoutes:(id)arg1;	// IMP=0x0010000000697d74
- (id)taskForTransportType:(long long)arg1 waypointSet:(id)arg2;	// IMP=0x0010000000697cc8
@property(retain, nonatomic) GEOCountryConfiguration *countryConfiguration; // @synthesize countryConfiguration=_countryConfiguration;
@property(readonly, copy, nonatomic) NSSet *supportedTransportTypes;
- (id)initWithTracePath:(id)arg1 outError:(out id *)arg2;	// IMP=0x0010000000697766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

