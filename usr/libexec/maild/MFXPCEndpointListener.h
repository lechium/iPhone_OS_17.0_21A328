//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFXPCEndpointInfo, NSArray, NSLock, NSMutableArray, NSString, NSXPCListener;

@interface MFXPCEndpointListener : NSObject
{
    NSLock *_lock;	// 8 = 0x8
    NSMutableArray *_clientInfos;	// 16 = 0x10
    MFXPCEndpointInfo *_endpoint;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000ce242
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000cd9e8
- (void)removeClientInfo:(id)arg1;	// IMP=0x00100000000cd97b
- (void)addClientInfo:(id)arg1;	// IMP=0x00100000000cd90e
@property(readonly, nonatomic) NSArray *clients;
@property(readonly, copy) NSString *description;
- (id)endpointInfo;	// IMP=0x00100000000cd734
- (void)dealloc;	// IMP=0x00100000000cd6c0
- (id)initWithEndpointInfo:(id)arg1;	// IMP=0x00100000000cd58a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

