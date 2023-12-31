//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, NSDate, SCWZoneSchema;
@protocol SCWZoneStore;

@protocol SCWDatabaseStore
@property(nonatomic, getter=isCloudBackupEnabled) _Bool cloudBackupEnabled;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate;
- (id <SCWZoneStore>)zoneStoreForSchema:(SCWZoneSchema *)arg1;
@end

