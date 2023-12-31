//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFScheduler, NSString;
@protocol HMDAssistantSettingsConnectionDataSource;

__attribute__((visibility("hidden")))
@interface HMDAssistantSettingsConnection : HMFObject
{
    id <HMDAssistantSettingsConnectionDataSource> _dataSource;	// 8 = 0x8
    HMFScheduler *_scheduler;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000002f23db
- (void).cxx_destruct;	// IMP=0x00000000002f2211
@property(readonly) HMFScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property __weak id <HMDAssistantSettingsConnectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)deleteSiriHistoryOperationWithConnection:(id)arg1;	// IMP=0x00000000002f2181
- (id)connectionForEndpointUUID:(id)arg1;	// IMP=0x00000000002f20b8
- (void)deleteSiriHistoryWithEndpointUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f1c81
- (id)initWithScheduler:(id)arg1;	// IMP=0x00000000002f1c13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

