//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, AFInstanceContext, AFMutableDeviceContext, NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol ADLocalContextStoreDelegate, OS_dispatch_queue;

@interface ADLocalContextStore : NSObject
{
    AFMutableDeviceContext *_localContext;	// 8 = 0x8
    NSMutableDictionary *_redactedContextByPrivacyClass;	// 16 = 0x10
    NSMapTable *_contextTransformersByType;	// 24 = 0x18
    NSArray *_builtInProviders;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    AFInstanceContext *_instanceContext;	// 48 = 0x30
    ADDeviceCircleManager *_deviceCircleManager;	// 56 = 0x38
    id <ADLocalContextStoreDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000015b1b4
- (id)_builtInProviders;	// IMP=0x001000000015b1a6
- (void)localPeerInfoUpdatedFrom:(id)arg1 to:(id)arg2;	// IMP=0x001000000015b0ef
- (void)contextCollectorChangedToDevicesWithIdentifiers:(id)arg1 localDeviceIsCollector:(_Bool)arg2;	// IMP=0x001000000015b0a4
- (void)donateSerializedContextMapByPrivacyClass:(id)arg1 withMetadataMap:(id)arg2 forType:(id)arg3 pushToRemote:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000015aeeb
- (void)donateContext:(id)arg1 withMetadata:(id)arg2 pushToRemote:(_Bool)arg3;	// IMP=0x001000000015ad8d
- (void)registerContextTransformer:(id)arg1 forType:(id)arg2;	// IMP=0x001000000015acd6
- (id)_deviceContextToVendForPrivacyClass:(long long)arg1;	// IMP=0x001000000015abdd
- (void)_pushContextToCollector:(id)arg1 forReason:(id)arg2 includingKeys:(id)arg3 excludingMandatoryKeys:(id)arg4 includingKeysInResponse:(id)arg5 excludingMandatoryKeysInResponse:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000015aaf3
- (void)_didUpdateContext;	// IMP=0x001000000015aa40
- (void)_pushContextToCollectorsForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000015a921
- (void)_updateLocalPeerInfo:(id)arg1;	// IMP=0x001000000015a73a
- (void)_initializeBuiltInContextProviders;	// IMP=0x001000000015a53d
- (void)pushContextToContextCollectorIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 expectingResponseIncludingKeys:(id)arg3 excludingMandatoryKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000015a3f0
- (id)_localContextWithPrivacyClass:(long long)arg1;	// IMP=0x001000000015a258
- (id)localContextWithPrivacyClass:(long long)arg1;	// IMP=0x001000000015a19b
- (void)getLocalContextWithPrivacyClass:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000015a0ff
- (id)_initWithInstanceContext:(id)arg1 rapportLink:(id)arg2 queue:(id)arg3 delegate:(id)arg4 deviceCircleManager:(id)arg5;	// IMP=0x0010000000159e6a
- (id)initWithInstanceContext:(id)arg1 rapportLink:(id)arg2 queue:(id)arg3 delegate:(id)arg4;	// IMP=0x0010000000159d93
- (void)setMyriadAdvertisementContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000015c1f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

