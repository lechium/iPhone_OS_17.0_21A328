//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NBRemoteObjectClassC, NBiCloudBackupManager, NSString;
@protocol OS_dispatch_queue;

@interface NBBackupiCloud : NSObject
{
    NBRemoteObjectClassC *_idsService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NBiCloudBackupManager *_manager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000004580
@property(retain, nonatomic) NBiCloudBackupManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NBRemoteObjectClassC *idsService; // @synthesize idsService=_idsService;
- (void)createBackupsAndPruneAtDate:(id)arg1 withPayload:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004440
- (void)remoteObjectReceivedRestorePayloadRequest:(id)arg1 requestIdentifier:(id)arg2;	// IMP=0x001000000000443a
- (void)remoteObjectReceivedRestoreRequest:(id)arg1 requestIdentifier:(id)arg2;	// IMP=0x0010000000004434
- (void)remoteObjectReceivedDeleteBackupRequest:(id)arg1 requestIdentifier:(id)arg2;	// IMP=0x001000000000442e
- (void)remoteObjectReceivedCreateBackupRequest:(id)arg1;	// IMP=0x0010000000004428
- (void)remoteObjectReceivedBackupListRequest:(id)arg1 requestIdentifier:(id)arg2;	// IMP=0x0010000000004422
- (void)createManualBackupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004337
- (void)createInitialBackup:(id)arg1;	// IMP=0x0010000000004214
- (void)startSchedulerIfNecessary;	// IMP=0x001000000000420e
- (void)backupPayloadForID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004018
- (void)restoreBackupWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003e22
- (void)deleteBackupWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003c3e
- (void)restoreBackupWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000039ee
- (void)backupList:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003831
- (void)_handleDeviceUnpaired:(id)arg1;	// IMP=0x001000000000382b
- (id)init;	// IMP=0x0010000000003632

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

