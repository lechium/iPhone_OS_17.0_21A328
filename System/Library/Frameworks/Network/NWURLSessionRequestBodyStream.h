//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInputStream, NSString, NWURLSessionReadRequest;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NWURLSessionRequestBodyStream : NSObject
{
    _Bool _streamIsSetup;	// 8 = 0x8
    NSInputStream *_stream;	// 16 = 0x10
    unsigned long long _offset;	// 24 = 0x18
    long long _bytesSent;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NWURLSessionReadRequest *_readRequest;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000216bb0
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000000216ad0
- (void)close;	// IMP=0x0000000000216a50
- (void)readMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000216980
@property(readonly, nonatomic) long long countOfBytesSent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

