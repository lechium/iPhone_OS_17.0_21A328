//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ICCloudContextSyncMetrics : NSObject
{
    _Bool _success;	// 8 = 0x8
    NSString *_syncReason;	// 16 = 0x10
    long long _fetchedRecordCount;	// 24 = 0x18
    long long _deletedRecordsCount;	// 32 = 0x20
    long long _modifiedRecordCount;	// 40 = 0x28
    long long _processedRecordCount;	// 48 = 0x30
    long long _bytesDownloaded;	// 56 = 0x38
    long long _bytesUploaded;	// 64 = 0x40
    long long _operationCount;	// 72 = 0x48
    long long _saveCount;	// 80 = 0x50
    long long _averageRecordsPerSecond;	// 88 = 0x58
    double _cloudKitDuration;	// 96 = 0x60
    NSDate *_startDate;	// 104 = 0x68
    NSDate *_endDate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000004acea
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property _Bool success; // @synthesize success=_success;
@property double cloudKitDuration; // @synthesize cloudKitDuration=_cloudKitDuration;
@property long long averageRecordsPerSecond; // @synthesize averageRecordsPerSecond=_averageRecordsPerSecond;
@property long long saveCount; // @synthesize saveCount=_saveCount;
@property long long operationCount; // @synthesize operationCount=_operationCount;
@property long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property long long processedRecordCount; // @synthesize processedRecordCount=_processedRecordCount;
@property long long modifiedRecordCount; // @synthesize modifiedRecordCount=_modifiedRecordCount;
@property long long deletedRecordsCount; // @synthesize deletedRecordsCount=_deletedRecordsCount;
@property long long fetchedRecordCount; // @synthesize fetchedRecordCount=_fetchedRecordCount;
@property(retain) NSString *syncReason; // @synthesize syncReason=_syncReason;
- (void)finishWithSuccess:(_Bool)arg1;	// IMP=0x001000000004ab3e
- (id)dictionaryRepresentation;	// IMP=0x001000000004a448
- (id)initWithSyncReason:(id)arg1;	// IMP=0x001000000004a3b3

@end
