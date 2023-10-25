//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MatterSupport/NSObject-Protocol.h>

@class HMFProcessInfo, NSString, NSXPCInterface;

@protocol MTSXPCConnection <NSObject>
@property(copy) CDUnknownBlockType invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler;
@property(readonly) id remoteObjectProxy;
@property(retain) NSXPCInterface *remoteObjectInterface;
@property(retain) id exportedObject;
@property(retain) NSXPCInterface *exportedInterface;
@property(readonly) int processIdentifier;
@property(readonly) HMFProcessInfo *processInfo;
- (void)invalidate;
- (void)resume;
- (void)activate;
- (id)valueForEntitlement:(NSString *)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
@end
