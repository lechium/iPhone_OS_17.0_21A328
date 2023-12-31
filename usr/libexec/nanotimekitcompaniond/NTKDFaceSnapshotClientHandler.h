//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NTKDFaceSnapshotController;
@protocol OS_dispatch_queue;

@interface NTKDFaceSnapshotClientHandler : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NTKDFaceSnapshotController *_snapshotController;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000385b
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003794
- (void)faceSnapshotChangedForKey:(id)arg1;	// IMP=0x0010000000003677
- (void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003499
- (void)snapshotFaceInstanceDescriptor:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000323e
- (void)performAfterCompletingCurrentlyPendingSnapshots:(CDUnknownBlockType)arg1;	// IMP=0x00100000000030d0
- (void)requestSnapshotOfFaceInstanceDescriptor:(id)arg1;	// IMP=0x0010000000002ef0
- (void)updateAllSnapshots;	// IMP=0x0010000000002dc1
- (void)registerForUpdates;	// IMP=0x0010000000002dbb
- (void)_handleInvalidation;	// IMP=0x0010000000002c2f
- (id)initWithConnection:(id)arg1 snapshotController:(id)arg2;	// IMP=0x00100000000029b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

