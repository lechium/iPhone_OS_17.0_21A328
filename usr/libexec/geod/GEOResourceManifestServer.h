//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class GEOXPCActivity, NSMapTable, NSMutableSet, NSString, geo_isolater;
@protocol GEOResourceManifestUpdateAssertionRecord;

@interface GEOResourceManifestServer : GEOServer
{
    _Bool _isUpdatingResourceManifest;	// 8 = 0x8
    _Bool _isLoadingResources;	// 9 = 0x9
    NSMapTable *_peerToConfiguration;	// 16 = 0x10
    NSMutableSet *_alreadyRegisteredConfigurations;	// 24 = 0x18
    GEOXPCActivity *_activity;	// 32 = 0x20
    geo_isolater *_constrainedNetworkUpdateAssertionIsolation;	// 40 = 0x28
    id <GEOResourceManifestUpdateAssertionRecord> _constrainedNetworkUpdateAssertion;	// 48 = 0x30
}

+ (unsigned long long)launchMode;	// IMP=0x0000000000015ac9
+ (id)identifier;	// IMP=0x0010000000015abc
- (void).cxx_destruct;	// IMP=0x0010000000043412
- (void)serverProxy:(id)arg1 didLoadActiveTileGroup:(id)arg2;	// IMP=0x001000000004340c
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;	// IMP=0x00100000000430f0
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000425d1
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;	// IMP=0x00100000000422f6
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;	// IMP=0x0010000000042018
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;	// IMP=0x0010000000041d3d
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;	// IMP=0x0010000000041a5f
- (void)_forEachPeerMatchingConfiguration:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x00100000000417f5
- (void)getResourceManifestWithMessage:(id)arg1;	// IMP=0x00100000000415e6
- (void)getMaximumZoomLevelWithMessage:(id)arg1;	// IMP=0x0010000000041289
- (void)deactivateScenarioWithMessage:(id)arg1;	// IMP=0x001000000004115c
- (void)activateScenarioWithMessage:(id)arg1;	// IMP=0x001000000004102f
- (void)deactivateScaleWithMessage:(id)arg1;	// IMP=0x0010000000040f02
- (void)activateScaleWithMessage:(id)arg1;	// IMP=0x0010000000040dd5
- (void)setRequestTokenWithMessage:(id)arg1;	// IMP=0x0010000000040c3a
- (void)resetActiveTileGroupWithMessage:(id)arg1;	// IMP=0x0010000000040baa
- (void)forceUpdateWithMessage:(id)arg1;	// IMP=0x00100000000409ee
- (void)updateIfNecessaryWithMessage:(id)arg1;	// IMP=0x0010000000040891
- (void)setActiveTileGroupIdentifierWithMessage:(id)arg1;	// IMP=0x00100000000404f4
- (void)setConfigurationWithMessage:(id)arg1;	// IMP=0x001000000004023a
- (void)_fireOpportunisticResourceLoads;	// IMP=0x001000000003ff30
- (id)_configurationForPeer:(id)arg1;	// IMP=0x001000000003fead
- (id)_manifestManagerForPeer:(id)arg1;	// IMP=0x001000000003fe4b
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000003fdd5
- (void)peerDidConnect:(id)arg1;	// IMP=0x001000000003fa24
- (void)_configureConstrainedNetworkUpdateAssertion;	// IMP=0x001000000003f88d
- (void)dealloc;	// IMP=0x001000000003f6bf
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000003eb6b
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000015ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

