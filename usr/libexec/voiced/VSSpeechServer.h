//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface VSSpeechServer : NSObject
{
    unsigned long long _connectionCount;	// 8 = 0x8
    struct __CFRunLoopSource *_runloopSourceRef;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000103cb
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) struct __CFRunLoopSource *runloopSourceRef; // @synthesize runloopSourceRef=_runloopSourceRef;
@property(nonatomic) unsigned long long connectionCount; // @synthesize connectionCount=_connectionCount;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000010073
- (void)scheduleBackgroundTasks;	// IMP=0x001000000000ff18
- (void)resume;	// IMP=0x001000000000ff02
- (void)dealloc;	// IMP=0x001000000000fea8
- (id)init;	// IMP=0x001000000000fe12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

