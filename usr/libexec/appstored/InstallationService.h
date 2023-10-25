//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, NSString, RequestThrottle, TaskQueue;
@protocol OS_dispatch_queue;

@interface InstallationService : NSObject
{
    id _bagChangedNotification;	// 8 = 0x8
    AppInstallsDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    RequestThrottle *_requestThrottle;	// 32 = 0x20
    TaskQueue *_taskQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000092492
- (void)installWatchApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000091da8
- (void)installTestFlightApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000091c81
- (void)installSystemApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000091af0
- (void)installEnterpriseApps:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000919cb
- (void)installAppReviewApps:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000917a7
- (void)setInitialContentDownloadsEnabled:(_Bool)arg1;	// IMP=0x00100000000915d8
- (void)areInitialContentDownloadsEnabledWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000913e3
- (id)_init;	// IMP=0x001000000009132b
- (void)dealloc;	// IMP=0x00100000000912b6
- (id)init;	// IMP=0x00100000000912a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
