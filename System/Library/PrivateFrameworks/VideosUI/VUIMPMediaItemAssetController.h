//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSString, NSTimer, VUIContentRating, VUIMPMediaItemDownloadController, VUIMediaEntityAssetControllerState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetController : NSObject
{
    _Bool _supportsStartingDownload;	// 8 = 0x8
    _Bool _requestingPermissionToDownload;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;	// 16 = 0x10
    VUIMediaEntityAssetControllerState *_state;	// 24 = 0x18
    VUIMPMediaItemDownloadController *_downloadController;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 40 = 0x28
    MPMediaItem *_mediaItem;	// 48 = 0x30
    NSTimer *_waitForDeletionTimer;	// 56 = 0x38
}

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1;	// IMP=0x00100000002e77ff
+ (_Bool)_supportsStartingDownloadWithMediaItem:(id)arg1;	// IMP=0x00100000002e76c1
+ (void)initialize;	// IMP=0x00100000002e4df8
- (void).cxx_destruct;	// IMP=0x00000000002e7906
@property(retain, nonatomic) NSTimer *waitForDeletionTimer; // @synthesize waitForDeletionTimer=_waitForDeletionTimer;
@property(readonly, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic, getter=isRequestingPermissionToDownload) _Bool requestingPermissionToDownload; // @synthesize requestingPermissionToDownload=_requestingPermissionToDownload;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) VUIMPMediaItemDownloadController *downloadController; // @synthesize downloadController=_downloadController;
@property(readonly, nonatomic) _Bool supportsStartingDownload; // @synthesize supportsStartingDownload=_supportsStartingDownload;
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e760c
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e74ec
- (_Bool)_isDownloaded;	// IMP=0x00000000002e747c
- (void)_onProcessingQueue_calculateStateAndNotify:(_Bool)arg1;	// IMP=0x00000000002e72e0
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadState:(id)arg2 supportsPausing:(_Bool)arg3 supportsCancellation:(_Bool)arg4 notify:(_Bool)arg5;	// IMP=0x00000000002e6e18
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(_Bool)arg2;	// IMP=0x00000000002e6df2
- (void)_onProcessingQueue_startMonitoringDownload;	// IMP=0x00000000002e6ddb
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002e6538
- (void)_onProcessingQueue_startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e5f34
- (void)_onProcessingQueue_invalidateAndSetState;	// IMP=0x00000000002e5f02
- (void)_onProcessingQueue_invalidate;	// IMP=0x00000000002e5ead
- (void)_onProcessingQueue_setDownloadController:(id)arg1;	// IMP=0x00000000002e5df7
- (id)_onProcessingQueue_downloadController;	// IMP=0x00000000002e5de9
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;	// IMP=0x00000000002e5c69
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;	// IMP=0x00000000002e5a7c
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x00000000002e59c0
- (void)cancelKeyFetch;	// IMP=0x00000000002e59ba
- (void)cancelAndRemoveDownload;	// IMP=0x00000000002e598a
- (void)resumeDownload;	// IMP=0x00000000002e5931
- (void)pauseDownload;	// IMP=0x00000000002e58d8
- (void)fetchNewKeysForDownloadedVideo;	// IMP=0x00000000002e58d2
- (void)deleteAndRedownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e56d0
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(_Bool)arg3 preferEnhancedDownload:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e53c5
@property(readonly, nonatomic) _Bool contentAllowsCellularDownload;
@property(readonly, nonatomic) _Bool supportsRedownloadingContent;
- (void)invalidate;	// IMP=0x00000000002e5317
@property(readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
- (void)dealloc;	// IMP=0x00000000002e519c
- (id)init;	// IMP=0x00000000002e512d
- (id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2;	// IMP=0x00000000002e4e6a

// Remaining properties
@property(readonly, nonatomic) _Bool allowsManualDownloadRenewal;
@property(readonly, nonatomic) NSString *brandID;
@property(readonly, nonatomic) NSString *brandName;
@property(readonly, nonatomic) VUIContentRating *contentRating;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

