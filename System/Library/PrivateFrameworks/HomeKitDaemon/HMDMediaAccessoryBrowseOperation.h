//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMDMediaEndpoint, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaAccessoryBrowseOperation : HMFOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    void *_session;	// 16 = 0x10
    unsigned int _endpointFeatures;	// 24 = 0x18
    HMDMediaEndpoint *_endpoint;	// 32 = 0x20
    NSArray *_outputDevices;	// 40 = 0x28
    NSString *_accessoryIdentifier;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000042afb0
+ (double)defaultTimeout;	// IMP=0x001000000042af83
- (void).cxx_destruct;	// IMP=0x000000000042aade
@property(readonly, copy) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void)cancel;	// IMP=0x000000000042aa82
- (void)main;	// IMP=0x000000000042a840
@property(readonly) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property unsigned int endpointFeatures; // @synthesize endpointFeatures=_endpointFeatures;
- (void)dealloc;	// IMP=0x000000000042a6f7
- (id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x000000000042a55e
- (id)initWithAccessoryIdentifier:(id)arg1;	// IMP=0x000000000042a549

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
