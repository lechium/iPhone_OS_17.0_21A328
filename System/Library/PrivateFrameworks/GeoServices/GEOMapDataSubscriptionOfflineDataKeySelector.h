//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapDataSubscription, GEOOfflineDataKeysServiceRequester, GEOPBOfflineDataBatchesResponse, NSDictionary, NSError, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionOfflineDataKeySelector : NSObject
{
    GEOMapDataSubscription *_subscription;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    NSString *_logPrefix;	// 24 = 0x18
    GEOOfflineDataKeysServiceRequester *_dataKeyRequester;	// 32 = 0x20
    unsigned long long _requestOptions;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    struct GEOOnce_s _startedPreparing;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_preparationGroup;	// 64 = 0x40
    GEOPBOfflineDataBatchesResponse *_keysToLoad;	// 72 = 0x48
    NSError *_keysLoadError;	// 80 = 0x50
    unsigned long long _layerIndex;	// 88 = 0x58
    unsigned long long _layerOffset;	// 96 = 0x60
    NSDictionary *_layerVersions;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000a36458
@property(readonly, nonatomic) NSDictionary *layerVersions; // @synthesize layerVersions=_layerVersions;
- (void)determineNextRequestsWithMaximumCount:(unsigned long long)arg1 callbackQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a35a5e
- (void)determineTotalCountWithCallbackQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a3561c
- (id)initWithSubscription:(id)arg1 requestOptions:(unsigned long long)arg2 log:(id)arg3 logPrefix:(id)arg4;	// IMP=0x0000000000a34b89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

