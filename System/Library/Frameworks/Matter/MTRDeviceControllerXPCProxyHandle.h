//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol MTRDeviceControllerServerProtocol;

@interface MTRDeviceControllerXPCProxyHandle : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000062cc51
@property(readonly, nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)dealloc;	// IMP=0x000000000062cb8f
@property(readonly, nonatomic, getter=proxy) id <MTRDeviceControllerServerProtocol> proxy;
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000000062cac0

@end

