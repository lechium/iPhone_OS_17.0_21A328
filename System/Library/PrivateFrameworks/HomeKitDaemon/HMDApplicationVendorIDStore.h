//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDApplicationVendorIDStore : HMFObject
{
    NSMutableDictionary *_applicationVendorIdMapping;	// 8 = 0x8
    NSMutableDictionary *_applicationMachUUIDMapping;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006f8899
+ (id)sharedStore;	// IMP=0x00100000006f8869
- (void).cxx_destruct;	// IMP=0x00000000006f7ae6
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping; // @synthesize applicationMachUUIDMapping=_applicationMachUUIDMapping;
@property(readonly, nonatomic) NSMutableDictionary *applicationVendorIdMapping; // @synthesize applicationVendorIdMapping=_applicationVendorIdMapping;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006f7a2d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006f7844
- (void)__handleUninstalledApplication:(id)arg1;	// IMP=0x00000000006f77b0
- (id)_machUUIDsForApplication:(id)arg1;	// IMP=0x00000000006f75e5
- (id)machUUIDsForApplication:(id)arg1;	// IMP=0x00000000006f749b
- (void)_save;	// IMP=0x00000000006f7397
- (void)removeVendorIDForApplicationBundleId:(id)arg1;	// IMP=0x00000000006f72df
- (_Bool)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;	// IMP=0x00000000006f6e7c
- (void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;	// IMP=0x00000000006f6e45
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3;	// IMP=0x00000000006f6d3a
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2;	// IMP=0x00000000006f6c5c
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(_Bool)arg3;	// IMP=0x00000000006f6b74
- (void)_extractVendorIDForApplication:(id)arg1;	// IMP=0x00000000006f69aa
- (id)_vendorIDForApplication:(id)arg1;	// IMP=0x00000000006f67b0
- (id)vendorIDForApplication:(id)arg1;	// IMP=0x00000000006f6666
- (void)checkCorrectness;	// IMP=0x00000000006f65f5
- (id)init;	// IMP=0x00000000006f6492

@end

