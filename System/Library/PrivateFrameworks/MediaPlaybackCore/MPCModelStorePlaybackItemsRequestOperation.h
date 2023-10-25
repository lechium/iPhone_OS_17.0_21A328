//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelStorePlaybackItemsRequest, MPCModelStorePlaybackItemsResponse, MPCPlaybackAccount, NSMutableArray, NSObject, NSOperationQueue, NSProgress;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation
{
    NSProgress *_activeProgress;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    MPCModelStorePlaybackItemsResponse *_previousModelResponse;	// 32 = 0x20
    _Bool _hasReceivedFinalResponse;	// 40 = 0x28
    _Bool _hasCalledResponseHandler;	// 41 = 0x29
    _Bool _requiresFollowupRequest;	// 42 = 0x2a
    _Bool _useUniversalAccumulator;	// 43 = 0x2b
    struct {
        _Bool useGlideMAPI;
        _Bool useStorePlatform;
    } _requestOptions;	// 44 = 0x2c
    MPCPlaybackAccount *_account;	// 48 = 0x30
    NSMutableArray *_errors;	// 56 = 0x38
    MPCModelStorePlaybackItemsRequest *_request;	// 64 = 0x40
    CDUnknownBlockType _responseHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000027ef5b
@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // @synthesize request=_request;
- (void)_handleItemMetadataBatchRequestCompletedWithAccumulator:(id)arg1 previousResponse:(id)arg2 error:(id)arg3 isFinalResponse:(_Bool)arg4;	// IMP=0x000000000027e84a
- (id)_localStoreAdamIDToEquivalencySourceStoreAdamIDMap:(id)arg1;	// IMP=0x000000000027e7a7
- (void)_runPersonalizationWithSectionCollection:(id)arg1 localEquivalencyMapping:(id)arg2 expirationDate:(id)arg3 error:(id)arg4 isFinalResponse:(_Bool)arg5 isInvalidForPersonalization:(_Bool)arg6 performanceMetrics:(id)arg7;	// IMP=0x000000000027dfde
- (void)_runStorePlatformRequestToLoadMetadataWithAccumulator:(id)arg1 previousResponse:(id)arg2;	// IMP=0x000000000027dcf1
- (void)_importMediaAPICollectionItemMetadataResponse:(id)arg1 withError:(id)arg2 usingAccumulator:(id)arg3 trustID:(id)arg4 previousResponse:(id)arg5;	// IMP=0x000000000027db03
- (void)_runMediaAPIRequestToLoadMetadataWithAccumulator:(id)arg1 previousResponse:(id)arg2;	// IMP=0x000000000027ce90
- (void)execute;	// IMP=0x000000000027cc0b
- (void)cancel;	// IMP=0x000000000027cb81
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000027ca22

@end
