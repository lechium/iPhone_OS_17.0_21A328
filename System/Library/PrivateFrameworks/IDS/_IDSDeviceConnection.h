//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSInputStream, NSMutableDictionary, NSNumber, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject
{
    NSString *_nsuuid;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    NSString *_streamName;	// 24 = 0x18
    NSString *_serviceToken;	// 32 = 0x20
    NSString *_connectionUUID;	// 40 = 0x28
    CDUnknownBlockType _openSocketCompletionHandler;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;	// 56 = 0x38
    NSString *_openSocketCompletionHandlerID;	// 64 = 0x40
    NSInputStream *_inputStreamForSocket;	// 72 = 0x48
    NSOutputStream *_outputStreamForSocket;	// 80 = 0x50
    NSNumber *_clientTimeout;	// 88 = 0x58
    NSMutableDictionary *_awdMetrics;	// 96 = 0x60
    unsigned long long _mtu;	// 104 = 0x68
    int _socket;	// 112 = 0x70
    _Bool _isDefaultPairedDevice;	// 116 = 0x74
    _Bool _hasTimedOut;	// 117 = 0x75
}

- (void).cxx_destruct;	// IMP=0x000000000007ef8a
- (id)deviceConnectionKey;	// IMP=0x000000000007ef5d
- (void)_daemonDied:(id)arg1;	// IMP=0x000000000007ee23
- (void)_cleanupCompletionBlock;	// IMP=0x000000000007edd3
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x000000000007e776
- (void)_close;	// IMP=0x000000000007e2e2
- (void)close;	// IMP=0x000000000007e236
- (_Bool)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007de91
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;	// IMP=0x000000000007dcc4
@property(readonly, nonatomic) NSDictionary *metrics;
@property(readonly, nonatomic) unsigned long long mtu;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) int socket;
- (void)_connect;	// IMP=0x000000000007d754
- (void)dealloc;	// IMP=0x000000000007d632
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x000000000007c743

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

