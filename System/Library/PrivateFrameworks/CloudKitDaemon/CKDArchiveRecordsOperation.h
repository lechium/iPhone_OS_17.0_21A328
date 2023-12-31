//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CKArchiveRecordsOperationCallbacks;

@interface CKDArchiveRecordsOperation
{
    CDUnknownBlockType _recordArchivedBlock;	// 8 = 0x8
    NSArray *_recordIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c1bd5
@property(retain, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (id)relevantZoneIDs;	// IMP=0x00000000002c19b5
- (void)main;	// IMP=0x00000000002c1354
- (int)operationType;	// IMP=0x00000000002c1349
- (void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2;	// IMP=0x00000000002c0f26
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002c0ec0
- (id)activityCreate;	// IMP=0x00000000002c0e97
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002c0e08

// Remaining properties
@property(retain, nonatomic) id <CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

