//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMapTable, geo_isolater;

@interface GEOOfflineStateServer : GEOServer
{
    geo_isolater *_peersIsolater;	// 8 = 0x8
    NSMapTable *_peerHelpers;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x00200000000177b4
- (void).cxx_destruct;	// IMP=0x001000000001ab87
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x001000000001aacd
- (void)_suggestedOfflineStateChanged:(id)arg1;	// IMP=0x001000000001a6d4
- (void)checkConnectivityWithMessage:(id)arg1;	// IMP=0x001000000001a640
- (void)setStateWithRequest:(id)arg1;	// IMP=0x001000000001a4dd
- (void)subscribeWithRequest:(id)arg1;	// IMP=0x001000000001a1bc
- (void)dealloc;	// IMP=0x001000000001a147
- (id)initWithDaemon:(id)arg1;	// IMP=0x001000000001a051
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x00100000000177c1

@end

