//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACXRemoteAppList, NSString, PSYServiceSyncSession, PSYSyncCoordinator;
@protocol OS_dispatch_queue;

@interface ACXPairedSyncAppStateDelegate : NSObject
{
    PSYSyncCoordinator *_coordinator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    PSYServiceSyncSession *_syncSession;	// 24 = 0x18
    ACXRemoteAppList *_remoteAppList;	// 32 = 0x20
}

+ (id)sharedAppStateSyncDelegate;	// IMP=0x002000000005b51d
- (void).cxx_destruct;	// IMP=0x002000000005bddb
@property(retain, nonatomic) ACXRemoteAppList *remoteAppList; // @synthesize remoteAppList=_remoteAppList;
@property(retain, nonatomic) PSYServiceSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)resyncCompleted;	// IMP=0x001000000005bd3e
- (void)applicationsUpdated:(id)arg1;	// IMP=0x001000000005bd38
- (void)applicationsRemoved:(id)arg1;	// IMP=0x001000000005bd32
- (void)applicationsAdded:(id)arg1;	// IMP=0x001000000005bd2c
- (void)_onQueue_triggerSyncSessionCompleteAndRemoveObserver;	// IMP=0x001000000005bbdc
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x001000000005b657
- (void)supportsMigrationSync;	// IMP=0x001000000005b651
- (id)init;	// IMP=0x001000000005b5aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

