//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDRequest, RequestBrokerClient;
@protocol ASDRequestDelegate, RequestController;

@interface RequestProxy : NSObject
{
    RequestBrokerClient *_broker;	// 8 = 0x8
    id <ASDRequestDelegate> _delegate;	// 16 = 0x10
    ASDRequest<RequestController> *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000c9faf
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9f96
- (id)remoteObjectProxy;	// IMP=0x00100000000c9f7d
- (void)startWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9e2f
- (void)cancelWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9ce1
- (id)init;	// IMP=0x00100000000c9c11

@end
