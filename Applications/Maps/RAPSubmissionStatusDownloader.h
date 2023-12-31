//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDNotificationCenter, RAPBatchSubmissionStatusTicket, RAPSubmissionStatusSyncHandler;

@interface RAPSubmissionStatusDownloader : NSObject
{
    RAPBatchSubmissionStatusTicket *_submissionStatusTicket;	// 8 = 0x8
    RAPSubmissionStatusSyncHandler *_syncHandler;	// 16 = 0x10
    MDNotificationCenter *_notificationCenter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000bc516a
- (void)_sendStatusChangeNotificationIfNeeded:(id)arg1;	// IMP=0x0010000000bc4e61
- (void)_checkForStatusChangeNotificationsNeededForRapInfos:(id)arg1;	// IMP=0x0010000000bc4d02
- (void)_updateSubmissionStatusWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bc46db
- (void)_fetchAndUpdateRAPStatusWithOffset:(long long)arg1 batchSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000bc42e4
- (void)_updateAllSubmissionStatusWithOffset:(long long)arg1 batchSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000bc4113
- (void)updateSubmissionStatusesWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bc4101
- (void)updateSubmissionStatusesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000bc3e97
- (void)setNotificationCenter:(id)arg1;	// IMP=0x0010000000bc3e43
- (id)init;	// IMP=0x0010000000bc3d44

@end

