//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CKRecordID;
@protocol BCCloudDataPrivacyDelegate;

@protocol BCCloudDataSyncProvider <NSObject>
- (id <BCCloudDataPrivacyDelegate>)privacyDelegate;
- (void)fetchRecordForRecordID:(CKRecordID *)arg1 completion:(void (^)(CKRecord *))arg2;
- (void)startSyncToCKWithCompletion:(void (^)(void))arg1;
- (void)signalSyncToCK;
@end

