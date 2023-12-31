//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SYCompressedFileInputStream;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _SYInputStreamer : NSObject
{
    SYCompressedFileInputStream *_stream;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    CDUnknownBlockType _onComplete;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_source;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000077cdb
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000000077aa5
- (id)streamPropertyForKey:(id)arg1;	// IMP=0x0000000000077a8f
- (void)setStreamProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000077a79
- (void)close;	// IMP=0x0000000000077a63
- (void)whenComplete:(CDUnknownBlockType)arg1;	// IMP=0x00000000000779bc
- (void)_completeAllItemsWithError:(id)arg1;	// IMP=0x00000000000776cd
- (void)_tryToReadData;	// IMP=0x0000000000077196
- (void)readDataOfLength:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000076d79
- (id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2;	// IMP=0x0000000000076886

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

