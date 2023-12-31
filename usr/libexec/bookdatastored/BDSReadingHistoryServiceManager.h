//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface BDSReadingHistoryServiceManager : NSObject
{
    MISSING_TYPE *readingGoalsService;	// 8 = 0x8
    MISSING_TYPE *readingHistoryCloudDataManager;	// 16 = 0x10
    MISSING_TYPE *readingHistoryCoherenceContext;	// 24 = 0x18
    MISSING_TYPE *readingHistoryServiceContext;	// 32 = 0x20
    MISSING_TYPE *transactionProvider;	// 40 = 0x28
    MISSING_TYPE *viewStateChangeHandler;	// 48 = 0x30
    MISSING_TYPE *_readingHistoryService;	// 56 = 0x38
    MISSING_TYPE *_readingHistoryServiceEnableCloudSync;	// 64 = 0x40
    MISSING_TYPE *_readingHistoryServiceAccessQueue;	// 72 = 0x48
    MISSING_TYPE *outstandingTransactionCount;	// 80 = 0x50
    MISSING_TYPE *outstandingTransactionCountAccessQueue;	// 88 = 0x58
    MISSING_TYPE *serviceDirty;	// 96 = 0x60
    MISSING_TYPE *teardownServiceTimer;	// 104 = 0x68
    MISSING_TYPE *teardownServiceTimout;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0040000000093b00
- (id)init;	// IMP=0x00100000000956f0
- (void)setEnableCloudSync:(_Bool)arg1;	// IMP=0x0010000000095660
- (id)serviceStatusInfo;	// IMP=0x0010000000095390
- (void)readingHistoryModelSnapshotInfoWithCurrentTime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000094ed0
- (void)readingHistoryStateInfoWithRangeStart:(id)arg1 rangeEnd:(id)arg2 currentTime:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000094b50
- (void)incrementWithDate:(id)arg1 by:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000094890
- (void)handleSyncFileChangeWithSyncVersionInfo:(id)arg1 updateInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000946b0
- (void)clearTodayWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000943b0
- (void)clearDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000940e0
- (void)clearDefaultsCachedDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000093e80
- (void)clearDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000093d00
- (void)dealloc;	// IMP=0x0010000000093ab0
- (id)initWithReadingGoalsService:(id)arg1 transactionProvider:(id)arg2 viewStateChangeHandler:(id)arg3;	// IMP=0x0010000000093a10

@end

