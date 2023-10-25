//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject
{
    NSMutableDictionary *_requestIDToDownload;	// 8 = 0x8
    struct OpaqueFigCustomURLHandler *_handler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
}

- (void)_didReceiveData:(id)arg1 data:(struct __CFData *)arg2;	// IMP=0x00000000000e78da
- (void)_didReceiveResponse:(id)arg1 response:(struct _CFURLResponse *)arg2;	// IMP=0x00000000000e75fc
- (_Bool)_willSendRequest:(id)arg1 request:(struct _CFURLRequest *)arg2 redirectionResponse:(struct _CFURLResponse *)arg3;	// IMP=0x00000000000e738a
- (void)_didFinish:(id)arg1 error:(struct __CFError *)arg2;	// IMP=0x00000000000e72e1
- (void)_cancelAndFinishRequest:(id)arg1 error:(struct __CFError *)arg2;	// IMP=0x00000000000e7254
- (void)_cancelRequestID:(unsigned long long)arg1;	// IMP=0x00000000000e71b1
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2;	// IMP=0x00000000000e6cfc
- (void)_cancelPendingRequests;	// IMP=0x00000000000e6ba1
- (void)dealloc;	// IMP=0x00000000000e6b3d
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;	// IMP=0x00000000000e69cb

@end
