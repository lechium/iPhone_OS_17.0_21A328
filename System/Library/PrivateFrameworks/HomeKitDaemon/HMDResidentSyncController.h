//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, HMDManagedObjectCodingModel, HMDManagedObjectContext, HMFVersion, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentSyncController : NSObject
{
    HMDHome *_home;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    HMDManagedObjectCodingModel *_codingModel;	// 24 = 0x18
    HMDManagedObjectContext *_context;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    HMFVersion *_schemaVersion;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000830263
- (void).cxx_destruct;	// IMP=0x0000000000830211
@property(readonly) HMFVersion *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
- (id)logIdentifier;	// IMP=0x00000000008301e7
- (id)dispatchContextForMessage:(id)arg1;	// IMP=0x00000000008301d9
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)changeToken:(id)arg1 isAheadOf:(id)arg2;	// IMP=0x000000000083014c
- (id)decodeToken:(id)arg1 error:(id *)arg2;	// IMP=0x000000000082ffc6
- (id)encodeToken:(id)arg1 error:(id *)arg2;	// IMP=0x000000000082fe60
- (id)initWithHome:(id)arg1 codingModel:(id)arg2 notificationCenter:(id)arg3 persistence:(id)arg4;	// IMP=0x000000000082fba1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

