//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedicationsDaemonPlugin/NSObject-Protocol.h>

@class HDDatabaseTransaction, HDProfile, HDStateSyncEntitySchema;
@protocol HDCloudSyncStateStore;

@protocol HDCloudSyncStateEntity <NSObject>
+ (HDStateSyncEntitySchema *)stateEntitySchema;
+ (void)syncDidFinishWithResult:(long long)arg1 stateStore:(id <HDCloudSyncStateStore>)arg2 profile:(HDProfile *)arg3;
+ (_Bool)updateDataWithStateStorage:(id <HDCloudSyncStateStore>)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id *)arg3;
@end
