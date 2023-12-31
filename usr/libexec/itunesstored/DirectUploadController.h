//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DirectUploadSessionController, ISOperationQueue, MediaSocialAuthenticationCoordinator, MediaSocialErrorCoordinator, MediaSocialStatusPollingCoordinator, NSMutableArray, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface DirectUploadController : NSObject
{
    MediaSocialAuthenticationCoordinator *_authenticationCoordinator;	// 8 = 0x8
    id _backgroundTaskObserver;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    SSSQLiteDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *;	// 40 = 0x28
    MediaSocialErrorCoordinator *_errorCoordinator;	// 48 = 0x30
    MediaSocialStatusPollingCoordinator *_pollingCoordinator;	// 56 = 0x38
    ISOperationQueue *_postOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_progressDictionary;	// 72 = 0x48
    DirectUploadSessionController *_sessionController;	// 80 = 0x50
}

+ (void)_setupDatabase:(id)arg1;	// IMP=0x002000000005dbfd
+ (void)_sendAccessDeniedErrorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005d9c7
+ (id)_orderedUploadQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000005d8dd
+ (id)_orderedPostQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000005d7f3
+ (_Bool)_isConnectionEntitled:(id)arg1;	// IMP=0x001000000005d7a1
+ (id)_copyPersistentIdentifiersArrayWithXPCArray:(id)arg1;	// IMP=0x001000000005d680
+ (void)resumeUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000059d6d
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000059c1a
+ (void)pauseUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005981b
+ (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000059759
+ (void)getUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000059456
+ (void)cancelUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000058f9a
+ (id)sharedController;	// IMP=0x001000000005811e
- (void).cxx_destruct;	// IMP=0x0020000000063641
- (id)_sessionController;	// IMP=0x00100000000635de
- (void)_sendRemoveUploadsMessageWithUploadIdentifiers:(id)arg1;	// IMP=0x00100000000633dc
- (void)_sendChangeUploadsMessageWithUploads:(id)arg1;	// IMP=0x00100000000631da
- (void)_retryFailedEntities;	// IMP=0x0010000000062b33
- (_Bool)_resumeUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 resetFailureCount:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000006244d
- (void)_registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000061f43
- (id)_postOperationQueue;	// IMP=0x0010000000061eda
- (id)_pollingCoordinator;	// IMP=0x0010000000061e77
- (_Bool)_pauseUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000618a8
- (void)_operationDidFinishForPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x0010000000060aa2
- (id)_newSSVDirectUploadWithProgress:(id)arg1 state:(long long)arg2;	// IMP=0x00100000000609e7
- (id)_newAddUploadsMessageWithDatabase:(id)arg1 hydratedUploadIDs:(id)arg2;	// IMP=0x00100000000606f4
- (id)_errorCoordinator;	// IMP=0x0010000000060691
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000604e1
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000603bf
- (void)_finishPostWithPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x001000000005fcd7
- (void)_enumerateSSVDirectUploadsWithQuery:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000005fb55
- (void)_enqueueNextReadyMediaSocialPostOperationWithDatabase:(id)arg1;	// IMP=0x001000000005f462
- (id)_databaseIfExists;	// IMP=0x001000000005f3ab
- (id)_database;	// IMP=0x001000000005f268
- (void)_cleanupPendingUploads:(id)arg1 database:(id)arg2;	// IMP=0x001000000005e62d
- (void)_cleanupSessionController;	// IMP=0x001000000005e5cd
- (_Bool)_cancelUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005dd24
- (id)_authenticationCoordinator;	// IMP=0x001000000005dcc1
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000005d313
- (void)pollingCoordinator:(id)arg1 didPollWithResponses:(id)arg2;	// IMP=0x001000000005ce3a
- (void)mediaSocialErrorCoordinator:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x001000000005baa7
- (void)authenticationCoordinator:(id)arg1 didFinishAuthenticationWithResponse:(id)arg2;	// IMP=0x001000000005af93
- (void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;	// IMP=0x001000000005acd0
- (void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;	// IMP=0x001000000005aa58
- (void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;	// IMP=0x001000000005a364
- (void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;	// IMP=0x001000000005a187
- (void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;	// IMP=0x001000000005a175
- (void)start;	// IMP=0x0010000000058d1e
- (void)addMediaSocialPostWithDescription:(id)arg1 client:(id)arg2;	// IMP=0x00100000000581a3
- (void)dealloc;	// IMP=0x0010000000058024
- (id)init;	// IMP=0x0010000000057fcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

