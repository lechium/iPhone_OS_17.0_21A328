//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAXpcConnection, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MAXpcManager : NSObject
{
    MAXpcConnection *_maConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_stateQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_progressQueue;	// 32 = 0x20
    NSString *_serviceName;	// 40 = 0x28
    NSMutableDictionary *_progressHandlers;	// 48 = 0x30
    unsigned long long _connectionRetryCount;	// 56 = 0x38
    NSMutableArray *_postConnectionRetryCallbacks;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002f537
- (id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x000000000002f30b
- (void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(CDUnknownBlockType)arg3 withPurpose:(id)arg4;	// IMP=0x000000000002f06a
- (void)notifyClientsOfProgress:(id)arg1;	// IMP=0x000000000002ebd6
- (void)setClientConnectionHandler;	// IMP=0x000000000002e81e
- (void)sendAsync:(id)arg1 clientHandler:(CDUnknownBlockType)arg2 taskDescriptor:(id)arg3 withRetry:(_Bool)arg4 retryInitialReconnectionCount:(unsigned long long)arg5;	// IMP=0x000000000002de8f
- (void)sendAsync:(id)arg1 clientHandler:(CDUnknownBlockType)arg2 taskDescriptor:(id)arg3 withRetry:(_Bool)arg4;	// IMP=0x000000000002de6c
- (void)sendAsync:(id)arg1 clientHandler:(CDUnknownBlockType)arg2 taskDescriptor:(id)arg3;	// IMP=0x000000000002de54
- (id)sendSync:(id)arg1 gettingResponseCode:(long long *)arg2 codeForXpcError:(long long)arg3 loggingName:(id)arg4;	// IMP=0x000000000002da9c
- (void)setClientName:(id)arg1;	// IMP=0x000000000002da09
- (void)ensureConnection;	// IMP=0x000000000002d8f4
- (void)clearConnection:(id)arg1;	// IMP=0x000000000002d75d

@end

