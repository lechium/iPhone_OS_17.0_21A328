//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairLock, APXPCConnection, NSMutableSet, NSString, Protocol;

@interface APPCControllerReceiver : NSObject
{
    APUnfairLock *_lock;	// 8 = 0x8
    APXPCConnection *_connection;	// 16 = 0x10
    NSMutableSet *_coordinators;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ffb65
@property(retain, nonatomic) NSMutableSet *coordinators; // @synthesize coordinators=_coordinators;
@property(retain, nonatomic) APXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
- (void)extendCollectionClassesForRemoteInterface:(id)arg1;	// IMP=0x00100000000ffa96
- (void)extendCollectionClassesForExportedInterface:(id)arg1;	// IMP=0x00100000000ff9cf
- (void)connectionInvalidated;	// IMP=0x00100000000ff8ef
- (void)connectionInterrupted;	// IMP=0x00100000000ff815
- (id)remoteObjectInterface;	// IMP=0x00100000000ff804
@property(readonly) Protocol *exportedInterface;
@property(readonly) id exportedObject;
- (id)_coordinatorForRequester:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00100000000ff1ff
- (void)sendAndRankContent:(id)arg1 forContext:(id)arg2 placement:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ff1ed
- (void)preWarm:(id)arg1;	// IMP=0x00100000000ff1d4
- (void)proxyURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fef03
- (void)_finishedWithAllRequests;	// IMP=0x00100000000fec59
- (void)finishedWithRequestsForRequester:(id)arg1;	// IMP=0x00100000000fe9e2
- (void)_finishedWithRequestsForCoordinator:(id)arg1;	// IMP=0x00100000000fe850
- (void)requestPromotedContentOfTypes:(id)arg1 forRequester:(id)arg2 forContext:(id)arg3 withClientInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000fe3c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

