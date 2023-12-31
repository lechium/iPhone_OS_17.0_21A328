//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdPeer.h"

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer
{
    GEONavigationServer *_delegate;	// 40 = 0x28
    _Bool _hasEntitlement;	// 48 = 0x30
    _Bool _wantsRoutes;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x000000000148d51f
@property(readonly, nonatomic) _Bool wantsRoutes; // @synthesize wantsRoutes=_wantsRoutes;
@property(nonatomic) _Bool hasEntitlement; // @synthesize hasEntitlement=_hasEntitlement;
@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000148d3d9
- (void)setWantsRoutes:(_Bool)arg1;	// IMP=0x000000000148d3c9
- (void)requestUpdates;	// IMP=0x000000000148d30c
- (void)requestNavigationVoiceVolume;	// IMP=0x000000000148d20a
- (void)requestPositionFromDestination;	// IMP=0x000000000148d108
- (void)requestPositionFromManeuver;	// IMP=0x000000000148d006
- (void)requestPositionFromSign;	// IMP=0x000000000148cf04
- (void)requestRideSelections;	// IMP=0x000000000148ce02
- (void)requestStepNameInfo;	// IMP=0x000000000148cd00
- (void)requestStepIndex;	// IMP=0x000000000148cbfe
- (void)requestActiveRouteDetailsData;	// IMP=0x000000000148cafc
- (void)requestGuidanceState;	// IMP=0x000000000148c9fa
- (void)requestTransitSummary;	// IMP=0x000000000148c8f8
- (void)requestRouteSummary;	// IMP=0x000000000148c7f6
- (void)requestETAUpdate;	// IMP=0x000000000148c6ff
- (void)requestRoute;	// IMP=0x000000000148c608

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

