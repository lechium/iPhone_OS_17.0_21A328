//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCachedURLResponse, NSError, NSString, NSURLRequest, NWConcrete_nw_connection, NWURLLoaderCache, NWURLSessionTaskConfiguration;
@protocol NWURLLoaderClient, NWURLSessionRequestBodyProvider, OS_dispatch_queue, OS_nw_content_context, OS_sec_trust;

__attribute__((visibility("hidden")))
@interface NWURLLoaderHTTP : NSObject
{
    _Bool _ready;	// 8 = 0x8
    _Bool _pendingCompletion;	// 9 = 0x9
    _Bool _cancelled;	// 10 = 0xa
    _Bool _allowCaching;	// 11 = 0xb
    _Bool _loadingFromCache;	// 12 = 0xc
    _Bool _revalidateCachedResponse;	// 13 = 0xd
    _Bool _dataDelivered;	// 14 = 0xe
    _Bool _isResponseMixed;	// 15 = 0xf
    NSURLRequest *_request;	// 16 = 0x10
    long long _bodyKnownSize;	// 24 = 0x18
    NWURLSessionTaskConfiguration *_configuration;	// 32 = 0x20
    id <NWURLLoaderClient> _client;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <NWURLSessionRequestBodyProvider> _requestBodyProvider;	// 56 = 0x38
    NWConcrete_nw_connection *_connection;	// 64 = 0x40
    NSObject<OS_nw_content_context> *_requestContext;	// 72 = 0x48
    NSObject<OS_nw_content_context> *_nextRequestContext;	// 80 = 0x50
    NSError *_pendingError;	// 88 = 0x58
    NWURLLoaderCache *_cache;	// 96 = 0x60
    NSCachedURLResponse *_cachedResponse;	// 104 = 0x68
    CDUnknownBlockType _responseCompletionHandler;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000771180
@property(readonly, nonatomic) NWConcrete_nw_connection *underlyingConnection;
- (void)responseIsMixed;	// IMP=0x0000000000771150
- (void)writeData:(id)arg1 complete:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000771140
@property(readonly, nonatomic) _Bool allowsWrite;
@property(readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000770cd0
- (void)readResponse:(CDUnknownBlockType)arg1;	// IMP=0x0000000000770ca0
- (void)updateClient:(id)arg1;	// IMP=0x0000000000770c50
- (void)stop;	// IMP=0x0000000000770ab0
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x0000000000770670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

