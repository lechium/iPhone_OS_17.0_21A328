//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMDXPCClientConnection, HMFMessage, HMFTimer, NSString;
@protocol HMDCameraStreamControlManagerProtocol;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamManagerSession : HMFObject
{
    HMDCameraStreamSessionID *_sessionID;	// 8 = 0x8
    NSString *_destinationID;	// 16 = 0x10
    HMDXPCClientConnection *_streamClientConnection;	// 24 = 0x18
    id <HMDCameraStreamControlManagerProtocol> _streamControlManager;	// 32 = 0x20
    HMFTimer *_streamSetupTimer;	// 40 = 0x28
    HMFMessage *_currentMessage;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000081ce2
- (void).cxx_destruct;	// IMP=0x0000000000081c6d
@property(retain) HMFMessage *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(readonly) HMFTimer *streamSetupTimer; // @synthesize streamSetupTimer=_streamSetupTimer;
@property(readonly) id <HMDCameraStreamControlManagerProtocol> streamControlManager; // @synthesize streamControlManager=_streamControlManager;
@property(retain) HMDXPCClientConnection *streamClientConnection; // @synthesize streamClientConnection=_streamClientConnection;
@property(readonly, copy) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)logIdentifier;	// IMP=0x0000000000081b77
- (_Bool)canStartWithError:(id *)arg1;	// IMP=0x00000000000819a8
- (id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamClientConnection:(id)arg3 streamControlManager:(id)arg4 streamSetupTimer:(id)arg5;	// IMP=0x0000000000081825
- (id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamClientConnection:(id)arg3 streamControlManager:(id)arg4 setupWaitPeriod:(double)arg5;	// IMP=0x00000000000816f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
