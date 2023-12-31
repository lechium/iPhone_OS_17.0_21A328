//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKCoalescer, CKDProcessScopedClientProxy, NSArray, NSHashTable, NSMutableDictionary, NSOperationQueue, NSPointerArray, NSString, NSXPCConnection;

@interface CKDXPCConnection : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CKDProcessScopedClientProxy *_processScopedClientProxy;	// 16 = 0x10
    NSHashTable *_sharedContainers;	// 24 = 0x18
    unsigned long long _keepAlive;	// 32 = 0x20
    CKCoalescer *_activityCoalescer;	// 40 = 0x28
    NSMutableDictionary *_logicalDeviceScopedClientProxiesByDeviceReference;	// 48 = 0x30
    NSPointerArray *_allContainerPointers;	// 56 = 0x38
    NSOperationQueue *_systemAvailableQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000023d434
@property(retain, nonatomic) NSOperationQueue *systemAvailableQueue; // @synthesize systemAvailableQueue=_systemAvailableQueue;
@property(retain, nonatomic) NSPointerArray *allContainerPointers; // @synthesize allContainerPointers=_allContainerPointers;
@property(retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference; // @synthesize logicalDeviceScopedClientProxiesByDeviceReference=_logicalDeviceScopedClientProxiesByDeviceReference;
@property(readonly, nonatomic) CKCoalescer *activityCoalescer; // @synthesize activityCoalescer=_activityCoalescer;
@property(nonatomic) unsigned long long keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain, nonatomic) NSHashTable *sharedContainers; // @synthesize sharedContainers=_sharedContainers;
@property(retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy; // @synthesize processScopedClientProxy=_processScopedClientProxy;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023d229
- (void)getProcessScopedClientProxyCreatorSynchronous:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023cf84
- (void)tearDown;	// IMP=0x000000000023cd62
@property(readonly, nonatomic) NSArray *allContainers;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)arg1;	// IMP=0x000000000023c9c3
- (void)getDaemonTestServerManagerProxyCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023c7e4
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023c6e9
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c597
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023c367
- (void)noteClientProcessScopedMetadata:(id)arg1;	// IMP=0x000000000023c11c
- (_Bool)systemAvailabilityChanged:(unsigned long long)arg1;	// IMP=0x000000000023be3f
- (_Bool)canRunGivenAvailabilityState:(unsigned long long)arg1;	// IMP=0x000000000023bbbd
- (id)containerFromSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000023a796
- (void)allowToClose;	// IMP=0x000000000023a595
- (void)keepOpen;	// IMP=0x000000000023a424
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x000000000023a3d2
- (id)redactedDescription;	// IMP=0x000000000023a3c0
@property(readonly, copy) NSString *description;
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x000000000023a31d
- (void)dealloc;	// IMP=0x000000000023a2d9
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000000239bd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

