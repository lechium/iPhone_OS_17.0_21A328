//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14amsengagementd36MetricsIdentifierCloudDataController : _TtCs12_SwiftObject
{
    MISSING_TYPE *accountChangeEvaluationSubject;	// 16 = 0x10
    MISSING_TYPE *accountChangeEvaluationSubscription;	// 24 = 0x18
    MISSING_TYPE *bag;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_cloudContainer;	// 40 = 0x28
    MISSING_TYPE *cloudDatabasePromise;	// 48 = 0x30
    MISSING_TYPE *cloudDataSource;	// 56 = 0x38
    MISSING_TYPE *fetchErrorHasLastOccurred;	// 64 = 0x40
    MISSING_TYPE *fetchSubject;	// 72 = 0x48
    MISSING_TYPE *fetchSubscription;	// 80 = 0x50
    MISSING_TYPE *identifierSource;	// 88 = 0x58
    MISSING_TYPE *lock;	// 96 = 0x60
    MISSING_TYPE *pendingRecordKeys;	// 104 = 0x68
    MISSING_TYPE *queue;	// 112 = 0x70
    MISSING_TYPE *syncSubject;	// 120 = 0x78
    MISSING_TYPE *syncSubscription;	// 128 = 0x80
    MISSING_TYPE *kAMSMetricsIdentifierDateLastSyncedKey;	// 136 = 0x88
    MISSING_TYPE *kAMSMetricsIdentifierUserRecordNameKey;	// 152 = 0x98
    MISSING_TYPE *kAMSMetricsIdentifierZoneCreatedKey;	// 168 = 0xa8
    MISSING_TYPE *kAMSMetricsIdentifierZoneSubscriptionCreatedKey;	// 184 = 0xb8
}

- (void)dataSourceDidChange:(id)arg1;	// IMP=0x00200000000f1ec4
- (void)dataSourceAccountDidChange:(id)arg1;	// IMP=0x00100000000f19c3
- (id)recordIdentifierForKey:(id)arg1;	// IMP=0x00100000000f285f
- (id)keyForRecordIdentifier:(id)arg1;	// IMP=0x00100000000f277c
- (id)createRecordForKey:(id)arg1 recordType:(id)arg2;	// IMP=0x00100000000f26b9
- (id)identifierRecordType;	// IMP=0x00100000000f1fa7
- (id)identifierStoreRecordType;	// IMP=0x00100000000f1f6d

@end

