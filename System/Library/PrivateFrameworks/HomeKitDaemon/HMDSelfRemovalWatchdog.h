//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCoreDataCloudMirroringExportStatusMonitor, HMFTimer, NSDate, NSManagedObjectID, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSelfRemovalWatchdog : NSObject
{
    NSUUID *_currentAccessoryUUID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSDate *_selfRemovalBeginDate;	// 24 = 0x18
    HMFTimer *_watchdogTimer;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
    NSManagedObjectID *_currentAccessoryModelObjectID;	// 48 = 0x30
    HMDCoreDataCloudMirroringExportStatusMonitor *_monitor;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000004ee608
- (void).cxx_destruct;	// IMP=0x00000000004edcd8
@property(retain) HMDCoreDataCloudMirroringExportStatusMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain) NSManagedObjectID *currentAccessoryModelObjectID; // @synthesize currentAccessoryModelObjectID=_currentAccessoryModelObjectID;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) HMFTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(readonly) NSDate *selfRemovalBeginDate; // @synthesize selfRemovalBeginDate=_selfRemovalBeginDate;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *currentAccessoryUUID; // @synthesize currentAccessoryUUID=_currentAccessoryUUID;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004edac0
- (void)monitorDidObserveExportComplete:(id)arg1;	// IMP=0x00000000004eda1c
- (id)_retrieveExpectedObjectIDsTokenMap;	// IMP=0x00000000004ed2a1
- (void)_stopWithError:(id)arg1;	// IMP=0x00000000004ed1fc
- (void)startWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004ed138
- (void)configure;	// IMP=0x00000000004eceed
- (id)initWithCurrentAccessoryUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000004ece2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

