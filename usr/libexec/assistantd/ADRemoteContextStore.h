//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, AFPeerMap;
@protocol OS_dispatch_queue;

@interface ADRemoteContextStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    AFPeerMap *_deviceContextMap;	// 24 = 0x18
    _Bool _contextCollectionAllowed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000139e4b
- (void)_dumpStateForReason:(id)arg1;	// IMP=0x0010000000139dbb
- (void)getSerializedDeviceContextSnapshotIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000139cda
- (void)setDeviceContext:(id)arg1 includedKeys:(id)arg2 excludedKeys:(id)arg3 forDeviceWithPeerInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000139b79
- (void)setDeviceContext:(id)arg1 withIncludedKeys:(id)arg2 excludedKeys:(id)arg3 forDeviceWithIDSDeviceUniqueIdentifier:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000139a95
- (void)_fetchContextFromCollectorAndForceFetchingFromDevicesWithPeerInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013998c
- (void)_fetchContextFromDeviceWithPeerInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013991b
- (void)fetchContextSnapshotFromAllDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001398b0
- (void)fetchContextSnapshotFromDevicesWithPeerInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013980b
- (void)getContextSnapshotIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013969d
- (void)_enumerateDeviceContextsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000013960d
- (void)_setContextCollectionAllowed:(_Bool)arg1;	// IMP=0x00100000001395b7
- (void)stopCollectingContext;	// IMP=0x001000000013956c
- (void)startCollectingContext;	// IMP=0x0010000000139521
- (id)_initWithRapportLink:(id)arg1 queue:(id)arg2 deviceCircleManager:(id)arg3;	// IMP=0x001000000013940f
- (id)initWithRapportLink:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000139378

@end

