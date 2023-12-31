//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchAttributionManifest, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerRemoteProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_attributionQueue;	// 8 = 0x8
    GEOSearchAttributionManifest *_attributionManifest;	// 16 = 0x10
    struct os_unfair_lock_s _attributionManifestLock;	// 24 = 0x18
    int _attributionManifestUpdatedToken;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000001238234
- (void)_loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000012370b6
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000001236fde
- (id)_attributionManifest;	// IMP=0x0000000001236a32
- (id)init;	// IMP=0x00000000012368b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

