//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DADiscovery, NSXPCConnection, _EXExtensionIdentity;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DADiscoveryExtension : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    _EXExtensionIdentity *_ekExtension;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
    DADiscovery *_parent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000010592
@property(retain, nonatomic) DADiscovery *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) _EXExtensionIdentity *ekExtension; // @synthesize ekExtension=_ekExtension;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)reportEventToExtension:(id)arg1;	// IMP=0x00000000000103e5
- (void)reportEvent:(id)arg1;	// IMP=0x0000000000010359
- (void)_invalidated;	// IMP=0x00000000000102c2
- (void)_invalidate;	// IMP=0x0000000000010233
- (void)invalidate;	// IMP=0x00000000000101d2
- (void)_interrupted;	// IMP=0x0000000000010173
- (void)_activate;	// IMP=0x000000000000fc03
- (void)activate;	// IMP=0x000000000000fba2
- (id)description;	// IMP=0x000000000000fb37

@end

