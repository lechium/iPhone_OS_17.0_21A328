//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, SDServiceManager;
@protocol SDConnectionManagerDelegate;

@interface SDConnectionManager : NSObject
{
    id <SDConnectionManagerDelegate> _delegate;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSXPCConnection *_xpcConnection;	// 32 = 0x20
    NSMutableArray *_companionStreams;	// 40 = 0x28
    SDServiceManager *_serviceManager;	// 48 = 0x30
    NSMutableDictionary *_deviceStreamMap;	// 56 = 0x38
    NSMutableArray *_unlockSessions;	// 64 = 0x40
    NSMutableArray *_streamIdentifiers;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x00200000000ff1a8
- (void).cxx_destruct;	// IMP=0x00200000001003cb
@property(retain) NSMutableArray *streamIdentifiers; // @synthesize streamIdentifiers=_streamIdentifiers;
@property(retain) NSMutableArray *unlockSessions; // @synthesize unlockSessions=_unlockSessions;
@property(retain) NSMutableDictionary *deviceStreamMap; // @synthesize deviceStreamMap=_deviceStreamMap;
@property(retain) SDServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain) NSMutableArray *companionStreams; // @synthesize companionStreams=_companionStreams;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property __weak id <SDConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unlockSessionDidFinish:(id)arg1;	// IMP=0x00100000001001e5
- (void)companionStreamClosedStreams:(id)arg1;	// IMP=0x00100000001001cf
- (void)appleAccountSignedOut;	// IMP=0x0010000000100157
- (void)appleAccountSignedIn;	// IMP=0x00100000001000df
- (void)createUnlockManagerWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000100059
- (void)createStreamsForMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ffdab
- (void)createCompanionServiceManagerWithIdentifier:(id)arg1 clientProxy:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ffa64
- (void)cleanUpConnections;	// IMP=0x00100000000ff759
- (void)start;	// IMP=0x00100000000ff34a
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000ff1fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

