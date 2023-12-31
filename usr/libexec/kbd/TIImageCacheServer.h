//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener, TIImageCacheClient;
@protocol OS_dispatch_queue;

@interface TIImageCacheServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    TIImageCacheClient *_imageCache;	// 16 = 0x10
    NSMutableSet *_invalidBundles;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000004066
- (void).cxx_destruct;	// IMP=0x0020000000004b0d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)cacheItem:(id)arg1 key:(id)arg2 group:(id)arg3;	// IMP=0x00100000000049fd
- (void)_logInvalidConnection;	// IMP=0x0010000000004945
- (_Bool)_isValidItem:(id)arg1;	// IMP=0x00100000000048a1
- (_Bool)_isValidKey:(id)arg1 group:(id)arg2;	// IMP=0x0010000000004545
- (void)_createImageCacheIfNecessary;	// IMP=0x00100000000044f9
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000042d1
- (id)_bundleIdForConnection:(id)arg1;	// IMP=0x001000000000425b
- (void)dealloc;	// IMP=0x00100000000041dd
- (id)init;	// IMP=0x00100000000040eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

