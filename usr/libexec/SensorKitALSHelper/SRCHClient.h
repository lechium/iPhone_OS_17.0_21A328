//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SRCHClient : NSObject
{
    _Bool _connectionDidInvalidate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

+ (id)remoteInterface;	// IMP=0x002000000000168a
+ (id)_connectionToService;	// IMP=0x001000000000165a
+ (void)initialize;	// IMP=0x001000000000161f
- (void)downloadDatabaseAssetIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x0020000000001e97
- (void)fetchVersion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001d44
- (void)fetchCustomCategoriesForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001d2a
- (void)_fetchCustomCategoriesWithRetryAttempt:(unsigned long long)arg1 bundleIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001a71
- (void)dealloc;	// IMP=0x0010000000001a27
- (id)initWithQueue:(id)arg1 XPCConnection:(id)arg2;	// IMP=0x0010000000001991
- (void)_setupConnection;	// IMP=0x00100000000016aa

@end

