//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SSDownload.h"

@class ASDJob;

__attribute__((visibility("hidden")))
@interface SSSoftwareDownload : SSDownload
{
    ASDJob *_job;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001942d7
@property(readonly, nonatomic) ASDJob *job; // @synthesize job=_job;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;	// IMP=0x0000000000194117
- (void)setDownloadPolicy:(id)arg1;	// IMP=0x0000000000193f68
- (void)setDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000193db9
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;	// IMP=0x0000000000193c0a
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;	// IMP=0x0000000000193a5b
- (void)restart;	// IMP=0x00000000001938ac
- (void)resume;	// IMP=0x00000000001936fd
- (_Bool)removeAsset:(id)arg1;	// IMP=0x000000000019354c
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000019339d
- (void)pause;	// IMP=0x00000000001931ee
- (_Bool)isEligibleForRestore:(id *)arg1;	// IMP=0x000000000019303d
- (_Bool)isBackgroundNetworkingUserInitiated;	// IMP=0x0000000000192e8c
- (double)estimatedSecondsRemaining;	// IMP=0x0000000000192cd5
- (long long)downloadSizeLimit;	// IMP=0x0000000000192b24
- (id)downloadPolicy;	// IMP=0x0000000000192973
- (long long)bytesTotal;	// IMP=0x00000000001927c2
- (long long)bytesDownloaded;	// IMP=0x0000000000192611
- (id)backgroundNetworkingJobGroupName;	// IMP=0x0000000000192460
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;	// IMP=0x00000000001922af
- (id)assetsForType:(id)arg1;	// IMP=0x00000000001920fe
- (id)status;	// IMP=0x0000000000191f4d
- (void)setStatus:(id)arg1;	// IMP=0x0000000000191d9e
- (void)setNetworkConstraints:(id)arg1;	// IMP=0x0000000000191bef
- (void)setMetadata:(id)arg1;	// IMP=0x0000000000191a40
- (id)networkConstraints;	// IMP=0x000000000019188f
- (id)metadata;	// IMP=0x00000000001916de
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000019157e
- (void)_becomeManagedOnConnection:(id)arg1;	// IMP=0x0000000000191578
- (double)percentComplete;	// IMP=0x000000000019155b
- (id)failureError;	// IMP=0x000000000019153e
- (id)downloadPhaseIdentifier;	// IMP=0x00000000001914ff
- (_Bool)isCancelable;	// IMP=0x00000000001914cd
- (id)initWithPersistentIdentifier:(long long)arg1;	// IMP=0x000000000019130b
- (id)initWithJob:(id)arg1;	// IMP=0x000000000019128a

@end

