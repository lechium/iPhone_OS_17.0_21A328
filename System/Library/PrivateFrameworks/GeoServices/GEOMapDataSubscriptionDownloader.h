//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapDataSubscription, GEOMapDataSubscriptionTileDownloader, GEOPowerAssertion, GEOResourceManifestManager, GEOTileDB, NSMutableArray, NSProgress, NSString;
@protocol GEOMapDataSubscriptionDataDownloader, GEOMapDataSubscriptionDownloaderDelegate, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionDownloader : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    id <GEOMapDataSubscriptionDownloaderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSProgress *_progress;	// 32 = 0x20
    GEOPowerAssertion *_powerAssertion;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
    NSString *_logPrefix;	// 56 = 0x38
    GEOMapDataSubscription *_subscription;	// 64 = 0x40
    GEOTileDB *_diskCache;	// 72 = 0x48
    GEOResourceManifestManager *_manifestManager;	// 80 = 0x50
    GEOMapDataSubscriptionTileDownloader *_tileDownloader;	// 88 = 0x58
    id <GEOMapDataSubscriptionDataDownloader> _currentDownloader;	// 96 = 0x60
    NSMutableArray *_remainingDownloaders;	// 104 = 0x68
    long long _updateType;	// 112 = 0x70
    struct GEOOnce_s _finished;	// 120 = 0x78
    _Bool _paused;	// 128 = 0x80
    _Bool _canceled;	// 129 = 0x81
}

- (void).cxx_destruct;	// IMP=0x000000000072ccbb
@property(readonly, nonatomic) GEOMapDataSubscription *subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak id <GEOMapDataSubscriptionDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)offlineDownloader:(id)arg1 willUseDataVersions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000072cb49
- (void)downloader:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x000000000072c8ca
@property(readonly, nonatomic) unsigned long long bytesDownloaded;
@property(readonly, nonatomic) unsigned long long failedTiles;
@property(readonly, nonatomic) unsigned long long successfulTiles;
@property(readonly, nonatomic) unsigned long long numberOfTilesAttempted;
@property(readonly, nonatomic) unsigned long long numberOfTilesConsidered;
- (void)cancel;	// IMP=0x000000000072c68c
- (void)_finishWithError:(id)arg1;	// IMP=0x000000000072c4f7
- (void)pause;	// IMP=0x000000000072c467
- (void)resume;	// IMP=0x000000000072c2d1
@property(readonly) NSProgress *progress;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 reason:(unsigned char)arg5 requestOptions:(unsigned long long)arg6 manifestManager:(id)arg7 log:(id)arg8 logPrefix:(id)arg9 tileRequesterCreationBlock:(CDUnknownBlockType)arg10 tileDownloader:(id)arg11 offlineDownloader:(id)arg12 updateType:(long long)arg13 dataTypeMask:(unsigned long long)arg14;	// IMP=0x000000000072ba50
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 reason:(unsigned char)arg5 requestOptions:(unsigned long long)arg6 manifestManager:(id)arg7 log:(id)arg8 logPrefix:(id)arg9 tileRequesterCreationBlock:(CDUnknownBlockType)arg10 tileDownloader:(id)arg11 offlineDownloader:(id)arg12 updateType:(long long)arg13;	// IMP=0x000000000072ba01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

