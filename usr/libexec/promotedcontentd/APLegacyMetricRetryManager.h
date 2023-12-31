//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APBackoffTimer, APStorageManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface APLegacyMetricRetryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    APStorageManager *_secureFileManager;	// 16 = 0x10
    APBackoffTimer *_backoffLevels;	// 24 = 0x18
    NSMutableDictionary *_failedRequests;	// 32 = 0x20
}

+ (long long)_resultForResponseStatusCode:(long long)arg1 error:(id)arg2;	// IMP=0x0020000000053e7e
+ (long long)resultForResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000053e16
- (void).cxx_destruct;	// IMP=0x0020000000053f6b
@property(retain, nonatomic) NSMutableDictionary *failedRequests; // @synthesize failedRequests=_failedRequests;
@property(retain, nonatomic) APBackoffTimer *backoffLevels; // @synthesize backoffLevels=_backoffLevels;
@property(retain, nonatomic) APStorageManager *secureFileManager; // @synthesize secureFileManager=_secureFileManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)backoffTimerFired;	// IMP=0x0010000000053de0
- (void)_makeRequest:(id)arg1 serverFailureCount:(long long)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x0010000000053b6d
- (void)_sendRequest:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;	// IMP=0x00100000000535ae
- (void)_loadFailedRequestsCache;	// IMP=0x0010000000053381
- (void)_moveAllPendingRequestsToFailed;	// IMP=0x001000000005316a
- (void)_removePendingRequest:(id)arg1;	// IMP=0x001000000005301c
- (void)_markRequestAsFailed:(id)arg1;	// IMP=0x0010000000052ea0
- (void)_markRequestsAsSucceeded:(id)arg1;	// IMP=0x0010000000052d51
- (void)_retryFailedIfAvailable;	// IMP=0x0010000000052c6e
- (id)_findPotentiallyDeliverableRequest;	// IMP=0x0010000000052ae3
- (void)_completeServerRequestId:(id)arg1 serverFailureCount:(long long)arg2 result:(long long)arg3;	// IMP=0x001000000005271d
- (void)_registerMetricRequest:(id)arg1;	// IMP=0x0010000000052545
- (id)_failedPath:(id)arg1;	// IMP=0x001000000005252c
- (id)_pendingPath:(id)arg1;	// IMP=0x0010000000052513
- (void)completeServerRequestId:(id)arg1 serverFailureCount:(long long)arg2 result:(long long)arg3;	// IMP=0x00100000000522f5
- (void)completeServerRequestId:(id)arg1 result:(long long)arg2;	// IMP=0x00100000000522de
- (void)registerMetricRequest:(id)arg1;	// IMP=0x00100000000520af
- (void)start;	// IMP=0x0010000000051f23
- (id)initWithSecureFileManager:(id)arg1;	// IMP=0x0010000000051dc0
- (id)init;	// IMP=0x0010000000051d5f

@end

